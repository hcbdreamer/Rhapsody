/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_3
//!	Generated Date	: ÖÜËÄ, 28, 12ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\class_3.cpp
*********************************************************************/

//## auto_generated
#include "class_3.h"
//## package Default

//## class class_3
//#[ ignore
class_3::In1_SP_C::In1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

class_3::In1_SP_C::~In1_SP_C() {
    cleanUpRelations();
}

void class_3::In1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,this);
    }
    
}

void class_3::In1_SP_C::connectClass_3(class_3* part) {
    setItsDoubleFlowInterface(part);
    
}

doubleFlowInterface* class_3::In1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

void class_3::In1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void class_3::In1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

class_3::Out1_SP_C::Out1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

class_3::Out1_SP_C::~Out1_SP_C() {
    cleanUpRelations();
}

void class_3::Out1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* class_3::Out1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

doubleFlowInterface* class_3::Out1_SP_C::getOutBound() {
    return this;
}

void class_3::Out1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void class_3::Out1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

class_3::class_3() : m_nSampleTime(0) {
    initRelations();
    m_nSampleTime = 100;
    NewGain_initialize(1);
}

class_3::~class_3() {
    NewGain_terminate();
}

void class_3::SetValue(double data, void * pCaller) {
    if (pCaller == (void *)get_In1_SP()) {
        setIn1(data);
    }
}

void class_3::doStep() {
    NewGain_U.In1 = In1;
    NewGain_step(0);
    if (Out1 != NewGain_Y.Out1) {
        setOut1(NewGain_Y.Out1);
    }
}

void class_3::setIn1(double p_In1) {
    if (In1 != p_In1) {
        In1 = p_In1;
        FLOW_DATA_RECEIVE("In1", In1, x2String);
    }
    
}

void class_3::setOut1(double p_Out1) {
    if (Out1 != p_Out1)  {
        Out1 = p_Out1;
        FLOW_DATA_SEND(Out1, Out1_SP, SetValue, x2String);
    }
}
//#]

class_3::In1_SP_C* class_3::getIn1_SP() const {
    return (class_3::In1_SP_C*) &In1_SP;
}

class_3::In1_SP_C* class_3::get_In1_SP() const {
    return (class_3::In1_SP_C*) &In1_SP;
}

class_3::Out1_SP_C* class_3::getOut1_SP() const {
    return (class_3::Out1_SP_C*) &Out1_SP;
}

class_3::Out1_SP_C* class_3::get_Out1_SP() const {
    return (class_3::Out1_SP_C*) &Out1_SP;
}

double class_3::getIn1() const {
    return In1;
}

double class_3::getOut1() const {
    return Out1;
}

int class_3::getM_nSampleTime() const {
    return m_nSampleTime;
}

void class_3::setM_nSampleTime(int p_m_nSampleTime) {
    m_nSampleTime = p_m_nSampleTime;
}

void class_3::initRelations() {
    if (get_In1_SP() != NULL) {
        get_In1_SP()->connectClass_3(this);
    }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_3.cpp
*********************************************************************/

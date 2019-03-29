/********************************************************************
	Rhapsody	: 8.2 
	Login		: ftx
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_0
//!	Generated Date	: ÷‹“ª, 26, 3‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\class_0.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "class_0.h"
//## auto_generated
#include "C:\Program Files\MATLAB\R2016b\NewGain5_ert_rtw\NewGain5.h"
//## package Default

//## class class_0
//#[ ignore
class_0::In1_SP_C::In1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

class_0::In1_SP_C::~In1_SP_C() {
    cleanUpRelations();
}

void class_0::In1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,this);
    }
    
}

void class_0::In1_SP_C::connectClass_0(class_0* part) {
    setItsDoubleFlowInterface(part);
    
}

doubleFlowInterface* class_0::In1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

void class_0::In1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void class_0::In1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

class_0::Out1_SP_C::Out1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

class_0::Out1_SP_C::~Out1_SP_C() {
    cleanUpRelations();
}

void class_0::Out1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* class_0::Out1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

doubleFlowInterface* class_0::Out1_SP_C::getOutBound() {
    return this;
}

void class_0::Out1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void class_0::Out1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

class_0::class_0(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    m_nSampleTime = 100;
    NewGain5_initialize();
}

class_0::~class_0() {
    NewGain5_terminate();
}

void class_0::SetValue(double data, void * pCaller) {
    if (pCaller == (void *)get_In1_SP()) {
        setIn1(data);
    }
}

void class_0::doStep() {
    NewGain5_U.In1 = In1;
    
    NewGain5_step();
    
    if (Out1 != NewGain5_Y.Out1) {
        setOut1(NewGain5_Y.Out1);
    }
}

void class_0::setIn1(double p_In1) {
    if (In1 != p_In1) {
        In1 = p_In1;
        FLOW_DATA_RECEIVE("In1", In1, x2String);
    }
    
}

void class_0::setOut1(double p_Out1) {
    if (Out1 != p_Out1)  {
        Out1 = p_Out1;
        FLOW_DATA_SEND(Out1, Out1_SP, SetValue, x2String);
    }
}
//#]

class_0::In1_SP_C* class_0::getIn1_SP() const {
    return (class_0::In1_SP_C*) &In1_SP;
}

class_0::In1_SP_C* class_0::get_In1_SP() const {
    return (class_0::In1_SP_C*) &In1_SP;
}

class_0::Out1_SP_C* class_0::getOut1_SP() const {
    return (class_0::Out1_SP_C*) &Out1_SP;
}

class_0::Out1_SP_C* class_0::get_Out1_SP() const {
    return (class_0::Out1_SP_C*) &Out1_SP;
}

double class_0::getIn1() const {
    return In1;
}

double class_0::getOut1() const {
    return Out1;
}

bool class_0::startBehavior() {
    bool done = false;
    done = OMSimulinkBlock::startBehavior();
    return done;
}

void class_0::initRelations() {
    if (get_In1_SP() != NULL) {
        get_In1_SP()->connectClass_0(this);
    }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_0.cpp
*********************************************************************/

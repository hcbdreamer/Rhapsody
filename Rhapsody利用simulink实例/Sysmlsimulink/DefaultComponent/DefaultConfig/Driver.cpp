/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Driver
//!	Generated Date	: ÖÜÈÕ, 3, 6ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/

//## auto_generated
#include "Driver.h"
//## package Default

//## class Driver
//#[ ignore
Driver::Out1_SP_C::Out1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

Driver::Out1_SP_C::~Out1_SP_C() {
    cleanUpRelations();
}

void Driver::Out1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* Driver::Out1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

doubleFlowInterface* Driver::Out1_SP_C::getOutBound() {
    return this;
}

void Driver::Out1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void Driver::Out1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

Driver::Driver() {
    m_nSampleTime = 100;
    sineGenerator_initialize(1);
}

Driver::~Driver() {
    sineGenerator_terminate();
}

void Driver::doStep() {
    
    sineGenerator_step(0);
    if (Out1 != sineGenerator_Y.Out1) {
        setOut1(sineGenerator_Y.Out1);
    }
}

void Driver::setOut1(double p_Out1) {
    if (Out1 != p_Out1)  {
        Out1 = p_Out1;
        FLOW_DATA_SEND(Out1, Out1_SP, SetValue, x2String);
    }
}
//#]

Driver::Out1_SP_C* Driver::getOut1_SP() const {
    return (Driver::Out1_SP_C*) &Out1_SP;
}

Driver::Out1_SP_C* Driver::get_Out1_SP() const {
    return (Driver::Out1_SP_C*) &Out1_SP;
}

double Driver::getOut1() const {
    return Out1;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/

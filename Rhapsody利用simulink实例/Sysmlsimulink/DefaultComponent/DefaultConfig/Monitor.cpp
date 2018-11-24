/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Monitor
//!	Generated Date	: ÖÜÈÕ, 3, 6ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Monitor.cpp
*********************************************************************/

//## auto_generated
#include "Monitor.h"
//## package Default

//## class Monitor
//#[ ignore
Monitor::In1_SP_C::In1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

Monitor::In1_SP_C::~In1_SP_C() {
    cleanUpRelations();
}

void Monitor::In1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,this);
    }
    
}

void Monitor::In1_SP_C::connectMonitor(Monitor* part) {
    setItsDoubleFlowInterface(part);
    
}

doubleFlowInterface* Monitor::In1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

void Monitor::In1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void Monitor::In1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

Monitor::Monitor() {
    initRelations();
    m_nSampleTime = 100;
    Scope_initialize(1);
}

Monitor::~Monitor() {
    Scope_terminate();
}

void Monitor::SetValue(double data, void * pCaller) {
    if (pCaller == (void *)get_In1_SP()) {
        setIn1(data);
    }
}

void Monitor::doStep() {
    Scope_U.In1 = In1;
    Scope_step(0);
    
}

void Monitor::setIn1(double p_In1) {
    if (In1 != p_In1) {
        In1 = p_In1;
        FLOW_DATA_RECEIVE("In1", In1, x2String);
    }
    
}
//#]

Monitor::In1_SP_C* Monitor::getIn1_SP() const {
    return (Monitor::In1_SP_C*) &In1_SP;
}

Monitor::In1_SP_C* Monitor::get_In1_SP() const {
    return (Monitor::In1_SP_C*) &In1_SP;
}

double Monitor::getIn1() const {
    return In1;
}

void Monitor::initRelations() {
    if (get_In1_SP() != NULL) {
        get_In1_SP()->connectMonitor(this);
    }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Monitor.cpp
*********************************************************************/

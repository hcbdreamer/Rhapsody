/********************************************************************
	Rhapsody	: 8.2 
	Login		: ftx
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Source_copy
//!	Generated Date	: ÖÜÒ», 26, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Source_copy.cpp
*********************************************************************/

//## auto_generated
#include "Source_copy.h"
//## package Default

//## class Source_copy
//#[ ignore
Source_copy::p1_SP_C::p1_SP_C() : _p_(0) {
    itsIntFlowInterface = NULL;
}

Source_copy::p1_SP_C::~p1_SP_C() {
    cleanUpRelations();
}

void Source_copy::p1_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* Source_copy::p1_SP_C::getItsIntFlowInterface() {
    return this;
}

intFlowInterface* Source_copy::p1_SP_C::getOutBound() {
    return this;
}

void Source_copy::p1_SP_C::setItsIntFlowInterface(intFlowInterface* p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Source_copy::p1_SP_C::cleanUpRelations() {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

Source_copy::Source_copy() {
}

Source_copy::~Source_copy() {
}

//#[ ignore
void Source_copy::setP1(int p_p1) {
    if (p1 != p_p1)  {
        p1 = p_p1;
        FLOW_DATA_SEND(p1, p1_SP, SetValue, x2String);
    }
}
//#]

Source_copy::p1_SP_C* Source_copy::getP1_SP() const {
    return (Source_copy::p1_SP_C*) &p1_SP;
}

Source_copy::p1_SP_C* Source_copy::get_p1_SP() const {
    return (Source_copy::p1_SP_C*) &p1_SP;
}

int Source_copy::getP1() const {
    return p1;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Source_copy.cpp
*********************************************************************/

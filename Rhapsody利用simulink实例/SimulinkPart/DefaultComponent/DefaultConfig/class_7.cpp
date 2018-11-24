/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_7
//!	Generated Date	: ÖÜ¶þ, 26, 12ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\class_7.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "class_7.h"
//#[ ignore
#define Default_class_7_class_7_SERIALIZE OM_NO_OP

#define Default_class_7_doStep_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class class_7
//#[ ignore
class_7::In1_SP_C::In1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

class_7::In1_SP_C::~In1_SP_C() {
    cleanUpRelations();
}

void class_7::In1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,this);
    }
    
}

void class_7::In1_SP_C::connectClass_7(class_7* part) {
    setItsDoubleFlowInterface(part);
    
}

doubleFlowInterface* class_7::In1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

void class_7::In1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void class_7::In1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

class_7::Out1_SP_C::Out1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

class_7::Out1_SP_C::~Out1_SP_C() {
    cleanUpRelations();
}

void class_7::Out1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* class_7::Out1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

doubleFlowInterface* class_7::Out1_SP_C::getOutBound() {
    return this;
}

void class_7::Out1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void class_7::Out1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

class_7::class_7() {
    NOTIFY_CONSTRUCTOR(class_7, class_7(), 0, Default_class_7_class_7_SERIALIZE);
    initRelations();
    m_nSampleTime = 100;
    NewGain_initialize(1);
}

class_7::~class_7() {
    NOTIFY_DESTRUCTOR(~class_7, true);
    NewGain_terminate();
}

void class_7::SetValue(double data, void * pCaller) {
    if (pCaller == (void *)get_In1_SP()) {
        setIn1(data);
    }
}

void class_7::doStep() {
    NOTIFY_OPERATION(doStep, doStep(), 0, Default_class_7_doStep_SERIALIZE);
    NewGain_U.In1 = In1;
    NewGain_step(0);
    if (Out1 != NewGain_Y.Out1) {
        setOut1(NewGain_Y.Out1);
    }
}

void class_7::setIn1(double p_In1) {
    if (In1 != p_In1) {
        In1 = p_In1;
        FLOW_DATA_RECEIVE("In1", In1, x2String);
    }
    
}

void class_7::setOut1(double p_Out1) {
    if (Out1 != p_Out1)  {
        Out1 = p_Out1;
        FLOW_DATA_SEND(Out1, Out1_SP, SetValue, x2String);
    }
}
//#]

class_7::In1_SP_C* class_7::getIn1_SP() const {
    return (class_7::In1_SP_C*) &In1_SP;
}

class_7::In1_SP_C* class_7::get_In1_SP() const {
    return (class_7::In1_SP_C*) &In1_SP;
}

class_7::Out1_SP_C* class_7::getOut1_SP() const {
    return (class_7::Out1_SP_C*) &Out1_SP;
}

class_7::Out1_SP_C* class_7::get_Out1_SP() const {
    return (class_7::Out1_SP_C*) &Out1_SP;
}

double class_7::getIn1() const {
    return In1;
}

double class_7::getOut1() const {
    return Out1;
}

void class_7::initRelations() {
    if (get_In1_SP() != NULL) {
        get_In1_SP()->connectClass_7(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedclass_7::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("In1", x2String(myReal->In1));
    aomsAttributes->addAttribute("Out1", x2String(myReal->Out1));
}

void OMAnimatedclass_7::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(class_7, Default, Default, false, OMAnimatedclass_7)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_7.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_5
//!	Generated Date	: 周二, 26, 12月 2017  
	File Path	: DefaultComponent\DefaultConfig\class_5.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "class_5.h"
//## auto_generated
#include "C:\研究生课题任务\Simulink\NewGain_ert_rtw\NewGain.h"
//#[ ignore
#define Default_class_5_class_5_SERIALIZE OM_NO_OP

#define Default_class_5_doStep_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class class_5
//#[ ignore
class_5::In1_SP_C::In1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

class_5::In1_SP_C::~In1_SP_C() {
    cleanUpRelations();
}

void class_5::In1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,this);
    }
    
}

void class_5::In1_SP_C::connectClass_5(class_5* part) {
    setItsDoubleFlowInterface(part);
    
}

doubleFlowInterface* class_5::In1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

void class_5::In1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void class_5::In1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

class_5::Out1_SP_C::Out1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

class_5::Out1_SP_C::~Out1_SP_C() {
    cleanUpRelations();
}

void class_5::Out1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* class_5::Out1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

doubleFlowInterface* class_5::Out1_SP_C::getOutBound() {
    return this;
}

void class_5::Out1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void class_5::Out1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}

class_5::class_5(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(class_5, class_5(), 0, Default_class_5_class_5_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    m_nSampleTime = 100;
    NewGain_initialize();
}

class_5::~class_5() {
    NOTIFY_DESTRUCTOR(~class_5, true);
    NewGain_terminate();
}

void class_5::SetValue(double data, void * pCaller) {
    if (pCaller == (void *)get_In1_SP()) {
        setIn1(data);
    }
}

void class_5::doStep() {
    NOTIFY_OPERATION(doStep, doStep(), 0, Default_class_5_doStep_SERIALIZE);
    NewGain_U.In1 = In1;
    
    NewGain_step();
    
    if (Out1 != NewGain_Y.Out1) {
        setOut1(NewGain_Y.Out1);
    }
}

void class_5::setIn1(double p_In1) {
    if (In1 != p_In1) {
        In1 = p_In1;
        FLOW_DATA_RECEIVE("In1", In1, x2String);
    }
    
}

void class_5::setOut1(double p_Out1) {
    if (Out1 != p_Out1)  {
        Out1 = p_Out1;
        FLOW_DATA_SEND(Out1, Out1_SP, SetValue, x2String);
    }
}
//#]

class_5::In1_SP_C* class_5::getIn1_SP() const {
    return (class_5::In1_SP_C*) &In1_SP;
}

class_5::In1_SP_C* class_5::get_In1_SP() const {
    return (class_5::In1_SP_C*) &In1_SP;
}

class_5::Out1_SP_C* class_5::getOut1_SP() const {
    return (class_5::Out1_SP_C*) &Out1_SP;
}

class_5::Out1_SP_C* class_5::get_Out1_SP() const {
    return (class_5::Out1_SP_C*) &Out1_SP;
}

double class_5::getIn1() const {
    return In1;
}

double class_5::getOut1() const {
    return Out1;
}

bool class_5::startBehavior() {
    bool done = false;
    done = OMSimulinkBlock::startBehavior();
    return done;
}

void class_5::initRelations() {
    if (get_In1_SP() != NULL) {
        get_In1_SP()->connectClass_5(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedclass_5::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("In1", x2String(myReal->In1));
    aomsAttributes->addAttribute("Out1", x2String(myReal->Out1));
}

void OMAnimatedclass_5::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(class_5, Default, Default, false, OMAnimatedclass_5)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_5.cpp
*********************************************************************/

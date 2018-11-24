/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_9
//!	Generated Date	: 周四, 22, 3月 2018  
	File Path	: DefaultComponent\DefaultConfig\class_9.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "class_9.h"
//## auto_generated
#include "C:\研究生课题任务\Simulink\NewGain_ert_rtw\NewGain.h"
//#[ ignore
#define Default_class_9_class_9_SERIALIZE OM_NO_OP

#define Default_class_9_doStep_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class class_9
//#[ ignore
class_9::In1_SP_C::In1_SP_C() : _p_(0) {
    itsIntFlowInterface = NULL;
}

class_9::In1_SP_C::~In1_SP_C() {
    cleanUpRelations();
}

void class_9::In1_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void class_9::In1_SP_C::connectClass_9(class_9* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* class_9::In1_SP_C::getItsIntFlowInterface() {
    return this;
}

void class_9::In1_SP_C::setItsIntFlowInterface(intFlowInterface* p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void class_9::In1_SP_C::cleanUpRelations() {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

class_9::Out1_SP_C::Out1_SP_C() : _p_(0) {
    itsIntFlowInterface = NULL;
}

class_9::Out1_SP_C::~Out1_SP_C() {
    cleanUpRelations();
}

void class_9::Out1_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* class_9::Out1_SP_C::getItsIntFlowInterface() {
    return this;
}

intFlowInterface* class_9::Out1_SP_C::getOutBound() {
    return this;
}

void class_9::Out1_SP_C::setItsIntFlowInterface(intFlowInterface* p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void class_9::Out1_SP_C::cleanUpRelations() {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

class_9::class_9(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(class_9, class_9(), 0, Default_class_9_class_9_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    m_nSampleTime = 100;
    NewGain_initialize();
}

class_9::~class_9() {
    NOTIFY_DESTRUCTOR(~class_9, true);
    NewGain_terminate();
}

void class_9::SetValue(int data, void * pCaller) {
    if (pCaller == (void *)get_In1_SP()) {
        setIn1(data);
    }
}

void class_9::doStep() {
    NOTIFY_OPERATION(doStep, doStep(), 0, Default_class_9_doStep_SERIALIZE);
    NewGain_U.In1 = In1;
    
    NewGain_step();
    
    if (Out1 != NewGain_Y.Out1) {
        setOut1(NewGain_Y.Out1);
    }
}

void class_9::setIn1(int p_In1) {
    if (In1 != p_In1) {
        In1 = p_In1;
        FLOW_DATA_RECEIVE("In1", In1, x2String);
    }
    
}

void class_9::setOut1(int p_Out1) {
    if (Out1 != p_Out1)  {
        Out1 = p_Out1;
        FLOW_DATA_SEND(Out1, Out1_SP, SetValue, x2String);
    }
}
//#]

class_9::In1_SP_C* class_9::getIn1_SP() const {
    return (class_9::In1_SP_C*) &In1_SP;
}

class_9::In1_SP_C* class_9::get_In1_SP() const {
    return (class_9::In1_SP_C*) &In1_SP;
}

class_9::Out1_SP_C* class_9::getOut1_SP() const {
    return (class_9::Out1_SP_C*) &Out1_SP;
}

class_9::Out1_SP_C* class_9::get_Out1_SP() const {
    return (class_9::Out1_SP_C*) &Out1_SP;
}

int class_9::getIn1() const {
    return In1;
}

int class_9::getOut1() const {
    return Out1;
}

bool class_9::startBehavior() {
    bool done = false;
    done = OMSimulinkBlock::startBehavior();
    return done;
}

void class_9::initRelations() {
    if (get_In1_SP() != NULL) {
        get_In1_SP()->connectClass_9(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedclass_9::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("In1", x2String(myReal->In1));
    aomsAttributes->addAttribute("Out1", x2String(myReal->Out1));
}

void OMAnimatedclass_9::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(class_9, Default, Default, false, OMAnimatedclass_9)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_9.cpp
*********************************************************************/

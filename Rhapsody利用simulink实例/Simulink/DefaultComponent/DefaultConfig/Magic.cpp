/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Magic
//!	Generated Date	: ÖÜÎå, 30, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Magic.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Magic.h"
//## auto_generated
#include "C:\Users\h\Documents\MATLAB\NewGain1_ert_rtw\NewGain1.h"
//#[ ignore
#define Default_Magic_Magic_SERIALIZE OM_NO_OP

#define Default_Magic_doStep_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Magic
//#[ ignore
Magic::In1_SP_C::In1_SP_C() : _p_(0) {
    itsIntFlowInterface = NULL;
}

Magic::In1_SP_C::~In1_SP_C() {
    cleanUpRelations();
}

void Magic::In1_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void Magic::In1_SP_C::connectMagic(Magic* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* Magic::In1_SP_C::getItsIntFlowInterface() {
    return this;
}

void Magic::In1_SP_C::setItsIntFlowInterface(intFlowInterface* p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Magic::In1_SP_C::cleanUpRelations() {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

Magic::Out1_SP_C::Out1_SP_C() : _p_(0) {
    itsIntFlowInterface = NULL;
}

Magic::Out1_SP_C::~Out1_SP_C() {
    cleanUpRelations();
}

void Magic::Out1_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* Magic::Out1_SP_C::getItsIntFlowInterface() {
    return this;
}

intFlowInterface* Magic::Out1_SP_C::getOutBound() {
    return this;
}

void Magic::Out1_SP_C::setItsIntFlowInterface(intFlowInterface* p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Magic::Out1_SP_C::cleanUpRelations() {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}

Magic::Magic(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Magic, Magic(), 0, Default_Magic_Magic_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    m_nSampleTime = 100;
    NewGain1_initialize();
}

Magic::~Magic() {
    NOTIFY_DESTRUCTOR(~Magic, true);
    NewGain1_terminate();
}

void Magic::SetValue(int data, void * pCaller) {
    if (pCaller == (void *)get_In1_SP()) {
        setIn1(data);
    }
}

void Magic::doStep() {
    NOTIFY_OPERATION(doStep, doStep(), 0, Default_Magic_doStep_SERIALIZE);
    NewGain1_U.In1 = In1;
    
    NewGain1_step();
    
    if (Out1 != NewGain1_Y.Out1) {
        setOut1(NewGain1_Y.Out1);
    }
}

void Magic::setIn1(int p_In1) {
    if (In1 != p_In1) {
        In1 = p_In1;
        FLOW_DATA_RECEIVE("In1", In1, x2String);
    }
    
}

void Magic::setOut1(int p_Out1) {
    if (Out1 != p_Out1)  {
        Out1 = p_Out1;
        FLOW_DATA_SEND(Out1, Out1_SP, SetValue, x2String);
    }
}
//#]

Magic::In1_SP_C* Magic::getIn1_SP() const {
    return (Magic::In1_SP_C*) &In1_SP;
}

Magic::In1_SP_C* Magic::get_In1_SP() const {
    return (Magic::In1_SP_C*) &In1_SP;
}

Magic::Out1_SP_C* Magic::getOut1_SP() const {
    return (Magic::Out1_SP_C*) &Out1_SP;
}

Magic::Out1_SP_C* Magic::get_Out1_SP() const {
    return (Magic::Out1_SP_C*) &Out1_SP;
}

int Magic::getIn1() const {
    return In1;
}

int Magic::getOut1() const {
    return Out1;
}

bool Magic::startBehavior() {
    bool done = false;
    done = OMSimulinkBlock::startBehavior();
    return done;
}

void Magic::initRelations() {
    if (get_In1_SP() != NULL) {
        get_In1_SP()->connectMagic(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMagic::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("In1", x2String(myReal->In1));
    aomsAttributes->addAttribute("Out1", x2String(myReal->Out1));
}

void OMAnimatedMagic::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Magic, Default, Default, false, OMAnimatedMagic)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Magic.cpp
*********************************************************************/

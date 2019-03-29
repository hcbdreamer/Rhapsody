/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Source
//!	Generated Date	: ÖÜËÄ, 19, 4ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Source.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Source.h"
//#[ ignore
#define Default_Source_Source_SERIALIZE OM_NO_OP

#define Default_Source_Fuzhi_SERIALIZE OM_NO_OP

#define Default_Source_Judgement_SERIALIZE OM_NO_OP

#define Default_Source_Reset_SERIALIZE OM_NO_OP

#define Default_Source_Warning_SERIALIZE OM_NO_OP

#define Default_Source_show_SERIALIZE OM_NO_OP

#define OMAnim_Default_Source_setU1_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_U1)

#define OMAnim_Default_Source_setU1_double_SERIALIZE_RET_VAL
//#]

//## package Default

//## class Source
//#[ ignore
Source::p1_SP_C::p1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

Source::p1_SP_C::~p1_SP_C() {
    cleanUpRelations();
}

void Source::p1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,pCaller);
    }
    
}

doubleFlowInterface* Source::p1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

doubleFlowInterface* Source::p1_SP_C::getOutBound() {
    return this;
}

void Source::p1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void Source::p1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}
//#]

Source::Source(IOxfActive* theActiveContext) : p1(0), U0(6), U1(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Source, Source(), 0, Default_Source_Source_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Source::~Source() {
    NOTIFY_DESTRUCTOR(~Source, true);
    cancelTimeouts();
}

void Source::Fuzhi() {
    NOTIFY_OPERATION(Fuzhi, Fuzhi(), 0, Default_Source_Fuzhi_SERIALIZE);
    //#[ operation Fuzhi()
    p1=U1;
    //#]
}

void Source::Reset() {
    NOTIFY_OPERATION(Reset, Reset(), 0, Default_Source_Reset_SERIALIZE);
    //#[ operation Reset()
    U0=6.05;
    //std::cin>>U1;
    
    //#]
}

void Source::show() {
    NOTIFY_OPERATION(show, show(), 0, Default_Source_show_SERIALIZE);
    //#[ operation show()
    std::cout<<"The Input is:"<<p1<<std::endl;
    //#]
}

Source::p1_SP_C* Source::getP1_SP() const {
    return (Source::p1_SP_C*) &p1_SP;
}

Source::p1_SP_C* Source::get_p1_SP() const {
    return (Source::p1_SP_C*) &p1_SP;
}

double Source::getU0() const {
    return U0;
}

double Source::getU1() const {
    return U1;
}

double Source::getP1() const {
    return p1;
}

bool Source::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Source::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

bool Source::Judgement() {
    NOTIFY_OPERATION(Judgement, Judgement(), 0, Default_Source_Judgement_SERIALIZE);
    //#[ operation Judgement()
    if(-U0<U1&&U0>U1)
    {
    	return true;
    	}
    else
    {
        return false;
    }
    
    
    
    
    //#]
}

void Source::Warning() {
    NOTIFY_OPERATION(Warning, Warning(), 0, Default_Source_Warning_SERIALIZE);
    //#[ operation Warning()
     std::cout<<"Wrong!Please change U1"<<std::endl;
    //#]
}

void Source::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Source::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

//#[ ignore
void Source::setP1(double p_p1) {
    if (p1 != p_p1)  {
        p1 = p_p1;
        FLOW_DATA_SEND(p1, p1_SP, SetValue, x2String);
    }
}
//#]

void Source::setU0(double p_U0) {
    U0 = p_U0;
}

void Source::setU1(double p_U1) {
    U1 = p_U1;
    NOTIFY_SET_OPERATION;
}

void Source::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        rootState_timeout = scheduleTimeout(200, "ROOT.idle");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Source::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.idle");
                            //#[ transition 3 
                              Reset();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.reset");
                            rootState_subState = reset;
                            rootState_active = reset;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State normal
        case normal:
        {
            if(IS_EVENT_TYPE_OF(evReset_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.normal");
                    NOTIFY_STATE_ENTERED("ROOT.idle");
                    rootState_subState = idle;
                    rootState_active = idle;
                    rootState_timeout = scheduleTimeout(200, "ROOT.idle");
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State illegal
        case illegal:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.illegal");
                            NOTIFY_STATE_ENTERED("ROOT.idle");
                            rootState_subState = idle;
                            rootState_active = idle;
                            rootState_timeout = scheduleTimeout(200, "ROOT.idle");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State reset
        case reset:
        {
            if(IS_EVENT_TYPE_OF(evjudge_Default_id))
                {
                    //## transition 1 
                    if(Judgement())
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_STATE_EXITED("ROOT.reset");
                            //#[ transition 1 
                              Fuzhi();    
                              show();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.normal");
                            rootState_subState = normal;
                            rootState_active = normal;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_STATE_EXITED("ROOT.reset");
                            //#[ transition 2 
                            Warning();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.illegal");
                            rootState_subState = illegal;
                            rootState_active = illegal;
                            rootState_timeout = scheduleTimeout(200, "ROOT.illegal");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSource::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("p1", x2String(myReal->p1));
    aomsAttributes->addAttribute("U0", x2String(myReal->U0));
    aomsAttributes->addAttribute("U1", x2String(myReal->U1));
}

void OMAnimatedSource::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Source::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case Source::normal:
        {
            normal_serializeStates(aomsState);
        }
        break;
        case Source::illegal:
        {
            illegal_serializeStates(aomsState);
        }
        break;
        case Source::reset:
        {
            reset_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSource::reset_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reset");
}

void OMAnimatedSource::normal_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal");
}

void OMAnimatedSource::illegal_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.illegal");
}

void OMAnimatedSource::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(Source, Default, Default, false, OMAnimatedSource)

IMPLEMENT_META_OP(OMAnimatedSource, Default_Source_setU1_double, "setU1", FALSE, "setU1(double)", 1)

IMPLEMENT_OP_CALL(Default_Source_setU1_double, Source, setU1(p_U1), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Source.cpp
*********************************************************************/

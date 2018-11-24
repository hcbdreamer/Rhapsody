/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: A
//!	Generated Date	: ÷‹»’, 3, 6‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\A.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "A.h"
//#[ ignore
#define Default_A_A_SERIALIZE OM_NO_OP

#define Default_A_changeAt_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class A
A::A(IOxfActive* theActiveContext) : at(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(A, A(), 0, Default_A_A_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
    //#[ operation A()
     std::cout<<"Hello!"<<std::endl;
    //#]
}

A::~A() {
    NOTIFY_DESTRUCTOR(~A, true);
}

void A::changeAt() {
    NOTIFY_OPERATION(changeAt, changeAt(), 0, Default_A_changeAt_SERIALIZE);
    //#[ operation changeAt()
    at=10;
    std::cout<<"At is changed to "<<at<<"!"<<std::endl;
    //#]
}

int A::getAt() const {
    return at;
}

void A::setAt(int p_at) {
    at = p_at;
}

bool A::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void A::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void A::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.state_0");
        rootState_subState = state_0;
        rootState_active = state_0;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus A::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_0
    if(rootState_active == state_0)
        {
            if(IS_EVENT_TYPE_OF(evStart_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.state_0");
                    //#[ transition 1 
                      changeAt();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_1");
                    rootState_subState = state_1;
                    rootState_active = state_1;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedA::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("at", x2String(myReal->at));
}

void OMAnimatedA::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case A::state_0:
        {
            state_0_serializeStates(aomsState);
        }
        break;
        case A::state_1:
        {
            state_1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedA::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1");
}

void OMAnimatedA::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
}
//#]

IMPLEMENT_REACTIVE_META_P(A, Default, Default, false, OMAnimatedA)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\A.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: A
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\A.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "A.h"
//## link itsB
#include "B.h"
//#[ ignore
#define Default_A_A_SERIALIZE OM_NO_OP

#define Default_A_StartA_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class A
A::A(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(A, A(), 0, Default_A_A_SERIALIZE);
    setActiveContext(this, true);
    itsB = NULL;
    initStatechart();
}

A::~A() {
    NOTIFY_DESTRUCTOR(~A, true);
    cleanUpRelations();
    cancelTimeouts();
}

void A::StartA() {
    NOTIFY_OPERATION(StartA, StartA(), 0, Default_A_StartA_SERIALIZE);
    //#[ operation StartA()
    //int count=0;
    std::cout<<"A is Running!"<<std::endl;
    //itsB->startB(); 
    //count=itsB->getCountB(); 
    //std::cout<<"count!"<<std::endl;  
    itsB->GEN(evStartB());
    //#]
}

B* A::getItsB() const {
    return itsB;
}

void A::setItsB(B* p_B) {
    if(p_B != NULL)
        {
            p_B->_setItsA(this);
        }
    _setItsB(p_B);
}

bool A::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void A::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void A::cleanUpRelations() {
    if(itsB != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsB");
            A* p_A = itsB->getItsA();
            if(p_A != NULL)
                {
                    itsB->__setItsA(NULL);
                }
            itsB = NULL;
        }
}

void A::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool A::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void A::__setItsB(B* p_B) {
    itsB = p_B;
    if(p_B != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsB", p_B, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsB");
        }
}

void A::_setItsB(B* p_B) {
    if(itsB != NULL)
        {
            itsB->__setItsA(NULL);
        }
    __setItsB(p_B);
}

void A::_clearItsB() {
    NOTIFY_RELATION_CLEARED("itsB");
    itsB = NULL;
}

void A::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus A::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(evStartA_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    //#[ transition 1 
                    
                    StartA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Running");
                    rootState_subState = Running;
                    rootState_active = Running;
                    rootState_timeout = scheduleTimeout(5, "ROOT.Running");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Running
        case Running:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Running");
                            NOTIFY_STATE_ENTERED("ROOT.idle");
                            rootState_subState = idle;
                            rootState_active = idle;
                            NOTIFY_TRANSITION_TERMINATED("2");
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
void OMAnimatedA::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsB", false, true);
    if(myReal->itsB)
        {
            aomsRelations->ADD_ITEM(myReal->itsB);
        }
}

void OMAnimatedA::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case A::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case A::Running:
        {
            Running_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedA::Running_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running");
}

void OMAnimatedA::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(A, Default, Default, false, OMAnimatedA)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\A.cpp
*********************************************************************/

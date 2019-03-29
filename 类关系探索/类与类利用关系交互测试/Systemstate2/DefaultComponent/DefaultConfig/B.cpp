/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: B
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\B.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "B.h"
//## link itsA
#include "A.h"
//#[ ignore
#define Default_B_B_SERIALIZE OM_NO_OP

#define Default_B_startB_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class B
B::B(IOxfActive* theActiveContext) : countB(10) {
    NOTIFY_ACTIVE_CONSTRUCTOR(B, B(), 0, Default_B_B_SERIALIZE);
    setActiveContext(this, true);
    itsA = NULL;
    initStatechart();
}

B::~B() {
    NOTIFY_DESTRUCTOR(~B, true);
    cleanUpRelations();
    cancelTimeouts();
}

void B::startB() {
    NOTIFY_OPERATION(startB, startB(), 0, Default_B_startB_SERIALIZE);
    //#[ operation startB()
    std::cout<<"B is running!"<<std::endl;
    //#]
}

int B::getCountB() const {
    return countB;
}

void B::setCountB(int p_countB) {
    countB = p_countB;
}

A* B::getItsA() const {
    return itsA;
}

void B::setItsA(A* p_A) {
    if(p_A != NULL)
        {
            p_A->_setItsB(this);
        }
    _setItsA(p_A);
}

bool B::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void B::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void B::cleanUpRelations() {
    if(itsA != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsA");
            B* p_B = itsA->getItsB();
            if(p_B != NULL)
                {
                    itsA->__setItsB(NULL);
                }
            itsA = NULL;
        }
}

void B::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool B::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void B::__setItsA(A* p_A) {
    itsA = p_A;
    if(p_A != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsA", p_A, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsA");
        }
}

void B::_setItsA(A* p_A) {
    if(itsA != NULL)
        {
            itsA->__setItsB(NULL);
        }
    __setItsA(p_A);
}

void B::_clearItsA() {
    NOTIFY_RELATION_CLEARED("itsA");
    itsA = NULL;
}

void B::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus B::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(evStartB_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    //#[ transition 0 
                    
                    startB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.running");
                    rootState_subState = running;
                    rootState_active = running;
                    rootState_timeout = scheduleTimeout(5, "ROOT.running");
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        // State running
        case running:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.running");
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
void OMAnimatedB::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("countB", x2String(myReal->countB));
}

void OMAnimatedB::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsA", false, true);
    if(myReal->itsA)
        {
            aomsRelations->ADD_ITEM(myReal->itsA);
        }
}

void OMAnimatedB::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case B::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case B::running:
        {
            running_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedB::running_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.running");
}

void OMAnimatedB::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(B, Default, Default, false, OMAnimatedB)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\B.cpp
*********************************************************************/

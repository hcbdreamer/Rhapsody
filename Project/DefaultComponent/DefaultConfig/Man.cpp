/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Man
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Man.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Man.h"
//## link itsWoman
#include "Woman.h"
//#[ ignore
#define Default_Man_Man_SERIALIZE OM_NO_OP

#define Default_Man_Operation_0_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Man
Man::Man(IOxfActive* theActiveContext) : m1(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Man, Man(), 0, Default_Man_Man_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsWoman = NULL;
    initStatechart();
}

Man::~Man() {
    NOTIFY_DESTRUCTOR(~Man, true);
    cleanUpRelations();
}

void Man::Operation_0() {
    NOTIFY_OPERATION(Operation_0, Operation_0(), 0, Default_Man_Operation_0_SERIALIZE);
    //#[ operation Operation_0()
    
    itsWoman->Operation_0();
    //#]
}

int Man::getM1() const {
    return m1;
}

void Man::setM1(int p_m1) {
    m1 = p_m1;
}

Woman* Man::getItsWoman() const {
    return itsWoman;
}

void Man::setItsWoman(Woman* p_Woman) {
    if(p_Woman != NULL)
        {
            p_Woman->_setItsMan(this);
        }
    _setItsWoman(p_Woman);
}

bool Man::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Man::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Man::cleanUpRelations() {
    if(itsWoman != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWoman");
            Man* p_Man = itsWoman->getItsMan();
            if(p_Man != NULL)
                {
                    itsWoman->__setItsMan(NULL);
                }
            itsWoman = NULL;
        }
}

void Man::__setItsWoman(Woman* p_Woman) {
    itsWoman = p_Woman;
    if(p_Woman != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWoman", p_Woman, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWoman");
        }
}

void Man::_setItsWoman(Woman* p_Woman) {
    if(itsWoman != NULL)
        {
            itsWoman->__setItsMan(NULL);
        }
    __setItsWoman(p_Woman);
}

void Man::_clearItsWoman() {
    NOTIFY_RELATION_CLEARED("itsWoman");
    itsWoman = NULL;
}

void Man::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.state_0");
        rootState_subState = state_0;
        rootState_active = state_0;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Man::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_0
    if(rootState_active == state_0)
        {
            if(IS_EVENT_TYPE_OF(evStart_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.state_0");
                    //#[ transition 1 
                     Operation_0();
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
void OMAnimatedMan::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("m1", x2String(myReal->m1));
}

void OMAnimatedMan::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsWoman", false, true);
    if(myReal->itsWoman)
        {
            aomsRelations->ADD_ITEM(myReal->itsWoman);
        }
}

void OMAnimatedMan::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Man::state_0:
        {
            state_0_serializeStates(aomsState);
        }
        break;
        case Man::state_1:
        {
            state_1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedMan::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1");
}

void OMAnimatedMan::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
}
//#]

IMPLEMENT_REACTIVE_META_P(Man, Default, Default, false, OMAnimatedMan)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Man.cpp
*********************************************************************/

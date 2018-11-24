/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: Release
	Model Element	: Button
//!	Generated Date	: ÖÜËÄ, 16, 11ÔÂ 2017  
	File Path	: DefaultComponent\Release\Button.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Button.h"
//## link itsTimer
#include "Timer.h"
//#[ ignore
#define Default_Button_Button_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Button
Button::Button(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Button, Button(), 0, Default_Button_Button_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsTimer = NULL;
    initStatechart();
}

Button::~Button() {
    NOTIFY_DESTRUCTOR(~Button, true);
    cleanUpRelations();
    cancelTimeouts();
}

Timer* Button::getItsTimer() const {
    return itsTimer;
}

void Button::setItsTimer(Timer* p_Timer) {
    itsTimer = p_Timer;
    if(p_Timer != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTimer", p_Timer, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTimer");
        }
}

bool Button::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Button::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Button::cleanUpRelations() {
    if(itsTimer != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTimer");
            itsTimer = NULL;
        }
}

void Button::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Button::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Button::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.released");
        rootState_subState = released;
        rootState_active = released;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Button::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State released
        case released:
        {
            if(IS_EVENT_TYPE_OF(evPress_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.released");
                    NOTIFY_STATE_ENTERED("ROOT.pressed");
                    rootState_subState = pressed;
                    rootState_active = pressed;
                    rootState_timeout = scheduleTimeout(2000, "ROOT.pressed");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State pressed
        case pressed:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.pressed");
                            //#[ transition 3 
                            
                            itsTimer->GEN(evReset());
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.released");
                            rootState_subState = released;
                            rootState_active = released;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evRelease_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.pressed");
                    //#[ transition 2 
                         
                     itsTimer->GEN(evStartStop());
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.released");
                    rootState_subState = released;
                    rootState_active = released;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
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
void OMAnimatedButton::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTimer", false, true);
    if(myReal->itsTimer)
        {
            aomsRelations->ADD_ITEM(myReal->itsTimer);
        }
}

void OMAnimatedButton::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Button::released:
        {
            released_serializeStates(aomsState);
        }
        break;
        case Button::pressed:
        {
            pressed_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedButton::released_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.released");
}

void OMAnimatedButton::pressed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.pressed");
}
//#]

IMPLEMENT_REACTIVE_META_P(Button, Default, Default, false, OMAnimatedButton)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Release\Button.cpp
*********************************************************************/

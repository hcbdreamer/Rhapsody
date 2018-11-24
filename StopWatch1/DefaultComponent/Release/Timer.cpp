/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: Release
	Model Element	: Timer
//!	Generated Date	: ÖÜËÄ, 16, 11ÔÂ 2017  
	File Path	: DefaultComponent\Release\Timer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Timer.h"
//## link itsDisplay
#include "Display.h"
//#[ ignore
#define Default_Timer_Timer_SERIALIZE OM_NO_OP

#define Default_Timer_show_SERIALIZE OM_NO_OP

#define Default_Timer_tick_SERIALIZE OM_NO_OP

#define Default_Timer_timeReset_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Timer
Timer::Timer(IOxfActive* theActiveContext) : minutes(0), seconds(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Timer, Timer(), 0, Default_Timer_Timer_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDisplay = NULL;
    initStatechart();
    //#[ operation Timer()
    std::cout<<"Constructed!"<<std::endl;
    //#]
}

Timer::~Timer() {
    NOTIFY_DESTRUCTOR(~Timer, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Timer::show() {
    NOTIFY_OPERATION(show, show(), 0, Default_Timer_show_SERIALIZE);
    //#[ operation show()
    //std::cout<<minutes<<":"<<seconds<<std::endl; 
    itsDisplay->showTime(minutes,seconds);
    //#]
}

void Timer::tick() {
    NOTIFY_OPERATION(tick, tick(), 0, Default_Timer_tick_SERIALIZE);
    //#[ operation tick()
    seconds++;
    if(seconds>59){  
    minutes++;
    seconds=0;
    }
    //#]
}

void Timer::timeReset() {
    NOTIFY_OPERATION(timeReset, timeReset(), 0, Default_Timer_timeReset_SERIALIZE);
    //#[ operation timeReset()
    minutes=0;
    seconds=0;
    //#]
}

int Timer::getMinutes() const {
    return minutes;
}

void Timer::setMinutes(int p_minutes) {
    minutes = p_minutes;
    NOTIFY_SET_OPERATION;
}

int Timer::getSeconds() const {
    return seconds;
}

void Timer::setSeconds(int p_seconds) {
    seconds = p_seconds;
    NOTIFY_SET_OPERATION;
}

Display* Timer::getItsDisplay() const {
    return itsDisplay;
}

void Timer::setItsDisplay(Display* p_Display) {
    itsDisplay = p_Display;
    if(p_Display != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDisplay", p_Display, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDisplay");
        }
}

bool Timer::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Timer::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    active_subState = OMNonState;
    active_timeout = NULL;
}

void Timer::cleanUpRelations() {
    if(itsDisplay != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDisplay");
            itsDisplay = NULL;
        }
}

void Timer::cancelTimeouts() {
    cancel(active_timeout);
}

bool Timer::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(active_timeout == arg)
        {
            active_timeout = NULL;
            res = true;
        }
    return res;
}

void Timer::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        active_entDef();
    }
}

IOxfReactive::TakeEventStatus Timer::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(evStartStop_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.active.idle");
                    NOTIFY_STATE_ENTERED("ROOT.active.running");
                    active_subState = running;
                    rootState_active = running;
                    active_timeout = scheduleTimeout(1000, "ROOT.active.running");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = active_handleEvent();
                }
        }
        break;
        // State running
        case running:
        {
            res = running_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void Timer::active_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.active");
    rootState_subState = active;
    NOTIFY_TRANSITION_STARTED("0");
    //#[ transition 0 
      
      timeReset();
      show();
    //#]
    NOTIFY_STATE_ENTERED("ROOT.active.idle");
    active_subState = idle;
    rootState_active = idle;
    NOTIFY_TRANSITION_TERMINATED("0");
}

IOxfReactive::TakeEventStatus Timer::active_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evReset_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("4");
            switch (active_subState) {
                // State idle
                case idle:
                {
                    NOTIFY_STATE_EXITED("ROOT.active.idle");
                }
                break;
                // State running
                case running:
                {
                    cancel(active_timeout);
                    NOTIFY_STATE_EXITED("ROOT.active.running");
                }
                break;
                default:
                    break;
            }
            active_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.active");
            active_entDef();
            NOTIFY_TRANSITION_TERMINATED("4");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Timer::running_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == active_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    cancel(active_timeout);
                    NOTIFY_STATE_EXITED("ROOT.active.running");
                    //#[ transition 3 
                    
                    tick();
                    show();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.active.running");
                    active_subState = running;
                    rootState_active = running;
                    active_timeout = scheduleTimeout(1000, "ROOT.active.running");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evStartStop_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            cancel(active_timeout);
            NOTIFY_STATE_EXITED("ROOT.active.running");
            NOTIFY_STATE_ENTERED("ROOT.active.idle");
            active_subState = idle;
            rootState_active = idle;
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = active_handleEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTimer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("minutes", x2String(myReal->minutes));
    aomsAttributes->addAttribute("seconds", x2String(myReal->seconds));
}

void OMAnimatedTimer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDisplay", false, true);
    if(myReal->itsDisplay)
        {
            aomsRelations->ADD_ITEM(myReal->itsDisplay);
        }
}

void OMAnimatedTimer::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Timer::active)
        {
            active_serializeStates(aomsState);
        }
}

void OMAnimatedTimer::active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.active");
    switch (myReal->active_subState) {
        case Timer::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case Timer::running:
        {
            running_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTimer::running_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.active.running");
}

void OMAnimatedTimer::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.active.idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(Timer, Default, Default, false, OMAnimatedTimer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Release\Timer.cpp
*********************************************************************/

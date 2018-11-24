/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: Debug
	Model Element	: Timer
//!	Generated Date	: ÖÜËÄ, 16, 11ÔÂ 2017  
	File Path	: DefaultComponent\Debug\Timer.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Timer.h"
//## package Default

//## class Timer
Timer::Timer(IOxfActive* theActiveContext) : minutes(0), seconds(0) {
    setActiveContext(theActiveContext, false);
    initStatechart();
    //#[ operation Timer()
    std::cout<<"Constructed!"<<std::endl;
    //#]
}

Timer::~Timer() {
    cancelTimeouts();
}

void Timer::show() {
    //#[ operation show()
    std::cout<<minutes<<":"<<seconds<<std::endl;
    //#]
}

void Timer::tick() {
    //#[ operation tick()
    seconds++;
    if(seconds>59){  
    minutes++;
    seconds=0;
    }
    //#]
}

void Timer::timeReset() {
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
}

int Timer::getSeconds() const {
    return seconds;
}

void Timer::setSeconds(int p_seconds) {
    seconds = p_seconds;
}

bool Timer::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Timer::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Timer::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Timer::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Timer::rootState_entDef() {
    {
        //#[ transition 0 
          
          timeReset();
          show();
        //#]
        rootState_subState = idle;
        rootState_active = idle;
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
                    rootState_subState = running;
                    rootState_active = running;
                    rootState_timeout = scheduleTimeout(1000, NULL);
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
                            cancel(rootState_timeout);
                            //#[ transition 3 
                            
                            tick();
                            show();
                            //#]
                            rootState_subState = running;
                            rootState_active = running;
                            rootState_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evStartStop_Default_id))
                {
                    cancel(rootState_timeout);
                    rootState_subState = idle;
                    rootState_active = idle;
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\Debug\Timer.cpp
*********************************************************************/

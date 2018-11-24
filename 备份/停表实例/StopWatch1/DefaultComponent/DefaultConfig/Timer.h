/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Timer
//!	Generated Date	: ÖÜËÄ, 16, 11ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\Timer.h
*********************************************************************/

#ifndef Timer_H
#define Timer_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## package Default

//## class Timer
class Timer : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## operation Timer()
    Timer(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Timer();
    
    ////    Operations    ////
    
    //## operation show()
    void show();
    
    //## operation tick()
    void tick();
    
    //## operation timeReset()
    void timeReset();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getMinutes() const;
    
    //## auto_generated
    void setMinutes(int p_minutes);
    
    //## auto_generated
    int getSeconds() const;
    
    //## auto_generated
    void setSeconds(int p_seconds);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int minutes;		//## attribute minutes
    
    int seconds;		//## attribute seconds
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // running:
    //## statechart_method
    inline bool running_IN() const;
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Timer_Enum {
        OMNonState = 0,
        running = 1,
        idle = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

inline bool Timer::rootState_IN() const {
    return true;
}

inline bool Timer::running_IN() const {
    return rootState_subState == running;
}

inline bool Timer::idle_IN() const {
    return rootState_subState == idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Timer.h
*********************************************************************/

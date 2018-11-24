/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: Release
	Model Element	: Timer
//!	Generated Date	: ÖÜËÄ, 16, 11ÔÂ 2017  
	File Path	: DefaultComponent\Release\Timer.h
*********************************************************************/

#ifndef Timer_H
#define Timer_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsDisplay
class Display;

//## package Default

//## class Timer
class Timer : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTimer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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
    Display* getItsDisplay() const;
    
    //## auto_generated
    void setItsDisplay(Display* p_Display);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int minutes;		//## attribute minutes
    
    int seconds;		//## attribute seconds
    
    ////    Relations and components    ////
    
    Display* itsDisplay;		//## link itsDisplay
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // active:
    //## statechart_method
    inline bool active_IN() const;
    
    //## statechart_method
    void active_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus active_handleEvent();
    
    // running:
    //## statechart_method
    inline bool running_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus running_handleEvent();
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Timer_Enum {
        OMNonState = 0,
        active = 1,
        running = 2,
        idle = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int active_subState;
    
    IOxfTimeout* active_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTimer : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Timer, OMAnimatedTimer)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void active_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void running_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Timer::rootState_IN() const {
    return true;
}

inline bool Timer::active_IN() const {
    return rootState_subState == active;
}

inline bool Timer::running_IN() const {
    return active_subState == running;
}

inline bool Timer::idle_IN() const {
    return active_subState == idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\Release\Timer.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: Release
	Model Element	: Button
//!	Generated Date	: ÖÜËÄ, 12, 4ÔÂ 2018  
	File Path	: DefaultComponent\Release\Button.h
*********************************************************************/

#ifndef Button_H
#define Button_H

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
//## link itsTimer
class Timer;

//## package Default

//## class Button
class Button : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedButton;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Button(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Button();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Timer* getItsTimer() const;
    
    //## auto_generated
    void setItsTimer(Timer* p_Timer);
    
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
    
    ////    Relations and components    ////
    
    Timer* itsTimer;		//## link itsTimer
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // released:
    //## statechart_method
    inline bool released_IN() const;
    
    // pressed:
    //## statechart_method
    inline bool pressed_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Button_Enum {
        OMNonState = 0,
        released = 1,
        pressed = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedButton : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Button, OMAnimatedButton)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void released_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void pressed_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Button::rootState_IN() const {
    return true;
}

inline bool Button::released_IN() const {
    return rootState_subState == released;
}

inline bool Button::pressed_IN() const {
    return rootState_subState == pressed;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\Release\Button.h
*********************************************************************/

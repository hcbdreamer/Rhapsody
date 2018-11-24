/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: SimpleQtCountdown 
	Configuration 	: Win
	Model Element	: MyCountdown
//!	Generated Date	: ÷‹“ª, 29, 1‘¬ 2018  
	File Path	: SimpleQtCountdown\Win\MyCountdown.h
*********************************************************************/

#ifndef MyCountdown_H
#define MyCountdown_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class MyCountdown
#include <QDialog>
//## dependency QTimer
#include <QTimer>
//## class MyCountdown
#include "ui_qtcountdown.h"
//## operation MyCountdown(QWidget)
class QWidget;

//#[ ignore
#define tgReset_MyCountdown_Event_id 31000

#define tgStart_MyCountdown_Event_id 31001

#define tgTimeout_MyCountdown_Event_id 31002
//#]

//## package Default

//## class MyCountdown
class MyCountdown : public OMReactive, public QDialog, public Ui::MyQtCountdown {
    ////    Constructors and destructors    ////
    
public :

    //## operation MyCountdown(QWidget)
    MyCountdown(QWidget* parent = 0, IOxfActive* theActiveContext = 0);
    
    ////    Operations    ////
    
    //## operation startTimer(long)
    void startTimer(long time);
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();

public :

    //## TriggeredOperation tgReset()
    void tgReset();
    
    //## TriggeredOperation tgStart()
    void tgStart();
    
    //## TriggeredOperation tgTimeout()
    void tgTimeout();
    
    ////    Attributes    ////

protected :

    int counter;		//## attribute counter
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Active:
    //## statechart_method
    inline bool Active_IN() const;
    
    //## statechart_method
    void Active_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Active_handleEvent();
    
    // Running:
    //## statechart_method
    inline bool Running_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Running_handleEvent();
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum MyCountdown_Enum {
        OMNonState = 0,
        Active = 1,
        Running = 2,
        Idle = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int Active_subState;
//#]
};

//#[ ignore
class tgReset_MyCountdown_Event : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    tgReset_MyCountdown_Event();
};
//#]

//#[ ignore
class tgStart_MyCountdown_Event : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    tgStart_MyCountdown_Event();
};
//#]

//#[ ignore
class tgTimeout_MyCountdown_Event : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    tgTimeout_MyCountdown_Event();
};
//#]

inline bool MyCountdown::rootState_IN() const {
    return true;
}

inline bool MyCountdown::Active_IN() const {
    return rootState_subState == Active;
}

inline bool MyCountdown::Running_IN() const {
    return Active_subState == Running;
}

inline bool MyCountdown::Idle_IN() const {
    return Active_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: SimpleQtCountdown\Win\MyCountdown.h
*********************************************************************/

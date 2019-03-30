/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: SimpleQtCountdown 
	Configuration 	: Win
	Model Element	: MyCountdown
//!	Generated Date	: ÷‹“ª, 29, 1‘¬ 2018  
	File Path	: SimpleQtCountdown\Win\MyCountdown.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "MyCountdown.h"
//## operation MyCountdown(QWidget)
#include <QWidget>
//## package Default

//## class MyCountdown
MyCountdown::MyCountdown(QWidget* parent, IOxfActive* theActiveContext) : QDialog(parent) {
    setActiveContext(theActiveContext, false);
    initStatechart();
    //#[ operation MyCountdown(QWidget)
    setupUi(this);     
    setWindowTitle("Countdown");   
    connect(startButton, SIGNAL(clicked()), this, SLOT(tgStart()));
    connect(resetButton, SIGNAL(clicked()), this, SLOT(tgReset()));
    show();         
    
    //#]
}

void MyCountdown::startTimer(long time) {
    //#[ operation startTimer(long)
    QTimer::singleShot(time, this, SLOT(tgTimeout()));
    //#]
}

bool MyCountdown::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void MyCountdown::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Active_subState = OMNonState;
}

void MyCountdown::tgReset() {
    tgReset_MyCountdown_Event triggerEvent;
    handleTrigger(&triggerEvent);
}

void MyCountdown::tgStart() {
    tgStart_MyCountdown_Event triggerEvent;
    handleTrigger(&triggerEvent);
}

void MyCountdown::tgTimeout() {
    tgTimeout_MyCountdown_Event triggerEvent;
    handleTrigger(&triggerEvent);
}

void MyCountdown::rootState_entDef() {
    {
        Active_entDef();
    }
}

IOxfReactive::TakeEventStatus MyCountdown::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(tgStart_MyCountdown_Event_id))
                {
                    pushNullTransition();
                    Active_subState = Running;
                    rootState_active = Running;
                    //#[ state ROOT.Active.Running.(Entry) 
                    counter--;
                    lcdNumber->display(counter);
                    startTimer(1000);
                    //#]
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Active_handleEvent();
                }
        }
        break;
        case Running:
        {
            res = Running_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void MyCountdown::Active_entDef() {
    rootState_subState = Active;
    Active_subState = Idle;
    rootState_active = Idle;
    //#[ state ROOT.Active.Idle.(Entry) 
    counter=10; lcdNumber->display(counter);
    //#]
}

IOxfReactive::TakeEventStatus MyCountdown::Active_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(tgReset_MyCountdown_Event_id))
        {
            switch (Active_subState) {
                case Running:
                {
                    popNullTransition();
                }
                break;
                default:
                    break;
            }
            Active_subState = OMNonState;
            Active_entDef();
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus MyCountdown::Running_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 2 
            if(counter <= 0)
                {
                    popNullTransition();
                    Active_subState = Idle;
                    rootState_active = Idle;
                    //#[ state ROOT.Active.Idle.(Entry) 
                    counter=10; lcdNumber->display(counter);
                    //#]
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(tgTimeout_MyCountdown_Event_id))
        {
            popNullTransition();
            pushNullTransition();
            Active_subState = Running;
            rootState_active = Running;
            //#[ state ROOT.Active.Running.(Entry) 
            counter--;
            lcdNumber->display(counter);
            startTimer(1000);
            //#]
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = Active_handleEvent();
        }
    return res;
}

//#[ ignore
tgReset_MyCountdown_Event::tgReset_MyCountdown_Event() {
    setId(tgReset_MyCountdown_Event_id);
}
//#]

//#[ ignore
tgStart_MyCountdown_Event::tgStart_MyCountdown_Event() {
    setId(tgStart_MyCountdown_Event_id);
}
//#]

//#[ ignore
tgTimeout_MyCountdown_Event::tgTimeout_MyCountdown_Event() {
    setId(tgTimeout_MyCountdown_Event_id);
}
//#]

/*********************************************************************
	File Path	: SimpleQtCountdown\Win\MyCountdown.cpp
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: B
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\B.h
*********************************************************************/

#ifndef B_H
#define B_H

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
//## link itsA
class A;

//## package Default

//## class B
class B : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedB;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    B(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~B();
    
    ////    Operations    ////
    
    //## operation startB()
    void startB();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getCountB() const;
    
    //## auto_generated
    void setCountB(int p_countB);
    
    //## auto_generated
    A* getItsA() const;
    
    //## auto_generated
    void setItsA(A* p_A);
    
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
    
    int countB;		//## attribute countB
    
    ////    Relations and components    ////
    
    A* itsA;		//## link itsA
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsA(A* p_A);
    
    //## auto_generated
    void _setItsA(A* p_A);
    
    //## auto_generated
    void _clearItsA();
    
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
    enum B_Enum {
        OMNonState = 0,
        running = 1,
        idle = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedB : virtual public AOMInstance {
    DECLARE_REACTIVE_META(B, OMAnimatedB)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void running_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool B::rootState_IN() const {
    return true;
}

inline bool B::running_IN() const {
    return rootState_subState == running;
}

inline bool B::idle_IN() const {
    return rootState_subState == idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\B.h
*********************************************************************/

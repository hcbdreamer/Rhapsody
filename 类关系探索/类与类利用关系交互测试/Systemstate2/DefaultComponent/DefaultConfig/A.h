/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: A
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\A.h
*********************************************************************/

#ifndef A_H
#define A_H

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
//## link itsB
class B;

//## package Default

//## class A
class A : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    A(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~A();
    
    ////    Operations    ////
    
    //## operation StartA()
    void StartA();
    
    ////    Additional operations    ////
    
    //## auto_generated
    B* getItsB() const;
    
    //## auto_generated
    void setItsB(B* p_B);
    
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
    
    B* itsB;		//## link itsB
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsB(B* p_B);
    
    //## auto_generated
    void _setItsB(B* p_B);
    
    //## auto_generated
    void _clearItsB();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Running:
    //## statechart_method
    inline bool Running_IN() const;
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum A_Enum {
        OMNonState = 0,
        Running = 1,
        idle = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedA : virtual public AOMInstance {
    DECLARE_REACTIVE_META(A, OMAnimatedA)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Running_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool A::rootState_IN() const {
    return true;
}

inline bool A::Running_IN() const {
    return rootState_subState == Running;
}

inline bool A::idle_IN() const {
    return rootState_subState == idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\A.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: test
//!	Generated Date	: ÖÜÁù, 20, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\test.h
*********************************************************************/

#ifndef test_H
#define test_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "TestPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class Out_C
#include "IOut.h"
//## package TestPkg

//## class test
class test : public OMReactive {
public :

//#[ ignore
    //## package TestPkg
    class Out_C : public IOut {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Out_C();
        
        //## auto_generated
        virtual ~Out_C();
        
        ////    Operations    ////
        
        //## auto_generated
        IOut* getItsIOut();
        
        //## auto_generated
        IOut* getOutBound();
        
        //## auto_generated
        virtual void show(char* aMsg);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIOut(IOut* p_IOut);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        IOut* itsIOut;		//## link itsIOut
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedtest;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    test(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~test();
    
    ////    Operations    ////
    
    //## operation Start()
    void Start();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Out_C* getOut() const;
    
    //## auto_generated
    Out_C* get_Out() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Relations and components    ////
    
//#[ ignore
    Out_C Out;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    // active:
    //## statechart_method
    inline bool active_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum test_Enum {
        OMNonState = 0,
        idle = 1,
        active = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtest : virtual public AOMInstance {
    DECLARE_REACTIVE_META(test, OMAnimatedtest)
    
    ////    Framework operations    ////
    
public :

    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void active_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool test::rootState_IN() const {
    return true;
}

inline bool test::idle_IN() const {
    return rootState_subState == idle;
}

inline bool test::active_IN() const {
    return rootState_subState == active;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\test.h
*********************************************************************/

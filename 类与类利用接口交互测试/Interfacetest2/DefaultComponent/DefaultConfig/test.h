/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: test
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\test.h
*********************************************************************/

#ifndef test_H
#define test_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "HardwarePkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class test
#include "Idisplay.h"
//## class input_C
#include "Iinput.h"
//## package HardwarePkg

//## class test
class test : public OMReactive, public Idisplay {
public :

//#[ ignore
    //## package HardwarePkg
    class display_C : public Idisplay {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        display_C();
        
        //## auto_generated
        virtual ~display_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTest(test* part);
        
        //## auto_generated
        Idisplay* getItsIdisplay();
        
        //## auto_generated
        virtual void show(int aMsg);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIdisplay(Idisplay* p_Idisplay);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        Idisplay* itsIdisplay;		//## link itsIdisplay
    };
    
    //## package HardwarePkg
    class input_C : public Iinput {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        input_C();
        
        //## auto_generated
        virtual ~input_C();
        
        ////    Operations    ////
        
        //## auto_generated
        Iinput* getItsIinput();
        
        //## auto_generated
        Iinput* getOutBound();
        
        //## auto_generated
        virtual int in(int a);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIinput(Iinput* p_Iinput);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        Iinput* itsIinput;		//## link itsIinput
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
    virtual ~test();
    
    ////    Operations    ////
    
    //## operation show(int)
    virtual void show(int aMsg);
    
    //## operation start1()
    int start1();
    
    ////    Additional operations    ////
    
    //## auto_generated
    display_C* getDisplay() const;
    
    //## auto_generated
    display_C* get_display() const;
    
    //## auto_generated
    input_C* getInput() const;
    
    //## auto_generated
    input_C* get_input() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    ////    Framework    ////
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
//#[ ignore
    display_C display;
    
    input_C input;
//#]

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Input:
    //## statechart_method
    inline bool Input_IN() const;
    
    // idle1:
    //## statechart_method
    inline bool idle1_IN() const;
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;

protected :

//#[ ignore
    enum test_Enum {
        OMNonState = 0,
        Input = 1,
        idle1 = 2,
        idle = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtest : public OMAnimatedIdisplay {
    DECLARE_REACTIVE_META(test, OMAnimatedtest)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Input_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool test::rootState_IN() const {
    return true;
}

inline bool test::Input_IN() const {
    return rootState_subState == Input;
}

inline bool test::idle1_IN() const {
    return rootState_subState == idle1;
}

inline bool test::idle_IN() const {
    return rootState_subState == idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\test.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: main
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\main.h
*********************************************************************/

#ifndef main_H
#define main_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "mainPkg.h"
//## class main
#include "Iinput.h"
//## class display_C
#include "Idisplay.h"
//## package mainPkg

//## class main
class main : public Iinput {
public :

//#[ ignore
    //## package mainPkg
    class display_C : public Idisplay {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        display_C();
        
        //## auto_generated
        virtual ~display_C();
        
        ////    Operations    ////
        
        //## auto_generated
        Idisplay* getItsIdisplay();
        
        //## auto_generated
        Idisplay* getOutBound();
        
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
    
    //## package mainPkg
    class input_C : public Iinput {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        input_C();
        
        //## auto_generated
        virtual ~input_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectMain(main* part);
        
        //## auto_generated
        Iinput* getItsIinput();
        
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
    friend class OMAnimatedmain;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation main()
    main(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~main();
    
    ////    Operations    ////
    
    //## operation in(int)
    virtual int in(int a);
    
    //## operation start()
    void start();
    
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
    int getNumber() const;
    
    //## auto_generated
    void setNumber(int p_number);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int number;		//## attribute number
    
    ////    Relations and components    ////
    
//#[ ignore
    display_C display;
    
    input_C input;
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
    
    // idle1:
    //## statechart_method
    inline bool idle1_IN() const;
    
    // Display:
    //## statechart_method
    inline bool Display_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum main_Enum {
        OMNonState = 0,
        idle1 = 1,
        Display = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedmain : public OMAnimatedIinput {
    DECLARE_REACTIVE_META(main, OMAnimatedmain)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Display_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool main::rootState_IN() const {
    return true;
}

inline bool main::idle1_IN() const {
    return rootState_subState == idle1;
}

inline bool main::Display_IN() const {
    return rootState_subState == Display;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\main.h
*********************************************************************/

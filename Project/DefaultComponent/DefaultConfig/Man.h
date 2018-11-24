/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Man
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Man.h
*********************************************************************/

#ifndef Man_H
#define Man_H

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
//## link itsWoman
class Woman;

//## package Default

//## class Man
class Man : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMan;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Man(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Man();
    
    ////    Operations    ////
    
    //## operation Operation_0()
    void Operation_0();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getM1() const;
    
    //## auto_generated
    void setM1(int p_m1);
    
    //## auto_generated
    Woman* getItsWoman() const;
    
    //## auto_generated
    void setItsWoman(Woman* p_Woman);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int m1;		//## attribute m1
    
    ////    Relations and components    ////
    
    Woman* itsWoman;		//## link itsWoman
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsWoman(Woman* p_Woman);
    
    //## auto_generated
    void _setItsWoman(Woman* p_Woman);
    
    //## auto_generated
    void _clearItsWoman();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_1:
    //## statechart_method
    inline bool state_1_IN() const;
    
    // state_0:
    //## statechart_method
    inline bool state_0_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Man_Enum {
        OMNonState = 0,
        state_1 = 1,
        state_0 = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMan : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Man, OMAnimatedMan)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_0_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Man::rootState_IN() const {
    return true;
}

inline bool Man::state_1_IN() const {
    return rootState_subState == state_1;
}

inline bool Man::state_0_IN() const {
    return rootState_subState == state_0;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Man.h
*********************************************************************/

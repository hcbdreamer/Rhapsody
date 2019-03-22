/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AccelerRometerClass
//!	Generated Date	: ÷‹“ª, 14, 1‘¬ 2019  
	File Path	: DefaultComponent\DefaultConfig\AccelerRometerClass.h
*********************************************************************/

#ifndef AccelerRometerClass_H
#define AccelerRometerClass_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "AccelerRometerPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class AccelerRometerClass
#include "TestObjectClass.h"
//## package AccelerRometerPkg

//## class AccelerRometerClass
class AccelerRometerClass : public OMReactive, public TestObjectClass {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAccelerRometerClass;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AccelerRometerClass(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~AccelerRometerClass();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Framework operations    ////

public :

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
    enum AccelerRometerClass_Enum {
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
class OMAnimatedAccelerRometerClass : public OMAnimatedTestObjectClass {
    DECLARE_REACTIVE_META(AccelerRometerClass, OMAnimatedAccelerRometerClass)
    
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

inline bool AccelerRometerClass::rootState_IN() const {
    return true;
}

inline bool AccelerRometerClass::state_1_IN() const {
    return rootState_subState == state_1;
}

inline bool AccelerRometerClass::state_0_IN() const {
    return rootState_subState == state_0;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AccelerRometerClass.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sifu
//!	Generated Date	: ÖÜ¶þ, 13, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\sifu.h
*********************************************************************/

#ifndef sifu_H
#define sifu_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "sifuPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## package sifuPkg

//## class sifu
class sifu : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsifu;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    sifu(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~sifu();
    
    ////    Operations    ////
    
    //## operation left()
    void left();
    
    //## operation right()
    void right();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getX() const;
    
    //## auto_generated
    void setX(int p_x);
    
    //## auto_generated
    int getY() const;
    
    //## auto_generated
    void setY(int p_y);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int x;		//## attribute x
    
    int y;		//## attribute y
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // right:
    //## statechart_method
    inline bool right_IN() const;
    
    // left:
    //## statechart_method
    inline bool left_IN() const;
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum sifu_Enum {
        OMNonState = 0,
        right = 1,
        left = 2,
        idle = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsifu : virtual public AOMInstance {
    DECLARE_REACTIVE_META(sifu, OMAnimatedsifu)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void right_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void left_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool sifu::rootState_IN() const {
    return true;
}

inline bool sifu::right_IN() const {
    return rootState_subState == right;
}

inline bool sifu::left_IN() const {
    return rootState_subState == left;
}

inline bool sifu::idle_IN() const {
    return rootState_subState == idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sifu.h
*********************************************************************/

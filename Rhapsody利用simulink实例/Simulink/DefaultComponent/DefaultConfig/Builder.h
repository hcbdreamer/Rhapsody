/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Builder
//!	Generated Date	: ����, 30, 3�� 2018  
	File Path	: DefaultComponent\DefaultConfig\Builder.h
*********************************************************************/

#ifndef Builder_H
#define Builder_H

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
//## classInstance itsMagic
#include "Magic.h"
//## classInstance itsSink
#include "Sink.h"
//## classInstance itsSource
#include "Source.h"
//## package Default

//## class Builder
class Builder : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBuilder;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Builder(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Builder();
    
    ////    Operations    ////
    
    //## operation trans()
    void trans();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Magic* getItsMagic() const;
    
    //## auto_generated
    Sink* getItsSink() const;
    
    //## auto_generated
    Source* getItsSource() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Relations and components    ////
    
    Magic itsMagic;		//## classInstance itsMagic
    
    Sink itsSink;		//## classInstance itsSink
    
    Source itsSource;		//## classInstance itsSource
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
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
    enum Builder_Enum {
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
class OMAnimatedBuilder : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Builder, OMAnimatedBuilder)
    
    ////    Framework operations    ////
    
public :

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

inline bool Builder::rootState_IN() const {
    return true;
}

inline bool Builder::state_1_IN() const {
    return rootState_subState == state_1;
}

inline bool Builder::state_0_IN() const {
    return rootState_subState == state_0;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Builder.h
*********************************************************************/

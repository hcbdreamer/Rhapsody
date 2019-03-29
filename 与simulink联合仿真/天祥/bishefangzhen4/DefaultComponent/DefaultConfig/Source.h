/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Source
//!	Generated Date	: ÖÜËÄ, 19, 4ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Source.h
*********************************************************************/

#ifndef Source_H
#define Source_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omthread.h>
//## class p1_SP_C
#include "doubleFlowInterface.h"
//#[ ignore
#define OMAnim_Default_Source_setU1_double_ARGS_DECLARATION double p_U1;
//#]

//## package Default

//## class Source
class Source : public OMReactive {
public :

//#[ ignore
    //## package Default
    class p1_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p1_SP_C();
        
        //## auto_generated
        virtual ~p1_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface();
        
        //## auto_generated
        doubleFlowInterface* getOutBound();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        doubleFlowInterface* itsDoubleFlowInterface;		//## link itsDoubleFlowInterface
    };
//#]

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSource;
#endif // _OMINSTRUMENT

    double p1;		//## attribute p1
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    Source(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Source();
    
    ////    Operations    ////
    
    //## operation Fuzhi()
    void Fuzhi();
    
    //## operation Reset()
    void Reset();
    
    //## operation show()
    void show();
    
    ////    Additional operations    ////
    
    //## auto_generated
    p1_SP_C* getP1_SP() const;
    
    //## auto_generated
    p1_SP_C* get_p1_SP() const;
    
    //## auto_generated
    double getU0() const;
    
    //## auto_generated
    double getU1() const;
    
    //## auto_generated
    double getP1() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    double U0;		//## attribute U0
    
    double U1;		//## attribute U1
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## operation Judgement()
    bool Judgement();
    
    //## operation Warning()
    void Warning();

protected :

    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);

public :

//#[ ignore
    void setP1(double p_p1);
//#]

    //## auto_generated
    void setU0(double p_U0);
    
    //## auto_generated
    void setU1(double p_U1);

protected :

//#[ ignore
    p1_SP_C p1_SP;
//#]

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // reset:
    //## statechart_method
    inline bool reset_IN() const;
    
    // normal:
    //## statechart_method
    inline bool normal_IN() const;
    
    // illegal:
    //## statechart_method
    inline bool illegal_IN() const;
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;

protected :

//#[ ignore
    enum Source_Enum {
        OMNonState = 0,
        reset = 1,
        normal = 2,
        illegal = 3,
        idle = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Default_Source_setU1_double)

//#[ ignore
class OMAnimatedSource : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Source, OMAnimatedSource)
    
    DECLARE_META_OP(Default_Source_setU1_double)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void reset_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void normal_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void illegal_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Source::rootState_IN() const {
    return true;
}

inline bool Source::reset_IN() const {
    return rootState_subState == reset;
}

inline bool Source::normal_IN() const {
    return rootState_subState == normal;
}

inline bool Source::illegal_IN() const {
    return rootState_subState == illegal;
}

inline bool Source::idle_IN() const {
    return rootState_subState == idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Source.h
*********************************************************************/

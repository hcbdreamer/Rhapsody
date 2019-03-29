/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sink
//!	Generated Date	: ÖÜËÄ, 19, 4ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Sink.h
*********************************************************************/

#ifndef Sink_H
#define Sink_H

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
//## class Sink
#include "doubleFlowInterface.h"
//## package Default

//## class Sink
class Sink : public OMReactive, public doubleFlowInterface {
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
        void connectSink(Sink* part);
        
        //## auto_generated
        doubleFlowInterface* getItsDoubleFlowInterface();
        
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

    double p1;		//## attribute p1
    
    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSink;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sink(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Sink();
    
    ////    Operations    ////
    
    //## operation Direction()
    bool Direction();
    
    //## operation Fuzhi()
    void Fuzhi();
    
    //## operation RadJudgement()
    bool RadJudgement();
    
    //## operation Reget()
    void Reget();
    
    //## operation Warning()
    void Warning();
    
    //## operation showleft()
    void showleft();
    
    //## operation showright()
    void showright();
    
    ////    Additional operations    ////
    
    //## auto_generated
    p1_SP_C* getP1_SP() const;
    
    //## auto_generated
    p1_SP_C* get_p1_SP() const;
    
    //## auto_generated
    double getW() const;
    
    //## auto_generated
    void setW(double p_W);
    
    //## auto_generated
    double getW0() const;
    
    //## auto_generated
    void setW0(double p_W0);
    
    //## auto_generated
    double getY() const;
    
    //## auto_generated
    void setY(double p_Y);
    
    //## auto_generated
    double getP1() const;
    
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
    
    double W;		//## attribute W
    
    double W0;		//## attribute W0
    
    double Y;		//## attribute Y
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## operation Transverter()
    void Transverter();
    
    //## auto_generated
    int getN() const;
    
    //## auto_generated
    void setN(int p_N);
    
    //## auto_generated
    double getX() const;
    
    //## auto_generated
    void setX(double p_X);

protected :

    int N;		//## attribute N
    
    double X;		//## attribute X

public :

//#[ ignore
    void SetValue(double data, void * pCaller = NULL);
    
    void setP1(double p_p1);
//#]

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
    
    // stop:
    //## statechart_method
    inline bool stop_IN() const;
    
    // right:
    //## statechart_method
    inline bool right_IN() const;
    
    // reget:
    //## statechart_method
    inline bool reget_IN() const;
    
    // legal:
    //## statechart_method
    inline bool legal_IN() const;
    
    // left:
    //## statechart_method
    inline bool left_IN() const;
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    // Gongzuotai:
    //## statechart_method
    inline bool Gongzuotai_IN() const;

protected :

//#[ ignore
    enum Sink_Enum {
        OMNonState = 0,
        stop = 1,
        right = 2,
        reget = 3,
        legal = 4,
        left = 5,
        idle = 6,
        Gongzuotai = 7
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSink : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Sink, OMAnimatedSink)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void stop_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void right_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void reget_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void legal_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void left_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Gongzuotai_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Sink::rootState_IN() const {
    return true;
}

inline bool Sink::stop_IN() const {
    return rootState_subState == stop;
}

inline bool Sink::right_IN() const {
    return rootState_subState == right;
}

inline bool Sink::reget_IN() const {
    return rootState_subState == reget;
}

inline bool Sink::legal_IN() const {
    return rootState_subState == legal;
}

inline bool Sink::left_IN() const {
    return rootState_subState == left;
}

inline bool Sink::idle_IN() const {
    return rootState_subState == idle;
}

inline bool Sink::Gongzuotai_IN() const {
    return rootState_subState == Gongzuotai;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sink.h
*********************************************************************/

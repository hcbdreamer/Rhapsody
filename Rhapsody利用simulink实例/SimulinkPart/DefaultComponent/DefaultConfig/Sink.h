/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sink
//!	Generated Date	: ÖÜ¶þ, 26, 12ÔÂ 2017  
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
//## class Sink
#include "intFlowInterface.h"
//## package Default

//## class Sink
class Sink : public intFlowInterface {
public :

//#[ ignore
    //## package Default
    class p1_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p1_SP_C();
        
        //## auto_generated
        virtual ~p1_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectSink(Sink* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSink;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sink();
    
    //## auto_generated
    ~Sink();
    
    ////    Operations    ////
    
//#[ ignore
    void SetValue(int data, void * pCaller = NULL);
    
    void setP1(int p_p1);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p1_SP_C* getP1_SP() const;
    
    //## auto_generated
    p1_SP_C* get_p1_SP() const;
    
    //## auto_generated
    int getP1() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Attributes    ////
    
    int p1;		//## attribute p1
    
    ////    Relations and components    ////
    
//#[ ignore
    p1_SP_C p1_SP;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSink : virtual public AOMInstance {
    DECLARE_META(Sink, OMAnimatedSink)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sink.h
*********************************************************************/

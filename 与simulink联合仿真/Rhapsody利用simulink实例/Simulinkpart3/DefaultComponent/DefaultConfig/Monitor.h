/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Monitor
//!	Generated Date	: ÖÜËÄ, 28, 12ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\Monitor.h
*********************************************************************/

#ifndef Monitor_H
#define Monitor_H

//## auto_generated
#include <oxf\oxf.h>
//## class Monitor
#include "doubleFlowInterface.h"
//## package Default

//## class Monitor
class Monitor : public doubleFlowInterface {
public :

//#[ ignore
    //## package Default
    class In1_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        In1_SP_C();
        
        //## auto_generated
        virtual ~In1_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(double data, void * pCaller = NULL);
        
        //## auto_generated
        void connectMonitor(Monitor* part);
        
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

    ////    Constructors and destructors    ////
    
//#[ ignore
    Monitor();
    
    ~Monitor();
//#]

    ////    Operations    ////
    
//#[ ignore
    void SetValue(double data, void * pCaller = NULL);
    
    void doStep();
    
    void setIn1(double p_In1);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    In1_SP_C* getIn1_SP() const;
    
    //## auto_generated
    In1_SP_C* get_In1_SP() const;
    
    //## auto_generated
    double getIn1() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Attributes    ////
    
//#[ ignore
    double In1;
//#]

    ////    Relations and components    ////
    
//#[ ignore
    In1_SP_C In1_SP;
//#]
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Monitor.h
*********************************************************************/

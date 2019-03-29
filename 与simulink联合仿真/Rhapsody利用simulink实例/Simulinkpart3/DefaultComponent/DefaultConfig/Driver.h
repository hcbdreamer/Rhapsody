/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Driver
//!	Generated Date	: ÖÜËÄ, 28, 12ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\Driver.h
*********************************************************************/

#ifndef Driver_H
#define Driver_H

//## auto_generated
#include <oxf\oxf.h>
//## class Out1_SP_C
#include "doubleFlowInterface.h"
//## package Default

//## class Driver
class Driver {
public :

//#[ ignore
    //## package Default
    class Out1_SP_C : public doubleFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Out1_SP_C();
        
        //## auto_generated
        virtual ~Out1_SP_C();
        
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

    ////    Constructors and destructors    ////
    
//#[ ignore
    Driver();
    
    ~Driver();
//#]

    ////    Operations    ////
    
//#[ ignore
    void doStep();
    
    void setOut1(double p_Out1);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    Out1_SP_C* getOut1_SP() const;
    
    //## auto_generated
    Out1_SP_C* get_Out1_SP() const;
    
    //## auto_generated
    double getOut1() const;
    
    ////    Attributes    ////

protected :

//#[ ignore
    double Out1;
//#]

    ////    Relations and components    ////
    
//#[ ignore
    Out1_SP_C Out1_SP;
//#]
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Driver.h
*********************************************************************/

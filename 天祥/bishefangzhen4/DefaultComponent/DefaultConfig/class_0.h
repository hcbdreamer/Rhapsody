/*********************************************************************
	Rhapsody	: 8.2 
	Login		: ftx
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_0
//!	Generated Date	: ÷‹»’, 25, 3‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\class_0.h
*********************************************************************/

#ifndef class_0_H
#define class_0_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <SimulinkIntegration\OMSimulinkBlock.h>
//## auto_generated
#include <oxf\event.h>
//## class class_0
#include "doubleFlowInterface.h"
//## package Default

//## class class_0
class class_0 : public OMSimulinkBlock, public doubleFlowInterface {
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
        void connectClass_0(class_0* part);
        
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
    class_0(IOxfActive* theActiveContext = 0);
    
    ~class_0();
//#]

    ////    Operations    ////
    
//#[ ignore
    void SetValue(double data, void * pCaller = NULL);
    
    void doStep();
    
    void setIn1(double p_In1);
    
    void setOut1(double p_Out1);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    In1_SP_C* getIn1_SP() const;
    
    //## auto_generated
    In1_SP_C* get_In1_SP() const;
    
    //## auto_generated
    Out1_SP_C* getOut1_SP() const;
    
    //## auto_generated
    Out1_SP_C* get_Out1_SP() const;
    
    //## auto_generated
    double getIn1() const;
    
    //## auto_generated
    double getOut1() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Attributes    ////
    
//#[ ignore
    double In1;
    
    double Out1;
//#]

    ////    Relations and components    ////
    
//#[ ignore
    In1_SP_C In1_SP;
    
    Out1_SP_C Out1_SP;
//#]
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_0.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_3
//!	Generated Date	: ÖÜËÄ, 28, 12ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\class_3.h
*********************************************************************/

#ifndef class_3_H
#define class_3_H

//## auto_generated
#include <oxf\oxf.h>
//## class class_3
#include "doubleFlowInterface.h"
//## package Default

//## class class_3
class class_3 : public doubleFlowInterface {
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
        void connectClass_3(class_3* part);
        
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
    class_3();
    
    ~class_3();
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

protected :

    //## auto_generated
    int getM_nSampleTime() const;
    
    //## auto_generated
    void setM_nSampleTime(int p_m_nSampleTime);
    
    //## auto_generated
    void initRelations();
    
    ////    Attributes    ////
    
//#[ ignore
    double In1;
    
    double Out1;
//#]

    int m_nSampleTime;		//## attribute m_nSampleTime
    
    ////    Relations and components    ////
    
//#[ ignore
    In1_SP_C In1_SP;
    
    Out1_SP_C Out1_SP;
//#]
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_3.h
*********************************************************************/

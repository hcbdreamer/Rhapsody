/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_5
//!	Generated Date	: ÖÜ¶þ, 26, 12ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\class_5.h
*********************************************************************/

#ifndef class_5_H
#define class_5_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <SimulinkIntegration\OMSimulinkBlock.h>
//## auto_generated
#include <oxf\event.h>
//## class class_5
#include "doubleFlowInterface.h"
//## package Default

//## class class_5
class class_5 : public OMSimulinkBlock, public doubleFlowInterface {
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
        void connectClass_5(class_5* part);
        
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

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedclass_5;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
//#[ ignore
    class_5(IOxfActive* theActiveContext = 0);
    
    ~class_5();
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedclass_5 : virtual public AOMInstance {
    DECLARE_META(class_5, OMAnimatedclass_5)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_5.h
*********************************************************************/

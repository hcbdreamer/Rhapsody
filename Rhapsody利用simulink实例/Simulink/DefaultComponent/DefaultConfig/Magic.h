/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Magic
//!	Generated Date	: ÷‹ŒÂ, 30, 3‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\Magic.h
*********************************************************************/

#ifndef Magic_H
#define Magic_H

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
//## class Magic
#include "intFlowInterface.h"
//## package Default

//## class Magic
class Magic : public OMSimulinkBlock, public intFlowInterface {
public :

//#[ ignore
    //## package Default
    class In1_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        In1_SP_C();
        
        //## auto_generated
        virtual ~In1_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectMagic(Magic* part);
        
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
    
    //## package Default
    class Out1_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Out1_SP_C();
        
        //## auto_generated
        virtual ~Out1_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface();
        
        //## auto_generated
        intFlowInterface* getOutBound();
        
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
    friend class OMAnimatedMagic;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
//#[ ignore
    Magic(IOxfActive* theActiveContext = 0);
    
    ~Magic();
//#]

    ////    Operations    ////
    
//#[ ignore
    void SetValue(int data, void * pCaller = NULL);
    
    void doStep();
    
    void setIn1(int p_In1);
    
    void setOut1(int p_Out1);
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
    int getIn1() const;
    
    //## auto_generated
    int getOut1() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Attributes    ////
    
//#[ ignore
    int In1;
    
    int Out1;
//#]

    ////    Relations and components    ////
    
//#[ ignore
    In1_SP_C In1_SP;
    
    Out1_SP_C Out1_SP;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMagic : virtual public AOMInstance {
    DECLARE_META(Magic, OMAnimatedMagic)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Magic.h
*********************************************************************/

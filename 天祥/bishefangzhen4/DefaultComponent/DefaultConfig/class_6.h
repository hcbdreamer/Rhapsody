/*********************************************************************
	Rhapsody	: 8.2 
	Login		: ftx
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_6
//!	Generated Date	: ÖÜËÄ, 29, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\class_6.h
*********************************************************************/

#ifndef class_6_H
#define class_6_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## class p1_SP_C
#include "intFlowInterface.h"
//#[ ignore
#define OMAnim_Default_class_6_setP1_int_ARGS_DECLARATION int p_p1;
//#]

//## package Default

//## class class_6
class class_6 {
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
    friend class OMAnimatedclass_6;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    class_6();
    
    //## auto_generated
    ~class_6();
    
    ////    Operations    ////
    
//#[ ignore
    void setP1(int p_p1);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p1_SP_C* getP1_SP() const;
    
    //## auto_generated
    p1_SP_C* get_p1_SP() const;
    
    //## auto_generated
    int getP1() const;
    
    ////    Attributes    ////

protected :

    int p1;		//## attribute p1
    
    ////    Relations and components    ////
    
//#[ ignore
    p1_SP_C p1_SP;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Default_class_6_setP1_int)

//#[ ignore
class OMAnimatedclass_6 : virtual public AOMInstance {
    DECLARE_META(class_6, OMAnimatedclass_6)
    
    DECLARE_META_OP(Default_class_6_setP1_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_6.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2 
	Login		: ftx
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Source_copy
//!	Generated Date	: ÷‹“ª, 26, 3‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\Source_copy.h
*********************************************************************/

#ifndef Source_copy_H
#define Source_copy_H

//## auto_generated
#include <oxf\oxf.h>
//## class p1_SP_C
#include "intFlowInterface.h"
//## package Default

//## class Source_copy
class Source_copy {
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

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Source_copy();
    
    //## auto_generated
    ~Source_copy();
    
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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Source_copy.h
*********************************************************************/

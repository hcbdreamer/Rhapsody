/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: A
//!	Generated Date	: ÷‹ŒÂ, 30, 3‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\A.h
*********************************************************************/

#ifndef A_H
#define A_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsB
class B;

//## package Default

//## class A
class A {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    A();
    
    //## auto_generated
    ~A();
    
    ////    Additional operations    ////
    
    //## auto_generated
    B* getItsB() const;
    
    //## auto_generated
    void setItsB(B* p_B);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    B* itsB;		//## link itsB
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsB(B* p_B);
    
    //## auto_generated
    void _setItsB(B* p_B);
    
    //## auto_generated
    void _clearItsB();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedA : virtual public AOMInstance {
    DECLARE_META(A, OMAnimatedA)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\A.h
*********************************************************************/

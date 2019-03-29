/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: A
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\A.h
*********************************************************************/

#ifndef A_H
#define A_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsB
class B;

//## package mainPkg

//## class A
class A {
    ////    Constructors and destructors    ////
    
public :

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\A.h
*********************************************************************/

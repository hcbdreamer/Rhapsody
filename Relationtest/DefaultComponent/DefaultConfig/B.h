/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: B
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\B.h
*********************************************************************/

#ifndef B_H
#define B_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsA
class A;

//## package mainPkg

//## class B
class B {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    B();
    
    //## auto_generated
    ~B();
    
    ////    Additional operations    ////
    
    //## auto_generated
    A* getItsA() const;
    
    //## auto_generated
    void setItsA(A* p_A);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    A* itsA;		//## link itsA
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsA(A* p_A);
    
    //## auto_generated
    void _setItsA(A* p_A);
    
    //## auto_generated
    void _clearItsA();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\B.h
*********************************************************************/

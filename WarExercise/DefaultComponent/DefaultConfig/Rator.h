/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Rator
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Rator.h
*********************************************************************/

#ifndef Rator_H
#define Rator_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsRedTank1
class RedTank1;

//## package Default

//## class Rator
class Rator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Rator();
    
    //## auto_generated
    ~Rator();
    
    ////    Additional operations    ////
    
    //## auto_generated
    RedTank1* getItsRedTank1() const;
    
    //## auto_generated
    void setItsRedTank1(RedTank1* p_RedTank1);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    RedTank1* itsRedTank1;		//## link itsRedTank1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsRedTank1(RedTank1* p_RedTank1);
    
    //## auto_generated
    void _setItsRedTank1(RedTank1* p_RedTank1);
    
    //## auto_generated
    void _clearItsRedTank1();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Rator.h
*********************************************************************/

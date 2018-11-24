/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RedPlane
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\RedPlane.h
*********************************************************************/

#ifndef RedPlane_H
#define RedPlane_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsRator1
class Rator1;

//## package Default

//## class RedPlane
class RedPlane {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RedPlane();
    
    //## auto_generated
    ~RedPlane();
    
    ////    Operations    ////
    
    //## operation Location(int)
    Struct Location(int ID);
    
    //## operation SendPosition(int)
    Struct* SendPosition(int ID);
    
    ////    Additional operations    ////
    
    //## auto_generated
    Rator1* getItsRator1() const;
    
    //## auto_generated
    void setItsRator1(Rator1* p_Rator1);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Rator1* itsRator1;		//## link itsRator1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsRator1(Rator1* p_Rator1);
    
    //## auto_generated
    void _setItsRator1(Rator1* p_Rator1);
    
    //## auto_generated
    void _clearItsRator1();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RedPlane.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BluePlane
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\BluePlane.h
*********************************************************************/

#ifndef BluePlane_H
#define BluePlane_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsBlueTank
class BlueTank;

//## package Default

//## class BluePlane
class BluePlane {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    BluePlane();
    
    //## auto_generated
    ~BluePlane();
    
    ////    Additional operations    ////
    
    //## auto_generated
    BlueTank* getItsBlueTank() const;
    
    //## auto_generated
    void setItsBlueTank(BlueTank* p_BlueTank);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    BlueTank* itsBlueTank;		//## link itsBlueTank
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBlueTank(BlueTank* p_BlueTank);
    
    //## auto_generated
    void _setItsBlueTank(BlueTank* p_BlueTank);
    
    //## auto_generated
    void _clearItsBlueTank();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BluePlane.h
*********************************************************************/

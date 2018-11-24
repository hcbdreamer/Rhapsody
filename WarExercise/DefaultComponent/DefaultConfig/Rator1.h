/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Rator1
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Rator1.h
*********************************************************************/

#ifndef Rator1_H
#define Rator1_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsBluePlane
class BluePlane;

//## link itsBlueTank
class BlueTank;

//## link itsRedPlane
class RedPlane;

//## link itsRedTank
class RedTank;

//## package Default

//## class Rator1
class Rator1 {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Rator1();
    
    //## auto_generated
    ~Rator1();
    
    ////    Additional operations    ////
    
    //## auto_generated
    BluePlane* getItsBluePlane() const;
    
    //## auto_generated
    void setItsBluePlane(BluePlane* p_BluePlane);
    
    //## auto_generated
    BluePlane* getItsBluePlane_1() const;
    
    //## auto_generated
    void setItsBluePlane_1(BluePlane* p_BluePlane);
    
    //## auto_generated
    BlueTank* getItsBlueTank() const;
    
    //## auto_generated
    void setItsBlueTank(BlueTank* p_BlueTank);
    
    //## auto_generated
    RedPlane* getItsRedPlane() const;
    
    //## auto_generated
    void setItsRedPlane(RedPlane* p_RedPlane);
    
    //## auto_generated
    RedTank* getItsRedTank() const;
    
    //## auto_generated
    void setItsRedTank(RedTank* p_RedTank);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    BluePlane* itsBluePlane;		//## link itsBluePlane
    
    BluePlane* itsBluePlane_1;		//## link itsBluePlane_1
    
    BlueTank* itsBlueTank;		//## link itsBlueTank
    
    RedPlane* itsRedPlane;		//## link itsRedPlane
    
    RedTank* itsRedTank;		//## link itsRedTank
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBluePlane(BluePlane* p_BluePlane);
    
    //## auto_generated
    void _setItsBluePlane(BluePlane* p_BluePlane);
    
    //## auto_generated
    void _clearItsBluePlane();
    
    //## auto_generated
    void __setItsBluePlane_1(BluePlane* p_BluePlane);
    
    //## auto_generated
    void _setItsBluePlane_1(BluePlane* p_BluePlane);
    
    //## auto_generated
    void _clearItsBluePlane_1();
    
    //## auto_generated
    void __setItsBlueTank(BlueTank* p_BlueTank);
    
    //## auto_generated
    void _setItsBlueTank(BlueTank* p_BlueTank);
    
    //## auto_generated
    void _clearItsBlueTank();
    
    //## auto_generated
    void __setItsRedPlane(RedPlane* p_RedPlane);
    
    //## auto_generated
    void _setItsRedPlane(RedPlane* p_RedPlane);
    
    //## auto_generated
    void _clearItsRedPlane();
    
    //## auto_generated
    void __setItsRedTank(RedTank* p_RedTank);
    
    //## auto_generated
    void _setItsRedTank(RedTank* p_RedTank);
    
    //## auto_generated
    void _clearItsRedTank();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Rator1.h
*********************************************************************/

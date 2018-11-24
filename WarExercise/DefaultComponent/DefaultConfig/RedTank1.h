/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RedTank1
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\RedTank1.h
*********************************************************************/

#ifndef RedTank1_H
#define RedTank1_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsBluePlane
class BluePlane;

//## link itsBlueTank
class BlueTank;

//## link itsRator
class Rator;

//## link itsRedPlane
class RedPlane;

//## package Default

//## class RedTank1
class RedTank1 {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RedTank1();
    
    //## auto_generated
    ~RedTank1();
    
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
    Rator* getItsRator() const;
    
    //## auto_generated
    void setItsRator(Rator* p_Rator);
    
    //## auto_generated
    RedPlane* getItsRedPlane() const;
    
    //## auto_generated
    void setItsRedPlane(RedPlane* p_RedPlane);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    BluePlane* itsBluePlane;		//## link itsBluePlane
    
    BluePlane* itsBluePlane_1;		//## link itsBluePlane_1
    
    BlueTank* itsBlueTank;		//## link itsBlueTank
    
    Rator* itsRator;		//## link itsRator
    
    RedPlane* itsRedPlane;		//## link itsRedPlane
    
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
    void __setItsRator(Rator* p_Rator);
    
    //## auto_generated
    void _setItsRator(Rator* p_Rator);
    
    //## auto_generated
    void _clearItsRator();
    
    //## auto_generated
    void __setItsRedPlane(RedPlane* p_RedPlane);
    
    //## auto_generated
    void _setItsRedPlane(RedPlane* p_RedPlane);
    
    //## auto_generated
    void _clearItsRedPlane();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RedTank1.h
*********************************************************************/

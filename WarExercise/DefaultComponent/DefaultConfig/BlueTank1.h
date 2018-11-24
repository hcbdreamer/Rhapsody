/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BlueTank1
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\BlueTank1.h
*********************************************************************/

#ifndef BlueTank1_H
#define BlueTank1_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsBluePlane
class BluePlane;

//## link itsRator
class Rator;

//## link itsRedPlane
class RedPlane;

//## link itsRedTank
class RedTank;

//## package Default

//## class BlueTank1
class BlueTank1 {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    BlueTank1();
    
    //## auto_generated
    ~BlueTank1();
    
    ////    Additional operations    ////
    
    //## auto_generated
    BluePlane* getItsBluePlane() const;
    
    //## auto_generated
    void setItsBluePlane(BluePlane* p_BluePlane);
    
    //## auto_generated
    Rator* getItsRator() const;
    
    //## auto_generated
    void setItsRator(Rator* p_Rator);
    
    //## auto_generated
    RedPlane* getItsRedPlane() const;
    
    //## auto_generated
    void setItsRedPlane(RedPlane* p_RedPlane);
    
    //## auto_generated
    RedTank* getItsRedTank() const;
    
    //## auto_generated
    void setItsRedTank(RedTank* p_RedTank);
    
    //## auto_generated
    RedTank* getItsRedTank_1() const;
    
    //## auto_generated
    void setItsRedTank_1(RedTank* p_RedTank);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    BluePlane* itsBluePlane;		//## link itsBluePlane
    
    Rator* itsRator;		//## link itsRator
    
    RedPlane* itsRedPlane;		//## link itsRedPlane
    
    RedTank* itsRedTank;		//## link itsRedTank
    
    RedTank* itsRedTank_1;		//## link itsRedTank_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBluePlane(BluePlane* p_BluePlane);
    
    //## auto_generated
    void _setItsBluePlane(BluePlane* p_BluePlane);
    
    //## auto_generated
    void _clearItsBluePlane();
    
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
    
    //## auto_generated
    void __setItsRedTank(RedTank* p_RedTank);
    
    //## auto_generated
    void _setItsRedTank(RedTank* p_RedTank);
    
    //## auto_generated
    void _clearItsRedTank();
    
    //## auto_generated
    void __setItsRedTank_1(RedTank* p_RedTank);
    
    //## auto_generated
    void _setItsRedTank_1(RedTank* p_RedTank);
    
    //## auto_generated
    void _clearItsRedTank_1();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BlueTank1.h
*********************************************************************/

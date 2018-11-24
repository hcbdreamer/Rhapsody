/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BluePalne1
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\BluePalne1.h
*********************************************************************/

#ifndef BluePalne1_H
#define BluePalne1_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsBlueTank
class BlueTank;

//## link itsRator
class Rator;

//## link itsRedPlane
class RedPlane;

//## link itsRedTank
class RedTank;

//## package Default

//## class BluePalne1
class BluePalne1 {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    BluePalne1();
    
    //## auto_generated
    ~BluePalne1();
    
    ////    Additional operations    ////
    
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
    
    BlueTank* itsBlueTank;		//## link itsBlueTank
    
    Rator* itsRator;		//## link itsRator
    
    RedPlane* itsRedPlane;		//## link itsRedPlane
    
    RedTank* itsRedTank;		//## link itsRedTank
    
    RedTank* itsRedTank_1;		//## link itsRedTank_1
    
    ////    Framework operations    ////

public :

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
	File Path	: DefaultComponent\DefaultConfig\BluePalne1.h
*********************************************************************/

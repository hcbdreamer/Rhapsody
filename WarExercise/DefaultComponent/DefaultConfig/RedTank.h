/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RedTank
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\RedTank.h
*********************************************************************/

#ifndef RedTank_H
#define RedTank_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## link itsBluePalne1
class BluePalne1;

//## package Default

//## class RedTank
class RedTank {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RedTank();
    
    //## auto_generated
    ~RedTank();
    
    ////    Additional operations    ////
    
    //## auto_generated
    BluePalne1* getItsBluePalne1() const;
    
    //## auto_generated
    void setItsBluePalne1(BluePalne1* p_BluePalne1);
    
    //## auto_generated
    BluePalne1* getItsBluePalne1_1() const;
    
    //## auto_generated
    void setItsBluePalne1_1(BluePalne1* p_BluePalne1);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    BluePalne1* itsBluePalne1;		//## link itsBluePalne1
    
    BluePalne1* itsBluePalne1_1;		//## link itsBluePalne1_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBluePalne1(BluePalne1* p_BluePalne1);
    
    //## auto_generated
    void _setItsBluePalne1(BluePalne1* p_BluePalne1);
    
    //## auto_generated
    void _clearItsBluePalne1();
    
    //## auto_generated
    void __setItsBluePalne1_1(BluePalne1* p_BluePalne1);
    
    //## auto_generated
    void _setItsBluePalne1_1(BluePalne1* p_BluePalne1);
    
    //## auto_generated
    void _clearItsBluePalne1_1();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RedTank.h
*********************************************************************/

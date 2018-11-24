/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_4
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\class_4.h
*********************************************************************/

#ifndef class_4_H
#define class_4_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsMan
class Man;

//## package Default

//## class class_4
class class_4 {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    class_4();
    
    //## auto_generated
    ~class_4();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Man* getItsMan() const;
    
    //## auto_generated
    void setItsMan(Man* p_Man);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Man* itsMan;		//## link itsMan
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsMan(Man* p_Man);
    
    //## auto_generated
    void _setItsMan(Man* p_Man);
    
    //## auto_generated
    void _clearItsMan();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_4.h
*********************************************************************/

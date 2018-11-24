/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Woman
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Woman.h
*********************************************************************/

#ifndef Woman_H
#define Woman_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsMan
class Man;

//## package Default

//## class Woman
class Woman {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWoman;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Woman();
    
    //## auto_generated
    ~Woman();
    
    ////    Operations    ////
    
    //## operation Operation_0()
    void Operation_0();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getM2() const;
    
    //## auto_generated
    void setM2(int p_m2);
    
    //## auto_generated
    Man* getItsMan() const;
    
    //## auto_generated
    void setItsMan(Man* p_Man);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int m2;		//## attribute m2
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWoman : virtual public AOMInstance {
    DECLARE_META(Woman, OMAnimatedWoman)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Woman.h
*********************************************************************/

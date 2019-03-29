/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_5
//!	Generated Date	: ÷‹ŒÂ, 30, 3‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\class_5.h
*********************************************************************/

#ifndef class_5_H
#define class_5_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## classInstance itsC
#include "C.h"
//## classInstance itsD
#include "D.h"
//## package Default

//## class class_5
class class_5 {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedclass_5;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    class_5();
    
    //## auto_generated
    ~class_5();
    
    ////    Additional operations    ////
    
    //## auto_generated
    C* getItsC() const;
    
    //## auto_generated
    D* getItsD() const;
    
    ////    Relations and components    ////

protected :

    C itsC;		//## classInstance itsC
    
    D itsD;		//## classInstance itsD
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedclass_5 : virtual public AOMInstance {
    DECLARE_META(class_5, OMAnimatedclass_5)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_5.h
*********************************************************************/

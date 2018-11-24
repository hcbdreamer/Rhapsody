/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Adam
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Adam.h
*********************************************************************/

#ifndef Adam_H
#define Adam_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsEva
#include "Eva.h"
//## package Default

//## class Adam
class Adam {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAdam;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Adam();
    
    //## auto_generated
    ~Adam();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Eva* getItsEva() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    Eva itsEva;		//## link itsEva
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAdam : virtual public AOMInstance {
    DECLARE_META(Adam, OMAnimatedAdam)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Adam.h
*********************************************************************/

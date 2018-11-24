/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Builder
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Builder.h
*********************************************************************/

#ifndef Builder_H
#define Builder_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## classInstance Adam
#include "man.h"
//## classInstance Eva
#include "woman.h"
//## package Default

//## class Builder
class Builder {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBuilder;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Builder();
    
    //## auto_generated
    ~Builder();
    
    ////    Additional operations    ////
    
    //## auto_generated
    man* getAdam() const;
    
    //## auto_generated
    woman* getEva() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    man Adam;		//## classInstance Adam
    
    woman Eva;		//## classInstance Eva
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBuilder : virtual public AOMInstance {
    DECLARE_META(Builder, OMAnimatedBuilder)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Builder.h
*********************************************************************/

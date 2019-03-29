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
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsA
#include "A.h"
//## classInstance itsB
#include "B.h"
//## package Default

//## class Builder
class Builder : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBuilder;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Builder(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Builder();
    
    ////    Additional operations    ////
    
    //## auto_generated
    A* getItsA() const;
    
    //## auto_generated
    B* getItsB() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    A itsA;		//## classInstance itsA
    
    B itsB;		//## classInstance itsB
    
    ////    Framework operations    ////

public :

    //## auto_generated
    virtual void destroy();
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

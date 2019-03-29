/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Builder
//!	Generated Date	: ÖÜ¶þ, 26, 12ÔÂ 2017  
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
//## classInstance itsMagic
#include "Magic.h"
//## classInstance itsSink
#include "Sink.h"
//## classInstance itsSource
#include "Source.h"
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
    Magic* getItsMagic() const;
    
    //## auto_generated
    Sink* getItsSink() const;
    
    //## auto_generated
    Source* getItsSource() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    Magic itsMagic;		//## classInstance itsMagic
    
    Sink itsSink;		//## classInstance itsSink
    
    Source itsSource;		//## classInstance itsSource
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
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

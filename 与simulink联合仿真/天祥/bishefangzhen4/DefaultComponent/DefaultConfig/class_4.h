/*********************************************************************
	Rhapsody	: 8.2 
	Login		: ftx
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_4
//!	Generated Date	: ÖÜËÄ, 29, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\class_4.h
*********************************************************************/

#ifndef class_4_H
#define class_4_H

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
//## classInstance itsNodel
#include "Nodel.h"
//## classInstance itsSink
#include "Sink.h"
//## classInstance itsSource
#include "Source.h"
//## package Default

//## class class_4
class class_4 : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedclass_4;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    class_4(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~class_4();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Nodel* getItsNodel() const;
    
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
    
    Nodel itsNodel;		//## classInstance itsNodel
    
    Sink itsSink;		//## classInstance itsSink
    
    Source itsSource;		//## classInstance itsSource
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedclass_4 : virtual public AOMInstance {
    DECLARE_META(class_4, OMAnimatedclass_4)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_4.h
*********************************************************************/

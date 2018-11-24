/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: Release
	Model Element	: builder
//!	Generated Date	: ÖÜËÄ, 16, 11ÔÂ 2017  
	File Path	: DefaultComponent\Release\builder.h
*********************************************************************/

#ifndef builder_H
#define builder_H

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
//## classInstance itsButton
#include "Button.h"
//## classInstance itsDisplay
#include "Display.h"
//## classInstance itsTimer
#include "Timer.h"
//## package Default

//## class builder
class builder : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedbuilder;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    builder(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~builder();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Button* getItsButton() const;
    
    //## auto_generated
    Display* getItsDisplay() const;
    
    //## auto_generated
    Timer* getItsTimer() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    Button itsButton;		//## classInstance itsButton
    
    Display itsDisplay;		//## classInstance itsDisplay
    
    Timer itsTimer;		//## classInstance itsTimer
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedbuilder : virtual public AOMInstance {
    DECLARE_META(builder, OMAnimatedbuilder)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Release\builder.h
*********************************************************************/

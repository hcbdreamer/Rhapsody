/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: Release
	Model Element	: Default
//!	Generated Date	: ÖÜËÄ, 12, 4ÔÂ 2018  
	File Path	: DefaultComponent\Release\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Button;

//## auto_generated
class Display;

//## auto_generated
class Timer;

//## auto_generated
class builder;

//#[ ignore
#define evStartStop_Default_id 18601

#define evPress_Default_id 18602

#define evRelease_Default_id 18603

#define evReset_Default_id 18604
//#]

//## package Default



//## event evStartStop()
class evStartStop : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStartStop;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStartStop();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStartStop : virtual public AOMEvent {
    DECLARE_META_EVENT(evStartStop)
};
//#]
#endif // _OMINSTRUMENT

//## event evPress()
class evPress : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPress;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPress();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPress : virtual public AOMEvent {
    DECLARE_META_EVENT(evPress)
};
//#]
#endif // _OMINSTRUMENT

//## event evRelease()
class evRelease : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRelease;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRelease();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRelease : virtual public AOMEvent {
    DECLARE_META_EVENT(evRelease)
};
//#]
#endif // _OMINSTRUMENT

//## event evReset()
class evReset : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevReset;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evReset();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevReset : virtual public AOMEvent {
    DECLARE_META_EVENT(evReset)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Release\Default.h
*********************************************************************/

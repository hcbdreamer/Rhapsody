/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: ÖÜËÄ, 19, 4ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Default.h
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
class Builder;

//## auto_generated
class Nodel;

//## auto_generated
class Sink;

//## auto_generated
class Source;

//#[ ignore
#define EvStart_Default_id 18601

#define evjudge_Default_id 18602

#define evlegal_Default_id 18603

#define evbegan_Default_id 18604

#define evStart2_Default_id 18605

#define evReset_Default_id 18606
//#]

//## package Default



//## event EvStart()
class EvStart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEvStart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EvStart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEvStart : virtual public AOMEvent {
    DECLARE_META_EVENT(EvStart)
};
//#]
#endif // _OMINSTRUMENT

//## event evjudge()
class evjudge : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevjudge;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evjudge();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevjudge : virtual public AOMEvent {
    DECLARE_META_EVENT(evjudge)
};
//#]
#endif // _OMINSTRUMENT

//## event evlegal()
class evlegal : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevlegal;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evlegal();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevlegal : virtual public AOMEvent {
    DECLARE_META_EVENT(evlegal)
};
//#]
#endif // _OMINSTRUMENT

//## event evbegan()
class evbegan : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevbegan;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evbegan();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevbegan : virtual public AOMEvent {
    DECLARE_META_EVENT(evbegan)
};
//#]
#endif // _OMINSTRUMENT

//## event evStart2()
class evStart2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStart2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStart2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStart2 : virtual public AOMEvent {
    DECLARE_META_EVENT(evStart2)
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
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/

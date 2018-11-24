/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: TesterPkg
//!	Generated Date	: ÖÜ¶þ, 28, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\TesterPkg.h
*********************************************************************/

#ifndef TesterPkg_H
#define TesterPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class KeyReader;

//## auto_generated
class Tester;

//## auto_generated
class TesterBuilder;

//#[ ignore
#define evS1_TesterPkg_HardwarePkg_id 11801

#define evS2_TesterPkg_HardwarePkg_id 11802
//#]

//## package HardwarePkg::TesterPkg



//## event evS1()
class evS1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevS1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evS1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevS1 : virtual public AOMEvent {
    DECLARE_META_EVENT(evS1)
};
//#]
#endif // _OMINSTRUMENT

//## event evS2()
class evS2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevS2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evS2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevS2 : virtual public AOMEvent {
    DECLARE_META_EVENT(evS2)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\TesterPkg.h
*********************************************************************/

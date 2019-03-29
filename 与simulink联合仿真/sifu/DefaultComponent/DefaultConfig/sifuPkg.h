/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sifuPkg
//!	Generated Date	: ÖÜ¶þ, 13, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\sifuPkg.h
*********************************************************************/

#ifndef sifuPkg_H
#define sifuPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class sifu;

//## auto_generated
class sifu1;

//## auto_generated
class sifu2;

//#[ ignore
#define trleft_sifuPkg_id 22601

#define tright_sifuPkg_id 22602

#define tleft_sifuPkg_id 22603
//#]

//## package sifuPkg



//## event trleft()
class trleft : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtrleft;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    trleft();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtrleft : virtual public AOMEvent {
    DECLARE_META_EVENT(trleft)
};
//#]
#endif // _OMINSTRUMENT

//## event tright()
class tright : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtright;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    tright();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtright : virtual public AOMEvent {
    DECLARE_META_EVENT(tright)
};
//#]
#endif // _OMINSTRUMENT

//## event tleft()
class tleft : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtleft;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    tleft();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtleft : virtual public AOMEvent {
    DECLARE_META_EVENT(tleft)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sifuPkg.h
*********************************************************************/

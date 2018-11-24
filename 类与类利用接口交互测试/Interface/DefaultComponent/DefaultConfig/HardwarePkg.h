/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HardwarePkg
//!	Generated Date	: ÷‹ŒÂ, 19, 1‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\HardwarePkg.h
*********************************************************************/

#ifndef HardwarePkg_H
#define HardwarePkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Builder;

//## auto_generated
class test1;

//#[ ignore
#define evOn_HardwarePkg_id 12601
//#]

//## package HardwarePkg



//## event evOn()
class evOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevOn : virtual public AOMEvent {
    DECLARE_META_EVENT(evOn)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HardwarePkg.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TestPkg
//!	Generated Date	: ÷‹ŒÂ, 19, 1‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\TestPkg.h
*********************************************************************/

#ifndef TestPkg_H
#define TestPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class test;

//#[ ignore
#define evStart_TestPkg_id 18001
//#]

//## package TestPkg



//## event evStart()
class evStart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStart : virtual public AOMEvent {
    DECLARE_META_EVENT(evStart)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TestPkg.h
*********************************************************************/

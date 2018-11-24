/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: mainPkg
//!	Generated Date	: ÖÜÁù, 20, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\mainPkg.h
*********************************************************************/

#ifndef mainPkg_H
#define mainPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class main;

//#[ ignore
#define evstart_mainPkg_id 19001
//#]

//## package mainPkg



//## event evstart()
class evstart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevstart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evstart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevstart : virtual public AOMEvent {
    DECLARE_META_EVENT(evstart)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\mainPkg.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Iinput
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Iinput.h
*********************************************************************/

#ifndef Iinput_H
#define Iinput_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "InterfacePkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## package InterfacePkg

//## class Iinput
class Iinput : virtual public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIinput;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Iinput();
    
    //## auto_generated
    virtual ~Iinput() = 0;
    
    ////    Operations    ////
    
    //## operation in(int)
    virtual int in(int a) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIinput : virtual public AOMInstance {
    DECLARE_META(Iinput, OMAnimatedIinput)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Iinput.h
*********************************************************************/

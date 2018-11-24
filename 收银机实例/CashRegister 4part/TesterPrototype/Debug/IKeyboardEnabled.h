/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: IKeyboardEnabled
//!	Generated Date	: ÷‹“ª, 27, 11‘¬ 2017  
	File Path	: TesterPrototype\Debug\IKeyboardEnabled.h
*********************************************************************/

#ifndef IKeyboardEnabled_H
#define IKeyboardEnabled_H

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

//## class IKeyboardEnabled
class IKeyboardEnabled : virtual public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIKeyboardEnabled;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IKeyboardEnabled();
    
    //## auto_generated
    virtual ~IKeyboardEnabled() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIKeyboardEnabled : virtual public AOMInstance {
    DECLARE_META(IKeyboardEnabled, OMAnimatedIKeyboardEnabled)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\IKeyboardEnabled.h
*********************************************************************/

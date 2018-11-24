/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Iinput
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Iinput.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Iinput.h"
//## event evstart()
#include "mainPkg.h"
//#[ ignore
#define InterfacePkg_Iinput_Iinput_SERIALIZE OM_NO_OP

#define InterfacePkg_Iinput_in_SERIALIZE aomsmethod->addAttribute("a", x2String(a));
//#]

//## package InterfacePkg

//## class Iinput
Iinput::Iinput() {
    NOTIFY_CONSTRUCTOR(Iinput, Iinput(), 0, InterfacePkg_Iinput_Iinput_SERIALIZE);
}

Iinput::~Iinput() {
    NOTIFY_DESTRUCTOR(~Iinput, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Iinput, InterfacePkg, InterfacePkg, false, OMAnimatedIinput)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Iinput.cpp
*********************************************************************/

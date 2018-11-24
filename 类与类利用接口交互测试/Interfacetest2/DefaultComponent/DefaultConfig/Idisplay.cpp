/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Idisplay
//!	Generated Date	: ÖÜÁù, 20, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Idisplay.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Idisplay.h"
//#[ ignore
#define InterfacePkg_Idisplay_Idisplay_SERIALIZE OM_NO_OP

#define InterfacePkg_Idisplay_show_SERIALIZE aomsmethod->addAttribute("aMsg", x2String(aMsg));
//#]

//## package InterfacePkg

//## class Idisplay
Idisplay::Idisplay() {
    NOTIFY_CONSTRUCTOR(Idisplay, Idisplay(), 0, InterfacePkg_Idisplay_Idisplay_SERIALIZE);
}

Idisplay::~Idisplay() {
    NOTIFY_DESTRUCTOR(~Idisplay, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Idisplay, InterfacePkg, InterfacePkg, false, OMAnimatedIdisplay)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Idisplay.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: IDisplay
//!	Generated Date	: ÖÜÎå, 24, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\IDisplay.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IDisplay.h"
//#[ ignore
#define InterfacePkg_IDisplay_IDisplay_SERIALIZE OM_NO_OP

#define InterfacePkg_IDisplay_show_SERIALIZE aomsmethod->addAttribute("aMsg", x2String(aMsg));
//#]

//## package InterfacePkg

//## class IDisplay
IDisplay::IDisplay() {
    NOTIFY_CONSTRUCTOR(IDisplay, IDisplay(), 0, InterfacePkg_IDisplay_IDisplay_SERIALIZE);
}

IDisplay::~IDisplay() {
    NOTIFY_DESTRUCTOR(~IDisplay, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(IDisplay, InterfacePkg, InterfacePkg, false, OMAnimatedIDisplay)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\IDisplay.cpp
*********************************************************************/

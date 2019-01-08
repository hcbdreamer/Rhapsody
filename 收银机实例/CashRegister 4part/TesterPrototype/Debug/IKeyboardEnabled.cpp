/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: IKeyboardEnabled
//!	Generated Date	: ÖÜ¶þ, 11, 12ÔÂ 2018  
	File Path	: TesterPrototype\Debug\IKeyboardEnabled.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IKeyboardEnabled.h"
//## event evStart()
#include "CashRegisterPkg.h"
//#[ ignore
#define InterfacePkg_IKeyboardEnabled_IKeyboardEnabled_SERIALIZE OM_NO_OP
//#]

//## package InterfacePkg

//## class IKeyboardEnabled
IKeyboardEnabled::IKeyboardEnabled() {
    NOTIFY_CONSTRUCTOR(IKeyboardEnabled, IKeyboardEnabled(), 0, InterfacePkg_IKeyboardEnabled_IKeyboardEnabled_SERIALIZE);
}

IKeyboardEnabled::~IKeyboardEnabled() {
    NOTIFY_DESTRUCTOR(~IKeyboardEnabled, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(IKeyboardEnabled, InterfacePkg, InterfacePkg, false, OMAnimatedIKeyboardEnabled)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\IKeyboardEnabled.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: Iprinter
//!	Generated Date	: ����, 30, 11�� 2017  
	File Path	: TesterPrototype\Debug\Iprinter.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Iprinter.h"
//#[ ignore
#define InterfacePkg_Iprinter_Iprinter_SERIALIZE OM_NO_OP

#define InterfacePkg_Iprinter_print_SERIALIZE aomsmethod->addAttribute("aMsg", x2String(aMsg));
//#]

//## package InterfacePkg

//## class Iprinter
Iprinter::Iprinter() {
    NOTIFY_CONSTRUCTOR(Iprinter, Iprinter(), 0, InterfacePkg_Iprinter_Iprinter_SERIALIZE);
}

Iprinter::~Iprinter() {
    NOTIFY_DESTRUCTOR(~Iprinter, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Iprinter, InterfacePkg, InterfacePkg, false, OMAnimatedIprinter)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\Iprinter.cpp
*********************************************************************/

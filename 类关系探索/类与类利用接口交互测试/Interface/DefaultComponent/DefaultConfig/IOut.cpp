/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IOut
//!	Generated Date	: ÖÜÎå, 19, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\IOut.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IOut.h"
//#[ ignore
#define InterfacePkg_IOut_IOut_SERIALIZE OM_NO_OP

#define InterfacePkg_IOut_show_SERIALIZE aomsmethod->addAttribute("aMsg", x2String(aMsg));
//#]

//## package InterfacePkg

//## class IOut
IOut::IOut() {
    NOTIFY_CONSTRUCTOR(IOut, IOut(), 0, InterfacePkg_IOut_IOut_SERIALIZE);
}

IOut::~IOut() {
    NOTIFY_DESTRUCTOR(~IOut, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(IOut, InterfacePkg, InterfacePkg, false, OMAnimatedIOut)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IOut.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: ISpecialOffer
//!	Generated Date	: ÖÜËÄ, 30, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\ISpecialOffer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ISpecialOffer.h"
//#[ ignore
#define CashRegisterPkg_ISpecialOffer_getSpecialPrice_SERIALIZE \
    aomsmethod->addAttribute("unitPrice", x2String(unitPrice));\
    aomsmethod->addAttribute("quantify", x2String(quantify));
#define CashRegisterPkg_ISpecialOffer_ISpecialOffer_SERIALIZE OM_NO_OP
//#]

//## package CashRegisterPkg

//## class ISpecialOffer
ISpecialOffer::ISpecialOffer() {
    NOTIFY_CONSTRUCTOR(ISpecialOffer, ISpecialOffer(), 0, CashRegisterPkg_ISpecialOffer_ISpecialOffer_SERIALIZE);
}

ISpecialOffer::~ISpecialOffer() {
    NOTIFY_DESTRUCTOR(~ISpecialOffer, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(ISpecialOffer, CashRegisterPkg, CashRegisterPkg, false, OMAnimatedISpecialOffer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\ISpecialOffer.cpp
*********************************************************************/

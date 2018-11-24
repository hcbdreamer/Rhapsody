/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: TenPercentOff
//!	Generated Date	: ÖÜÎå, 1, 12ÔÂ 2017  
	File Path	: TesterPrototype\Debug\TenPercentOff.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TenPercentOff.h"
//#[ ignore
#define CashRegisterPkg_TenPercentOff_getSpecialPrice_SERIALIZE \
    aomsmethod->addAttribute("unitPrice", x2String(unitPrice));\
    aomsmethod->addAttribute("quantify", x2String(quantify));
#define CashRegisterPkg_TenPercentOff_TenPercentOff_SERIALIZE OM_NO_OP
//#]

//## package CashRegisterPkg

//## class TenPercentOff
TenPercentOff::TenPercentOff() {
    NOTIFY_CONSTRUCTOR(TenPercentOff, TenPercentOff(), 0, CashRegisterPkg_TenPercentOff_TenPercentOff_SERIALIZE);
}

TenPercentOff::~TenPercentOff() {
    NOTIFY_DESTRUCTOR(~TenPercentOff, false);
}

int TenPercentOff::getSpecialPrice(int unitPrice, int quantify) {
    NOTIFY_OPERATION(getSpecialPrice, getSpecialPrice(int,int), 2, CashRegisterPkg_TenPercentOff_getSpecialPrice_SERIALIZE);
    //#[ operation getSpecialPrice(int,int)
    return(unitPrice*((quantify+1)/2));
    //#]
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTenPercentOff::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedISpecialOffer::serializeAttributes(aomsAttributes);
}

void OMAnimatedTenPercentOff::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedISpecialOffer::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(TenPercentOff, CashRegisterPkg, false, ISpecialOffer, OMAnimatedISpecialOffer, OMAnimatedTenPercentOff)

OMINIT_SUPERCLASS(ISpecialOffer, OMAnimatedISpecialOffer)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\TenPercentOff.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: ThreeForOneEuro
//!	Generated Date	: ÖÜÎå, 1, 12ÔÂ 2017  
	File Path	: TesterPrototype\Debug\ThreeForOneEuro.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ThreeForOneEuro.h"
//#[ ignore
#define CashRegisterPkg_ThreeForOneEuro_getSpecialPrice_SERIALIZE \
    aomsmethod->addAttribute("unitPrice", x2String(unitPrice));\
    aomsmethod->addAttribute("quantify", x2String(quantify));
#define CashRegisterPkg_ThreeForOneEuro_ThreeForOneEuro_SERIALIZE OM_NO_OP
//#]

//## package CashRegisterPkg

//## class ThreeForOneEuro
ThreeForOneEuro::ThreeForOneEuro() {
    NOTIFY_CONSTRUCTOR(ThreeForOneEuro, ThreeForOneEuro(), 0, CashRegisterPkg_ThreeForOneEuro_ThreeForOneEuro_SERIALIZE);
}

ThreeForOneEuro::~ThreeForOneEuro() {
    NOTIFY_DESTRUCTOR(~ThreeForOneEuro, false);
}

int ThreeForOneEuro::getSpecialPrice(int unitPrice, int quantify) {
    NOTIFY_OPERATION(getSpecialPrice, getSpecialPrice(int,int), 2, CashRegisterPkg_ThreeForOneEuro_getSpecialPrice_SERIALIZE);
    //#[ operation getSpecialPrice(int,int)
    return(unitPrice*((quantify+1)/2));
    //#]
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedThreeForOneEuro::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedISpecialOffer::serializeAttributes(aomsAttributes);
}

void OMAnimatedThreeForOneEuro::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedISpecialOffer::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(ThreeForOneEuro, CashRegisterPkg, false, ISpecialOffer, OMAnimatedISpecialOffer, OMAnimatedThreeForOneEuro)

OMINIT_SUPERCLASS(ISpecialOffer, OMAnimatedISpecialOffer)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\ThreeForOneEuro.cpp
*********************************************************************/

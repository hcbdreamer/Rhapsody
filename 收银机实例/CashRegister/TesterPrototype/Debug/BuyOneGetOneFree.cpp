/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: BuyOneGetOneFree
//!	Generated Date	: ÖÜÎå, 1, 12ÔÂ 2017  
	File Path	: TesterPrototype\Debug\BuyOneGetOneFree.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "BuyOneGetOneFree.h"
//#[ ignore
#define CashRegisterPkg_BuyOneGetOneFree_getSpecialPrice_SERIALIZE \
    aomsmethod->addAttribute("unitPrice", x2String(unitPrice));\
    aomsmethod->addAttribute("quantify", x2String(quantify));
#define CashRegisterPkg_BuyOneGetOneFree_BuyOneGetOneFree_SERIALIZE OM_NO_OP
//#]

//## package CashRegisterPkg

//## class BuyOneGetOneFree
BuyOneGetOneFree::BuyOneGetOneFree() {
    NOTIFY_CONSTRUCTOR(BuyOneGetOneFree, BuyOneGetOneFree(), 0, CashRegisterPkg_BuyOneGetOneFree_BuyOneGetOneFree_SERIALIZE);
}

BuyOneGetOneFree::~BuyOneGetOneFree() {
    NOTIFY_DESTRUCTOR(~BuyOneGetOneFree, false);
}

int BuyOneGetOneFree::getSpecialPrice(int unitPrice, int quantify) {
    NOTIFY_OPERATION(getSpecialPrice, getSpecialPrice(int,int), 2, CashRegisterPkg_BuyOneGetOneFree_getSpecialPrice_SERIALIZE);
    //#[ operation getSpecialPrice(int,int)
    return(unitPrice*((quantify+1)/2));
    //#]
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBuyOneGetOneFree::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedISpecialOffer::serializeAttributes(aomsAttributes);
}

void OMAnimatedBuyOneGetOneFree::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedISpecialOffer::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(BuyOneGetOneFree, CashRegisterPkg, false, ISpecialOffer, OMAnimatedISpecialOffer, OMAnimatedBuyOneGetOneFree)

OMINIT_SUPERCLASS(ISpecialOffer, OMAnimatedISpecialOffer)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\BuyOneGetOneFree.cpp
*********************************************************************/

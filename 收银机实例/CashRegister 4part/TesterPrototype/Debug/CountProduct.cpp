/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: CountProduct
//!	Generated Date	: ÖÜËÄ, 30, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\CountProduct.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CountProduct.h"
//#[ ignore
#define CashRegisterPkg_CountProduct_CountProduct_SERIALIZE aomsmethod->addAttribute("aProduct", X2ITEM(&aProduct));

#define OM_CashRegisterPkg_CountProduct_CountProduct_1_SERIALIZE OM_NO_OP

#define CashRegisterPkg_CountProduct_getPrice_SERIALIZE OM_NO_OP

#define CashRegisterPkg_CountProduct_increment_SERIALIZE OM_NO_OP
//#]

//## package CashRegisterPkg

//## class CountProduct
CountProduct::CountProduct(const Product& aProduct) : Product(aProduct), count(1) {
    NOTIFY_CONSTRUCTOR(CountProduct, CountProduct(const Product&), 1, CashRegisterPkg_CountProduct_CountProduct_SERIALIZE);
    //#[ operation CountProduct(Product)
    //#]
}

CountProduct::CountProduct() : count(1) {
    NOTIFY_CONSTRUCTOR(CountProduct, CountProduct(), 0, OM_CashRegisterPkg_CountProduct_CountProduct_1_SERIALIZE);
}

CountProduct::~CountProduct() {
    NOTIFY_DESTRUCTOR(~CountProduct, false);
}

void CountProduct::getPrice() {
    NOTIFY_OPERATION(getPrice, getPrice(), 0, CashRegisterPkg_CountProduct_getPrice_SERIALIZE);
    //#[ operation getPrice()
    return (unitPrice* count);
    //#]
}

void CountProduct::increment() {
    NOTIFY_OPERATION(increment, increment(), 0, CashRegisterPkg_CountProduct_increment_SERIALIZE);
    //#[ operation increment()
    count++;
    //#]
}

int CountProduct::getCount() const {
    return count;
}

void CountProduct::setCount(int p_count) {
    count = p_count;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCountProduct::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("count", x2String(myReal->count));
    OMAnimatedProduct::serializeAttributes(aomsAttributes);
}

void OMAnimatedCountProduct::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedProduct::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(CountProduct, CashRegisterPkg, false, Product, OMAnimatedProduct, OMAnimatedCountProduct)

OMINIT_SUPERCLASS(Product, OMAnimatedProduct)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\CountProduct.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: CountedProduct
//!	Generated Date	: ÖÜËÄ, 30, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\CountedProduct.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CountedProduct.h"
//## auto_generated
#include "ISpecialOffer.h"
//#[ ignore
#define CashRegisterPkg_CountedProduct_CountedProduct_SERIALIZE aomsmethod->addAttribute("aProduct", X2ITEM(&aProduct));

#define OM_CashRegisterPkg_CountedProduct_CountedProduct_1_SERIALIZE OM_NO_OP

#define CashRegisterPkg_CountedProduct_getPrice_SERIALIZE OM_NO_OP

#define CashRegisterPkg_CountedProduct_increment_SERIALIZE OM_NO_OP
//#]

//## package CashRegisterPkg

//## class CountedProduct
CountedProduct::CountedProduct(const Product& aProduct) : Product(aProduct), count(1) {
    NOTIFY_CONSTRUCTOR(CountedProduct, CountedProduct(const Product&), 1, CashRegisterPkg_CountedProduct_CountedProduct_SERIALIZE);
    //#[ operation CountedProduct(Product)
    //#]
}

CountedProduct::CountedProduct() : count(1) {
    NOTIFY_CONSTRUCTOR(CountedProduct, CountedProduct(), 0, OM_CashRegisterPkg_CountedProduct_CountedProduct_1_SERIALIZE);
}

CountedProduct::~CountedProduct() {
    NOTIFY_DESTRUCTOR(~CountedProduct, false);
}

int CountedProduct::getPrice() {
    NOTIFY_OPERATION(getPrice, getPrice(), 0, CashRegisterPkg_CountedProduct_getPrice_SERIALIZE);
    //#[ operation getPrice()
    if(NULL==itsSpecialOffer){
    return (unitPrice* count);
    }else{
    return(itsSpecialOffer->getSpecialPrice(unitPrice,count));
    }
    //#]
}

void CountedProduct::increment() {
    NOTIFY_OPERATION(increment, increment(), 0, CashRegisterPkg_CountedProduct_increment_SERIALIZE);
    //#[ operation increment()
    count++;
    //#]
}

int CountedProduct::getCount() const {
    return count;
}

void CountedProduct::setCount(int p_count) {
    count = p_count;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCountedProduct::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("count", x2String(myReal->count));
    OMAnimatedProduct::serializeAttributes(aomsAttributes);
}

void OMAnimatedCountedProduct::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedProduct::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(CountedProduct, CashRegisterPkg, false, Product, OMAnimatedProduct, OMAnimatedCountedProduct)

OMINIT_SUPERCLASS(Product, OMAnimatedProduct)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\CountedProduct.cpp
*********************************************************************/

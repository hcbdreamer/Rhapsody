/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: Product
//!	Generated Date	: ÖÜËÄ, 30, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\Product.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Product.h"
//#[ ignore
#define CashRegisterPkg_Product_Product_SERIALIZE \
    aomsmethod->addAttribute("aBarcode", x2String(aBarcode));\
    aomsmethod->addAttribute("aName", x2String(aName));\
    aomsmethod->addAttribute("aUnitPrice", x2String(aUnitPrice));
#define OM_CashRegisterPkg_Product_Product_1_SERIALIZE OM_NO_OP

#define OM_CashRegisterPkg_Product_Product_2_SERIALIZE aomsmethod->addAttribute("aProduct", X2ITEM(aProduct));
//#]

//## package CashRegisterPkg

//## class Product
Product::Product(int aBarcode, char* aName, int aUnitPrice) : barcode(aBarcode), name(aName), unitPrice(aUnitPrice) {
    NOTIFY_CONSTRUCTOR(Product, Product(int,char*,int), 3, CashRegisterPkg_Product_Product_SERIALIZE);
    //#[ operation Product(int,char*,int)
    //#]
}

Product::Product(Product* aProduct) {
    NOTIFY_CONSTRUCTOR(Product, Product(Product*), 1, OM_CashRegisterPkg_Product_Product_2_SERIALIZE);
    //#[ operation Product(Product*)
    unitPrice=aProduct->getUnitPrice();
    barcode=aProduct->getBarcode();
    name=aProduct->getName();
    //#]
}

Product::Product() {
    NOTIFY_CONSTRUCTOR(Product, Product(), 0, OM_CashRegisterPkg_Product_Product_1_SERIALIZE);
    //#[ operation Product()
    //#]
}

Product::~Product() {
    NOTIFY_DESTRUCTOR(~Product, true);
}

int Product::getBarcode() const {
    return barcode;
}

void Product::setBarcode(int p_barcode) {
    barcode = p_barcode;
}

const char* Product::getName() const {
    return name;
}

int Product::getUnitPrice() const {
    return unitPrice;
}

void Product::setUnitPrice(int p_unitPrice) {
    unitPrice = p_unitPrice;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedProduct::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("barcode", x2String(myReal->barcode));
    aomsAttributes->addAttribute("name", x2String(myReal->name));
    aomsAttributes->addAttribute("unitPrice", x2String(myReal->unitPrice));
}
//#]

IMPLEMENT_META_P(Product, CashRegisterPkg, CashRegisterPkg, false, OMAnimatedProduct)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\Product.cpp
*********************************************************************/

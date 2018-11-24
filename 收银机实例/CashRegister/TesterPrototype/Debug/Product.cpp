/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: Product
//!	Generated Date	: ÖÜÎå, 1, 12ÔÂ 2017  
	File Path	: TesterPrototype\Debug\Product.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Product.h"
//## operation Product(int,char*,int,ISpecialOffer*)
#include "ISpecialOffer.h"
//#[ ignore
#define CashRegisterPkg_Product_Product_SERIALIZE \
    aomsmethod->addAttribute("aBarcode", x2String(aBarcode));\
    aomsmethod->addAttribute("aName", x2String(aName));\
    aomsmethod->addAttribute("aUnitPrice", x2String(aUnitPrice));\
    aomsmethod->addAttribute("aSpecialOffer", X2ITEM(aSpecialOffer));
#define OM_CashRegisterPkg_Product_Product_1_SERIALIZE OM_NO_OP

#define OM_CashRegisterPkg_Product_Product_2_SERIALIZE aomsmethod->addAttribute("aProduct", X2ITEM(aProduct));
//#]

//## package CashRegisterPkg

//## class Product
Product::Product(int aBarcode, char* aName, int aUnitPrice, ISpecialOffer* aSpecialOffer) : barcode(aBarcode), name(aName), unitPrice(aUnitPrice) {
    NOTIFY_CONSTRUCTOR(Product, Product(int,char*,int,ISpecialOffer*), 4, CashRegisterPkg_Product_Product_SERIALIZE);
    itsSpecialOffer = NULL;
    //#[ operation Product(int,char*,int,ISpecialOffer*)
    setItsSpecialOffer(aSpecialOffer);
    //#]
}

Product::Product(Product* aProduct) {
    NOTIFY_CONSTRUCTOR(Product, Product(Product*), 1, OM_CashRegisterPkg_Product_Product_2_SERIALIZE);
    itsSpecialOffer = NULL;
    //#[ operation Product(Product*)
    unitPrice=aProduct->getUnitPrice();
    barcode=aProduct->getBarcode();
    name=aProduct->getName(); 
    setItsSpecialOffer(aProduct->getItsSpecialOffer());
    //#]
}

Product::Product() {
    NOTIFY_CONSTRUCTOR(Product, Product(), 0, OM_CashRegisterPkg_Product_Product_1_SERIALIZE);
    itsSpecialOffer = NULL;
    //#[ operation Product()
    //#]
}

Product::~Product() {
    NOTIFY_DESTRUCTOR(~Product, true);
    cleanUpRelations();
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

ISpecialOffer* Product::getItsSpecialOffer() const {
    return itsSpecialOffer;
}

void Product::setItsSpecialOffer(ISpecialOffer* p_ISpecialOffer) {
    itsSpecialOffer = p_ISpecialOffer;
    if(p_ISpecialOffer != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSpecialOffer", p_ISpecialOffer, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSpecialOffer");
        }
}

void Product::cleanUpRelations() {
    if(itsSpecialOffer != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSpecialOffer");
            itsSpecialOffer = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedProduct::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("barcode", x2String(myReal->barcode));
    aomsAttributes->addAttribute("name", x2String(myReal->name));
    aomsAttributes->addAttribute("unitPrice", x2String(myReal->unitPrice));
}

void OMAnimatedProduct::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSpecialOffer", false, true);
    if(myReal->itsSpecialOffer)
        {
            aomsRelations->ADD_ITEM(myReal->itsSpecialOffer);
        }
}
//#]

IMPLEMENT_META_P(Product, CashRegisterPkg, CashRegisterPkg, false, OMAnimatedProduct)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\Product.cpp
*********************************************************************/

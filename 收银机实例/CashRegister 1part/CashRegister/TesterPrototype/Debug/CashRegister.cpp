/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: CashRegister
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\CashRegister.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CashRegister.h"
//## link itsProduct
#include "Product.h"
//#[ ignore
#define CashRegisterPkg_CashRegister_CashRegister_SERIALIZE OM_NO_OP
//#]

//## package CashRegisterPkg

//## class CashRegister
//#[ ignore
CashRegister::printer_C::printer_C() : _p_(0) {
    itsIprinter = NULL;
}

CashRegister::printer_C::~printer_C() {
    cleanUpRelations();
}

Iprinter* CashRegister::printer_C::getItsIprinter() {
    return this;
}

Iprinter* CashRegister::printer_C::getOutBound() {
    return this;
}

void CashRegister::printer_C::setItsIprinter(Iprinter* p_Iprinter) {
    itsIprinter = p_Iprinter;
}

void CashRegister::printer_C::cleanUpRelations() {
    if(itsIprinter != NULL)
        {
            itsIprinter = NULL;
        }
}

CashRegister::display_C::display_C() : _p_(0) {
    itsIDisplay = NULL;
}

CashRegister::display_C::~display_C() {
    cleanUpRelations();
}

IDisplay* CashRegister::display_C::getItsIDisplay() {
    return this;
}

IDisplay* CashRegister::display_C::getOutBound() {
    return this;
}

void CashRegister::display_C::setItsIDisplay(IDisplay* p_IDisplay) {
    itsIDisplay = p_IDisplay;
}

void CashRegister::display_C::cleanUpRelations() {
    if(itsIDisplay != NULL)
        {
            itsIDisplay = NULL;
        }
}

CashRegister::barcode_C::barcode_C() : _p_(0) {
    itsIBarcodeReaderEnabled = NULL;
}

CashRegister::barcode_C::~barcode_C() {
    cleanUpRelations();
}

IBarcodeReaderEnabled* CashRegister::barcode_C::getItsIBarcodeReaderEnabled() {
    return this;
}

IBarcodeReaderEnabled* CashRegister::barcode_C::getOutBound() {
    return this;
}

void CashRegister::barcode_C::setItsIBarcodeReaderEnabled(IBarcodeReaderEnabled* p_IBarcodeReaderEnabled) {
    itsIBarcodeReaderEnabled = p_IBarcodeReaderEnabled;
}

void CashRegister::barcode_C::cleanUpRelations() {
    if(itsIBarcodeReaderEnabled != NULL)
        {
            itsIBarcodeReaderEnabled = NULL;
        }
}

CashRegister::keyboard_C::keyboard_C() : _p_(0) {
    itsIKeyboardEnabled = NULL;
}

CashRegister::keyboard_C::~keyboard_C() {
    cleanUpRelations();
}

IKeyboardEnabled* CashRegister::keyboard_C::getItsIKeyboardEnabled() {
    return this;
}

IKeyboardEnabled* CashRegister::keyboard_C::getOutBound() {
    return this;
}

void CashRegister::keyboard_C::setItsIKeyboardEnabled(IKeyboardEnabled* p_IKeyboardEnabled) {
    itsIKeyboardEnabled = p_IKeyboardEnabled;
}

void CashRegister::keyboard_C::cleanUpRelations() {
    if(itsIKeyboardEnabled != NULL)
        {
            itsIKeyboardEnabled = NULL;
        }
}
//#]

CashRegister::CashRegister() {
    NOTIFY_CONSTRUCTOR(CashRegister, CashRegister(), 0, CashRegisterPkg_CashRegister_CashRegister_SERIALIZE);
}

CashRegister::~CashRegister() {
    NOTIFY_DESTRUCTOR(~CashRegister, true);
    cleanUpRelations();
}

CashRegister::printer_C* CashRegister::getPrinter() const {
    return (CashRegister::printer_C*) &printer;
}

CashRegister::printer_C* CashRegister::get_printer() const {
    return (CashRegister::printer_C*) &printer;
}

CashRegister::display_C* CashRegister::getDisplay() const {
    return (CashRegister::display_C*) &display;
}

CashRegister::display_C* CashRegister::get_display() const {
    return (CashRegister::display_C*) &display;
}

CashRegister::barcode_C* CashRegister::getBarcode() const {
    return (CashRegister::barcode_C*) &barcode;
}

CashRegister::barcode_C* CashRegister::get_barcode() const {
    return (CashRegister::barcode_C*) &barcode;
}

CashRegister::keyboard_C* CashRegister::getKeyboard() const {
    return (CashRegister::keyboard_C*) &keyboard;
}

CashRegister::keyboard_C* CashRegister::get_keyboard() const {
    return (CashRegister::keyboard_C*) &keyboard;
}

OMIterator<Product*> CashRegister::getItsProduct() const {
    OMIterator<Product*> iter(itsProduct);
    return iter;
}

void CashRegister::addItsProduct(Product* p_Product) {
    if(p_Product != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsProduct", p_Product, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsProduct");
        }
    itsProduct.add(p_Product);
}

void CashRegister::removeItsProduct(Product* p_Product) {
    NOTIFY_RELATION_ITEM_REMOVED("itsProduct", p_Product);
    itsProduct.remove(p_Product);
}

void CashRegister::clearItsProduct() {
    NOTIFY_RELATION_CLEARED("itsProduct");
    itsProduct.removeAll();
}

ProductDatabase* CashRegister::getItsProductDatabase() const {
    return (ProductDatabase*) &itsProductDatabase;
}

void CashRegister::cleanUpRelations() {
    {
        itsProduct.removeAll();
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCashRegister::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsProductDatabase", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsProductDatabase);
    aomsRelations->addRelation("itsProduct", false, false);
    {
        OMIterator<Product*> iter(myReal->itsProduct);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(CashRegister, CashRegisterPkg, CashRegisterPkg, false, OMAnimatedCashRegister)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\CashRegister.cpp
*********************************************************************/

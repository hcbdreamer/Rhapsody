/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CashRegister
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\CashRegister.cpp
*********************************************************************/

//## auto_generated
#include "CashRegister.h"
//## link itsProduct
#include "Product.h"
//## link itsTester
#include "Tester.h"
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
    itsTester = NULL;
    itsTester_1 = NULL;
    itsTester_2 = NULL;
    itsTester_3 = NULL;
}

CashRegister::~CashRegister() {
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
    itsProduct.add(p_Product);
}

void CashRegister::removeItsProduct(Product* p_Product) {
    itsProduct.remove(p_Product);
}

void CashRegister::clearItsProduct() {
    itsProduct.removeAll();
}

ProductDatabase* CashRegister::getItsProductDatabase() const {
    return (ProductDatabase*) &itsProductDatabase;
}

Tester* CashRegister::getItsTester() const {
    return itsTester;
}

void CashRegister::setItsTester(Tester* p_Tester) {
    if(p_Tester != NULL)
        {
            p_Tester->_setItsCashRegister(this);
        }
    _setItsTester(p_Tester);
}

Tester* CashRegister::getItsTester_1() const {
    return itsTester_1;
}

void CashRegister::setItsTester_1(Tester* p_Tester) {
    if(p_Tester != NULL)
        {
            p_Tester->_setItsCashRegister_1(this);
        }
    _setItsTester_1(p_Tester);
}

Tester* CashRegister::getItsTester_2() const {
    return itsTester_2;
}

void CashRegister::setItsTester_2(Tester* p_Tester) {
    if(p_Tester != NULL)
        {
            p_Tester->_setItsCashRegister_2(this);
        }
    _setItsTester_2(p_Tester);
}

Tester* CashRegister::getItsTester_3() const {
    return itsTester_3;
}

void CashRegister::setItsTester_3(Tester* p_Tester) {
    if(p_Tester != NULL)
        {
            p_Tester->_setItsCashRegister_3(this);
        }
    _setItsTester_3(p_Tester);
}

void CashRegister::cleanUpRelations() {
    {
        itsProduct.removeAll();
    }
    if(itsTester != NULL)
        {
            CashRegister* p_CashRegister = itsTester->getItsCashRegister();
            if(p_CashRegister != NULL)
                {
                    itsTester->__setItsCashRegister(NULL);
                }
            itsTester = NULL;
        }
    if(itsTester_1 != NULL)
        {
            CashRegister* p_CashRegister = itsTester_1->getItsCashRegister_1();
            if(p_CashRegister != NULL)
                {
                    itsTester_1->__setItsCashRegister_1(NULL);
                }
            itsTester_1 = NULL;
        }
    if(itsTester_2 != NULL)
        {
            CashRegister* p_CashRegister = itsTester_2->getItsCashRegister_2();
            if(p_CashRegister != NULL)
                {
                    itsTester_2->__setItsCashRegister_2(NULL);
                }
            itsTester_2 = NULL;
        }
    if(itsTester_3 != NULL)
        {
            CashRegister* p_CashRegister = itsTester_3->getItsCashRegister_3();
            if(p_CashRegister != NULL)
                {
                    itsTester_3->__setItsCashRegister_3(NULL);
                }
            itsTester_3 = NULL;
        }
}

void CashRegister::__setItsTester(Tester* p_Tester) {
    itsTester = p_Tester;
}

void CashRegister::_setItsTester(Tester* p_Tester) {
    if(itsTester != NULL)
        {
            itsTester->__setItsCashRegister(NULL);
        }
    __setItsTester(p_Tester);
}

void CashRegister::_clearItsTester() {
    itsTester = NULL;
}

void CashRegister::__setItsTester_1(Tester* p_Tester) {
    itsTester_1 = p_Tester;
}

void CashRegister::_setItsTester_1(Tester* p_Tester) {
    if(itsTester_1 != NULL)
        {
            itsTester_1->__setItsCashRegister_1(NULL);
        }
    __setItsTester_1(p_Tester);
}

void CashRegister::_clearItsTester_1() {
    itsTester_1 = NULL;
}

void CashRegister::__setItsTester_2(Tester* p_Tester) {
    itsTester_2 = p_Tester;
}

void CashRegister::_setItsTester_2(Tester* p_Tester) {
    if(itsTester_2 != NULL)
        {
            itsTester_2->__setItsCashRegister_2(NULL);
        }
    __setItsTester_2(p_Tester);
}

void CashRegister::_clearItsTester_2() {
    itsTester_2 = NULL;
}

void CashRegister::__setItsTester_3(Tester* p_Tester) {
    itsTester_3 = p_Tester;
}

void CashRegister::_setItsTester_3(Tester* p_Tester) {
    if(itsTester_3 != NULL)
        {
            itsTester_3->__setItsCashRegister_3(NULL);
        }
    __setItsTester_3(p_Tester);
}

void CashRegister::_clearItsTester_3() {
    itsTester_3 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CashRegister.cpp
*********************************************************************/

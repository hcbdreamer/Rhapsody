/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TesterBulider
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\TesterBulider.cpp
*********************************************************************/

//## auto_generated
#include "TesterBulider.h"
//## package HardwarePkg::TesterPkg

//## class TesterBulider
//#[ ignore
TesterBulider::printer_C::printer_C() : _p_(0) {
    itsIprinter = NULL;
}

TesterBulider::printer_C::~printer_C() {
    cleanUpRelations();
}

Iprinter* TesterBulider::printer_C::getItsIprinter() {
    return this;
}

Iprinter* TesterBulider::printer_C::getOutBound() {
    return this;
}

void TesterBulider::printer_C::setItsIprinter(Iprinter* p_Iprinter) {
    itsIprinter = p_Iprinter;
}

void TesterBulider::printer_C::cleanUpRelations() {
    if(itsIprinter != NULL)
        {
            itsIprinter = NULL;
        }
}

TesterBulider::display_C::display_C() : _p_(0) {
    itsIDisplay = NULL;
}

TesterBulider::display_C::~display_C() {
    cleanUpRelations();
}

IDisplay* TesterBulider::display_C::getItsIDisplay() {
    return this;
}

IDisplay* TesterBulider::display_C::getOutBound() {
    return this;
}

void TesterBulider::display_C::setItsIDisplay(IDisplay* p_IDisplay) {
    itsIDisplay = p_IDisplay;
}

void TesterBulider::display_C::cleanUpRelations() {
    if(itsIDisplay != NULL)
        {
            itsIDisplay = NULL;
        }
}

TesterBulider::barcode_C::barcode_C() : _p_(0) {
    itsIBarcodeReaderEnabled = NULL;
}

TesterBulider::barcode_C::~barcode_C() {
    cleanUpRelations();
}

IBarcodeReaderEnabled* TesterBulider::barcode_C::getItsIBarcodeReaderEnabled() {
    return this;
}

IBarcodeReaderEnabled* TesterBulider::barcode_C::getOutBound() {
    return this;
}

void TesterBulider::barcode_C::setItsIBarcodeReaderEnabled(IBarcodeReaderEnabled* p_IBarcodeReaderEnabled) {
    itsIBarcodeReaderEnabled = p_IBarcodeReaderEnabled;
}

void TesterBulider::barcode_C::cleanUpRelations() {
    if(itsIBarcodeReaderEnabled != NULL)
        {
            itsIBarcodeReaderEnabled = NULL;
        }
}

TesterBulider::keyboard_C::keyboard_C() : _p_(0) {
    itsIKeyboardEnabled = NULL;
}

TesterBulider::keyboard_C::~keyboard_C() {
    cleanUpRelations();
}

IKeyboardEnabled* TesterBulider::keyboard_C::getItsIKeyboardEnabled() {
    return this;
}

IKeyboardEnabled* TesterBulider::keyboard_C::getOutBound() {
    return this;
}

void TesterBulider::keyboard_C::setItsIKeyboardEnabled(IKeyboardEnabled* p_IKeyboardEnabled) {
    itsIKeyboardEnabled = p_IKeyboardEnabled;
}

void TesterBulider::keyboard_C::cleanUpRelations() {
    if(itsIKeyboardEnabled != NULL)
        {
            itsIKeyboardEnabled = NULL;
        }
}
//#]

TesterBulider::TesterBulider() {
    itsCashRegister_1 = NULL;
    itsCashRegister_2 = NULL;
    itsCashRegister_3 = NULL;
    itsCashRegister_4 = NULL;
}

TesterBulider::~TesterBulider() {
    cleanUpRelations();
}

TesterBulider::printer_C* TesterBulider::getPrinter() const {
    return (TesterBulider::printer_C*) &printer;
}

TesterBulider::printer_C* TesterBulider::get_printer() const {
    return (TesterBulider::printer_C*) &printer;
}

TesterBulider::display_C* TesterBulider::getDisplay() const {
    return (TesterBulider::display_C*) &display;
}

TesterBulider::display_C* TesterBulider::get_display() const {
    return (TesterBulider::display_C*) &display;
}

TesterBulider::barcode_C* TesterBulider::getBarcode() const {
    return (TesterBulider::barcode_C*) &barcode;
}

TesterBulider::barcode_C* TesterBulider::get_barcode() const {
    return (TesterBulider::barcode_C*) &barcode;
}

TesterBulider::keyboard_C* TesterBulider::getKeyboard() const {
    return (TesterBulider::keyboard_C*) &keyboard;
}

TesterBulider::keyboard_C* TesterBulider::get_keyboard() const {
    return (TesterBulider::keyboard_C*) &keyboard;
}

CashRegister* TesterBulider::getItsCashRegister() const {
    return (CashRegister*) &itsCashRegister;
}

CashRegister* TesterBulider::getItsCashRegister_1() const {
    return itsCashRegister_1;
}

void TesterBulider::setItsCashRegister_1(CashRegister* p_CashRegister) {
    if(p_CashRegister != NULL)
        {
            p_CashRegister->_setItsTesterBulider_3(this);
        }
    _setItsCashRegister_1(p_CashRegister);
}

CashRegister* TesterBulider::getItsCashRegister_2() const {
    return itsCashRegister_2;
}

void TesterBulider::setItsCashRegister_2(CashRegister* p_CashRegister) {
    if(p_CashRegister != NULL)
        {
            p_CashRegister->_setItsTesterBulider_2(this);
        }
    _setItsCashRegister_2(p_CashRegister);
}

CashRegister* TesterBulider::getItsCashRegister_3() const {
    return itsCashRegister_3;
}

void TesterBulider::setItsCashRegister_3(CashRegister* p_CashRegister) {
    if(p_CashRegister != NULL)
        {
            p_CashRegister->_setItsTesterBulider_1(this);
        }
    _setItsCashRegister_3(p_CashRegister);
}

CashRegister* TesterBulider::getItsCashRegister_4() const {
    return itsCashRegister_4;
}

void TesterBulider::setItsCashRegister_4(CashRegister* p_CashRegister) {
    if(p_CashRegister != NULL)
        {
            p_CashRegister->_setItsTesterBulider(this);
        }
    _setItsCashRegister_4(p_CashRegister);
}

TesterBulider* TesterBulider::getItsTester() const {
    return (TesterBulider*) &itsTester;
}

void TesterBulider::cleanUpRelations() {
    if(itsCashRegister_1 != NULL)
        {
            TesterBulider* p_TesterBulider = itsCashRegister_1->getItsTesterBulider_3();
            if(p_TesterBulider != NULL)
                {
                    itsCashRegister_1->__setItsTesterBulider_3(NULL);
                }
            itsCashRegister_1 = NULL;
        }
    if(itsCashRegister_2 != NULL)
        {
            TesterBulider* p_TesterBulider = itsCashRegister_2->getItsTesterBulider_2();
            if(p_TesterBulider != NULL)
                {
                    itsCashRegister_2->__setItsTesterBulider_2(NULL);
                }
            itsCashRegister_2 = NULL;
        }
    if(itsCashRegister_3 != NULL)
        {
            TesterBulider* p_TesterBulider = itsCashRegister_3->getItsTesterBulider_1();
            if(p_TesterBulider != NULL)
                {
                    itsCashRegister_3->__setItsTesterBulider_1(NULL);
                }
            itsCashRegister_3 = NULL;
        }
    if(itsCashRegister_4 != NULL)
        {
            TesterBulider* p_TesterBulider = itsCashRegister_4->getItsTesterBulider();
            if(p_TesterBulider != NULL)
                {
                    itsCashRegister_4->__setItsTesterBulider(NULL);
                }
            itsCashRegister_4 = NULL;
        }
}

void TesterBulider::__setItsCashRegister_1(CashRegister* p_CashRegister) {
    itsCashRegister_1 = p_CashRegister;
}

void TesterBulider::_setItsCashRegister_1(CashRegister* p_CashRegister) {
    if(itsCashRegister_1 != NULL)
        {
            itsCashRegister_1->__setItsTesterBulider_3(NULL);
        }
    __setItsCashRegister_1(p_CashRegister);
}

void TesterBulider::_clearItsCashRegister_1() {
    itsCashRegister_1 = NULL;
}

void TesterBulider::__setItsCashRegister_2(CashRegister* p_CashRegister) {
    itsCashRegister_2 = p_CashRegister;
}

void TesterBulider::_setItsCashRegister_2(CashRegister* p_CashRegister) {
    if(itsCashRegister_2 != NULL)
        {
            itsCashRegister_2->__setItsTesterBulider_2(NULL);
        }
    __setItsCashRegister_2(p_CashRegister);
}

void TesterBulider::_clearItsCashRegister_2() {
    itsCashRegister_2 = NULL;
}

void TesterBulider::__setItsCashRegister_3(CashRegister* p_CashRegister) {
    itsCashRegister_3 = p_CashRegister;
}

void TesterBulider::_setItsCashRegister_3(CashRegister* p_CashRegister) {
    if(itsCashRegister_3 != NULL)
        {
            itsCashRegister_3->__setItsTesterBulider_1(NULL);
        }
    __setItsCashRegister_3(p_CashRegister);
}

void TesterBulider::_clearItsCashRegister_3() {
    itsCashRegister_3 = NULL;
}

void TesterBulider::__setItsCashRegister_4(CashRegister* p_CashRegister) {
    itsCashRegister_4 = p_CashRegister;
}

void TesterBulider::_setItsCashRegister_4(CashRegister* p_CashRegister) {
    if(itsCashRegister_4 != NULL)
        {
            itsCashRegister_4->__setItsTesterBulider(NULL);
        }
    __setItsCashRegister_4(p_CashRegister);
}

void TesterBulider::_clearItsCashRegister_4() {
    itsCashRegister_4 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TesterBulider.cpp
*********************************************************************/

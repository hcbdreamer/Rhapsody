/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: Tester
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\Tester.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Tester.h"
//#[ ignore
#define HardwarePkg_TesterPkg_Tester_Tester_SERIALIZE OM_NO_OP
//#]

//## package HardwarePkg::TesterPkg

//## class Tester
//#[ ignore
Tester::printer_C::printer_C() : _p_(0) {
    itsIprinter = NULL;
}

Tester::printer_C::~printer_C() {
    cleanUpRelations();
}

Iprinter* Tester::printer_C::getItsIprinter() {
    return this;
}

Iprinter* Tester::printer_C::getOutBound() {
    return this;
}

void Tester::printer_C::setItsIprinter(Iprinter* p_Iprinter) {
    itsIprinter = p_Iprinter;
}

void Tester::printer_C::cleanUpRelations() {
    if(itsIprinter != NULL)
        {
            itsIprinter = NULL;
        }
}

Tester::display_C::display_C() : _p_(0) {
    itsIDisplay = NULL;
}

Tester::display_C::~display_C() {
    cleanUpRelations();
}

IDisplay* Tester::display_C::getItsIDisplay() {
    return this;
}

IDisplay* Tester::display_C::getOutBound() {
    return this;
}

void Tester::display_C::setItsIDisplay(IDisplay* p_IDisplay) {
    itsIDisplay = p_IDisplay;
}

void Tester::display_C::cleanUpRelations() {
    if(itsIDisplay != NULL)
        {
            itsIDisplay = NULL;
        }
}

Tester::barcode_C::barcode_C() : _p_(0) {
    itsIBarcodeReaderEnabled = NULL;
}

Tester::barcode_C::~barcode_C() {
    cleanUpRelations();
}

IBarcodeReaderEnabled* Tester::barcode_C::getItsIBarcodeReaderEnabled() {
    return this;
}

IBarcodeReaderEnabled* Tester::barcode_C::getOutBound() {
    return this;
}

void Tester::barcode_C::setItsIBarcodeReaderEnabled(IBarcodeReaderEnabled* p_IBarcodeReaderEnabled) {
    itsIBarcodeReaderEnabled = p_IBarcodeReaderEnabled;
}

void Tester::barcode_C::cleanUpRelations() {
    if(itsIBarcodeReaderEnabled != NULL)
        {
            itsIBarcodeReaderEnabled = NULL;
        }
}

Tester::keyboard_C::keyboard_C() : _p_(0) {
    itsIKeyboardEnabled = NULL;
}

Tester::keyboard_C::~keyboard_C() {
    cleanUpRelations();
}

IKeyboardEnabled* Tester::keyboard_C::getItsIKeyboardEnabled() {
    return this;
}

IKeyboardEnabled* Tester::keyboard_C::getOutBound() {
    return this;
}

void Tester::keyboard_C::setItsIKeyboardEnabled(IKeyboardEnabled* p_IKeyboardEnabled) {
    itsIKeyboardEnabled = p_IKeyboardEnabled;
}

void Tester::keyboard_C::cleanUpRelations() {
    if(itsIKeyboardEnabled != NULL)
        {
            itsIKeyboardEnabled = NULL;
        }
}
//#]

Tester::Tester() {
    NOTIFY_CONSTRUCTOR(Tester, Tester(), 0, HardwarePkg_TesterPkg_Tester_Tester_SERIALIZE);
}

Tester::~Tester() {
    NOTIFY_DESTRUCTOR(~Tester, true);
}

Tester::printer_C* Tester::getPrinter() const {
    return (Tester::printer_C*) &printer;
}

Tester::printer_C* Tester::get_printer() const {
    return (Tester::printer_C*) &printer;
}

Tester::display_C* Tester::getDisplay() const {
    return (Tester::display_C*) &display;
}

Tester::display_C* Tester::get_display() const {
    return (Tester::display_C*) &display;
}

Tester::barcode_C* Tester::getBarcode() const {
    return (Tester::barcode_C*) &barcode;
}

Tester::barcode_C* Tester::get_barcode() const {
    return (Tester::barcode_C*) &barcode;
}

Tester::keyboard_C* Tester::getKeyboard() const {
    return (Tester::keyboard_C*) &keyboard;
}

Tester::keyboard_C* Tester::get_keyboard() const {
    return (Tester::keyboard_C*) &keyboard;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Tester, HardwarePkg_TesterPkg, HardwarePkg::TesterPkg, false, OMAnimatedTester)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\Tester.cpp
*********************************************************************/

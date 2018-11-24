/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: IBarcodeReaderEnabled
//!	Generated Date	: ÷‹“ª, 27, 11‘¬ 2017  
	File Path	: TesterPrototype\Debug\IBarcodeReaderEnabled.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IBarcodeReaderEnabled.h"
//## event evBarcode(int)
#include "CashRegisterPkg.h"
//#[ ignore
#define InterfacePkg_IBarcodeReaderEnabled_IBarcodeReaderEnabled_SERIALIZE OM_NO_OP
//#]

//## package InterfacePkg

//## class IBarcodeReaderEnabled
IBarcodeReaderEnabled::IBarcodeReaderEnabled() {
    NOTIFY_CONSTRUCTOR(IBarcodeReaderEnabled, IBarcodeReaderEnabled(), 0, InterfacePkg_IBarcodeReaderEnabled_IBarcodeReaderEnabled_SERIALIZE);
}

IBarcodeReaderEnabled::~IBarcodeReaderEnabled() {
    NOTIFY_DESTRUCTOR(~IBarcodeReaderEnabled, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(IBarcodeReaderEnabled, InterfacePkg, InterfacePkg, false, OMAnimatedIBarcodeReaderEnabled)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\IBarcodeReaderEnabled.cpp
*********************************************************************/

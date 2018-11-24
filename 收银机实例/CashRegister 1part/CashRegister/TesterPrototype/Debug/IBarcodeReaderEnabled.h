/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: IBarcodeReaderEnabled
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\IBarcodeReaderEnabled.h
*********************************************************************/

#ifndef IBarcodeReaderEnabled_H
#define IBarcodeReaderEnabled_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "InterfacePkg.h"
//## package InterfacePkg

//## class IBarcodeReaderEnabled
class IBarcodeReaderEnabled {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIBarcodeReaderEnabled;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IBarcodeReaderEnabled();
    
    //## auto_generated
    virtual ~IBarcodeReaderEnabled();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIBarcodeReaderEnabled : virtual public AOMInstance {
    DECLARE_META(IBarcodeReaderEnabled, OMAnimatedIBarcodeReaderEnabled)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\IBarcodeReaderEnabled.h
*********************************************************************/

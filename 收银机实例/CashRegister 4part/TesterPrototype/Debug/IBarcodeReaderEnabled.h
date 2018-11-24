/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: IBarcodeReaderEnabled
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
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
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## package InterfacePkg

//## class IBarcodeReaderEnabled
class IBarcodeReaderEnabled : virtual public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIBarcodeReaderEnabled;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IBarcodeReaderEnabled();
    
    //## auto_generated
    virtual ~IBarcodeReaderEnabled() = 0;
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

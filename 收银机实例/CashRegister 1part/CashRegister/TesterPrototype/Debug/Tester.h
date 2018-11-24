/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: Tester
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\Tester.h
*********************************************************************/

#ifndef Tester_H
#define Tester_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "TesterPkg.h"
//## class printer_C
#include "Iprinter.h"
//## class display_C
#include "IDisplay.h"
//## class barcode_C
#include "IBarcodeReaderEnabled.h"
//## class keyboard_C
#include "IKeyboardEnabled.h"
//## package HardwarePkg::TesterPkg

//## class Tester
class Tester {
public :

//#[ ignore
    //## package HardwarePkg::TesterPkg
    class printer_C : public Iprinter {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        printer_C();
        
        //## auto_generated
        virtual ~printer_C();
        
        ////    Operations    ////
        
        //## auto_generated
        Iprinter* getItsIprinter();
        
        //## auto_generated
        Iprinter* getOutBound();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIprinter(Iprinter* p_Iprinter);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        Iprinter* itsIprinter;		//## link itsIprinter
    };
    
    //## package HardwarePkg::TesterPkg
    class display_C : public IDisplay {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        display_C();
        
        //## auto_generated
        virtual ~display_C();
        
        ////    Operations    ////
        
        //## auto_generated
        IDisplay* getItsIDisplay();
        
        //## auto_generated
        IDisplay* getOutBound();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIDisplay(IDisplay* p_IDisplay);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        IDisplay* itsIDisplay;		//## link itsIDisplay
    };
    
    //## package HardwarePkg::TesterPkg
    class barcode_C : public IBarcodeReaderEnabled {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        barcode_C();
        
        //## auto_generated
        virtual ~barcode_C();
        
        ////    Operations    ////
        
        //## auto_generated
        IBarcodeReaderEnabled* getItsIBarcodeReaderEnabled();
        
        //## auto_generated
        IBarcodeReaderEnabled* getOutBound();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIBarcodeReaderEnabled(IBarcodeReaderEnabled* p_IBarcodeReaderEnabled);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        IBarcodeReaderEnabled* itsIBarcodeReaderEnabled;		//## link itsIBarcodeReaderEnabled
    };
    
    //## package HardwarePkg::TesterPkg
    class keyboard_C : public IKeyboardEnabled {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        keyboard_C();
        
        //## auto_generated
        virtual ~keyboard_C();
        
        ////    Operations    ////
        
        //## auto_generated
        IKeyboardEnabled* getItsIKeyboardEnabled();
        
        //## auto_generated
        IKeyboardEnabled* getOutBound();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIKeyboardEnabled(IKeyboardEnabled* p_IKeyboardEnabled);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        IKeyboardEnabled* itsIKeyboardEnabled;		//## link itsIKeyboardEnabled
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedTester;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Tester();
    
    //## auto_generated
    ~Tester();
    
    ////    Additional operations    ////
    
    //## auto_generated
    printer_C* getPrinter() const;
    
    //## auto_generated
    printer_C* get_printer() const;
    
    //## auto_generated
    display_C* getDisplay() const;
    
    //## auto_generated
    display_C* get_display() const;
    
    //## auto_generated
    barcode_C* getBarcode() const;
    
    //## auto_generated
    barcode_C* get_barcode() const;
    
    //## auto_generated
    keyboard_C* getKeyboard() const;
    
    //## auto_generated
    keyboard_C* get_keyboard() const;
    
    ////    Relations and components    ////

protected :

//#[ ignore
    printer_C printer;
    
    display_C display;
    
    barcode_C barcode;
    
    keyboard_C keyboard;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTester : virtual public AOMInstance {
    DECLARE_META(Tester, OMAnimatedTester)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\Tester.h
*********************************************************************/

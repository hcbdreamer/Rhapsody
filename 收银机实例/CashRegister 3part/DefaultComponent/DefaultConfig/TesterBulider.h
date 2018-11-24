/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TesterBulider
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\TesterBulider.h
*********************************************************************/

#ifndef TesterBulider_H
#define TesterBulider_H

//## auto_generated
#include <oxf\oxf.h>
//## classInstance itsCashRegister
#include "CashRegister.h"
//## class printer_C
#include "Iprinter.h"
//## class display_C
#include "IDisplay.h"
//## class barcode_C
#include "IBarcodeReaderEnabled.h"
//## class keyboard_C
#include "IKeyboardEnabled.h"
//## package HardwarePkg::TesterPkg

//## class TesterBulider
class TesterBulider {
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

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TesterBulider();
    
    //## auto_generated
    ~TesterBulider();
    
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
    
    //## auto_generated
    CashRegister* getItsCashRegister() const;
    
    //## auto_generated
    CashRegister* getItsCashRegister_1() const;
    
    //## auto_generated
    void setItsCashRegister_1(CashRegister* p_CashRegister);
    
    //## auto_generated
    CashRegister* getItsCashRegister_2() const;
    
    //## auto_generated
    void setItsCashRegister_2(CashRegister* p_CashRegister);
    
    //## auto_generated
    CashRegister* getItsCashRegister_3() const;
    
    //## auto_generated
    void setItsCashRegister_3(CashRegister* p_CashRegister);
    
    //## auto_generated
    CashRegister* getItsCashRegister_4() const;
    
    //## auto_generated
    void setItsCashRegister_4(CashRegister* p_CashRegister);
    
    //## auto_generated
    TesterBulider* getItsTester() const;

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    printer_C printer;
    
    display_C display;
    
    barcode_C barcode;
    
    keyboard_C keyboard;
//#]

    CashRegister itsCashRegister;		//## classInstance itsCashRegister
    
    CashRegister* itsCashRegister_1;		//## link itsCashRegister_1
    
    CashRegister* itsCashRegister_2;		//## link itsCashRegister_2
    
    CashRegister* itsCashRegister_3;		//## link itsCashRegister_3
    
    CashRegister* itsCashRegister_4;		//## link itsCashRegister_4
    
    TesterBulider itsTester;		//## classInstance itsTester
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCashRegister_1(CashRegister* p_CashRegister);
    
    //## auto_generated
    void _setItsCashRegister_1(CashRegister* p_CashRegister);
    
    //## auto_generated
    void _clearItsCashRegister_1();
    
    //## auto_generated
    void __setItsCashRegister_2(CashRegister* p_CashRegister);
    
    //## auto_generated
    void _setItsCashRegister_2(CashRegister* p_CashRegister);
    
    //## auto_generated
    void _clearItsCashRegister_2();
    
    //## auto_generated
    void __setItsCashRegister_3(CashRegister* p_CashRegister);
    
    //## auto_generated
    void _setItsCashRegister_3(CashRegister* p_CashRegister);
    
    //## auto_generated
    void _clearItsCashRegister_3();
    
    //## auto_generated
    void __setItsCashRegister_4(CashRegister* p_CashRegister);
    
    //## auto_generated
    void _setItsCashRegister_4(CashRegister* p_CashRegister);
    
    //## auto_generated
    void _clearItsCashRegister_4();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TesterBulider.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: CashRegister
//!	Generated Date	: ����, 23, 11�� 2017  
	File Path	: TesterPrototype\Debug\CashRegister.h
*********************************************************************/

#ifndef CashRegister_H
#define CashRegister_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CashRegisterPkg.h"
//## auto_generated
#include <oxf\omcollec.h>
//## link itsProductDatabase
#include "ProductDatabase.h"
//## class printer_C
#include "Iprinter.h"
//## class display_C
#include "IDisplay.h"
//## class barcode_C
#include "IBarcodeReaderEnabled.h"
//## class keyboard_C
#include "IKeyboardEnabled.h"
//## link itsProduct
class Product;

//## package CashRegisterPkg

//## class CashRegister
// This is the controlling object that receives commands via the barcode and keyboard ports.It sends messages to a display and printer via the display and printer ports.
// It manages a list of products.
// It uses the ProductDatabase to identify products from a barcode.
class CashRegister {
public :

//#[ ignore
    //## package CashRegisterPkg
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
    
    //## package CashRegisterPkg
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
    
    //## package CashRegisterPkg
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
    
    //## package CashRegisterPkg
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

#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCashRegister;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CashRegister();
    
    //## auto_generated
    ~CashRegister();
    
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
    OMIterator<Product*> getItsProduct() const;
    
    //## auto_generated
    void addItsProduct(Product* p_Product);
    
    //## auto_generated
    void removeItsProduct(Product* p_Product);
    
    //## auto_generated
    void clearItsProduct();
    
    //## auto_generated
    ProductDatabase* getItsProductDatabase() const;

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

    OMCollection<Product*> itsProduct;		//## link itsProduct
    
    ProductDatabase itsProductDatabase;		//## link itsProductDatabase
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCashRegister : virtual public AOMInstance {
    DECLARE_META(CashRegister, OMAnimatedCashRegister)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\CashRegister.h
*********************************************************************/

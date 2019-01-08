/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: CashRegister
//!	Generated Date	: ÖÜËÄ, 6, 12ÔÂ 2018  
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
//## link itsProductDatabase
#include "ProductDatabase.h"
//## class printer_C
#include "Iprinter.h"
//## class display_C
#include "IDisplay.h"
//## class CashRegister
#include "IBarcodeReaderEnabled.h"
//## class CashRegister
#include "IKeyboardEnabled.h"
//## auto_generated
#include <oxf\ommap.h>
//## auto_generated
#include <oxf\omlist.h>
//## link itsCountedProduct
class CountedProduct;

//#[ ignore
#define CashRegisterPkg_CashRegister_isNoMoreProducts_SERIALIZE OM_NO_OP
//#]

//## auto_generated
class CashRegister;

//## operation addProduct(Product)
class Product;

//## package CashRegisterPkg

//## class CashRegister
#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCashRegister : public OMAnimatedIBarcodeReaderEnabled, public OMAnimatedIKeyboardEnabled {
    DECLARE_REACTIVE_META(CashRegister, OMAnimatedCashRegister)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void active_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

// This is the controlling object that receives commands via the barcode and keyboard ports.It sends messages to a display and printer via the display and printer ports.
// It manages a list of products.
// It uses the ProductDatabase to identify products from a barcode.
class CashRegister : public IBarcodeReaderEnabled, public IKeyboardEnabled {
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
        
        //## auto_generated
        virtual void print(char* aMsg);
        
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
        
        //## auto_generated
        virtual void show(char* aMsg);
        
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
        void connectCashRegister(CashRegister* part);
        
        //## auto_generated
        IBarcodeReaderEnabled* getItsIBarcodeReaderEnabled();
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
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
        void connectCashRegister(CashRegister* part);
        
        //## auto_generated
        IKeyboardEnabled* getItsIKeyboardEnabled();
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
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
    friend class OMAnimatedCashRegister;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CashRegister(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~CashRegister();
    
    ////    Operations    ////
    
    //## operation addProduct(Product)
    void addProduct(Product* aProduct);
    
    //## operation endSession()
    void endSession();
    
    //## operation generateTicket()
    void generateTicket();
    
    //## operation identifyProduct(int)
    void identifyProduct(int aCode);
    
    //## operation isNoMoreProducts() const
    inline int isNoMoreProducts() const;
    
    //## operation removeLastProduct()
    void removeLastProduct();
    
    //## operation startSession()
    void startSession();
    
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
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    OMList<Product*> itsProduct;		//## link itsProduct
    
    ProductDatabase itsProductDatabase;		//## link itsProductDatabase
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## operation countProducts()
    void countProducts();
    
    //## auto_generated
    int getCode() const;
    
    //## auto_generated
    void setCode(int p_code);
    
    //## auto_generated
    OMIterator<CountedProduct*> getItsCountedProduct() const;
    
    //## auto_generated
    void clearItsCountedProduct();
    
    //## auto_generated
    void removeItsCountedProduct(CountedProduct* p_CountedProduct);
    
    //## auto_generated
    CountedProduct* getItsCountedProduct(int key) const;
    
    //## auto_generated
    void addItsCountedProduct(int key, CountedProduct* p_CountedProduct);
    
    //## auto_generated
    void removeItsCountedProduct(int key);

protected :

    //## auto_generated
    void initRelations();
    
    int code;		//## attribute code
    
//#[ ignore
    printer_C printer;
    
    display_C display;
    
    barcode_C barcode;
    
    keyboard_C keyboard;
//#]

    OMMap<int, CountedProduct*> itsCountedProduct;		//## link itsCountedProduct

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    // active:
    //## statechart_method
    inline bool active_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus active_handleEvent();

protected :

//#[ ignore
    enum CashRegister_Enum {
        OMNonState = 0,
        idle = 1,
        active = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline int CashRegister::isNoMoreProducts() const {
    NOTIFY_OPERATION(isNoMoreProducts, isNoMoreProducts() const, 0, CashRegisterPkg_CashRegister_isNoMoreProducts_SERIALIZE);
    //#[ operation isNoMoreProducts() const
    return itsProduct.isEmpty();
    //#]
}

inline bool CashRegister::rootState_IN() const {
    return true;
}

inline bool CashRegister::idle_IN() const {
    return rootState_subState == idle;
}

inline bool CashRegister::active_IN() const {
    return rootState_subState == active;
}

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\CashRegister.h
*********************************************************************/

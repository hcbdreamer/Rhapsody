/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: Tester
//!	Generated Date	: �ܶ�, 28, 11�� 2017  
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
//## class Tester
#include "IBarcodeReaderEnabled.h"
//## class Tester
#include "IDisplay.h"
//## class Tester
#include "IKeyboardEnabled.h"
//## classInstance itsKeyReader
#include "KeyReader.h"
//## class printer_C
#include "Iprinter.h"
//## package HardwarePkg::TesterPkg

//## class Tester
class Tester : public IDisplay, public IBarcodeReaderEnabled, public IKeyboardEnabled {
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
        void connectTester(Tester* part);
        
        //## auto_generated
        IDisplay* getItsIDisplay();
        
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
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIBarcodeReaderEnabled(OMReactive* p_OMReactive);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        OMReactive* itsIBarcodeReaderEnabled;		//## link itsIBarcodeReaderEnabled
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
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIKeyboardEnabled(OMReactive* p_OMReactive);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        OMReactive* itsIKeyboardEnabled;		//## link itsIKeyboardEnabled
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedTester;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation Tester()
    Tester(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Tester();
    
    ////    Operations    ////
    
    //## operation show(char*)
    virtual void show(char* aMsg);
    
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
    KeyReader* getItsKeyReader() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Relations and components    ////
    
//#[ ignore
    printer_C printer;
    
    display_C display;
    
    barcode_C barcode;
    
    keyboard_C keyboard;
//#]

    KeyReader itsKeyReader;		//## classInstance itsKeyReader
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // scenarioCancellingProducts:
    //## statechart_method
    inline bool scenarioCancellingProducts_IN() const;
    
    //## statechart_method
    void scenarioCancellingProducts_entDef();
    
    //## statechart_method
    void scenarioCancellingProducts_exit();
    
    // s4:
    //## statechart_method
    inline bool s4_IN() const;
    
    // s3:
    //## statechart_method
    inline bool s3_IN() const;
    
    // S2_DONEHelperState:
    //## statechart_method
    inline bool S2_DONEHelperState_IN() const;
    
    // s2:
    //## statechart_method
    inline bool s2_IN() const;
    
    // s1:
    //## statechart_method
    inline bool s1_IN() const;
    
    // scenarioAddingProducts:
    //## statechart_method
    inline bool scenarioAddingProducts_IN() const;
    
    //## statechart_method
    void scenarioAddingProducts_entDef();
    
    //## statechart_method
    void scenarioAddingProducts_exit();
    
    // S3:
    //## statechart_method
    inline bool S3_IN() const;
    
    // S2:
    //## statechart_method
    inline bool S2_IN() const;
    
    // S1_DONEHelperState:
    //## statechart_method
    inline bool S1_DONEHelperState_IN() const;
    
    // S1:
    //## statechart_method
    inline bool S1_IN() const;
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Tester_Enum {
        OMNonState = 0,
        scenarioCancellingProducts = 1,
        s4 = 2,
        s3 = 3,
        S2_DONEHelperState = 4,
        s2 = 5,
        s1 = 6,
        scenarioAddingProducts = 7,
        S3 = 8,
        S2 = 9,
        S1_DONEHelperState = 10,
        S1 = 11,
        idle = 12
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int scenarioCancellingProducts_subState;
    
    IOxfTimeout* scenarioCancellingProducts_timeout;
    
    int scenarioAddingProducts_subState;
    
    IOxfTimeout* scenarioAddingProducts_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTester : public OMAnimatedIDisplay, public OMAnimatedIBarcodeReaderEnabled, public OMAnimatedIKeyboardEnabled {
    DECLARE_REACTIVE_META(Tester, OMAnimatedTester)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void scenarioCancellingProducts_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void s4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void s3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void S2_DONEHelperState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void s2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void s1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void scenarioAddingProducts_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void S3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void S2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void S1_DONEHelperState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void S1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Tester::rootState_IN() const {
    return true;
}

inline bool Tester::scenarioCancellingProducts_IN() const {
    return rootState_subState == scenarioCancellingProducts;
}

inline bool Tester::s4_IN() const {
    return scenarioCancellingProducts_subState == s4;
}

inline bool Tester::s3_IN() const {
    return scenarioCancellingProducts_subState == s3;
}

inline bool Tester::S2_DONEHelperState_IN() const {
    return scenarioCancellingProducts_subState == S2_DONEHelperState;
}

inline bool Tester::s2_IN() const {
    return scenarioCancellingProducts_subState == s2;
}

inline bool Tester::s1_IN() const {
    return scenarioCancellingProducts_subState == s1;
}

inline bool Tester::scenarioAddingProducts_IN() const {
    return rootState_subState == scenarioAddingProducts;
}

inline bool Tester::S3_IN() const {
    return scenarioAddingProducts_subState == S3;
}

inline bool Tester::S2_IN() const {
    return scenarioAddingProducts_subState == S2;
}

inline bool Tester::S1_DONEHelperState_IN() const {
    return scenarioAddingProducts_subState == S1_DONEHelperState;
}

inline bool Tester::S1_IN() const {
    return scenarioAddingProducts_subState == S1;
}

inline bool Tester::idle_IN() const {
    return rootState_subState == idle;
}

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\Tester.h
*********************************************************************/

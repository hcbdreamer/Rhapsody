/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: Tester
//!	Generated Date	: 周六, 5, 5月 2018  
	File Path	: TesterPrototype\Debug\Tester.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Tester.h"
//## auto_generated
#include "CashRegisterPkg.h"
//## auto_generated
#include <iostream>
//#[ ignore
#define HardwarePkg_TesterPkg_Tester_Tester_SERIALIZE OM_NO_OP

#define HardwarePkg_TesterPkg_Tester_Print_SERIALIZE aomsmethod->addAttribute("aMsg", x2String(aMsg));

#define HardwarePkg_TesterPkg_Tester_print_SERIALIZE aomsmethod->addAttribute("aMsg", x2String(aMsg));

#define HardwarePkg_TesterPkg_Tester_show_SERIALIZE aomsmethod->addAttribute("aMsg", x2String(aMsg));
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

void Tester::printer_C::connectTester(Tester* part) {
    setItsIprinter(part);
    
}

Iprinter* Tester::printer_C::getItsIprinter() {
    return this;
}

void Tester::printer_C::print(char* aMsg) {
    
    if (itsIprinter != NULL) {
        itsIprinter->print(aMsg);
    }
    
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

void Tester::display_C::connectTester(Tester* part) {
    setItsIDisplay(part);
    
}

IDisplay* Tester::display_C::getItsIDisplay() {
    return this;
}

void Tester::display_C::show(char* aMsg) {
    
    if (itsIDisplay != NULL) {
        itsIDisplay->show(aMsg);
    }
    
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

bool Tester::barcode_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsIBarcodeReaderEnabled != NULL) {
            if (event->isTypeOf(evBarcode_CashRegisterPkg_id)) {
                res = itsIBarcodeReaderEnabled->send(event, params);
            }
        }
    }
    return res;
    
}

bool Tester::barcode_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsIBarcodeReaderEnabled != NULL) {
            if (event->isTypeOf(evBarcode_CashRegisterPkg_id)) {
                res = itsIBarcodeReaderEnabled->send(event);
            }
        }
    }
    return res;
    
}

void Tester::barcode_C::setItsIBarcodeReaderEnabled(OMReactive* p_OMReactive) {
    itsIBarcodeReaderEnabled = p_OMReactive;
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

bool Tester::keyboard_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsIKeyboardEnabled != NULL) {
            if (event->isTypeOf(evStart_CashRegisterPkg_id)) {
                res = itsIKeyboardEnabled->send(event, params);
                return res;
            }
            if (event->isTypeOf(evCancel_CashRegisterPkg_id)) {
                res = itsIKeyboardEnabled->send(event, params);
                return res;
            }
            if (event->isTypeOf(evEnd_CashRegisterPkg_id)) {
                res = itsIKeyboardEnabled->send(event, params);
                return res;
            }
            if (event->isTypeOf(evKey_CashRegisterPkg_id)) {
                res = itsIKeyboardEnabled->send(event, params);
                return res;
            }
            if (event->isTypeOf(evCode_CashRegisterPkg_id)) {
                res = itsIKeyboardEnabled->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool Tester::keyboard_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsIKeyboardEnabled != NULL) {
            if (event->isTypeOf(evStart_CashRegisterPkg_id)) {
                res = itsIKeyboardEnabled->send(event);
                return res;
            }
            if (event->isTypeOf(evCancel_CashRegisterPkg_id)) {
                res = itsIKeyboardEnabled->send(event);
                return res;
            }
            if (event->isTypeOf(evEnd_CashRegisterPkg_id)) {
                res = itsIKeyboardEnabled->send(event);
                return res;
            }
            if (event->isTypeOf(evKey_CashRegisterPkg_id)) {
                res = itsIKeyboardEnabled->send(event);
                return res;
            }
            if (event->isTypeOf(evCode_CashRegisterPkg_id)) {
                res = itsIKeyboardEnabled->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void Tester::keyboard_C::setItsIKeyboardEnabled(OMReactive* p_OMReactive) {
    itsIKeyboardEnabled = p_OMReactive;
}

void Tester::keyboard_C::cleanUpRelations() {
    if(itsIKeyboardEnabled != NULL)
        {
            itsIKeyboardEnabled = NULL;
        }
}
//#]

Tester::Tester(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Tester, Tester(), 0, HardwarePkg_TesterPkg_Tester_Tester_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsKeyReader.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
    //#[ operation Tester()
    itsKeyReader.start(); //start函数是OMThread的一部分
    //#]
}

Tester::~Tester() {
    NOTIFY_DESTRUCTOR(~Tester, false);
    cancelTimeouts();
}

void Tester::Print(char* aMsg) {
    NOTIFY_OPERATION(Print, Print(char*), 1, HardwarePkg_TesterPkg_Tester_Print_SERIALIZE);
    //#[ operation Print(char*)
    std::cout<<"Printer: "<<aMsg<<std::endl;
    //#]
}

void Tester::print(char* aMsg) {
    NOTIFY_OPERATION(print, print(char*), 1, HardwarePkg_TesterPkg_Tester_print_SERIALIZE);
    //#[ operation print(char*)
    std::cout<<"Printer: "<<aMsg<<std::endl;
    //#]
}

void Tester::show(char* aMsg) {
    NOTIFY_OPERATION(show, show(char*), 1, HardwarePkg_TesterPkg_Tester_show_SERIALIZE);
    //#[ operation show(char*)
    std::cout<<"Display:"<<aMsg<<std::endl;
    //#]
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

KeyReader* Tester::getItsKeyReader() const {
    return (KeyReader*) &itsKeyReader;
}

bool Tester::startBehavior() {
    bool done = true;
    done &= itsKeyReader.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Tester::initRelations() {
    {
        
        itsKeyReader.get_keyboard()->setItsIKeyboardEnabled(get_keyboard()->getItsIKeyboardEnabled());
        
    }
    if (get_printer() != NULL) {
        get_printer()->connectTester(this);
    }
    if (get_display() != NULL) {
        get_display()->connectTester(this);
    }
}

void Tester::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    scenarioGeneratingTicket_subState = OMNonState;
    scenarioGeneratingTicket_timeout = NULL;
    scenarioCancellingProducts_subState = OMNonState;
    scenarioCancellingProducts_timeout = NULL;
    scenarioAddingProducts_subState = OMNonState;
    scenarioAddingProducts_timeout = NULL;
}

void Tester::cancelTimeouts() {
    cancel(scenarioGeneratingTicket_timeout);
    cancel(scenarioCancellingProducts_timeout);
    cancel(scenarioAddingProducts_timeout);
}

bool Tester::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(scenarioGeneratingTicket_timeout == arg)
        {
            scenarioGeneratingTicket_timeout = NULL;
            res = true;
        }
    if(scenarioCancellingProducts_timeout == arg)
        {
            scenarioCancellingProducts_timeout = NULL;
            res = true;
        }
    if(scenarioAddingProducts_timeout == arg)
        {
            scenarioAddingProducts_timeout = NULL;
            res = true;
        }
    return res;
}

void Tester::destroy() {
    itsKeyReader.destroy();
    OMReactive::destroy();
}

void Tester::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("2");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("2");
    }
}

IOxfReactive::TakeEventStatus Tester::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle
        case idle:
        {
            res = idle_handleEvent();
        }
        break;
        // State S1
        case S1:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == scenarioAddingProducts_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.scenarioAddingProducts.1");
                            cancel(scenarioAddingProducts_timeout);
                            NOTIFY_STATE_EXITED("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S1");
                            //#[ transition scenarioAddingProducts.1 
                                
                             OUT_PORT(keyboard)->GEN(evStart);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S2");
                            scenarioAddingProducts_subState = S2;
                            rootState_active = S2;
                            scenarioAddingProducts_timeout = scheduleTimeout(100, "ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S2");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioAddingProducts.1");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State S2
        case S2:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == scenarioAddingProducts_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.scenarioAddingProducts.3");
                            cancel(scenarioAddingProducts_timeout);
                            NOTIFY_STATE_EXITED("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S2");
                            //#[ transition scenarioAddingProducts.3 
                            OUT_PORT(barcode)->GEN(evBarcode(12345));
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S3");
                            scenarioAddingProducts_subState = S3;
                            rootState_active = S3;
                            scenarioAddingProducts_timeout = scheduleTimeout(100, "ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S3");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioAddingProducts.3");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State S3
        case S3:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == scenarioAddingProducts_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.scenarioAddingProducts.2");
                            cancel(scenarioAddingProducts_timeout);
                            NOTIFY_STATE_EXITED("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S3");
                            //#[ transition scenarioAddingProducts.2 
                              
                            OUT_PORT(keyboard)->GEN(evEnd);
                            //#]
                            pushNullTransition();
                            scenarioAddingProducts_subState = S1_DONEHelperState;
                            rootState_active = S1_DONEHelperState;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioAddingProducts.2");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State S1_DONEHelperState
        case S1_DONEHelperState:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.scenarioAddingProducts.4");
                    scenarioAddingProducts_exit();
                    NOTIFY_STATE_ENTERED("ROOT.idle");
                    rootState_subState = idle;
                    rootState_active = idle;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioAddingProducts.4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State s1
        case s1:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == scenarioCancellingProducts_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.scenarioCancellingProducts.1");
                            cancel(scenarioCancellingProducts_timeout);
                            NOTIFY_STATE_EXITED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s1");
                            //#[ transition scenarioCancellingProducts.1 
                                                                      
                            OUT_PORT(keyboard)->GEN(evStart);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s2");
                            scenarioCancellingProducts_subState = s2;
                            rootState_active = s2;
                            scenarioCancellingProducts_timeout = scheduleTimeout(100, "ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s2");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioCancellingProducts.1");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State s2
        case s2:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == scenarioCancellingProducts_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.scenarioCancellingProducts.2");
                            cancel(scenarioCancellingProducts_timeout);
                            NOTIFY_STATE_EXITED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s2");
                            //#[ transition scenarioCancellingProducts.2 
                             
                            OUT_PORT(barcode)->GEN(evBarcode(12345));
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s3");
                            scenarioCancellingProducts_subState = s3;
                            rootState_active = s3;
                            scenarioCancellingProducts_timeout = scheduleTimeout(100, "ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s3");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioCancellingProducts.2");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State s3
        case s3:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == scenarioCancellingProducts_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.scenarioCancellingProducts.3");
                            cancel(scenarioCancellingProducts_timeout);
                            NOTIFY_STATE_EXITED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s3");
                            //#[ transition scenarioCancellingProducts.3 
                            
                            OUT_PORT(keyboard)->GEN(evCancel);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s4");
                            scenarioCancellingProducts_subState = s4;
                            rootState_active = s4;
                            scenarioCancellingProducts_timeout = scheduleTimeout(100, "ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s4");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioCancellingProducts.3");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State s4
        case s4:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == scenarioCancellingProducts_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.scenarioCancellingProducts.4");
                            cancel(scenarioCancellingProducts_timeout);
                            NOTIFY_STATE_EXITED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s4");
                            //#[ transition scenarioCancellingProducts.4 
                            OUT_PORT(keyboard)->GEN(evCancel);
                            //#]
                            pushNullTransition();
                            scenarioCancellingProducts_subState = S2_DONEHelperState;
                            rootState_active = S2_DONEHelperState;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioCancellingProducts.4");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State S2_DONEHelperState
        case S2_DONEHelperState:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.scenarioCancellingProducts.5");
                    scenarioCancellingProducts_exit();
                    NOTIFY_STATE_ENTERED("ROOT.idle");
                    rootState_subState = idle;
                    rootState_active = idle;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioCancellingProducts.5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State S1
        case scenarioGeneratingTicket_S1:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == scenarioGeneratingTicket_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.scenarioGeneratingTicket.1");
                            cancel(scenarioGeneratingTicket_timeout);
                            NOTIFY_STATE_EXITED("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S1");
                            //#[ transition scenarioGeneratingTicket.1 
                             
                             OUT_PORT(keyboard)->GEN(evStart);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S2");
                            scenarioGeneratingTicket_subState = scenarioGeneratingTicket_S2;
                            rootState_active = scenarioGeneratingTicket_S2;
                            scenarioGeneratingTicket_timeout = scheduleTimeout(100, "ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S2");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioGeneratingTicket.1");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State S2
        case scenarioGeneratingTicket_S2:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == scenarioGeneratingTicket_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.scenarioGeneratingTicket.2");
                            cancel(scenarioGeneratingTicket_timeout);
                            NOTIFY_STATE_EXITED("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S2");
                            //#[ transition scenarioGeneratingTicket.2 
                            
                            OUT_PORT(barcode)->GEN(evBarcode(12344));
                            OUT_PORT(barcode)->GEN(evBarcode(12345));
                            OUT_PORT(barcode)->GEN(evBarcode(12346));
                            OUT_PORT(barcode)->GEN(evBarcode(12347));
                            OUT_PORT(barcode)->GEN(evBarcode(12348));
                            OUT_PORT(barcode)->GEN(evBarcode(12349));
                            OUT_PORT(barcode)->GEN(evBarcode(12340));
                            OUT_PORT(barcode)->GEN(evBarcode(12344));
                            OUT_PORT(barcode)->GEN(evBarcode(12346));
                            OUT_PORT(barcode)->GEN(evBarcode(12347));
                            OUT_PORT(barcode)->GEN(evBarcode(12348));
                            OUT_PORT(barcode)->GEN(evBarcode(12344));
                            OUT_PORT(barcode)->GEN(evBarcode(12349));
                            OUT_PORT(barcode)->GEN(evBarcode(12349));
                            OUT_PORT(barcode)->GEN(evBarcode(12345));
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S3");
                            scenarioGeneratingTicket_subState = scenarioGeneratingTicket_S3;
                            rootState_active = scenarioGeneratingTicket_S3;
                            scenarioGeneratingTicket_timeout = scheduleTimeout(100, "ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S3");
                            NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioGeneratingTicket.2");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State S3
        case scenarioGeneratingTicket_S3:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == scenarioGeneratingTicket_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.scenarioGeneratingTicket.3");
                            cancel(scenarioGeneratingTicket_timeout);
                            NOTIFY_STATE_EXITED("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S3");
                            //#[ transition scenarioGeneratingTicket.3 
                            OUT_PORT(keyboard)->GEN(evEnd);
                            //#]
                            pushNullTransition();
                            scenarioGeneratingTicket_subState = S3_DONEHelperState;
                            rootState_active = S3_DONEHelperState;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioGeneratingTicket.3");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State S3_DONEHelperState
        case S3_DONEHelperState:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.scenarioGeneratingTicket.4");
                    scenarioGeneratingTicket_exit();
                    NOTIFY_STATE_ENTERED("ROOT.idle");
                    rootState_subState = idle;
                    rootState_active = idle;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioGeneratingTicket.4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Tester::scenarioGeneratingTicket_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.scenarioGeneratingTicket");
    rootState_subState = scenarioGeneratingTicket;
    NOTIFY_TRANSITION_STARTED("ROOT.scenarioGeneratingTicket.0");
    NOTIFY_STATE_ENTERED("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S1");
    scenarioGeneratingTicket_subState = scenarioGeneratingTicket_S1;
    rootState_active = scenarioGeneratingTicket_S1;
    scenarioGeneratingTicket_timeout = scheduleTimeout(100, "ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S1");
    NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioGeneratingTicket.0");
}

void Tester::scenarioGeneratingTicket_exit() {
    switch (scenarioGeneratingTicket_subState) {
        // State S1
        case scenarioGeneratingTicket_S1:
        {
            cancel(scenarioGeneratingTicket_timeout);
            NOTIFY_STATE_EXITED("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S1");
        }
        break;
        // State S2
        case scenarioGeneratingTicket_S2:
        {
            cancel(scenarioGeneratingTicket_timeout);
            NOTIFY_STATE_EXITED("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S2");
        }
        break;
        // State S3
        case scenarioGeneratingTicket_S3:
        {
            cancel(scenarioGeneratingTicket_timeout);
            NOTIFY_STATE_EXITED("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S3");
        }
        break;
        // State S3_DONEHelperState
        case S3_DONEHelperState:
        {
            popNullTransition();
        }
        break;
        default:
            break;
    }
    scenarioGeneratingTicket_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.scenarioGeneratingTicket");
}

void Tester::scenarioCancellingProducts_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.scenarioCancellingProducts");
    rootState_subState = scenarioCancellingProducts;
    NOTIFY_TRANSITION_STARTED("ROOT.scenarioCancellingProducts.0");
    NOTIFY_STATE_ENTERED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s1");
    scenarioCancellingProducts_subState = s1;
    rootState_active = s1;
    scenarioCancellingProducts_timeout = scheduleTimeout(100, "ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s1");
    NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioCancellingProducts.0");
}

void Tester::scenarioCancellingProducts_exit() {
    switch (scenarioCancellingProducts_subState) {
        // State s1
        case s1:
        {
            cancel(scenarioCancellingProducts_timeout);
            NOTIFY_STATE_EXITED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s1");
        }
        break;
        // State s2
        case s2:
        {
            cancel(scenarioCancellingProducts_timeout);
            NOTIFY_STATE_EXITED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s2");
        }
        break;
        // State s3
        case s3:
        {
            cancel(scenarioCancellingProducts_timeout);
            NOTIFY_STATE_EXITED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s3");
        }
        break;
        // State s4
        case s4:
        {
            cancel(scenarioCancellingProducts_timeout);
            NOTIFY_STATE_EXITED("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s4");
        }
        break;
        // State S2_DONEHelperState
        case S2_DONEHelperState:
        {
            popNullTransition();
        }
        break;
        default:
            break;
    }
    scenarioCancellingProducts_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.scenarioCancellingProducts");
}

void Tester::scenarioAddingProducts_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.scenarioAddingProducts");
    rootState_subState = scenarioAddingProducts;
    NOTIFY_TRANSITION_STARTED("ROOT.scenarioAddingProducts.0");
    NOTIFY_STATE_ENTERED("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S1");
    scenarioAddingProducts_subState = S1;
    rootState_active = S1;
    scenarioAddingProducts_timeout = scheduleTimeout(100, "ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S1");
    NOTIFY_TRANSITION_TERMINATED("ROOT.scenarioAddingProducts.0");
}

void Tester::scenarioAddingProducts_exit() {
    switch (scenarioAddingProducts_subState) {
        // State S1
        case S1:
        {
            cancel(scenarioAddingProducts_timeout);
            NOTIFY_STATE_EXITED("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S1");
        }
        break;
        // State S2
        case S2:
        {
            cancel(scenarioAddingProducts_timeout);
            NOTIFY_STATE_EXITED("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S2");
        }
        break;
        // State S3
        case S3:
        {
            cancel(scenarioAddingProducts_timeout);
            NOTIFY_STATE_EXITED("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S3");
        }
        break;
        // State S1_DONEHelperState
        case S1_DONEHelperState:
        {
            popNullTransition();
        }
        break;
        default:
            break;
    }
    scenarioAddingProducts_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.scenarioAddingProducts");
}

IOxfReactive::TakeEventStatus Tester::idle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evS1_TesterPkg_HardwarePkg_id))
        {
            NOTIFY_TRANSITION_STARTED("0");
            NOTIFY_STATE_EXITED("ROOT.idle");
            scenarioAddingProducts_entDef();
            NOTIFY_TRANSITION_TERMINATED("0");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evS2_TesterPkg_HardwarePkg_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_STATE_EXITED("ROOT.idle");
            scenarioCancellingProducts_entDef();
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evS3_TesterPkg_HardwarePkg_id))
        {
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_STATE_EXITED("ROOT.idle");
            scenarioGeneratingTicket_entDef();
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTester::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedIDisplay::serializeAttributes(aomsAttributes);
    OMAnimatedIBarcodeReaderEnabled::serializeAttributes(aomsAttributes);
    OMAnimatedIKeyboardEnabled::serializeAttributes(aomsAttributes);
    OMAnimatedIprinter::serializeAttributes(aomsAttributes);
}

void OMAnimatedTester::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsKeyReader", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsKeyReader);
    OMAnimatedIDisplay::serializeRelations(aomsRelations);
    OMAnimatedIBarcodeReaderEnabled::serializeRelations(aomsRelations);
    OMAnimatedIKeyboardEnabled::serializeRelations(aomsRelations);
    OMAnimatedIprinter::serializeRelations(aomsRelations);
}

void OMAnimatedTester::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Tester::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case Tester::scenarioAddingProducts:
        {
            scenarioAddingProducts_serializeStates(aomsState);
        }
        break;
        case Tester::scenarioCancellingProducts:
        {
            scenarioCancellingProducts_serializeStates(aomsState);
        }
        break;
        case Tester::scenarioGeneratingTicket:
        {
            scenarioGeneratingTicket_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTester::scenarioGeneratingTicket_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioGeneratingTicket");
    switch (myReal->scenarioGeneratingTicket_subState) {
        case Tester::scenarioGeneratingTicket_S1:
        {
            scenarioGeneratingTicket_S1_serializeStates(aomsState);
        }
        break;
        case Tester::scenarioGeneratingTicket_S2:
        {
            scenarioGeneratingTicket_S2_serializeStates(aomsState);
        }
        break;
        case Tester::scenarioGeneratingTicket_S3:
        {
            scenarioGeneratingTicket_S3_serializeStates(aomsState);
        }
        break;
        case Tester::S3_DONEHelperState:
        {
            S3_DONEHelperState_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTester::S3_DONEHelperState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S3_DONEHelperState");
}

void OMAnimatedTester::scenarioGeneratingTicket_S3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S3");
}

void OMAnimatedTester::scenarioGeneratingTicket_S2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S2");
}

void OMAnimatedTester::scenarioGeneratingTicket_S1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioGeneratingTicket.ROOT.scenarioGeneratingTicket.S1");
}

void OMAnimatedTester::scenarioCancellingProducts_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioCancellingProducts");
    switch (myReal->scenarioCancellingProducts_subState) {
        case Tester::s1:
        {
            s1_serializeStates(aomsState);
        }
        break;
        case Tester::s2:
        {
            s2_serializeStates(aomsState);
        }
        break;
        case Tester::s3:
        {
            s3_serializeStates(aomsState);
        }
        break;
        case Tester::s4:
        {
            s4_serializeStates(aomsState);
        }
        break;
        case Tester::S2_DONEHelperState:
        {
            S2_DONEHelperState_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTester::s4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s4");
}

void OMAnimatedTester::s3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s3");
}

void OMAnimatedTester::S2_DONEHelperState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.S2_DONEHelperState");
}

void OMAnimatedTester::s2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s2");
}

void OMAnimatedTester::s1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioCancellingProducts.ROOT.scenarioCancellingProducts.s1");
}

void OMAnimatedTester::scenarioAddingProducts_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioAddingProducts");
    switch (myReal->scenarioAddingProducts_subState) {
        case Tester::S1:
        {
            S1_serializeStates(aomsState);
        }
        break;
        case Tester::S2:
        {
            S2_serializeStates(aomsState);
        }
        break;
        case Tester::S3:
        {
            S3_serializeStates(aomsState);
        }
        break;
        case Tester::S1_DONEHelperState:
        {
            S1_DONEHelperState_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTester::S3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S3");
}

void OMAnimatedTester::S2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S2");
}

void OMAnimatedTester::S1_DONEHelperState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S1_DONEHelperState");
}

void OMAnimatedTester::S1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.scenarioAddingProducts.ROOT.scenarioAddingProducts.S1");
}

void OMAnimatedTester::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}

static AOMClass* _TesterSuper[4] = {
OMAnimatedIDisplay::staticGetClass(),
OMAnimatedIBarcodeReaderEnabled::staticGetClass(),
OMAnimatedIKeyboardEnabled::staticGetClass(),
OMAnimatedIprinter::staticGetClass()};
//#]

IMPLEMENT_REACTIVE_META_M_P(Tester, HardwarePkg::TesterPkg, false, _TesterSuper, 4, OMAnimatedTester)

OMINIT_SUPERCLASS(IDisplay, OMAnimatedIDisplay)

OMINIT_SUPERCLASS(IBarcodeReaderEnabled, OMAnimatedIBarcodeReaderEnabled)

OMINIT_SUPERCLASS(IKeyboardEnabled, OMAnimatedIKeyboardEnabled)

OMINIT_SUPERCLASS(Iprinter, OMAnimatedIprinter)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\Tester.cpp
*********************************************************************/

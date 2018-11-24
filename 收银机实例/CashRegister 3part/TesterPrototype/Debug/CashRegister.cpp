/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: CashRegister
//!	Generated Date	: ÖÜ¶þ, 28, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\CashRegister.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "CashRegister.h"
//## operation addProduct(Product)
#include "Product.h"
//## auto_generated
#include "stdio.h"
//#[ ignore
#define CashRegisterPkg_CashRegister_CashRegister_SERIALIZE OM_NO_OP

#define CashRegisterPkg_CashRegister_addProduct_SERIALIZE aomsmethod->addAttribute("aProduct", X2ITEM(aProduct));

#define CashRegisterPkg_CashRegister_endSession_SERIALIZE OM_NO_OP

#define CashRegisterPkg_CashRegister_generateTicket_SERIALIZE OM_NO_OP

#define CashRegisterPkg_CashRegister_identifyProduct_SERIALIZE aomsmethod->addAttribute("aCode", x2String(aCode));

#define CashRegisterPkg_CashRegister_removeLastProduct_SERIALIZE OM_NO_OP

#define CashRegisterPkg_CashRegister_startSession_SERIALIZE OM_NO_OP
//#]

//## package CashRegisterPkg

//## class CashRegister
#ifdef _OMINSTRUMENT
//#[ ignore
static AOMClass* _CashRegisterSuper[2] = {
OMAnimatedIBarcodeReaderEnabled::staticGetClass(),
OMAnimatedIKeyboardEnabled::staticGetClass()};

void OMAnimatedCashRegister::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("code", x2String(myReal->code));
    OMAnimatedIBarcodeReaderEnabled::serializeAttributes(aomsAttributes);
    OMAnimatedIKeyboardEnabled::serializeAttributes(aomsAttributes);
}

void OMAnimatedCashRegister::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsProductDatabase", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsProductDatabase);
    aomsRelations->addRelation("itsProduct", false, false);
    {
        OMIterator<Product*> iter(myReal->itsProduct);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    OMAnimatedIBarcodeReaderEnabled::serializeRelations(aomsRelations);
    OMAnimatedIKeyboardEnabled::serializeRelations(aomsRelations);
}

void OMAnimatedCashRegister::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case CashRegister::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case CashRegister::active:
        {
            active_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCashRegister::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}

void OMAnimatedCashRegister::active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.active");
}
//#]
#endif // _OMINSTRUMENT

//#[ ignore
CashRegister::printer_C::printer_C() : _p_(0) {
    itsIprinter = NULL;
}

CashRegister::printer_C::~printer_C() {
    cleanUpRelations();
}

Iprinter* CashRegister::printer_C::getItsIprinter() {
    return this;
}

Iprinter* CashRegister::printer_C::getOutBound() {
    return this;
}

void CashRegister::printer_C::setItsIprinter(Iprinter* p_Iprinter) {
    itsIprinter = p_Iprinter;
}

void CashRegister::printer_C::cleanUpRelations() {
    if(itsIprinter != NULL)
        {
            itsIprinter = NULL;
        }
}

CashRegister::display_C::display_C() : _p_(0) {
    itsIDisplay = NULL;
}

CashRegister::display_C::~display_C() {
    cleanUpRelations();
}

IDisplay* CashRegister::display_C::getItsIDisplay() {
    return this;
}

IDisplay* CashRegister::display_C::getOutBound() {
    return this;
}

void CashRegister::display_C::show(char* aMsg) {
    
    if (itsIDisplay != NULL) {
        itsIDisplay->show(aMsg);
    }
    
}

void CashRegister::display_C::setItsIDisplay(IDisplay* p_IDisplay) {
    itsIDisplay = p_IDisplay;
}

void CashRegister::display_C::cleanUpRelations() {
    if(itsIDisplay != NULL)
        {
            itsIDisplay = NULL;
        }
}

CashRegister::barcode_C::barcode_C() : _p_(0) {
    itsIBarcodeReaderEnabled = NULL;
}

CashRegister::barcode_C::~barcode_C() {
    cleanUpRelations();
}

void CashRegister::barcode_C::connectCashRegister(CashRegister* part) {
    setItsIBarcodeReaderEnabled(part);
    
}

IBarcodeReaderEnabled* CashRegister::barcode_C::getItsIBarcodeReaderEnabled() {
    return this;
}

bool CashRegister::barcode_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsIBarcodeReaderEnabled != NULL) {
            if (event->isTypeOf(evBarcode_CashRegisterPkg_id)) {
                res = itsIBarcodeReaderEnabled->send(event, params);
            }
        }
    }
    return res;
    
}

bool CashRegister::barcode_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsIBarcodeReaderEnabled != NULL) {
            if (event->isTypeOf(evBarcode_CashRegisterPkg_id)) {
                res = itsIBarcodeReaderEnabled->send(event);
            }
        }
    }
    return res;
    
}

void CashRegister::barcode_C::setItsIBarcodeReaderEnabled(IBarcodeReaderEnabled* p_IBarcodeReaderEnabled) {
    itsIBarcodeReaderEnabled = p_IBarcodeReaderEnabled;
}

void CashRegister::barcode_C::cleanUpRelations() {
    if(itsIBarcodeReaderEnabled != NULL)
        {
            itsIBarcodeReaderEnabled = NULL;
        }
}

CashRegister::keyboard_C::keyboard_C() : _p_(0) {
    itsIKeyboardEnabled = NULL;
}

CashRegister::keyboard_C::~keyboard_C() {
    cleanUpRelations();
}

void CashRegister::keyboard_C::connectCashRegister(CashRegister* part) {
    setItsIKeyboardEnabled(part);
    
}

IKeyboardEnabled* CashRegister::keyboard_C::getItsIKeyboardEnabled() {
    return this;
}

bool CashRegister::keyboard_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
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

bool CashRegister::keyboard_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
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

void CashRegister::keyboard_C::setItsIKeyboardEnabled(IKeyboardEnabled* p_IKeyboardEnabled) {
    itsIKeyboardEnabled = p_IKeyboardEnabled;
}

void CashRegister::keyboard_C::cleanUpRelations() {
    if(itsIKeyboardEnabled != NULL)
        {
            itsIKeyboardEnabled = NULL;
        }
}
//#]

CashRegister::CashRegister(IOxfActive* theActiveContext) : code(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(CashRegister, CashRegister(), 0, CashRegisterPkg_CashRegister_CashRegister_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

CashRegister::~CashRegister() {
    NOTIFY_DESTRUCTOR(~CashRegister, false);
    cleanUpRelations();
}

void CashRegister::addProduct(Product* aProduct) {
    NOTIFY_OPERATION(addProduct, addProduct(Product*), 1, CashRegisterPkg_CashRegister_addProduct_SERIALIZE);
    //#[ operation addProduct(Product)
    char msg[64];
    
    addItsProduct(aProduct);
    sprintf(msg,"Adding %s",aProduct->getName());
    OUT_PORT(display)->show(msg);
    //#]
}

void CashRegister::endSession() {
    NOTIFY_OPERATION(endSession, endSession(), 0, CashRegisterPkg_CashRegister_endSession_SERIALIZE);
    //#[ operation endSession()
    OUT_PORT(display)->show("");
    clearItsProduct();
    //#]
}

void CashRegister::generateTicket() {
    NOTIFY_OPERATION(generateTicket, generateTicket(), 0, CashRegisterPkg_CashRegister_generateTicket_SERIALIZE);
    //#[ operation generateTicket()
    //#]
}

void CashRegister::identifyProduct(int aCode) {
    NOTIFY_OPERATION(identifyProduct, identifyProduct(int), 1, CashRegisterPkg_CashRegister_identifyProduct_SERIALIZE);
    //#[ operation identifyProduct(int)
    Product* aProduct;
    aProduct=itsProductDatabase.getProduct(aCode);
    
    if(NULL==aProduct){
    OUT_PORT(display)->show("Unknown barcode");
    }else{
    addProduct(aProduct);
    }
    //#]
}

void CashRegister::removeLastProduct() {
    NOTIFY_OPERATION(removeLastProduct, removeLastProduct(), 0, CashRegisterPkg_CashRegister_removeLastProduct_SERIALIZE);
    //#[ operation removeLastProduct()
    OMIterator<Product*>iter(itsProduct);
    Product* p=NULL;
    char msg[64];
    
    //Iterate through the list until we point to the last one
    while(*iter){
    p=*iter;
    iter++;
    }
    if(p!=NULL){
    sprintf(msg,"Remove %s",p->getName());
    OUT_PORT(display)->show(msg);
    removeItsProduct(p);
    }
    //#]
}

void CashRegister::startSession() {
    NOTIFY_OPERATION(startSession, startSession(), 0, CashRegisterPkg_CashRegister_startSession_SERIALIZE);
    //#[ operation startSession()
    OUT_PORT(display)->show("Ready");
    //#]
}

CashRegister::printer_C* CashRegister::getPrinter() const {
    return (CashRegister::printer_C*) &printer;
}

CashRegister::printer_C* CashRegister::get_printer() const {
    return (CashRegister::printer_C*) &printer;
}

CashRegister::display_C* CashRegister::getDisplay() const {
    return (CashRegister::display_C*) &display;
}

CashRegister::display_C* CashRegister::get_display() const {
    return (CashRegister::display_C*) &display;
}

CashRegister::barcode_C* CashRegister::getBarcode() const {
    return (CashRegister::barcode_C*) &barcode;
}

CashRegister::barcode_C* CashRegister::get_barcode() const {
    return (CashRegister::barcode_C*) &barcode;
}

CashRegister::keyboard_C* CashRegister::getKeyboard() const {
    return (CashRegister::keyboard_C*) &keyboard;
}

CashRegister::keyboard_C* CashRegister::get_keyboard() const {
    return (CashRegister::keyboard_C*) &keyboard;
}

OMIterator<Product*> CashRegister::getItsProduct() const {
    OMIterator<Product*> iter(itsProduct);
    return iter;
}

void CashRegister::addItsProduct(Product* p_Product) {
    if(p_Product != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsProduct", p_Product, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsProduct");
        }
    itsProduct.add(p_Product);
}

void CashRegister::removeItsProduct(Product* p_Product) {
    NOTIFY_RELATION_ITEM_REMOVED("itsProduct", p_Product);
    itsProduct.remove(p_Product);
}

void CashRegister::clearItsProduct() {
    NOTIFY_RELATION_CLEARED("itsProduct");
    itsProduct.removeAll();
}

ProductDatabase* CashRegister::getItsProductDatabase() const {
    return (ProductDatabase*) &itsProductDatabase;
}

bool CashRegister::startBehavior() {
    bool done = true;
    done &= OMReactive::startBehavior();
    return done;
}

void CashRegister::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void CashRegister::cleanUpRelations() {
    {
        itsProduct.removeAll();
    }
}

int CashRegister::getCode() const {
    return code;
}

void CashRegister::setCode(int p_code) {
    code = p_code;
}

void CashRegister::initRelations() {
    if (get_barcode() != NULL) {
        get_barcode()->connectCashRegister(this);
    }
    if (get_keyboard() != NULL) {
        get_keyboard()->connectCashRegister(this);
    }
}

void CashRegister::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus CashRegister::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(evStart_CashRegisterPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    //#[ state idle.(Exit) 
                    code=0;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    //#[ transition 1 
                    
                    startSession();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.active");
                    rootState_subState = active;
                    rootState_active = active;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State active
        case active:
        {
            res = active_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus CashRegister::active_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evBarcode_CashRegisterPkg_id))
        {
            OMSETPARAMS(evBarcode);
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_STATE_EXITED("ROOT.active");
            //#[ transition 3 
             
             identifyProduct(params->aCode);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.active");
            rootState_subState = active;
            rootState_active = active;
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evCancel_CashRegisterPkg_id))
        {
            //## transition 6 
            if(isNoMoreProducts())
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.active");
                    //#[ transition 6 
                    
                    endSession();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.idle");
                    rootState_subState = idle;
                    rootState_active = idle;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.active");
                    //#[ transition 5 
                      
                      removeLastProduct();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.active");
                    rootState_subState = active;
                    rootState_active = active;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evEnd_CashRegisterPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_STATE_EXITED("ROOT.active");
            //#[ transition 2 
               
            generateTicket();
            endSession();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.idle");
            rootState_subState = idle;
            rootState_active = idle;
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evKey_CashRegisterPkg_id))
        {
            OMSETPARAMS(evKey);
            NOTIFY_TRANSITION_STARTED("8");
            NOTIFY_STATE_EXITED("ROOT.active");
            //#[ transition 8 
             
             code=(code*10)+params->n;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.active");
            rootState_subState = active;
            rootState_active = active;
            NOTIFY_TRANSITION_TERMINATED("8");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evCode_CashRegisterPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("7");
            NOTIFY_STATE_EXITED("ROOT.active");
            //#[ transition 7 
             
             identifyProduct(code);
             code=0;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.active");
            rootState_subState = active;
            rootState_active = active;
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_REACTIVE_META_M_P(CashRegister, CashRegisterPkg, false, _CashRegisterSuper, 2, OMAnimatedCashRegister)

OMINIT_SUPERCLASS(IBarcodeReaderEnabled, OMAnimatedIBarcodeReaderEnabled)

OMINIT_SUPERCLASS(IKeyboardEnabled, OMAnimatedIKeyboardEnabled)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\CashRegister.cpp
*********************************************************************/

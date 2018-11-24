/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: KeyReader
//!	Generated Date	: ÖÜËÄ, 30, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\KeyReader.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "KeyReader.h"
//## auto_generated
#include "CashRegisterPkg.h"
//#[ ignore
#define HardwarePkg_TesterPkg_KeyReader_KeyReader_SERIALIZE OM_NO_OP

#define HardwarePkg_TesterPkg_KeyReader_parse_SERIALIZE aomsmethod->addAttribute("c", x2String(c));
//#]

//## package HardwarePkg::TesterPkg

//## class KeyReader
//#[ ignore
KeyReader::keyboard_C::keyboard_C() : _p_(0) {
    itsIKeyboardEnabled = NULL;
}

KeyReader::keyboard_C::~keyboard_C() {
    cleanUpRelations();
}

IKeyboardEnabled* KeyReader::keyboard_C::getItsIKeyboardEnabled() {
    return this;
}

IKeyboardEnabled* KeyReader::keyboard_C::getOutBound() {
    return this;
}

bool KeyReader::keyboard_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
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

bool KeyReader::keyboard_C::send(IOxfEvent* event) {
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

void KeyReader::keyboard_C::setItsIKeyboardEnabled(OMReactive* p_OMReactive) {
    itsIKeyboardEnabled = p_OMReactive;
}

void KeyReader::keyboard_C::cleanUpRelations() {
    if(itsIKeyboardEnabled != NULL)
        {
            itsIKeyboardEnabled = NULL;
        }
}
//#]

KeyReader::KeyReader(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(KeyReader, KeyReader(), 0, HardwarePkg_TesterPkg_KeyReader_KeyReader_SERIALIZE);
    setActiveContext(this, true);
}

KeyReader::~KeyReader() {
    NOTIFY_DESTRUCTOR(~KeyReader, false);
}

OMReactive* KeyReader::execute() {
    //#[ operation execute()
    char c;
    for(;;){
    std::cin>>c;
    parse(c);
    }
    return NULL;
    //#]
}

void KeyReader::parse(char c) {
    NOTIFY_OPERATION(parse, parse(char), 1, HardwarePkg_TesterPkg_KeyReader_parse_SERIALIZE);
    //#[ operation parse(char)
    switch(c){
    case'0':
    case'1':
    case'2':
    case'3':
    case'4':
    case'5':
    case'6':
    case'7':
    case'8':
    case'9':OUT_PORT(keyboard)->GEN(evKey(c-'0'));break;
    case'b':OUT_PORT(keyboard)->GEN(evCode);break;
    case'c':OUT_PORT(keyboard)->GEN(evCancel);break;
    case'e':OUT_PORT(keyboard)->GEN(evEnd);break;
    case's':OUT_PORT(keyboard)->GEN(evStart);break;
    default:break;  
    }
    //#]
}

KeyReader::keyboard_C* KeyReader::getKeyboard() const {
    return (KeyReader::keyboard_C*) &keyboard;
}

KeyReader::keyboard_C* KeyReader::get_keyboard() const {
    return (KeyReader::keyboard_C*) &keyboard;
}

bool KeyReader::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedKeyReader::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedIKeyboardEnabled::serializeAttributes(aomsAttributes);
}

void OMAnimatedKeyReader::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedIKeyboardEnabled::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(KeyReader, HardwarePkg::TesterPkg, false, IKeyboardEnabled, OMAnimatedIKeyboardEnabled, OMAnimatedKeyReader)

OMINIT_SUPERCLASS(IKeyboardEnabled, OMAnimatedIKeyboardEnabled)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\KeyReader.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: TesterPkg
//!	Generated Date	: ÖÜ¶þ, 28, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\TesterPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TesterPkg.h"
//## auto_generated
#include "KeyReader.h"
//## auto_generated
#include "Tester.h"
//## auto_generated
#include "TesterBuilder.h"
//#[ ignore
#define evS1_SERIALIZE OM_NO_OP

#define evS1_UNSERIALIZE OM_NO_OP

#define evS1_CONSTRUCTOR evS1()

#define evS2_SERIALIZE OM_NO_OP

#define evS2_UNSERIALIZE OM_NO_OP

#define evS2_CONSTRUCTOR evS2()
//#]

//## package HardwarePkg::TesterPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(HardwarePkg_TesterPkg, HardwarePkg::TesterPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evS1()
evS1::evS1() {
    NOTIFY_EVENT_CONSTRUCTOR(evS1)
    setId(evS1_TesterPkg_HardwarePkg_id);
}

bool evS1::isTypeOf(const short id) const {
    return (evS1_TesterPkg_HardwarePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evS1, HardwarePkg_TesterPkg, HardwarePkg::TesterPkg, evS1())

//## event evS2()
evS2::evS2() {
    NOTIFY_EVENT_CONSTRUCTOR(evS2)
    setId(evS2_TesterPkg_HardwarePkg_id);
}

bool evS2::isTypeOf(const short id) const {
    return (evS2_TesterPkg_HardwarePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evS2, HardwarePkg_TesterPkg, HardwarePkg::TesterPkg, evS2())

/*********************************************************************
	File Path	: TesterPrototype\Debug\TesterPkg.cpp
*********************************************************************/

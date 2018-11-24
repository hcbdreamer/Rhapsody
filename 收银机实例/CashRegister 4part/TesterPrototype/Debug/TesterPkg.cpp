/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: TesterPkg
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
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

#define evS3_SERIALIZE OM_NO_OP

#define evS3_UNSERIALIZE OM_NO_OP

#define evS3_CONSTRUCTOR evS3()
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

//## event evS3()
evS3::evS3() {
    NOTIFY_EVENT_CONSTRUCTOR(evS3)
    setId(evS3_TesterPkg_HardwarePkg_id);
}

bool evS3::isTypeOf(const short id) const {
    return (evS3_TesterPkg_HardwarePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evS3, HardwarePkg_TesterPkg, HardwarePkg::TesterPkg, evS3())

/*********************************************************************
	File Path	: TesterPrototype\Debug\TesterPkg.cpp
*********************************************************************/

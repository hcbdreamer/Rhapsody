/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HardwarePkg
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\HardwarePkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HardwarePkg.h"
//## auto_generated
#include "Builder.h"
//## auto_generated
#include "test.h"
//#[ ignore
#define evstart1_SERIALIZE OM_NO_OP

#define evstart1_UNSERIALIZE OM_NO_OP

#define evstart1_CONSTRUCTOR evstart1()
//#]

//## package HardwarePkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(HardwarePkg, HardwarePkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evstart1()
evstart1::evstart1() {
    NOTIFY_EVENT_CONSTRUCTOR(evstart1)
    setId(evstart1_HardwarePkg_id);
}

bool evstart1::isTypeOf(const short id) const {
    return (evstart1_HardwarePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evstart1, HardwarePkg, HardwarePkg, evstart1())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HardwarePkg.cpp
*********************************************************************/

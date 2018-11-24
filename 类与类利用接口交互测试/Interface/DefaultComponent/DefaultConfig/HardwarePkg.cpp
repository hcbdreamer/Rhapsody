/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HardwarePkg
//!	Generated Date	: ÷‹ŒÂ, 19, 1‘¬ 2018  
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
#include "test1.h"
//#[ ignore
#define evOn_SERIALIZE OM_NO_OP

#define evOn_UNSERIALIZE OM_NO_OP

#define evOn_CONSTRUCTOR evOn()
//#]

//## package HardwarePkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(HardwarePkg, HardwarePkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evOn()
evOn::evOn() {
    NOTIFY_EVENT_CONSTRUCTOR(evOn)
    setId(evOn_HardwarePkg_id);
}

bool evOn::isTypeOf(const short id) const {
    return (evOn_HardwarePkg_id==id);
}

IMPLEMENT_META_EVENT_P(evOn, HardwarePkg, HardwarePkg, evOn())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HardwarePkg.cpp
*********************************************************************/

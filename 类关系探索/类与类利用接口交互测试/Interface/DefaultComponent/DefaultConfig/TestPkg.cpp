/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TestPkg
//!	Generated Date	: ÷‹ŒÂ, 19, 1‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\TestPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TestPkg.h"
//## auto_generated
#include "test.h"
//#[ ignore
#define evStart_SERIALIZE OM_NO_OP

#define evStart_UNSERIALIZE OM_NO_OP

#define evStart_CONSTRUCTOR evStart()
//#]

//## package TestPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(TestPkg, TestPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evStart()
evStart::evStart() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_TestPkg_id);
}

bool evStart::isTypeOf(const short id) const {
    return (evStart_TestPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evStart, TestPkg, TestPkg, evStart())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TestPkg.cpp
*********************************************************************/

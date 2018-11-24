/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: mainPkg
//!	Generated Date	: ÖÜÁù, 20, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\mainPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "mainPkg.h"
//## auto_generated
#include "main.h"
//#[ ignore
#define evstart_SERIALIZE OM_NO_OP

#define evstart_UNSERIALIZE OM_NO_OP

#define evstart_CONSTRUCTOR evstart()
//#]

//## package mainPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(mainPkg, mainPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evstart()
evstart::evstart() {
    NOTIFY_EVENT_CONSTRUCTOR(evstart)
    setId(evstart_mainPkg_id);
}

bool evstart::isTypeOf(const short id) const {
    return (evstart_mainPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evstart, mainPkg, mainPkg, evstart())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\mainPkg.cpp
*********************************************************************/

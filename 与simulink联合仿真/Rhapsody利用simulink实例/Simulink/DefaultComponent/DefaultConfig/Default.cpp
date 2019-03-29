/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: ÷‹ŒÂ, 30, 3‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "Builder.h"
//## auto_generated
#include "Magic.h"
//## auto_generated
#include "Sink.h"
//## auto_generated
#include "Source.h"
//#[ ignore
#define evStart_SERIALIZE OM_NO_OP

#define evStart_UNSERIALIZE OM_NO_OP

#define evStart_CONSTRUCTOR evStart()

#define evStart1_SERIALIZE OM_NO_OP

#define evStart1_UNSERIALIZE OM_NO_OP

#define evStart1_CONSTRUCTOR evStart1()
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evStart()
evStart::evStart() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_Default_id);
}

bool evStart::isTypeOf(const short id) const {
    return (evStart_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStart, Default, Default, evStart())

//## event evStart1()
evStart1::evStart1() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart1)
    setId(evStart1_Default_id);
}

bool evStart1::isTypeOf(const short id) const {
    return (evStart1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStart1, Default, Default, evStart1())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

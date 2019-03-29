/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: DefaultComponent 
	Configuration 	: Release
	Model Element	: Default
//!	Generated Date	: ÷‹ŒÂ, 29, 3‘¬ 2019  
	File Path	: DefaultComponent\Release\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "builder.h"
//## auto_generated
#include "Button.h"
//## auto_generated
#include "Display.h"
//## auto_generated
#include "Timer.h"
//#[ ignore
#define evStartStop_SERIALIZE OM_NO_OP

#define evStartStop_UNSERIALIZE OM_NO_OP

#define evStartStop_CONSTRUCTOR evStartStop()

#define evPress_SERIALIZE OM_NO_OP

#define evPress_UNSERIALIZE OM_NO_OP

#define evPress_CONSTRUCTOR evPress()

#define evRelease_SERIALIZE OM_NO_OP

#define evRelease_UNSERIALIZE OM_NO_OP

#define evRelease_CONSTRUCTOR evRelease()

#define evReset_SERIALIZE OM_NO_OP

#define evReset_UNSERIALIZE OM_NO_OP

#define evReset_CONSTRUCTOR evReset()
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evStartStop()
evStartStop::evStartStop() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartStop)
    setId(evStartStop_Default_id);
}

bool evStartStop::isTypeOf(const short id) const {
    return (evStartStop_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStartStop, Default, Default, evStartStop())

//## event evPress()
evPress::evPress() {
    NOTIFY_EVENT_CONSTRUCTOR(evPress)
    setId(evPress_Default_id);
}

bool evPress::isTypeOf(const short id) const {
    return (evPress_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evPress, Default, Default, evPress())

//## event evRelease()
evRelease::evRelease() {
    NOTIFY_EVENT_CONSTRUCTOR(evRelease)
    setId(evRelease_Default_id);
}

bool evRelease::isTypeOf(const short id) const {
    return (evRelease_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evRelease, Default, Default, evRelease())

//## event evReset()
evReset::evReset() {
    NOTIFY_EVENT_CONSTRUCTOR(evReset)
    setId(evReset_Default_id);
}

bool evReset::isTypeOf(const short id) const {
    return (evReset_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evReset, Default, Default, evReset())

/*********************************************************************
	File Path	: DefaultComponent\Release\Default.cpp
*********************************************************************/

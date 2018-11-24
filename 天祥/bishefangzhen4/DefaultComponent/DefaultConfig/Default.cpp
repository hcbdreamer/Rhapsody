/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: ÖÜËÄ, 19, 4ÔÂ 2018  
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
#include "Nodel.h"
//## auto_generated
#include "Sink.h"
//## auto_generated
#include "Source.h"
//#[ ignore
#define EvStart_SERIALIZE OM_NO_OP

#define EvStart_UNSERIALIZE OM_NO_OP

#define EvStart_CONSTRUCTOR EvStart()

#define evjudge_SERIALIZE OM_NO_OP

#define evjudge_UNSERIALIZE OM_NO_OP

#define evjudge_CONSTRUCTOR evjudge()

#define evlegal_SERIALIZE OM_NO_OP

#define evlegal_UNSERIALIZE OM_NO_OP

#define evlegal_CONSTRUCTOR evlegal()

#define evbegan_SERIALIZE OM_NO_OP

#define evbegan_UNSERIALIZE OM_NO_OP

#define evbegan_CONSTRUCTOR evbegan()

#define evStart2_SERIALIZE OM_NO_OP

#define evStart2_UNSERIALIZE OM_NO_OP

#define evStart2_CONSTRUCTOR evStart2()

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

//## event EvStart()
EvStart::EvStart() {
    NOTIFY_EVENT_CONSTRUCTOR(EvStart)
    setId(EvStart_Default_id);
}

bool EvStart::isTypeOf(const short id) const {
    return (EvStart_Default_id==id);
}

IMPLEMENT_META_EVENT_P(EvStart, Default, Default, EvStart())

//## event evjudge()
evjudge::evjudge() {
    NOTIFY_EVENT_CONSTRUCTOR(evjudge)
    setId(evjudge_Default_id);
}

bool evjudge::isTypeOf(const short id) const {
    return (evjudge_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evjudge, Default, Default, evjudge())

//## event evlegal()
evlegal::evlegal() {
    NOTIFY_EVENT_CONSTRUCTOR(evlegal)
    setId(evlegal_Default_id);
}

bool evlegal::isTypeOf(const short id) const {
    return (evlegal_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evlegal, Default, Default, evlegal())

//## event evbegan()
evbegan::evbegan() {
    NOTIFY_EVENT_CONSTRUCTOR(evbegan)
    setId(evbegan_Default_id);
}

bool evbegan::isTypeOf(const short id) const {
    return (evbegan_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evbegan, Default, Default, evbegan())

//## event evStart2()
evStart2::evStart2() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart2)
    setId(evStart2_Default_id);
}

bool evStart2::isTypeOf(const short id) const {
    return (evStart2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStart2, Default, Default, evStart2())

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
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "A.h"
//## auto_generated
#include "B.h"
//## auto_generated
#include "Builder.h"
//#[ ignore
#define evStartA_SERIALIZE OM_NO_OP

#define evStartA_UNSERIALIZE OM_NO_OP

#define evStartA_CONSTRUCTOR evStartA()

#define evStartB_SERIALIZE OM_NO_OP

#define evStartB_UNSERIALIZE OM_NO_OP

#define evStartB_CONSTRUCTOR evStartB()

#define evS1_SERIALIZE OM_NO_OP

#define evS1_UNSERIALIZE OM_NO_OP

#define evS1_CONSTRUCTOR evS1()

#define evS2_SERIALIZE OM_NO_OP

#define evS2_UNSERIALIZE OM_NO_OP

#define evS2_CONSTRUCTOR evS2()
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evStartA()
evStartA::evStartA() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartA)
    setId(evStartA_Default_id);
}

bool evStartA::isTypeOf(const short id) const {
    return (evStartA_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStartA, Default, Default, evStartA())

//## event evStartB()
evStartB::evStartB() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartB)
    setId(evStartB_Default_id);
}

bool evStartB::isTypeOf(const short id) const {
    return (evStartB_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStartB, Default, Default, evStartB())

//## event evS1()
evS1::evS1() {
    NOTIFY_EVENT_CONSTRUCTOR(evS1)
    setId(evS1_Default_id);
}

bool evS1::isTypeOf(const short id) const {
    return (evS1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evS1, Default, Default, evS1())

//## event evS2()
evS2::evS2() {
    NOTIFY_EVENT_CONSTRUCTOR(evS2)
    setId(evS2_Default_id);
}

bool evS2::isTypeOf(const short id) const {
    return (evS2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evS2, Default, Default, evS2())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

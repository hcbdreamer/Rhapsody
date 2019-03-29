/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sifuPkg
//!	Generated Date	: ÖÜ¶þ, 13, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\sifuPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "sifuPkg.h"
//## auto_generated
#include "sifu.h"
//## auto_generated
#include "sifu1.h"
//## auto_generated
#include "sifu2.h"
//#[ ignore
#define trleft_SERIALIZE OM_NO_OP

#define trleft_UNSERIALIZE OM_NO_OP

#define trleft_CONSTRUCTOR trleft()

#define tright_SERIALIZE OM_NO_OP

#define tright_UNSERIALIZE OM_NO_OP

#define tright_CONSTRUCTOR tright()

#define tleft_SERIALIZE OM_NO_OP

#define tleft_UNSERIALIZE OM_NO_OP

#define tleft_CONSTRUCTOR tleft()
//#]

//## package sifuPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(sifuPkg, sifuPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event trleft()
trleft::trleft() {
    NOTIFY_EVENT_CONSTRUCTOR(trleft)
    setId(trleft_sifuPkg_id);
}

bool trleft::isTypeOf(const short id) const {
    return (trleft_sifuPkg_id==id);
}

IMPLEMENT_META_EVENT_P(trleft, sifuPkg, sifuPkg, trleft())

//## event tright()
tright::tright() {
    NOTIFY_EVENT_CONSTRUCTOR(tright)
    setId(tright_sifuPkg_id);
}

bool tright::isTypeOf(const short id) const {
    return (tright_sifuPkg_id==id);
}

IMPLEMENT_META_EVENT_P(tright, sifuPkg, sifuPkg, tright())

//## event tleft()
tleft::tleft() {
    NOTIFY_EVENT_CONSTRUCTOR(tleft)
    setId(tleft_sifuPkg_id);
}

bool tleft::isTypeOf(const short id) const {
    return (tleft_sifuPkg_id==id);
}

IMPLEMENT_META_EVENT_P(tleft, sifuPkg, sifuPkg, tleft())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sifuPkg.cpp
*********************************************************************/

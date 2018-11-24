/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: CashRegisterPkg
//!	Generated Date	: ÖÜÎå, 24, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\CashRegisterPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CashRegisterPkg.h"
//## auto_generated
#include "CashRegister.h"
//## auto_generated
#include "Product.h"
//## auto_generated
#include "ProductDatabase.h"
//#[ ignore
#define evStart_SERIALIZE OM_NO_OP

#define evStart_UNSERIALIZE OM_NO_OP

#define evStart_CONSTRUCTOR evStart()

#define evBarcode_SERIALIZE OMADD_SER(aCode, x2String(myEvent->aCode))

#define evBarcode_UNSERIALIZE OMADD_UNSER(int, aCode, OMDestructiveString2X)

#define evBarcode_CONSTRUCTOR evBarcode(aCode)

#define evEnd_SERIALIZE OM_NO_OP

#define evEnd_UNSERIALIZE OM_NO_OP

#define evEnd_CONSTRUCTOR evEnd()

#define evCancle_SERIALIZE OM_NO_OP

#define evCancle_UNSERIALIZE OM_NO_OP

#define evCancle_CONSTRUCTOR evCancle()

#define evCancel_SERIALIZE OM_NO_OP

#define evCancel_UNSERIALIZE OM_NO_OP

#define evCancel_CONSTRUCTOR evCancel()
//#]

//## package CashRegisterPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* aomsAttributes);

IMPLEMENT_META_PACKAGE(CashRegisterPkg, CashRegisterPkg)

static void serializeGlobalVars(AOMSAttributes* aomsAttributes) {
}
#endif // _OMINSTRUMENT

//## event evStart()
evStart::evStart() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_CashRegisterPkg_id);
}

bool evStart::isTypeOf(const short id) const {
    return (evStart_CashRegisterPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evStart, CashRegisterPkg, CashRegisterPkg, evStart())

//## event evBarcode(int)
evBarcode::evBarcode() {
    NOTIFY_EVENT_CONSTRUCTOR(evBarcode)
    setId(evBarcode_CashRegisterPkg_id);
}

evBarcode::evBarcode(int p_aCode) : aCode(p_aCode) {
    NOTIFY_EVENT_CONSTRUCTOR(evBarcode)
    setId(evBarcode_CashRegisterPkg_id);
}

bool evBarcode::isTypeOf(const short id) const {
    return (evBarcode_CashRegisterPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evBarcode, CashRegisterPkg, CashRegisterPkg, evBarcode(int))

//## event evEnd()
evEnd::evEnd() {
    NOTIFY_EVENT_CONSTRUCTOR(evEnd)
    setId(evEnd_CashRegisterPkg_id);
}

bool evEnd::isTypeOf(const short id) const {
    return (evEnd_CashRegisterPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evEnd, CashRegisterPkg, CashRegisterPkg, evEnd())

//## event evCancle()
evCancle::evCancle() {
    NOTIFY_EVENT_CONSTRUCTOR(evCancle)
    setId(evCancle_CashRegisterPkg_id);
}

bool evCancle::isTypeOf(const short id) const {
    return (evCancle_CashRegisterPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evCancle, CashRegisterPkg, CashRegisterPkg, evCancle())

//## event evCancel()
evCancel::evCancel() {
    NOTIFY_EVENT_CONSTRUCTOR(evCancel)
    setId(evCancel_CashRegisterPkg_id);
}

bool evCancel::isTypeOf(const short id) const {
    return (evCancel_CashRegisterPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evCancel, CashRegisterPkg, CashRegisterPkg, evCancel())

/*********************************************************************
	File Path	: TesterPrototype\Debug\CashRegisterPkg.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: DefaultComponent 
	Configuration 	: VSTest
	Model Element	: AccelerRometerPkg
//!	Generated Date	: ��һ, 14, 1�� 2019  
	File Path	: E:\ѧϰ\�о�����������\��ս���̷���\���㽨ģ\2019.1.14\����\VSConnectionTest\VSConnectionTest\AccelerRometerPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AccelerRometerPkg.h"
//## auto_generated
#include "AccelerRometerClass.h"
//#[ ignore
#define evSetCount_SERIALIZE OM_NO_OP

#define evSetCount_UNSERIALIZE OM_NO_OP

#define evSetCount_CONSTRUCTOR evSetCount()
//#]

//## package AccelerRometerPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(AccelerRometerPkg, AccelerRometerPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evSetCount()
evSetCount::evSetCount() {
    NOTIFY_EVENT_CONSTRUCTOR(evSetCount)
    setId(evSetCount_AccelerRometerPkg_id);
}

bool evSetCount::isTypeOf(const short id) const {
    return (evSetCount_AccelerRometerPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSetCount, AccelerRometerPkg, AccelerRometerPkg, evSetCount())

/*********************************************************************
	File Path	: E:\ѧϰ\�о�����������\��ս���̷���\���㽨ģ\2019.1.14\����\VSConnectionTest\VSConnectionTest\AccelerRometerPkg.cpp
*********************************************************************/

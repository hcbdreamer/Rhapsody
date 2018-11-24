/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: TesterBuilder
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\TesterBuilder.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TesterBuilder.h"
//#[ ignore
#define HardwarePkg_TesterPkg_TesterBuilder_TesterBuilder_SERIALIZE OM_NO_OP
//#]

//## package HardwarePkg::TesterPkg

//## class TesterBuilder
TesterBuilder::TesterBuilder() {
    NOTIFY_CONSTRUCTOR(TesterBuilder, TesterBuilder(), 0, HardwarePkg_TesterPkg_TesterBuilder_TesterBuilder_SERIALIZE);
}

TesterBuilder::~TesterBuilder() {
    NOTIFY_DESTRUCTOR(~TesterBuilder, true);
}

CashRegister* TesterBuilder::getItsCashRegister() const {
    return (CashRegister*) &itsCashRegister;
}

Tester* TesterBuilder::getItsTester() const {
    return (Tester*) &itsTester;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTesterBuilder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCashRegister", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCashRegister);
    aomsRelations->addRelation("itsTester", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTester);
}
//#]

IMPLEMENT_META_P(TesterBuilder, HardwarePkg_TesterPkg, HardwarePkg::TesterPkg, false, OMAnimatedTesterBuilder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\TesterBuilder.cpp
*********************************************************************/

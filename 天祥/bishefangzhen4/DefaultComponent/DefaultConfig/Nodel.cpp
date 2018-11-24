/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Nodel
//!	Generated Date	: ÖÜËÄ, 19, 4ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Nodel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Nodel.h"
//#[ ignore
#define Default_Nodel_Nodel_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Nodel
Nodel::Nodel() {
    NOTIFY_CONSTRUCTOR(Nodel, Nodel(), 0, Default_Nodel_Nodel_SERIALIZE);
}

Nodel::~Nodel() {
    NOTIFY_DESTRUCTOR(~Nodel, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNodel::serializeAttributes(AOMSAttributes* aomsAttributes) const {
}

void OMAnimatedNodel::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Nodel, Default, Default, false, OMAnimatedNodel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Nodel.cpp
*********************************************************************/

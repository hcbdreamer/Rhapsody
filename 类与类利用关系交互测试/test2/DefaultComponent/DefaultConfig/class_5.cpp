/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_5
//!	Generated Date	: ÖÜÎå, 30, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\class_5.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "class_5.h"
//#[ ignore
#define Default_class_5_class_5_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class class_5
class_5::class_5() {
    NOTIFY_CONSTRUCTOR(class_5, class_5(), 0, Default_class_5_class_5_SERIALIZE);
}

class_5::~class_5() {
    NOTIFY_DESTRUCTOR(~class_5, true);
}

C* class_5::getItsC() const {
    return (C*) &itsC;
}

D* class_5::getItsD() const {
    return (D*) &itsD;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedclass_5::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsD", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsD);
    aomsRelations->addRelation("itsC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsC);
}
//#]

IMPLEMENT_META_P(class_5, Default, Default, false, OMAnimatedclass_5)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_5.cpp
*********************************************************************/

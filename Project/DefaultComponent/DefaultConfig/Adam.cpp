/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Adam
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Adam.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Adam.h"
//#[ ignore
#define Default_Adam_Adam_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Adam
Adam::Adam() {
    NOTIFY_CONSTRUCTOR(Adam, Adam(), 0, Default_Adam_Adam_SERIALIZE);
    initRelations();
}

Adam::~Adam() {
    NOTIFY_DESTRUCTOR(~Adam, true);
}

Eva* Adam::getItsEva() const {
    return (Eva*) &itsEva;
}

void Adam::initRelations() {
    itsEva._setItsAdam(this);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAdam::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEva", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsEva);
}
//#]

IMPLEMENT_META_P(Adam, Default, Default, false, OMAnimatedAdam)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Adam.cpp
*********************************************************************/

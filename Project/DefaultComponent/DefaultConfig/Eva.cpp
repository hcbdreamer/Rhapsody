/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Eva
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Eva.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Eva.h"
//## link itsAdam
#include "Adam.h"
//#[ ignore
#define Default_Eva_Eva_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Eva
Eva::Eva() {
    NOTIFY_CONSTRUCTOR(Eva, Eva(), 0, Default_Eva_Eva_SERIALIZE);
    itsAdam = NULL;
}

Eva::~Eva() {
    NOTIFY_DESTRUCTOR(~Eva, true);
    cleanUpRelations();
}

Adam* Eva::getItsAdam() const {
    return itsAdam;
}

void Eva::setItsAdam(Adam* p_Adam) {
    _setItsAdam(p_Adam);
}

void Eva::cleanUpRelations() {
    if(itsAdam != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAdam");
            itsAdam = NULL;
        }
}

void Eva::__setItsAdam(Adam* p_Adam) {
    itsAdam = p_Adam;
    if(p_Adam != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAdam", p_Adam, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAdam");
        }
}

void Eva::_setItsAdam(Adam* p_Adam) {
    __setItsAdam(p_Adam);
}

void Eva::_clearItsAdam() {
    NOTIFY_RELATION_CLEARED("itsAdam");
    itsAdam = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEva::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAdam", false, true);
    if(myReal->itsAdam)
        {
            aomsRelations->ADD_ITEM(myReal->itsAdam);
        }
}
//#]

IMPLEMENT_META_P(Eva, Default, Default, false, OMAnimatedEva)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Eva.cpp
*********************************************************************/

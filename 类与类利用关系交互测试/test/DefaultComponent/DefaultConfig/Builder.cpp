/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Builder
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Builder.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Builder.h"
//#[ ignore
#define Default_Builder_Builder_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Builder
Builder::Builder() {
    NOTIFY_CONSTRUCTOR(Builder, Builder(), 0, Default_Builder_Builder_SERIALIZE);
    initRelations();
}

Builder::~Builder() {
    NOTIFY_DESTRUCTOR(~Builder, true);
}

man* Builder::getAdam() const {
    return (man*) &Adam;
}

woman* Builder::getEva() const {
    return (woman*) &Eva;
}

void Builder::initRelations() {
    Adam.setItsWoman(&Eva);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBuilder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("Adam", true, true);
    aomsRelations->ADD_ITEM(&myReal->Adam);
    aomsRelations->addRelation("Eva", true, true);
    aomsRelations->ADD_ITEM(&myReal->Eva);
}
//#]

IMPLEMENT_META_P(Builder, Default, Default, false, OMAnimatedBuilder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Builder.cpp
*********************************************************************/

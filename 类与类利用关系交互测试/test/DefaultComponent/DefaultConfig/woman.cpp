/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: woman
//!	Generated Date	: ÖÜÎå, 26, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\woman.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "woman.h"
//## link itsMan
#include "man.h"
//#[ ignore
#define Default_woman_woman_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class woman
woman::woman() {
    NOTIFY_CONSTRUCTOR(woman, woman(), 0, Default_woman_woman_SERIALIZE);
    itsMan = NULL;
}

woman::~woman() {
    NOTIFY_DESTRUCTOR(~woman, true);
    cleanUpRelations();
}

man* woman::getItsMan() const {
    return itsMan;
}

void woman::setItsMan(man* p_man) {
    if(p_man != NULL)
        {
            p_man->_setItsWoman(this);
        }
    _setItsMan(p_man);
}

void woman::cleanUpRelations() {
    if(itsMan != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMan");
            woman* p_woman = itsMan->getItsWoman();
            if(p_woman != NULL)
                {
                    itsMan->__setItsWoman(NULL);
                }
            itsMan = NULL;
        }
}

void woman::__setItsMan(man* p_man) {
    itsMan = p_man;
    if(p_man != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMan", p_man, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMan");
        }
}

void woman::_setItsMan(man* p_man) {
    if(itsMan != NULL)
        {
            itsMan->__setItsWoman(NULL);
        }
    __setItsMan(p_man);
}

void woman::_clearItsMan() {
    NOTIFY_RELATION_CLEARED("itsMan");
    itsMan = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedwoman::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMan", false, true);
    if(myReal->itsMan)
        {
            aomsRelations->ADD_ITEM(myReal->itsMan);
        }
}
//#]

IMPLEMENT_META_P(woman, Default, Default, false, OMAnimatedwoman)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\woman.cpp
*********************************************************************/

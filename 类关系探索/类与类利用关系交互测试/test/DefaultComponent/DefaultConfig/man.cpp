/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: man
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\man.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "man.h"
//## link itsWoman
#include "woman.h"
//#[ ignore
#define Default_man_man_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class man
man::man() {
    NOTIFY_CONSTRUCTOR(man, man(), 0, Default_man_man_SERIALIZE);
    itsWoman = NULL;
}

man::~man() {
    NOTIFY_DESTRUCTOR(~man, true);
    cleanUpRelations();
}

woman* man::getItsWoman() const {
    return itsWoman;
}

void man::setItsWoman(woman* p_woman) {
    if(p_woman != NULL)
        {
            p_woman->_setItsMan(this);
        }
    _setItsWoman(p_woman);
}

void man::cleanUpRelations() {
    if(itsWoman != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWoman");
            man* p_man = itsWoman->getItsMan();
            if(p_man != NULL)
                {
                    itsWoman->__setItsMan(NULL);
                }
            itsWoman = NULL;
        }
}

void man::__setItsWoman(woman* p_woman) {
    itsWoman = p_woman;
    if(p_woman != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWoman", p_woman, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWoman");
        }
}

void man::_setItsWoman(woman* p_woman) {
    if(itsWoman != NULL)
        {
            itsWoman->__setItsMan(NULL);
        }
    __setItsWoman(p_woman);
}

void man::_clearItsWoman() {
    NOTIFY_RELATION_CLEARED("itsWoman");
    itsWoman = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedman::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsWoman", false, true);
    if(myReal->itsWoman)
        {
            aomsRelations->ADD_ITEM(myReal->itsWoman);
        }
}
//#]

IMPLEMENT_META_P(man, Default, Default, false, OMAnimatedman)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\man.cpp
*********************************************************************/

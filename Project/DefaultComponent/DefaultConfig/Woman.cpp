/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Woman
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Woman.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Woman.h"
//## link itsMan
#include "Man.h"
//#[ ignore
#define Default_Woman_Woman_SERIALIZE OM_NO_OP

#define Default_Woman_Operation_0_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Woman
Woman::Woman() : m2(0) {
    NOTIFY_CONSTRUCTOR(Woman, Woman(), 0, Default_Woman_Woman_SERIALIZE);
    itsMan = NULL;
}

Woman::~Woman() {
    NOTIFY_DESTRUCTOR(~Woman, true);
    cleanUpRelations();
}

void Woman::Operation_0() {
    NOTIFY_OPERATION(Operation_0, Operation_0(), 0, Default_Woman_Operation_0_SERIALIZE);
    //#[ operation Operation_0()
    m2=2;
    
    //#]
}

int Woman::getM2() const {
    return m2;
}

void Woman::setM2(int p_m2) {
    m2 = p_m2;
}

Man* Woman::getItsMan() const {
    return itsMan;
}

void Woman::setItsMan(Man* p_Man) {
    if(p_Man != NULL)
        {
            p_Man->_setItsWoman(this);
        }
    _setItsMan(p_Man);
}

void Woman::cleanUpRelations() {
    if(itsMan != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMan");
            Woman* p_Woman = itsMan->getItsWoman();
            if(p_Woman != NULL)
                {
                    itsMan->__setItsWoman(NULL);
                }
            itsMan = NULL;
        }
}

void Woman::__setItsMan(Man* p_Man) {
    itsMan = p_Man;
    if(p_Man != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMan", p_Man, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMan");
        }
}

void Woman::_setItsMan(Man* p_Man) {
    if(itsMan != NULL)
        {
            itsMan->__setItsWoman(NULL);
        }
    __setItsMan(p_Man);
}

void Woman::_clearItsMan() {
    NOTIFY_RELATION_CLEARED("itsMan");
    itsMan = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWoman::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("m2", x2String(myReal->m2));
}

void OMAnimatedWoman::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMan", false, true);
    if(myReal->itsMan)
        {
            aomsRelations->ADD_ITEM(myReal->itsMan);
        }
}
//#]

IMPLEMENT_META_P(Woman, Default, Default, false, OMAnimatedWoman)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Woman.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: A
//!	Generated Date	: ÖÜÎå, 30, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\A.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "A.h"
//## link itsB
#include "B.h"
//#[ ignore
#define Default_A_A_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class A
A::A() {
    NOTIFY_CONSTRUCTOR(A, A(), 0, Default_A_A_SERIALIZE);
    itsB = NULL;
}

A::~A() {
    NOTIFY_DESTRUCTOR(~A, true);
    cleanUpRelations();
}

B* A::getItsB() const {
    return itsB;
}

void A::setItsB(B* p_B) {
    if(p_B != NULL)
        {
            p_B->_setItsA(this);
        }
    _setItsB(p_B);
}

void A::cleanUpRelations() {
    if(itsB != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsB");
            A* p_A = itsB->getItsA();
            if(p_A != NULL)
                {
                    itsB->__setItsA(NULL);
                }
            itsB = NULL;
        }
}

void A::__setItsB(B* p_B) {
    itsB = p_B;
    if(p_B != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsB", p_B, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsB");
        }
}

void A::_setItsB(B* p_B) {
    if(itsB != NULL)
        {
            itsB->__setItsA(NULL);
        }
    __setItsB(p_B);
}

void A::_clearItsB() {
    NOTIFY_RELATION_CLEARED("itsB");
    itsB = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedA::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsB", false, true);
    if(myReal->itsB)
        {
            aomsRelations->ADD_ITEM(myReal->itsB);
        }
}
//#]

IMPLEMENT_META_P(A, Default, Default, false, OMAnimatedA)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\A.cpp
*********************************************************************/

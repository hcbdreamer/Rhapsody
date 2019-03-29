/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: C
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\C.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "C.h"
//## link itsD
#include "D.h"
//#[ ignore
#define Default_C_C_SERIALIZE OM_NO_OP

#define Default_C_transA_SERIALIZE aomsmethod->addAttribute("x", x2String(x));
//#]

//## package Default

//## class C
C::C() : p1(5) {
    NOTIFY_CONSTRUCTOR(C, C(), 0, Default_C_C_SERIALIZE);
    itsD = NULL;
}

C::~C() {
    NOTIFY_DESTRUCTOR(~C, true);
    cleanUpRelations();
}

int C::transA(int x) {
    NOTIFY_OPERATION(transA, transA(int), 1, Default_C_transA_SERIALIZE);
    //#[ operation transA(int)
    
    return p1;
    //#]
}

int C::getP1() const {
    return p1;
}

void C::setP1(int p_p1) {
    p1 = p_p1;
}

D* C::getItsD() const {
    return itsD;
}

void C::setItsD(D* p_D) {
    if(p_D != NULL)
        {
            p_D->_setItsC(this);
        }
    _setItsD(p_D);
}

void C::cleanUpRelations() {
    if(itsD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsD");
            C* p_C = itsD->getItsC();
            if(p_C != NULL)
                {
                    itsD->__setItsC(NULL);
                }
            itsD = NULL;
        }
}

void C::__setItsD(D* p_D) {
    itsD = p_D;
    if(p_D != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsD", p_D, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsD");
        }
}

void C::_setItsD(D* p_D) {
    if(itsD != NULL)
        {
            itsD->__setItsC(NULL);
        }
    __setItsD(p_D);
}

void C::_clearItsD() {
    NOTIFY_RELATION_CLEARED("itsD");
    itsD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("p1", x2String(myReal->p1));
}

void OMAnimatedC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsD", false, true);
    if(myReal->itsD)
        {
            aomsRelations->ADD_ITEM(myReal->itsD);
        }
}
//#]

IMPLEMENT_META_P(C, Default, Default, false, OMAnimatedC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\C.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: D
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\D.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "D.h"
//## link itsC
#include "C.h"
//#[ ignore
#define Default_D_D_SERIALIZE OM_NO_OP

#define Default_D_transB_SERIALIZE aomsmethod->addAttribute("Y", x2String(Y));
//#]

//## package Default

//## class D
D::D() : p2(3) {
    NOTIFY_CONSTRUCTOR(D, D(), 0, Default_D_D_SERIALIZE);
    itsC = NULL;
}

D::~D() {
    NOTIFY_DESTRUCTOR(~D, true);
    cleanUpRelations();
}

int D::transB(int Y) {
    NOTIFY_OPERATION(transB, transB(int), 1, Default_D_transB_SERIALIZE);
    //#[ operation transB(int)
    return p2;
    //#]
}

int D::getP2() const {
    return p2;
}

void D::setP2(int p_p2) {
    p2 = p_p2;
}

C* D::getItsC() const {
    return itsC;
}

void D::setItsC(C* p_C) {
    if(p_C != NULL)
        {
            p_C->_setItsD(this);
        }
    _setItsC(p_C);
}

void D::cleanUpRelations() {
    if(itsC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsC");
            D* p_D = itsC->getItsD();
            if(p_D != NULL)
                {
                    itsC->__setItsD(NULL);
                }
            itsC = NULL;
        }
}

void D::__setItsC(C* p_C) {
    itsC = p_C;
    if(p_C != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsC", p_C, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsC");
        }
}

void D::_setItsC(C* p_C) {
    if(itsC != NULL)
        {
            itsC->__setItsD(NULL);
        }
    __setItsC(p_C);
}

void D::_clearItsC() {
    NOTIFY_RELATION_CLEARED("itsC");
    itsC = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedD::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("p2", x2String(myReal->p2));
}

void OMAnimatedD::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsC", false, true);
    if(myReal->itsC)
        {
            aomsRelations->ADD_ITEM(myReal->itsC);
        }
}
//#]

IMPLEMENT_META_P(D, Default, Default, false, OMAnimatedD)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\D.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: A
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\A.cpp
*********************************************************************/

//## auto_generated
#include "A.h"
//## link itsB
#include "B.h"
//## package mainPkg

//## class A
A::A() {
    itsB = NULL;
}

A::~A() {
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
}

void A::_setItsB(B* p_B) {
    if(itsB != NULL)
        {
            itsB->__setItsA(NULL);
        }
    __setItsB(p_B);
}

void A::_clearItsB() {
    itsB = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\A.cpp
*********************************************************************/

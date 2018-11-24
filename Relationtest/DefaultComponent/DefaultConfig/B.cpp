/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: B
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\B.cpp
*********************************************************************/

//## auto_generated
#include "B.h"
//## link itsA
#include "A.h"
//## package mainPkg

//## class B
B::B() {
    itsA = NULL;
}

B::~B() {
    cleanUpRelations();
}

A* B::getItsA() const {
    return itsA;
}

void B::setItsA(A* p_A) {
    if(p_A != NULL)
        {
            p_A->_setItsB(this);
        }
    _setItsA(p_A);
}

void B::cleanUpRelations() {
    if(itsA != NULL)
        {
            B* p_B = itsA->getItsB();
            if(p_B != NULL)
                {
                    itsA->__setItsB(NULL);
                }
            itsA = NULL;
        }
}

void B::__setItsA(A* p_A) {
    itsA = p_A;
}

void B::_setItsA(A* p_A) {
    if(itsA != NULL)
        {
            itsA->__setItsB(NULL);
        }
    __setItsA(p_A);
}

void B::_clearItsA() {
    itsA = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\B.cpp
*********************************************************************/

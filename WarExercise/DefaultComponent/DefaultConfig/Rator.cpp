/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Rator
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Rator.cpp
*********************************************************************/

//## auto_generated
#include "Rator.h"
//## link itsRedTank1
#include "RedTank1.h"
//## package Default

//## class Rator
Rator::Rator() {
    itsRedTank1 = NULL;
}

Rator::~Rator() {
    cleanUpRelations();
}

RedTank1* Rator::getItsRedTank1() const {
    return itsRedTank1;
}

void Rator::setItsRedTank1(RedTank1* p_RedTank1) {
    if(p_RedTank1 != NULL)
        {
            p_RedTank1->_setItsRator(this);
        }
    _setItsRedTank1(p_RedTank1);
}

void Rator::cleanUpRelations() {
    if(itsRedTank1 != NULL)
        {
            Rator* p_Rator = itsRedTank1->getItsRator();
            if(p_Rator != NULL)
                {
                    itsRedTank1->__setItsRator(NULL);
                }
            itsRedTank1 = NULL;
        }
}

void Rator::__setItsRedTank1(RedTank1* p_RedTank1) {
    itsRedTank1 = p_RedTank1;
}

void Rator::_setItsRedTank1(RedTank1* p_RedTank1) {
    if(itsRedTank1 != NULL)
        {
            itsRedTank1->__setItsRator(NULL);
        }
    __setItsRedTank1(p_RedTank1);
}

void Rator::_clearItsRedTank1() {
    itsRedTank1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Rator.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RedTank
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\RedTank.cpp
*********************************************************************/

//## auto_generated
#include "RedTank.h"
//## link itsBluePalne1
#include "BluePalne1.h"
//## package Default

//## class RedTank
RedTank::RedTank() {
    itsBluePalne1 = NULL;
    itsBluePalne1_1 = NULL;
}

RedTank::~RedTank() {
    cleanUpRelations();
}

BluePalne1* RedTank::getItsBluePalne1() const {
    return itsBluePalne1;
}

void RedTank::setItsBluePalne1(BluePalne1* p_BluePalne1) {
    if(p_BluePalne1 != NULL)
        {
            p_BluePalne1->_setItsRedTank(this);
        }
    _setItsBluePalne1(p_BluePalne1);
}

BluePalne1* RedTank::getItsBluePalne1_1() const {
    return itsBluePalne1_1;
}

void RedTank::setItsBluePalne1_1(BluePalne1* p_BluePalne1) {
    if(p_BluePalne1 != NULL)
        {
            p_BluePalne1->_setItsRedTank_1(this);
        }
    _setItsBluePalne1_1(p_BluePalne1);
}

void RedTank::cleanUpRelations() {
    if(itsBluePalne1 != NULL)
        {
            RedTank* p_RedTank = itsBluePalne1->getItsRedTank();
            if(p_RedTank != NULL)
                {
                    itsBluePalne1->__setItsRedTank(NULL);
                }
            itsBluePalne1 = NULL;
        }
    if(itsBluePalne1_1 != NULL)
        {
            RedTank* p_RedTank = itsBluePalne1_1->getItsRedTank_1();
            if(p_RedTank != NULL)
                {
                    itsBluePalne1_1->__setItsRedTank_1(NULL);
                }
            itsBluePalne1_1 = NULL;
        }
}

void RedTank::__setItsBluePalne1(BluePalne1* p_BluePalne1) {
    itsBluePalne1 = p_BluePalne1;
}

void RedTank::_setItsBluePalne1(BluePalne1* p_BluePalne1) {
    if(itsBluePalne1 != NULL)
        {
            itsBluePalne1->__setItsRedTank(NULL);
        }
    __setItsBluePalne1(p_BluePalne1);
}

void RedTank::_clearItsBluePalne1() {
    itsBluePalne1 = NULL;
}

void RedTank::__setItsBluePalne1_1(BluePalne1* p_BluePalne1) {
    itsBluePalne1_1 = p_BluePalne1;
}

void RedTank::_setItsBluePalne1_1(BluePalne1* p_BluePalne1) {
    if(itsBluePalne1_1 != NULL)
        {
            itsBluePalne1_1->__setItsRedTank_1(NULL);
        }
    __setItsBluePalne1_1(p_BluePalne1);
}

void RedTank::_clearItsBluePalne1_1() {
    itsBluePalne1_1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RedTank.cpp
*********************************************************************/

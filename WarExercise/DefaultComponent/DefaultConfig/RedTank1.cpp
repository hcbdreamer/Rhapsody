/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RedTank1
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\RedTank1.cpp
*********************************************************************/

//## auto_generated
#include "RedTank1.h"
//## link itsBluePlane
#include "BluePlane.h"
//## link itsBlueTank
#include "BlueTank.h"
//## link itsRator
#include "Rator.h"
//## link itsRedPlane
#include "RedPlane.h"
//## package Default

//## class RedTank1
RedTank1::RedTank1() {
    itsBluePlane = NULL;
    itsBluePlane_1 = NULL;
    itsBlueTank = NULL;
    itsRator = NULL;
    itsRedPlane = NULL;
}

RedTank1::~RedTank1() {
    cleanUpRelations();
}

BluePlane* RedTank1::getItsBluePlane() const {
    return itsBluePlane;
}

void RedTank1::setItsBluePlane(BluePlane* p_BluePlane) {
    if(p_BluePlane != NULL)
        {
            p_BluePlane->_setItsRedTank1(this);
        }
    _setItsBluePlane(p_BluePlane);
}

BluePlane* RedTank1::getItsBluePlane_1() const {
    return itsBluePlane_1;
}

void RedTank1::setItsBluePlane_1(BluePlane* p_BluePlane) {
    if(p_BluePlane != NULL)
        {
            p_BluePlane->_setItsRedTank1_1(this);
        }
    _setItsBluePlane_1(p_BluePlane);
}

BlueTank* RedTank1::getItsBlueTank() const {
    return itsBlueTank;
}

void RedTank1::setItsBlueTank(BlueTank* p_BlueTank) {
    if(p_BlueTank != NULL)
        {
            p_BlueTank->_setItsRedTank1(this);
        }
    _setItsBlueTank(p_BlueTank);
}

Rator* RedTank1::getItsRator() const {
    return itsRator;
}

void RedTank1::setItsRator(Rator* p_Rator) {
    if(p_Rator != NULL)
        {
            p_Rator->_setItsRedTank1(this);
        }
    _setItsRator(p_Rator);
}

RedPlane* RedTank1::getItsRedPlane() const {
    return itsRedPlane;
}

void RedTank1::setItsRedPlane(RedPlane* p_RedPlane) {
    if(p_RedPlane != NULL)
        {
            p_RedPlane->_setItsRedTank1(this);
        }
    _setItsRedPlane(p_RedPlane);
}

void RedTank1::cleanUpRelations() {
    if(itsBluePlane != NULL)
        {
            RedTank1* p_RedTank1 = itsBluePlane->getItsRedTank1();
            if(p_RedTank1 != NULL)
                {
                    itsBluePlane->__setItsRedTank1(NULL);
                }
            itsBluePlane = NULL;
        }
    if(itsBluePlane_1 != NULL)
        {
            RedTank1* p_RedTank1 = itsBluePlane_1->getItsRedTank1_1();
            if(p_RedTank1 != NULL)
                {
                    itsBluePlane_1->__setItsRedTank1_1(NULL);
                }
            itsBluePlane_1 = NULL;
        }
    if(itsBlueTank != NULL)
        {
            RedTank1* p_RedTank1 = itsBlueTank->getItsRedTank1();
            if(p_RedTank1 != NULL)
                {
                    itsBlueTank->__setItsRedTank1(NULL);
                }
            itsBlueTank = NULL;
        }
    if(itsRator != NULL)
        {
            RedTank1* p_RedTank1 = itsRator->getItsRedTank1();
            if(p_RedTank1 != NULL)
                {
                    itsRator->__setItsRedTank1(NULL);
                }
            itsRator = NULL;
        }
    if(itsRedPlane != NULL)
        {
            RedTank1* p_RedTank1 = itsRedPlane->getItsRedTank1();
            if(p_RedTank1 != NULL)
                {
                    itsRedPlane->__setItsRedTank1(NULL);
                }
            itsRedPlane = NULL;
        }
}

void RedTank1::__setItsBluePlane(BluePlane* p_BluePlane) {
    itsBluePlane = p_BluePlane;
}

void RedTank1::_setItsBluePlane(BluePlane* p_BluePlane) {
    if(itsBluePlane != NULL)
        {
            itsBluePlane->__setItsRedTank1(NULL);
        }
    __setItsBluePlane(p_BluePlane);
}

void RedTank1::_clearItsBluePlane() {
    itsBluePlane = NULL;
}

void RedTank1::__setItsBluePlane_1(BluePlane* p_BluePlane) {
    itsBluePlane_1 = p_BluePlane;
}

void RedTank1::_setItsBluePlane_1(BluePlane* p_BluePlane) {
    if(itsBluePlane_1 != NULL)
        {
            itsBluePlane_1->__setItsRedTank1_1(NULL);
        }
    __setItsBluePlane_1(p_BluePlane);
}

void RedTank1::_clearItsBluePlane_1() {
    itsBluePlane_1 = NULL;
}

void RedTank1::__setItsBlueTank(BlueTank* p_BlueTank) {
    itsBlueTank = p_BlueTank;
}

void RedTank1::_setItsBlueTank(BlueTank* p_BlueTank) {
    if(itsBlueTank != NULL)
        {
            itsBlueTank->__setItsRedTank1(NULL);
        }
    __setItsBlueTank(p_BlueTank);
}

void RedTank1::_clearItsBlueTank() {
    itsBlueTank = NULL;
}

void RedTank1::__setItsRator(Rator* p_Rator) {
    itsRator = p_Rator;
}

void RedTank1::_setItsRator(Rator* p_Rator) {
    if(itsRator != NULL)
        {
            itsRator->__setItsRedTank1(NULL);
        }
    __setItsRator(p_Rator);
}

void RedTank1::_clearItsRator() {
    itsRator = NULL;
}

void RedTank1::__setItsRedPlane(RedPlane* p_RedPlane) {
    itsRedPlane = p_RedPlane;
}

void RedTank1::_setItsRedPlane(RedPlane* p_RedPlane) {
    if(itsRedPlane != NULL)
        {
            itsRedPlane->__setItsRedTank1(NULL);
        }
    __setItsRedPlane(p_RedPlane);
}

void RedTank1::_clearItsRedPlane() {
    itsRedPlane = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RedTank1.cpp
*********************************************************************/

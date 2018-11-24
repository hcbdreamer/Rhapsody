/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Rator1
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Rator1.cpp
*********************************************************************/

//## auto_generated
#include "Rator1.h"
//## link itsBluePlane
#include "BluePlane.h"
//## link itsBlueTank
#include "BlueTank.h"
//## link itsRedPlane
#include "RedPlane.h"
//## link itsRedTank
#include "RedTank.h"
//## package Default

//## class Rator1
Rator1::Rator1() {
    itsBluePlane = NULL;
    itsBluePlane_1 = NULL;
    itsBlueTank = NULL;
    itsRedPlane = NULL;
    itsRedTank = NULL;
}

Rator1::~Rator1() {
    cleanUpRelations();
}

BluePlane* Rator1::getItsBluePlane() const {
    return itsBluePlane;
}

void Rator1::setItsBluePlane(BluePlane* p_BluePlane) {
    if(p_BluePlane != NULL)
        {
            p_BluePlane->_setItsRator1(this);
        }
    _setItsBluePlane(p_BluePlane);
}

BluePlane* Rator1::getItsBluePlane_1() const {
    return itsBluePlane_1;
}

void Rator1::setItsBluePlane_1(BluePlane* p_BluePlane) {
    if(p_BluePlane != NULL)
        {
            p_BluePlane->_setItsRator1_1(this);
        }
    _setItsBluePlane_1(p_BluePlane);
}

BlueTank* Rator1::getItsBlueTank() const {
    return itsBlueTank;
}

void Rator1::setItsBlueTank(BlueTank* p_BlueTank) {
    if(p_BlueTank != NULL)
        {
            p_BlueTank->_setItsRator1(this);
        }
    _setItsBlueTank(p_BlueTank);
}

RedPlane* Rator1::getItsRedPlane() const {
    return itsRedPlane;
}

void Rator1::setItsRedPlane(RedPlane* p_RedPlane) {
    if(p_RedPlane != NULL)
        {
            p_RedPlane->_setItsRator1(this);
        }
    _setItsRedPlane(p_RedPlane);
}

RedTank* Rator1::getItsRedTank() const {
    return itsRedTank;
}

void Rator1::setItsRedTank(RedTank* p_RedTank) {
    if(p_RedTank != NULL)
        {
            p_RedTank->_setItsRator1(this);
        }
    _setItsRedTank(p_RedTank);
}

void Rator1::cleanUpRelations() {
    if(itsBluePlane != NULL)
        {
            Rator1* p_Rator1 = itsBluePlane->getItsRator1();
            if(p_Rator1 != NULL)
                {
                    itsBluePlane->__setItsRator1(NULL);
                }
            itsBluePlane = NULL;
        }
    if(itsBluePlane_1 != NULL)
        {
            Rator1* p_Rator1 = itsBluePlane_1->getItsRator1_1();
            if(p_Rator1 != NULL)
                {
                    itsBluePlane_1->__setItsRator1_1(NULL);
                }
            itsBluePlane_1 = NULL;
        }
    if(itsBlueTank != NULL)
        {
            Rator1* p_Rator1 = itsBlueTank->getItsRator1();
            if(p_Rator1 != NULL)
                {
                    itsBlueTank->__setItsRator1(NULL);
                }
            itsBlueTank = NULL;
        }
    if(itsRedPlane != NULL)
        {
            Rator1* p_Rator1 = itsRedPlane->getItsRator1();
            if(p_Rator1 != NULL)
                {
                    itsRedPlane->__setItsRator1(NULL);
                }
            itsRedPlane = NULL;
        }
    if(itsRedTank != NULL)
        {
            Rator1* p_Rator1 = itsRedTank->getItsRator1();
            if(p_Rator1 != NULL)
                {
                    itsRedTank->__setItsRator1(NULL);
                }
            itsRedTank = NULL;
        }
}

void Rator1::__setItsBluePlane(BluePlane* p_BluePlane) {
    itsBluePlane = p_BluePlane;
}

void Rator1::_setItsBluePlane(BluePlane* p_BluePlane) {
    if(itsBluePlane != NULL)
        {
            itsBluePlane->__setItsRator1(NULL);
        }
    __setItsBluePlane(p_BluePlane);
}

void Rator1::_clearItsBluePlane() {
    itsBluePlane = NULL;
}

void Rator1::__setItsBluePlane_1(BluePlane* p_BluePlane) {
    itsBluePlane_1 = p_BluePlane;
}

void Rator1::_setItsBluePlane_1(BluePlane* p_BluePlane) {
    if(itsBluePlane_1 != NULL)
        {
            itsBluePlane_1->__setItsRator1_1(NULL);
        }
    __setItsBluePlane_1(p_BluePlane);
}

void Rator1::_clearItsBluePlane_1() {
    itsBluePlane_1 = NULL;
}

void Rator1::__setItsBlueTank(BlueTank* p_BlueTank) {
    itsBlueTank = p_BlueTank;
}

void Rator1::_setItsBlueTank(BlueTank* p_BlueTank) {
    if(itsBlueTank != NULL)
        {
            itsBlueTank->__setItsRator1(NULL);
        }
    __setItsBlueTank(p_BlueTank);
}

void Rator1::_clearItsBlueTank() {
    itsBlueTank = NULL;
}

void Rator1::__setItsRedPlane(RedPlane* p_RedPlane) {
    itsRedPlane = p_RedPlane;
}

void Rator1::_setItsRedPlane(RedPlane* p_RedPlane) {
    if(itsRedPlane != NULL)
        {
            itsRedPlane->__setItsRator1(NULL);
        }
    __setItsRedPlane(p_RedPlane);
}

void Rator1::_clearItsRedPlane() {
    itsRedPlane = NULL;
}

void Rator1::__setItsRedTank(RedTank* p_RedTank) {
    itsRedTank = p_RedTank;
}

void Rator1::_setItsRedTank(RedTank* p_RedTank) {
    if(itsRedTank != NULL)
        {
            itsRedTank->__setItsRator1(NULL);
        }
    __setItsRedTank(p_RedTank);
}

void Rator1::_clearItsRedTank() {
    itsRedTank = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Rator1.cpp
*********************************************************************/

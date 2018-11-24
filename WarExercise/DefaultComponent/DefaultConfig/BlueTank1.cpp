/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BlueTank1
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\BlueTank1.cpp
*********************************************************************/

//## auto_generated
#include "BlueTank1.h"
//## link itsBluePlane
#include "BluePlane.h"
//## link itsRator
#include "Rator.h"
//## link itsRedPlane
#include "RedPlane.h"
//## link itsRedTank
#include "RedTank.h"
//## package Default

//## class BlueTank1
BlueTank1::BlueTank1() {
    itsBluePlane = NULL;
    itsRator = NULL;
    itsRedPlane = NULL;
    itsRedTank = NULL;
    itsRedTank_1 = NULL;
}

BlueTank1::~BlueTank1() {
    cleanUpRelations();
}

BluePlane* BlueTank1::getItsBluePlane() const {
    return itsBluePlane;
}

void BlueTank1::setItsBluePlane(BluePlane* p_BluePlane) {
    if(p_BluePlane != NULL)
        {
            p_BluePlane->_setItsBlueTank1(this);
        }
    _setItsBluePlane(p_BluePlane);
}

Rator* BlueTank1::getItsRator() const {
    return itsRator;
}

void BlueTank1::setItsRator(Rator* p_Rator) {
    if(p_Rator != NULL)
        {
            p_Rator->_setItsBlueTank1(this);
        }
    _setItsRator(p_Rator);
}

RedPlane* BlueTank1::getItsRedPlane() const {
    return itsRedPlane;
}

void BlueTank1::setItsRedPlane(RedPlane* p_RedPlane) {
    if(p_RedPlane != NULL)
        {
            p_RedPlane->_setItsBlueTank1(this);
        }
    _setItsRedPlane(p_RedPlane);
}

RedTank* BlueTank1::getItsRedTank() const {
    return itsRedTank;
}

void BlueTank1::setItsRedTank(RedTank* p_RedTank) {
    if(p_RedTank != NULL)
        {
            p_RedTank->_setItsBlueTank1(this);
        }
    _setItsRedTank(p_RedTank);
}

RedTank* BlueTank1::getItsRedTank_1() const {
    return itsRedTank_1;
}

void BlueTank1::setItsRedTank_1(RedTank* p_RedTank) {
    if(p_RedTank != NULL)
        {
            p_RedTank->_setItsBlueTank1_1(this);
        }
    _setItsRedTank_1(p_RedTank);
}

void BlueTank1::cleanUpRelations() {
    if(itsBluePlane != NULL)
        {
            BlueTank1* p_BlueTank1 = itsBluePlane->getItsBlueTank1();
            if(p_BlueTank1 != NULL)
                {
                    itsBluePlane->__setItsBlueTank1(NULL);
                }
            itsBluePlane = NULL;
        }
    if(itsRator != NULL)
        {
            BlueTank1* p_BlueTank1 = itsRator->getItsBlueTank1();
            if(p_BlueTank1 != NULL)
                {
                    itsRator->__setItsBlueTank1(NULL);
                }
            itsRator = NULL;
        }
    if(itsRedPlane != NULL)
        {
            BlueTank1* p_BlueTank1 = itsRedPlane->getItsBlueTank1();
            if(p_BlueTank1 != NULL)
                {
                    itsRedPlane->__setItsBlueTank1(NULL);
                }
            itsRedPlane = NULL;
        }
    if(itsRedTank != NULL)
        {
            BlueTank1* p_BlueTank1 = itsRedTank->getItsBlueTank1();
            if(p_BlueTank1 != NULL)
                {
                    itsRedTank->__setItsBlueTank1(NULL);
                }
            itsRedTank = NULL;
        }
    if(itsRedTank_1 != NULL)
        {
            BlueTank1* p_BlueTank1 = itsRedTank_1->getItsBlueTank1_1();
            if(p_BlueTank1 != NULL)
                {
                    itsRedTank_1->__setItsBlueTank1_1(NULL);
                }
            itsRedTank_1 = NULL;
        }
}

void BlueTank1::__setItsBluePlane(BluePlane* p_BluePlane) {
    itsBluePlane = p_BluePlane;
}

void BlueTank1::_setItsBluePlane(BluePlane* p_BluePlane) {
    if(itsBluePlane != NULL)
        {
            itsBluePlane->__setItsBlueTank1(NULL);
        }
    __setItsBluePlane(p_BluePlane);
}

void BlueTank1::_clearItsBluePlane() {
    itsBluePlane = NULL;
}

void BlueTank1::__setItsRator(Rator* p_Rator) {
    itsRator = p_Rator;
}

void BlueTank1::_setItsRator(Rator* p_Rator) {
    if(itsRator != NULL)
        {
            itsRator->__setItsBlueTank1(NULL);
        }
    __setItsRator(p_Rator);
}

void BlueTank1::_clearItsRator() {
    itsRator = NULL;
}

void BlueTank1::__setItsRedPlane(RedPlane* p_RedPlane) {
    itsRedPlane = p_RedPlane;
}

void BlueTank1::_setItsRedPlane(RedPlane* p_RedPlane) {
    if(itsRedPlane != NULL)
        {
            itsRedPlane->__setItsBlueTank1(NULL);
        }
    __setItsRedPlane(p_RedPlane);
}

void BlueTank1::_clearItsRedPlane() {
    itsRedPlane = NULL;
}

void BlueTank1::__setItsRedTank(RedTank* p_RedTank) {
    itsRedTank = p_RedTank;
}

void BlueTank1::_setItsRedTank(RedTank* p_RedTank) {
    if(itsRedTank != NULL)
        {
            itsRedTank->__setItsBlueTank1(NULL);
        }
    __setItsRedTank(p_RedTank);
}

void BlueTank1::_clearItsRedTank() {
    itsRedTank = NULL;
}

void BlueTank1::__setItsRedTank_1(RedTank* p_RedTank) {
    itsRedTank_1 = p_RedTank;
}

void BlueTank1::_setItsRedTank_1(RedTank* p_RedTank) {
    if(itsRedTank_1 != NULL)
        {
            itsRedTank_1->__setItsBlueTank1_1(NULL);
        }
    __setItsRedTank_1(p_RedTank);
}

void BlueTank1::_clearItsRedTank_1() {
    itsRedTank_1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BlueTank1.cpp
*********************************************************************/

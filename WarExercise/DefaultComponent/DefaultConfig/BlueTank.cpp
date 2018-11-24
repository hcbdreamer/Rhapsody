/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BlueTank
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\BlueTank.cpp
*********************************************************************/

//## auto_generated
#include "BlueTank.h"
//## link itsBluePlane
#include "BluePlane.h"
//## link itsRator
#include "Rator.h"
//## link itsRedPlane
#include "RedPlane.h"
//## link itsRedTank
#include "RedTank.h"
//## package Default

//## class BlueTank
BlueTank::BlueTank() {
    itsBluePlane = NULL;
    itsRator = NULL;
    itsRedPlane = NULL;
    itsRedTank = NULL;
    itsRedTank_1 = NULL;
}

BlueTank::~BlueTank() {
    cleanUpRelations();
}

BluePlane* BlueTank::getItsBluePlane() const {
    return itsBluePlane;
}

void BlueTank::setItsBluePlane(BluePlane* p_BluePlane) {
    if(p_BluePlane != NULL)
        {
            p_BluePlane->_setItsBlueTank(this);
        }
    _setItsBluePlane(p_BluePlane);
}

Rator* BlueTank::getItsRator() const {
    return itsRator;
}

void BlueTank::setItsRator(Rator* p_Rator) {
    if(p_Rator != NULL)
        {
            p_Rator->_setItsBlueTank(this);
        }
    _setItsRator(p_Rator);
}

RedPlane* BlueTank::getItsRedPlane() const {
    return itsRedPlane;
}

void BlueTank::setItsRedPlane(RedPlane* p_RedPlane) {
    if(p_RedPlane != NULL)
        {
            p_RedPlane->_setItsBlueTank(this);
        }
    _setItsRedPlane(p_RedPlane);
}

RedTank* BlueTank::getItsRedTank() const {
    return itsRedTank;
}

void BlueTank::setItsRedTank(RedTank* p_RedTank) {
    if(p_RedTank != NULL)
        {
            p_RedTank->_setItsBlueTank(this);
        }
    _setItsRedTank(p_RedTank);
}

RedTank* BlueTank::getItsRedTank_1() const {
    return itsRedTank_1;
}

void BlueTank::setItsRedTank_1(RedTank* p_RedTank) {
    if(p_RedTank != NULL)
        {
            p_RedTank->_setItsBlueTank_1(this);
        }
    _setItsRedTank_1(p_RedTank);
}

void BlueTank::cleanUpRelations() {
    if(itsBluePlane != NULL)
        {
            BlueTank* p_BlueTank = itsBluePlane->getItsBlueTank();
            if(p_BlueTank != NULL)
                {
                    itsBluePlane->__setItsBlueTank(NULL);
                }
            itsBluePlane = NULL;
        }
    if(itsRator != NULL)
        {
            BlueTank* p_BlueTank = itsRator->getItsBlueTank();
            if(p_BlueTank != NULL)
                {
                    itsRator->__setItsBlueTank(NULL);
                }
            itsRator = NULL;
        }
    if(itsRedPlane != NULL)
        {
            BlueTank* p_BlueTank = itsRedPlane->getItsBlueTank();
            if(p_BlueTank != NULL)
                {
                    itsRedPlane->__setItsBlueTank(NULL);
                }
            itsRedPlane = NULL;
        }
    if(itsRedTank != NULL)
        {
            BlueTank* p_BlueTank = itsRedTank->getItsBlueTank();
            if(p_BlueTank != NULL)
                {
                    itsRedTank->__setItsBlueTank(NULL);
                }
            itsRedTank = NULL;
        }
    if(itsRedTank_1 != NULL)
        {
            BlueTank* p_BlueTank = itsRedTank_1->getItsBlueTank_1();
            if(p_BlueTank != NULL)
                {
                    itsRedTank_1->__setItsBlueTank_1(NULL);
                }
            itsRedTank_1 = NULL;
        }
}

void BlueTank::__setItsBluePlane(BluePlane* p_BluePlane) {
    itsBluePlane = p_BluePlane;
}

void BlueTank::_setItsBluePlane(BluePlane* p_BluePlane) {
    if(itsBluePlane != NULL)
        {
            itsBluePlane->__setItsBlueTank(NULL);
        }
    __setItsBluePlane(p_BluePlane);
}

void BlueTank::_clearItsBluePlane() {
    itsBluePlane = NULL;
}

void BlueTank::__setItsRator(Rator* p_Rator) {
    itsRator = p_Rator;
}

void BlueTank::_setItsRator(Rator* p_Rator) {
    if(itsRator != NULL)
        {
            itsRator->__setItsBlueTank(NULL);
        }
    __setItsRator(p_Rator);
}

void BlueTank::_clearItsRator() {
    itsRator = NULL;
}

void BlueTank::__setItsRedPlane(RedPlane* p_RedPlane) {
    itsRedPlane = p_RedPlane;
}

void BlueTank::_setItsRedPlane(RedPlane* p_RedPlane) {
    if(itsRedPlane != NULL)
        {
            itsRedPlane->__setItsBlueTank(NULL);
        }
    __setItsRedPlane(p_RedPlane);
}

void BlueTank::_clearItsRedPlane() {
    itsRedPlane = NULL;
}

void BlueTank::__setItsRedTank(RedTank* p_RedTank) {
    itsRedTank = p_RedTank;
}

void BlueTank::_setItsRedTank(RedTank* p_RedTank) {
    if(itsRedTank != NULL)
        {
            itsRedTank->__setItsBlueTank(NULL);
        }
    __setItsRedTank(p_RedTank);
}

void BlueTank::_clearItsRedTank() {
    itsRedTank = NULL;
}

void BlueTank::__setItsRedTank_1(RedTank* p_RedTank) {
    itsRedTank_1 = p_RedTank;
}

void BlueTank::_setItsRedTank_1(RedTank* p_RedTank) {
    if(itsRedTank_1 != NULL)
        {
            itsRedTank_1->__setItsBlueTank_1(NULL);
        }
    __setItsRedTank_1(p_RedTank);
}

void BlueTank::_clearItsRedTank_1() {
    itsRedTank_1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BlueTank.cpp
*********************************************************************/

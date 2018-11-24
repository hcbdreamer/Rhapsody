/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BluePalne1
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\BluePalne1.cpp
*********************************************************************/

//## auto_generated
#include "BluePalne1.h"
//## link itsBlueTank
#include "BlueTank.h"
//## link itsRator
#include "Rator.h"
//## link itsRedPlane
#include "RedPlane.h"
//## link itsRedTank
#include "RedTank.h"
//## package Default

//## class BluePalne1
BluePalne1::BluePalne1() {
    itsBlueTank = NULL;
    itsRator = NULL;
    itsRedPlane = NULL;
    itsRedTank = NULL;
    itsRedTank_1 = NULL;
}

BluePalne1::~BluePalne1() {
    cleanUpRelations();
}

BlueTank* BluePalne1::getItsBlueTank() const {
    return itsBlueTank;
}

void BluePalne1::setItsBlueTank(BlueTank* p_BlueTank) {
    if(p_BlueTank != NULL)
        {
            p_BlueTank->_setItsBluePalne1(this);
        }
    _setItsBlueTank(p_BlueTank);
}

Rator* BluePalne1::getItsRator() const {
    return itsRator;
}

void BluePalne1::setItsRator(Rator* p_Rator) {
    if(p_Rator != NULL)
        {
            p_Rator->_setItsBluePalne1(this);
        }
    _setItsRator(p_Rator);
}

RedPlane* BluePalne1::getItsRedPlane() const {
    return itsRedPlane;
}

void BluePalne1::setItsRedPlane(RedPlane* p_RedPlane) {
    if(p_RedPlane != NULL)
        {
            p_RedPlane->_setItsBluePalne1(this);
        }
    _setItsRedPlane(p_RedPlane);
}

RedTank* BluePalne1::getItsRedTank() const {
    return itsRedTank;
}

void BluePalne1::setItsRedTank(RedTank* p_RedTank) {
    if(p_RedTank != NULL)
        {
            p_RedTank->_setItsBluePalne1(this);
        }
    _setItsRedTank(p_RedTank);
}

RedTank* BluePalne1::getItsRedTank_1() const {
    return itsRedTank_1;
}

void BluePalne1::setItsRedTank_1(RedTank* p_RedTank) {
    if(p_RedTank != NULL)
        {
            p_RedTank->_setItsBluePalne1_1(this);
        }
    _setItsRedTank_1(p_RedTank);
}

void BluePalne1::cleanUpRelations() {
    if(itsBlueTank != NULL)
        {
            BluePalne1* p_BluePalne1 = itsBlueTank->getItsBluePalne1();
            if(p_BluePalne1 != NULL)
                {
                    itsBlueTank->__setItsBluePalne1(NULL);
                }
            itsBlueTank = NULL;
        }
    if(itsRator != NULL)
        {
            BluePalne1* p_BluePalne1 = itsRator->getItsBluePalne1();
            if(p_BluePalne1 != NULL)
                {
                    itsRator->__setItsBluePalne1(NULL);
                }
            itsRator = NULL;
        }
    if(itsRedPlane != NULL)
        {
            BluePalne1* p_BluePalne1 = itsRedPlane->getItsBluePalne1();
            if(p_BluePalne1 != NULL)
                {
                    itsRedPlane->__setItsBluePalne1(NULL);
                }
            itsRedPlane = NULL;
        }
    if(itsRedTank != NULL)
        {
            BluePalne1* p_BluePalne1 = itsRedTank->getItsBluePalne1();
            if(p_BluePalne1 != NULL)
                {
                    itsRedTank->__setItsBluePalne1(NULL);
                }
            itsRedTank = NULL;
        }
    if(itsRedTank_1 != NULL)
        {
            BluePalne1* p_BluePalne1 = itsRedTank_1->getItsBluePalne1_1();
            if(p_BluePalne1 != NULL)
                {
                    itsRedTank_1->__setItsBluePalne1_1(NULL);
                }
            itsRedTank_1 = NULL;
        }
}

void BluePalne1::__setItsBlueTank(BlueTank* p_BlueTank) {
    itsBlueTank = p_BlueTank;
}

void BluePalne1::_setItsBlueTank(BlueTank* p_BlueTank) {
    if(itsBlueTank != NULL)
        {
            itsBlueTank->__setItsBluePalne1(NULL);
        }
    __setItsBlueTank(p_BlueTank);
}

void BluePalne1::_clearItsBlueTank() {
    itsBlueTank = NULL;
}

void BluePalne1::__setItsRator(Rator* p_Rator) {
    itsRator = p_Rator;
}

void BluePalne1::_setItsRator(Rator* p_Rator) {
    if(itsRator != NULL)
        {
            itsRator->__setItsBluePalne1(NULL);
        }
    __setItsRator(p_Rator);
}

void BluePalne1::_clearItsRator() {
    itsRator = NULL;
}

void BluePalne1::__setItsRedPlane(RedPlane* p_RedPlane) {
    itsRedPlane = p_RedPlane;
}

void BluePalne1::_setItsRedPlane(RedPlane* p_RedPlane) {
    if(itsRedPlane != NULL)
        {
            itsRedPlane->__setItsBluePalne1(NULL);
        }
    __setItsRedPlane(p_RedPlane);
}

void BluePalne1::_clearItsRedPlane() {
    itsRedPlane = NULL;
}

void BluePalne1::__setItsRedTank(RedTank* p_RedTank) {
    itsRedTank = p_RedTank;
}

void BluePalne1::_setItsRedTank(RedTank* p_RedTank) {
    if(itsRedTank != NULL)
        {
            itsRedTank->__setItsBluePalne1(NULL);
        }
    __setItsRedTank(p_RedTank);
}

void BluePalne1::_clearItsRedTank() {
    itsRedTank = NULL;
}

void BluePalne1::__setItsRedTank_1(RedTank* p_RedTank) {
    itsRedTank_1 = p_RedTank;
}

void BluePalne1::_setItsRedTank_1(RedTank* p_RedTank) {
    if(itsRedTank_1 != NULL)
        {
            itsRedTank_1->__setItsBluePalne1_1(NULL);
        }
    __setItsRedTank_1(p_RedTank);
}

void BluePalne1::_clearItsRedTank_1() {
    itsRedTank_1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BluePalne1.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BluePalne
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\BluePalne.cpp
*********************************************************************/

//## auto_generated
#include "BluePalne.h"
//## link itsBlueTank
#include "BlueTank.h"
//## link itsRator
#include "Rator.h"
//## link itsRedPlane
#include "RedPlane.h"
//## link itsRedTank
#include "RedTank.h"
//## package Default

//## class BluePalne
BluePalne::BluePalne() {
    itsBlueTank = NULL;
    itsRator = NULL;
    itsRedPlane = NULL;
    itsRedTank = NULL;
    itsRedTank_1 = NULL;
}

BluePalne::~BluePalne() {
    cleanUpRelations();
}

BlueTank* BluePalne::getItsBlueTank() const {
    return itsBlueTank;
}

void BluePalne::setItsBlueTank(BlueTank* p_BlueTank) {
    if(p_BlueTank != NULL)
        {
            p_BlueTank->_setItsBluePalne(this);
        }
    _setItsBlueTank(p_BlueTank);
}

Rator* BluePalne::getItsRator() const {
    return itsRator;
}

void BluePalne::setItsRator(Rator* p_Rator) {
    if(p_Rator != NULL)
        {
            p_Rator->_setItsBluePalne(this);
        }
    _setItsRator(p_Rator);
}

RedPlane* BluePalne::getItsRedPlane() const {
    return itsRedPlane;
}

void BluePalne::setItsRedPlane(RedPlane* p_RedPlane) {
    if(p_RedPlane != NULL)
        {
            p_RedPlane->_setItsBluePalne(this);
        }
    _setItsRedPlane(p_RedPlane);
}

RedTank* BluePalne::getItsRedTank() const {
    return itsRedTank;
}

void BluePalne::setItsRedTank(RedTank* p_RedTank) {
    if(p_RedTank != NULL)
        {
            p_RedTank->_setItsBluePalne(this);
        }
    _setItsRedTank(p_RedTank);
}

RedTank* BluePalne::getItsRedTank_1() const {
    return itsRedTank_1;
}

void BluePalne::setItsRedTank_1(RedTank* p_RedTank) {
    if(p_RedTank != NULL)
        {
            p_RedTank->_setItsBluePalne_1(this);
        }
    _setItsRedTank_1(p_RedTank);
}

void BluePalne::cleanUpRelations() {
    if(itsBlueTank != NULL)
        {
            BluePalne* p_BluePalne = itsBlueTank->getItsBluePalne();
            if(p_BluePalne != NULL)
                {
                    itsBlueTank->__setItsBluePalne(NULL);
                }
            itsBlueTank = NULL;
        }
    if(itsRator != NULL)
        {
            BluePalne* p_BluePalne = itsRator->getItsBluePalne();
            if(p_BluePalne != NULL)
                {
                    itsRator->__setItsBluePalne(NULL);
                }
            itsRator = NULL;
        }
    if(itsRedPlane != NULL)
        {
            BluePalne* p_BluePalne = itsRedPlane->getItsBluePalne();
            if(p_BluePalne != NULL)
                {
                    itsRedPlane->__setItsBluePalne(NULL);
                }
            itsRedPlane = NULL;
        }
    if(itsRedTank != NULL)
        {
            BluePalne* p_BluePalne = itsRedTank->getItsBluePalne();
            if(p_BluePalne != NULL)
                {
                    itsRedTank->__setItsBluePalne(NULL);
                }
            itsRedTank = NULL;
        }
    if(itsRedTank_1 != NULL)
        {
            BluePalne* p_BluePalne = itsRedTank_1->getItsBluePalne_1();
            if(p_BluePalne != NULL)
                {
                    itsRedTank_1->__setItsBluePalne_1(NULL);
                }
            itsRedTank_1 = NULL;
        }
}

void BluePalne::__setItsBlueTank(BlueTank* p_BlueTank) {
    itsBlueTank = p_BlueTank;
}

void BluePalne::_setItsBlueTank(BlueTank* p_BlueTank) {
    if(itsBlueTank != NULL)
        {
            itsBlueTank->__setItsBluePalne(NULL);
        }
    __setItsBlueTank(p_BlueTank);
}

void BluePalne::_clearItsBlueTank() {
    itsBlueTank = NULL;
}

void BluePalne::__setItsRator(Rator* p_Rator) {
    itsRator = p_Rator;
}

void BluePalne::_setItsRator(Rator* p_Rator) {
    if(itsRator != NULL)
        {
            itsRator->__setItsBluePalne(NULL);
        }
    __setItsRator(p_Rator);
}

void BluePalne::_clearItsRator() {
    itsRator = NULL;
}

void BluePalne::__setItsRedPlane(RedPlane* p_RedPlane) {
    itsRedPlane = p_RedPlane;
}

void BluePalne::_setItsRedPlane(RedPlane* p_RedPlane) {
    if(itsRedPlane != NULL)
        {
            itsRedPlane->__setItsBluePalne(NULL);
        }
    __setItsRedPlane(p_RedPlane);
}

void BluePalne::_clearItsRedPlane() {
    itsRedPlane = NULL;
}

void BluePalne::__setItsRedTank(RedTank* p_RedTank) {
    itsRedTank = p_RedTank;
}

void BluePalne::_setItsRedTank(RedTank* p_RedTank) {
    if(itsRedTank != NULL)
        {
            itsRedTank->__setItsBluePalne(NULL);
        }
    __setItsRedTank(p_RedTank);
}

void BluePalne::_clearItsRedTank() {
    itsRedTank = NULL;
}

void BluePalne::__setItsRedTank_1(RedTank* p_RedTank) {
    itsRedTank_1 = p_RedTank;
}

void BluePalne::_setItsRedTank_1(RedTank* p_RedTank) {
    if(itsRedTank_1 != NULL)
        {
            itsRedTank_1->__setItsBluePalne_1(NULL);
        }
    __setItsRedTank_1(p_RedTank);
}

void BluePalne::_clearItsRedTank_1() {
    itsRedTank_1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BluePalne.cpp
*********************************************************************/

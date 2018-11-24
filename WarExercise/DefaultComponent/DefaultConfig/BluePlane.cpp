/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BluePlane
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\BluePlane.cpp
*********************************************************************/

//## auto_generated
#include "BluePlane.h"
//## link itsBlueTank
#include "BlueTank.h"
//## package Default

//## class BluePlane
BluePlane::BluePlane() {
    itsBlueTank = NULL;
}

BluePlane::~BluePlane() {
    cleanUpRelations();
}

BlueTank* BluePlane::getItsBlueTank() const {
    return itsBlueTank;
}

void BluePlane::setItsBlueTank(BlueTank* p_BlueTank) {
    if(p_BlueTank != NULL)
        {
            p_BlueTank->_setItsBluePlane(this);
        }
    _setItsBlueTank(p_BlueTank);
}

void BluePlane::cleanUpRelations() {
    if(itsBlueTank != NULL)
        {
            BluePlane* p_BluePlane = itsBlueTank->getItsBluePlane();
            if(p_BluePlane != NULL)
                {
                    itsBlueTank->__setItsBluePlane(NULL);
                }
            itsBlueTank = NULL;
        }
}

void BluePlane::__setItsBlueTank(BlueTank* p_BlueTank) {
    itsBlueTank = p_BlueTank;
}

void BluePlane::_setItsBlueTank(BlueTank* p_BlueTank) {
    if(itsBlueTank != NULL)
        {
            itsBlueTank->__setItsBluePlane(NULL);
        }
    __setItsBlueTank(p_BlueTank);
}

void BluePlane::_clearItsBlueTank() {
    itsBlueTank = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BluePlane.cpp
*********************************************************************/

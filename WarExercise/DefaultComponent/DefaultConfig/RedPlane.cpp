/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RedPlane
//!	Generated Date	: ÖÜËÄ, 15, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\RedPlane.cpp
*********************************************************************/

//## auto_generated
#include "RedPlane.h"
//## link itsRator1
#include "Rator1.h"
//## package Default

//## class RedPlane
RedPlane::RedPlane() {
    itsRator1 = NULL;
}

RedPlane::~RedPlane() {
    cleanUpRelations();
}

Struct RedPlane::Location(int ID) {
    //#[ operation Location(int)
    //#]
}

Struct* RedPlane::SendPosition(int ID) {
    //#[ operation SendPosition(int)
    //#]
}

Rator1* RedPlane::getItsRator1() const {
    return itsRator1;
}

void RedPlane::setItsRator1(Rator1* p_Rator1) {
    if(p_Rator1 != NULL)
        {
            p_Rator1->_setItsRedPlane(this);
        }
    _setItsRator1(p_Rator1);
}

void RedPlane::cleanUpRelations() {
    if(itsRator1 != NULL)
        {
            RedPlane* p_RedPlane = itsRator1->getItsRedPlane();
            if(p_RedPlane != NULL)
                {
                    itsRator1->__setItsRedPlane(NULL);
                }
            itsRator1 = NULL;
        }
}

void RedPlane::__setItsRator1(Rator1* p_Rator1) {
    itsRator1 = p_Rator1;
}

void RedPlane::_setItsRator1(Rator1* p_Rator1) {
    if(itsRator1 != NULL)
        {
            itsRator1->__setItsRedPlane(NULL);
        }
    __setItsRator1(p_Rator1);
}

void RedPlane::_clearItsRator1() {
    itsRator1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RedPlane.cpp
*********************************************************************/

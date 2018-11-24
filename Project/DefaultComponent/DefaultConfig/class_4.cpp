/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_4
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\class_4.cpp
*********************************************************************/

//## auto_generated
#include "class_4.h"
//## link itsMan
#include "Man.h"
//## package Default

//## class class_4
class_4::class_4() {
    itsMan = NULL;
}

class_4::~class_4() {
    cleanUpRelations();
}

Man* class_4::getItsMan() const {
    return itsMan;
}

void class_4::setItsMan(Man* p_Man) {
    if(p_Man != NULL)
        {
            p_Man->_setItsClass_4(this);
        }
    _setItsMan(p_Man);
}

void class_4::cleanUpRelations() {
    if(itsMan != NULL)
        {
            class_4* p_class_4 = itsMan->getItsClass_4();
            if(p_class_4 != NULL)
                {
                    itsMan->__setItsClass_4(NULL);
                }
            itsMan = NULL;
        }
}

void class_4::__setItsMan(Man* p_Man) {
    itsMan = p_Man;
}

void class_4::_setItsMan(Man* p_Man) {
    if(itsMan != NULL)
        {
            itsMan->__setItsClass_4(NULL);
        }
    __setItsMan(p_Man);
}

void class_4::_clearItsMan() {
    itsMan = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_4.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_3
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\class_3.cpp
*********************************************************************/

//## auto_generated
#include "class_3.h"
//## link itsClass_4
#include "class_4.h"
//## package Default

//## class class_3
class_3::class_3() {
    itsClass_4 = NULL;
}

class_3::~class_3() {
    cleanUpRelations();
}

class_4* class_3::getItsClass_4() const {
    return itsClass_4;
}

void class_3::setItsClass_4(class_4* p_class_4) {
    if(p_class_4 != NULL)
        {
            p_class_4->_setItsClass_3(this);
        }
    _setItsClass_4(p_class_4);
}

void class_3::cleanUpRelations() {
    if(itsClass_4 != NULL)
        {
            class_3* p_class_3 = itsClass_4->getItsClass_3();
            if(p_class_3 != NULL)
                {
                    itsClass_4->__setItsClass_3(NULL);
                }
            itsClass_4 = NULL;
        }
}

void class_3::__setItsClass_4(class_4* p_class_4) {
    itsClass_4 = p_class_4;
}

void class_3::_setItsClass_4(class_4* p_class_4) {
    if(itsClass_4 != NULL)
        {
            itsClass_4->__setItsClass_3(NULL);
        }
    __setItsClass_4(p_class_4);
}

void class_3::_clearItsClass_4() {
    itsClass_4 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_3.cpp
*********************************************************************/

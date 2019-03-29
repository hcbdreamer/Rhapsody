/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_4
//!	Generated Date	: ÖÜËÄ, 28, 12ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\class_4.cpp
*********************************************************************/

//## auto_generated
#include "class_4.h"
//## package Default

//## class class_4
//#[ ignore
class_4::class_4() {
    m_nSampleTime = 100;
    sineGenerator_initialize(1);
}

class_4::~class_4() {
    sineGenerator_terminate();
}

void class_4::doStep() {
    
    sineGenerator_step(0);
    
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_4.cpp
*********************************************************************/

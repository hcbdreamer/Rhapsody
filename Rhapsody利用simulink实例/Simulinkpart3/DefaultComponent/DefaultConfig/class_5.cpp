/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_5
//!	Generated Date	: 周四, 22, 3月 2018  
	File Path	: DefaultComponent\DefaultConfig\class_5.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "class_5.h"
//## auto_generated
#include "C:\研究生课题任务\Simulink\sineGenerator_ert_rtw\sineGenerator.h"
//## package Default

//## class class_5
//#[ ignore
class_5::class_5(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    m_nSampleTime = 100;
    sineGenerator_initialize();
}

class_5::~class_5() {
    sineGenerator_terminate();
}

void class_5::doStep() {
    
    
    sineGenerator_step();
    
    
}
//#]

bool class_5::startBehavior() {
    bool done = false;
    done = OMSimulinkBlock::startBehavior();
    return done;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_5.cpp
*********************************************************************/

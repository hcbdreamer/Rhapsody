/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: System
//!	Generated Date	: ÖÜÈÕ, 3, 6ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\System.cpp
*********************************************************************/

//## auto_generated
#include "System.h"
//## package Default

//## class System
System::System() {
    initRelations();
}

System::~System() {
}

Driver* System::getItsDriver() const {
    return (Driver*) &itsDriver;
}

Monitor* System::getItsMonitor() const {
    return (Monitor*) &itsMonitor;
}

void System::initRelations() {
    {
        
        itsDriver.get_Out1_SP()->setItsDoubleFlowInterface(itsMonitor.get_In1_SP()->getItsDoubleFlowInterface());
        
    }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\System.cpp
*********************************************************************/

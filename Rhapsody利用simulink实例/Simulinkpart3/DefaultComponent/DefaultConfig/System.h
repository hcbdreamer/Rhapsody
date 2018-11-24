/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: System
//!	Generated Date	: ÖÜËÄ, 28, 12ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\System.h
*********************************************************************/

#ifndef System_H
#define System_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsDriver
#include "Driver.h"
//## link itsMonitor
#include "Monitor.h"
//## package Default

//## class System
class System {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    System();
    
    //## auto_generated
    ~System();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Driver* getItsDriver() const;
    
    //## auto_generated
    Monitor* getItsMonitor() const;
    
    ////    Relations and components    ////

protected :

    Driver itsDriver;		//## link itsDriver
    
    Monitor itsMonitor;		//## link itsMonitor
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\System.h
*********************************************************************/

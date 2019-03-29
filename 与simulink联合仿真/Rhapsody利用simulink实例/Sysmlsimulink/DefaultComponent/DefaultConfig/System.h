/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: System
//!	Generated Date	: ÷‹»’, 3, 6‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\System.h
*********************************************************************/

#ifndef System_H
#define System_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## classInstance itsDriver
#include "Driver.h"
//## classInstance itsMonitor
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

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    Driver itsDriver;		//## classInstance itsDriver
    
    Monitor itsMonitor;		//## classInstance itsMonitor
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\System.h
*********************************************************************/

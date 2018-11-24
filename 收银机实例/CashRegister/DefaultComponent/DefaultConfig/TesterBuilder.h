/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TesterBuilder
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\TesterBuilder.h
*********************************************************************/

#ifndef TesterBuilder_H
#define TesterBuilder_H

//## auto_generated
#include <oxf\oxf.h>
//## classInstance itsCashRegister
#include "CashRegister.h"
//## classInstance itsTester
#include "Tester.h"
//## package HardwarePkg::TesterPkg

//## class TesterBuilder
class TesterBuilder {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    TesterBuilder();
    
    //## auto_generated
    ~TesterBuilder();
    
    ////    Additional operations    ////
    
    //## auto_generated
    CashRegister* getItsCashRegister() const;
    
    //## auto_generated
    Tester* getItsTester() const;
    
    ////    Relations and components    ////

protected :

    CashRegister itsCashRegister;		//## classInstance itsCashRegister
    
    Tester itsTester;		//## classInstance itsTester
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TesterBuilder.h
*********************************************************************/

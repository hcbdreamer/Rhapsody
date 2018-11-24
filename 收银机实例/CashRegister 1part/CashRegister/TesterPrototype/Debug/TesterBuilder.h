/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: TesterBuilder
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\TesterBuilder.h
*********************************************************************/

#ifndef TesterBuilder_H
#define TesterBuilder_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "TesterPkg.h"
//## classInstance itsCashRegister
#include "CashRegister.h"
//## classInstance itsTester
#include "Tester.h"
//## package HardwarePkg::TesterPkg

//## class TesterBuilder
class TesterBuilder {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTesterBuilder;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTesterBuilder : virtual public AOMInstance {
    DECLARE_META(TesterBuilder, OMAnimatedTesterBuilder)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\TesterBuilder.h
*********************************************************************/

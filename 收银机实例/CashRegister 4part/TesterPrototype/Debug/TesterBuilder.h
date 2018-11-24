/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: TesterBuilder
//!	Generated Date	: ÷‹“ª, 27, 11‘¬ 2017  
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
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsCashRegister
#include "CashRegister.h"
//## classInstance itsTester
#include "Tester.h"
//## package HardwarePkg::TesterPkg

//## class TesterBuilder
class TesterBuilder : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTesterBuilder;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TesterBuilder(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~TesterBuilder();
    
    ////    Additional operations    ////
    
    //## auto_generated
    CashRegister* getItsCashRegister() const;
    
    //## auto_generated
    Tester* getItsTester() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    CashRegister itsCashRegister;		//## classInstance itsCashRegister
    
    Tester itsTester;		//## classInstance itsTester
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
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

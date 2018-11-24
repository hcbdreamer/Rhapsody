/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: TesterBuilder
//!	Generated Date	: ÖÜÒ», 27, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\TesterBuilder.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TesterBuilder.h"
//#[ ignore
#define HardwarePkg_TesterPkg_TesterBuilder_TesterBuilder_SERIALIZE OM_NO_OP
//#]

//## package HardwarePkg::TesterPkg

//## class TesterBuilder
TesterBuilder::TesterBuilder(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TesterBuilder, TesterBuilder(), 0, HardwarePkg_TesterPkg_TesterBuilder_TesterBuilder_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsCashRegister.setShouldDelete(false);
        }
        {
            itsTester.setShouldDelete(false);
        }
    }
    initRelations();
}

TesterBuilder::~TesterBuilder() {
    NOTIFY_DESTRUCTOR(~TesterBuilder, true);
}

CashRegister* TesterBuilder::getItsCashRegister() const {
    return (CashRegister*) &itsCashRegister;
}

Tester* TesterBuilder::getItsTester() const {
    return (Tester*) &itsTester;
}

bool TesterBuilder::startBehavior() {
    bool done = true;
    done &= itsCashRegister.startBehavior();
    done &= itsTester.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void TesterBuilder::initRelations() {
    {
        
        itsCashRegister.get_display()->setItsIDisplay(itsTester.get_display()->getItsIDisplay());
        
    }
    {
        
        itsTester.get_barcode()->setItsIBarcodeReaderEnabled(itsCashRegister.get_barcode()->getItsIBarcodeReaderEnabled());
        
    }
    {
        
        itsTester.get_keyboard()->setItsIKeyboardEnabled(itsCashRegister.get_keyboard()->getItsIKeyboardEnabled());
        
    }
}

void TesterBuilder::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsCashRegister.setActiveContext(theActiveContext, false);
        itsTester.setActiveContext(theActiveContext, false);
    }
}

void TesterBuilder::destroy() {
    itsCashRegister.destroy();
    itsTester.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTesterBuilder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCashRegister", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCashRegister);
    aomsRelations->addRelation("itsTester", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTester);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(TesterBuilder, HardwarePkg_TesterPkg, HardwarePkg::TesterPkg, false, OMAnimatedTesterBuilder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\TesterBuilder.cpp
*********************************************************************/

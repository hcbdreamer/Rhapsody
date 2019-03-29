/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Builder
//!	Generated Date	: ÖÜÒ», 22, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Builder.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Builder.h"
//#[ ignore
#define HardwarePkg_Builder_Builder_SERIALIZE OM_NO_OP
//#]

//## package HardwarePkg

//## class Builder
Builder::Builder(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Builder, Builder(), 0, HardwarePkg_Builder_Builder_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsMain.setShouldDelete(false);
        }
        {
            itsTest.setShouldDelete(false);
        }
    }
    initRelations();
}

Builder::~Builder() {
    NOTIFY_DESTRUCTOR(~Builder, true);
}

main* Builder::getItsMain() const {
    return (main*) &itsMain;
}

test* Builder::getItsTest() const {
    return (test*) &itsTest;
}

bool Builder::startBehavior() {
    bool done = true;
    done &= itsMain.startBehavior();
    done &= itsTest.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Builder::initRelations() {
    {
        
        itsMain.get_display()->setItsIdisplay(itsTest.get_display()->getItsIdisplay());
        
    }
    {
        
        itsTest.get_input()->setItsIinput(itsMain.get_input()->getItsIinput());
        
    }
}

void Builder::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsMain.setActiveContext(theActiveContext, false);
        itsTest.setActiveContext(theActiveContext, false);
    }
}

void Builder::destroy() {
    itsMain.destroy();
    itsTest.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBuilder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMain", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMain);
    aomsRelations->addRelation("itsTest", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTest);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Builder, HardwarePkg, HardwarePkg, false, OMAnimatedBuilder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Builder.cpp
*********************************************************************/

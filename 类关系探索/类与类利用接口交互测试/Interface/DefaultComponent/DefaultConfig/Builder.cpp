/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Builder
//!	Generated Date	: ÖÜÁù, 20, 1ÔÂ 2018  
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
            itsTest.setShouldDelete(false);
        }
    }
    initRelations();
}

Builder::~Builder() {
    NOTIFY_DESTRUCTOR(~Builder, true);
}

test* Builder::getItsTest() const {
    return (test*) &itsTest;
}

test1* Builder::getItsTest1() const {
    return (test1*) &itsTest1;
}

bool Builder::startBehavior() {
    bool done = true;
    done &= itsTest.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Builder::initRelations() {
    {
        
        itsTest.get_Out()->setItsIOut(itsTest1.get_Out()->getItsIOut());
        
    }
}

void Builder::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsTest.setActiveContext(theActiveContext, false);
    }
}

void Builder::destroy() {
    itsTest.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBuilder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTest", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTest);
    aomsRelations->addRelation("itsTest1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTest1);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Builder, HardwarePkg, HardwarePkg, false, OMAnimatedBuilder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Builder.cpp
*********************************************************************/

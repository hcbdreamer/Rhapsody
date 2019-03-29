/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Builder
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Builder.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Builder.h"
//#[ ignore
#define Default_Builder_Builder_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Builder
Builder::Builder(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Builder, Builder(), 0, Default_Builder_Builder_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsA.setShouldDelete(false);
        }
        {
            itsB.setShouldDelete(false);
        }
    }
    initRelations();
}

Builder::~Builder() {
    NOTIFY_DESTRUCTOR(~Builder, true);
}

A* Builder::getItsA() const {
    return (A*) &itsA;
}

B* Builder::getItsB() const {
    return (B*) &itsB;
}

bool Builder::startBehavior() {
    bool done = true;
    done &= itsA.startBehavior();
    done &= itsB.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Builder::initRelations() {
    itsA.setItsB(&itsB);
}

void Builder::destroy() {
    itsA.destroy();
    itsB.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBuilder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsA", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsA);
    aomsRelations->addRelation("itsB", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsB);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Builder, Default, Default, false, OMAnimatedBuilder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Builder.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: Release
	Model Element	: builder
//!	Generated Date	: ÖÜËÄ, 16, 11ÔÂ 2017  
	File Path	: DefaultComponent\Release\builder.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "builder.h"
//#[ ignore
#define Default_builder_builder_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class builder
builder::builder(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(builder, builder(), 0, Default_builder_builder_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsButton.setShouldDelete(false);
        }
        {
            itsTimer.setShouldDelete(false);
        }
    }
    initRelations();
}

builder::~builder() {
    NOTIFY_DESTRUCTOR(~builder, true);
}

Button* builder::getItsButton() const {
    return (Button*) &itsButton;
}

Display* builder::getItsDisplay() const {
    return (Display*) &itsDisplay;
}

Timer* builder::getItsTimer() const {
    return (Timer*) &itsTimer;
}

bool builder::startBehavior() {
    bool done = true;
    done &= itsButton.startBehavior();
    done &= itsTimer.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void builder::initRelations() {
    itsButton.setItsTimer(&itsTimer);
    itsTimer.setItsDisplay(&itsDisplay);
}

void builder::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsButton.setActiveContext(theActiveContext, false);
        itsTimer.setActiveContext(theActiveContext, false);
    }
}

void builder::destroy() {
    itsButton.destroy();
    itsTimer.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedbuilder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsButton", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsButton);
    aomsRelations->addRelation("itsTimer", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTimer);
    aomsRelations->addRelation("itsDisplay", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDisplay);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(builder, Default, Default, false, OMAnimatedbuilder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Release\builder.cpp
*********************************************************************/

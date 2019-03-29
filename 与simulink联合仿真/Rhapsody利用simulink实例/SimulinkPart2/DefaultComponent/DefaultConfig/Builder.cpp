/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Builder
//!	Generated Date	: ÖÜ¶þ, 26, 12ÔÂ 2017  
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
            itsMagic.setShouldDelete(false);
        }
    }
    initRelations();
}

Builder::~Builder() {
    NOTIFY_DESTRUCTOR(~Builder, true);
}

Magic* Builder::getItsMagic() const {
    return (Magic*) &itsMagic;
}

Sink* Builder::getItsSink() const {
    return (Sink*) &itsSink;
}

Source* Builder::getItsSource() const {
    return (Source*) &itsSource;
}

bool Builder::startBehavior() {
    bool done = true;
    done &= itsMagic.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Builder::initRelations() {
    {
        
        itsSource.get_p1_SP()->setItsIntFlowInterface(itsMagic.get_In1_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsMagic.get_Out1_SP()->setItsIntFlowInterface(itsSink.get_p1_SP()->getItsIntFlowInterface());
        
    }
}

void Builder::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsMagic.setActiveContext(theActiveContext, false);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBuilder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMagic", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMagic);
    aomsRelations->addRelation("itsSink", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSink);
    aomsRelations->addRelation("itsSource", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSource);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Builder, Default, Default, false, OMAnimatedBuilder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Builder.cpp
*********************************************************************/

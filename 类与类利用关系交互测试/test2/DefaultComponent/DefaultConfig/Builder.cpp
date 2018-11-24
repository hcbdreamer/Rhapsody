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

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Builder.h"
//#[ ignore
#define Default_Builder_Builder_SERIALIZE OM_NO_OP

#define Default_Builder_trans_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Builder
Builder::Builder(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Builder, Builder(), 0, Default_Builder_Builder_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Builder::~Builder() {
    NOTIFY_DESTRUCTOR(~Builder, true);
}

void Builder::trans() {
    NOTIFY_OPERATION(trans, trans(), 0, Default_Builder_trans_SERIALIZE);
    //#[ operation trans()
    int x;
    x=Eva.p1;
    Adam.p2=x;
    //#]
}

D* Builder::getAdam() const {
    return (D*) &Adam;
}

C* Builder::getEva() const {
    return (C*) &Eva;
}

bool Builder::startBehavior() {
    bool done = true;
    done &= OMReactive::startBehavior();
    return done;
}

void Builder::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Builder::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.state_0");
        rootState_subState = state_0;
        rootState_active = state_0;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Builder::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_0
    if(rootState_active == state_0)
        {
            if(IS_EVENT_TYPE_OF(evStart_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.state_0");
                    //#[ transition 1 
                       trans();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_1");
                    rootState_subState = state_1;
                    rootState_active = state_1;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBuilder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("Adam", true, true);
    aomsRelations->ADD_ITEM(&myReal->Adam);
    aomsRelations->addRelation("Eva", true, true);
    aomsRelations->ADD_ITEM(&myReal->Eva);
}

void OMAnimatedBuilder::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Builder::state_0:
        {
            state_0_serializeStates(aomsState);
        }
        break;
        case Builder::state_1:
        {
            state_1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedBuilder::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1");
}

void OMAnimatedBuilder::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
}
//#]

IMPLEMENT_REACTIVE_META_P(Builder, Default, Default, false, OMAnimatedBuilder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Builder.cpp
*********************************************************************/

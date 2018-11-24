/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Builder
//!	Generated Date	: ÖÜËÄ, 19, 4ÔÂ 2018  
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

#define Default_Builder_transout_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Builder
Builder::Builder(IOxfActive* theActiveContext) : x(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Builder, Builder(), 0, Default_Builder_Builder_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsSink.setShouldDelete(false);
        }
        {
            itsNodel.setShouldDelete(false);
        }
        {
            itsSource.setShouldDelete(false);
        }
    }
    initStatechart();
}

Builder::~Builder() {
    NOTIFY_DESTRUCTOR(~Builder, true);
    cancelTimeouts();
}

void Builder::trans() {
    NOTIFY_OPERATION(trans, trans(), 0, Default_Builder_trans_SERIALIZE);
    //#[ operation trans()
    //int x;
    x=itsSource.p1;
    itsNodel.setIn1(x);
    //#]
}

void Builder::transout() {
    NOTIFY_OPERATION(transout, transout(), 0, Default_Builder_transout_SERIALIZE);
    //#[ operation transout()
    itsNodel.setOut1(y);
    itsSink.p1=y;
    
    //#]
}

double Builder::getX() const {
    return x;
}

double Builder::getY() const {
    return y;
}

void Builder::setY(double p_y) {
    y = p_y;
}

Nodel* Builder::getItsNodel() const {
    return (Nodel*) &itsNodel;
}

Sink* Builder::getItsSink() const {
    return (Sink*) &itsSink;
}

Source* Builder::getItsSource() const {
    return (Source*) &itsSource;
}

bool Builder::startBehavior() {
    bool done = true;
    done &= itsNodel.startBehavior();
    done &= itsSink.startBehavior();
    done &= itsSource.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Builder::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Builder::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Builder::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Builder::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsSink.setActiveContext(theActiveContext, false);
        itsNodel.setActiveContext(theActiveContext, false);
        itsSource.setActiveContext(theActiveContext, false);
    }
}

void Builder::destroy() {
    itsNodel.destroy();
    itsSink.destroy();
    itsSource.destroy();
    OMReactive::destroy();
}

void Builder::setX(double p_x) {
    x = p_x;
    NOTIFY_SET_OPERATION;
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
    switch (rootState_active) {
        // State state_0
        case state_0:
        {
            if(IS_EVENT_TYPE_OF(evbegan_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.state_0");
                    //#[ transition 1 
                    trans();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_1");
                    rootState_subState = state_1;
                    rootState_active = state_1;
                    rootState_timeout = scheduleTimeout(200, "ROOT.state_1");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State state_1
        case state_1:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_1");
                            NOTIFY_STATE_ENTERED("ROOT.state_0");
                            rootState_subState = state_0;
                            rootState_active = state_0;
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBuilder::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("x", x2String(myReal->x));
    aomsAttributes->addAttribute("y", x2String(myReal->y));
}

void OMAnimatedBuilder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSink", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSink);
    aomsRelations->addRelation("itsNodel", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNodel);
    aomsRelations->addRelation("itsSource", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSource);
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

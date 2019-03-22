/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AccelerRometerClass
//!	Generated Date	: ÖÜÒ», 14, 1ÔÂ 2019  
	File Path	: DefaultComponent\DefaultConfig\AccelerRometerClass.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "AccelerRometerClass.h"
//#[ ignore
#define AccelerRometerPkg_AccelerRometerClass_AccelerRometerClass_SERIALIZE OM_NO_OP
//#]

//## package AccelerRometerPkg

//## class AccelerRometerClass
AccelerRometerClass::AccelerRometerClass(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(AccelerRometerClass, AccelerRometerClass(), 0, AccelerRometerPkg_AccelerRometerClass_AccelerRometerClass_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

AccelerRometerClass::~AccelerRometerClass() {
    NOTIFY_DESTRUCTOR(~AccelerRometerClass, false);
}

bool AccelerRometerClass::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void AccelerRometerClass::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void AccelerRometerClass::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.state_0");
        rootState_subState = state_0;
        rootState_active = state_0;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus AccelerRometerClass::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_0
    if(rootState_active == state_0)
        {
            if(IS_EVENT_TYPE_OF(evSetCount_AccelerRometerPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.state_0");
                    //#[ transition 1 
                      setCount(20);
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
void OMAnimatedAccelerRometerClass::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedTestObjectClass::serializeAttributes(aomsAttributes);
}

void OMAnimatedAccelerRometerClass::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedTestObjectClass::serializeRelations(aomsRelations);
}

void OMAnimatedAccelerRometerClass::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case AccelerRometerClass::state_0:
        {
            state_0_serializeStates(aomsState);
        }
        break;
        case AccelerRometerClass::state_1:
        {
            state_1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAccelerRometerClass::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1");
}

void OMAnimatedAccelerRometerClass::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(AccelerRometerClass, AccelerRometerPkg, false, TestObjectClass, OMAnimatedTestObjectClass, OMAnimatedAccelerRometerClass)

OMINIT_SUPERCLASS(TestObjectClass, OMAnimatedTestObjectClass)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AccelerRometerClass.cpp
*********************************************************************/

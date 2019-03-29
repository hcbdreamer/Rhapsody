/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: test
//!	Generated Date	: ÖÜÁù, 20, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\test.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "test.h"
//#[ ignore
#define TestPkg_test_test_SERIALIZE OM_NO_OP

#define TestPkg_test_Start_SERIALIZE OM_NO_OP
//#]

//## package TestPkg

//## class test
//#[ ignore
test::Out_C::Out_C() : _p_(0) {
    itsIOut = NULL;
}

test::Out_C::~Out_C() {
    cleanUpRelations();
}

IOut* test::Out_C::getItsIOut() {
    return this;
}

IOut* test::Out_C::getOutBound() {
    return this;
}

void test::Out_C::show(char* aMsg) {
    
    if (itsIOut != NULL) {
        itsIOut->show(aMsg);
    }
    
}

void test::Out_C::setItsIOut(IOut* p_IOut) {
    itsIOut = p_IOut;
}

void test::Out_C::cleanUpRelations() {
    if(itsIOut != NULL)
        {
            itsIOut = NULL;
        }
}
//#]

test::test(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(test, test(), 0, TestPkg_test_test_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

test::~test() {
    NOTIFY_DESTRUCTOR(~test, true);
}

void test::Start() {
    NOTIFY_OPERATION(Start, Start(), 0, TestPkg_test_Start_SERIALIZE);
    //#[ operation Start()
    char msg[64]="Add"; 
    OUT_PORT(Out)->show(msg);
    //#]
}

test::Out_C* test::getOut() const {
    return (test::Out_C*) &Out;
}

test::Out_C* test::get_Out() const {
    return (test::Out_C*) &Out;
}

bool test::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void test::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void test::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus test::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State idle
    if(rootState_active == idle)
        {
            if(IS_EVENT_TYPE_OF(evStart_TestPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    //#[ transition 1 
                    Start();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.active");
                    rootState_subState = active;
                    rootState_active = active;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedtest::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case test::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case test::active:
        {
            active_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedtest::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}

void OMAnimatedtest::active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.active");
}
//#]

IMPLEMENT_REACTIVE_META_P(test, TestPkg, TestPkg, false, OMAnimatedtest)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\test.cpp
*********************************************************************/

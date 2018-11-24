/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: test
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\test.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "test.h"
//## event evstart()
#include "mainPkg.h"
//#[ ignore
#define HardwarePkg_test_test_SERIALIZE OM_NO_OP

#define HardwarePkg_test_show_SERIALIZE aomsmethod->addAttribute("aMsg", x2String(aMsg));

#define HardwarePkg_test_start1_SERIALIZE OM_NO_OP
//#]

//## package HardwarePkg

//## class test
//#[ ignore
test::display_C::display_C() : _p_(0) {
    itsIdisplay = NULL;
}

test::display_C::~display_C() {
    cleanUpRelations();
}

void test::display_C::connectTest(test* part) {
    setItsIdisplay(part);
    
}

Idisplay* test::display_C::getItsIdisplay() {
    return this;
}

void test::display_C::show(int aMsg) {
    
    if (itsIdisplay != NULL) {
        itsIdisplay->show(aMsg);
    }
    
}

void test::display_C::setItsIdisplay(Idisplay* p_Idisplay) {
    itsIdisplay = p_Idisplay;
}

void test::display_C::cleanUpRelations() {
    if(itsIdisplay != NULL)
        {
            itsIdisplay = NULL;
        }
}

test::input_C::input_C() : _p_(0) {
    itsIinput = NULL;
}

test::input_C::~input_C() {
    cleanUpRelations();
}

Iinput* test::input_C::getItsIinput() {
    return this;
}

Iinput* test::input_C::getOutBound() {
    return this;
}

int test::input_C::in(int a) {
    int res = 0;
    if (itsIinput != NULL) {
        res = itsIinput->in(a);
    }
    return res;
}

bool test::input_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsIinput != NULL) {
            if (event->isTypeOf(evstart_mainPkg_id)) {
                res = itsIinput->send(event, params);
            }
        }
    }
    return res;
    
}

bool test::input_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsIinput != NULL) {
            if (event->isTypeOf(evstart_mainPkg_id)) {
                res = itsIinput->send(event);
            }
        }
    }
    return res;
    
}

void test::input_C::setItsIinput(Iinput* p_Iinput) {
    itsIinput = p_Iinput;
}

void test::input_C::cleanUpRelations() {
    if(itsIinput != NULL)
        {
            itsIinput = NULL;
        }
}
//#]

test::test(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(test, test(), 0, HardwarePkg_test_test_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

test::~test() {
    NOTIFY_DESTRUCTOR(~test, false);
    cancelTimeouts();
}

void test::show(int aMsg) {
    NOTIFY_OPERATION(show, show(int), 1, HardwarePkg_test_show_SERIALIZE);
    //#[ operation show(int)
    std::cout<<"show number: "<<aMsg<<std::endl;
    //#]
}

int test::start1() {
    NOTIFY_OPERATION(start1, start1(), 0, HardwarePkg_test_start1_SERIALIZE);
    //#[ operation start1()
    int a;
    std::cin>>a; 
    std::cout<<"start1 input a: "<<a<<std::endl; 
    OUT_PORT(input)->in(a);
    //OUT_PORT(input)->GEN(evstart);
    return a;
    //#]
}

test::display_C* test::getDisplay() const {
    return (test::display_C*) &display;
}

test::display_C* test::get_display() const {
    return (test::display_C*) &display;
}

test::input_C* test::getInput() const {
    return (test::input_C*) &input;
}

test::input_C* test::get_input() const {
    return (test::input_C*) &input;
}

bool test::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void test::initRelations() {
    if (get_display() != NULL) {
        get_display()->connectTest(this);
    }
}

void test::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void test::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool test::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
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
    switch (rootState_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(evstart1_HardwarePkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    //#[ transition 1 
                    start1();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Input");
                    rootState_subState = Input;
                    rootState_active = Input;
                    rootState_timeout = scheduleTimeout(10, "ROOT.Input");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Input
        case Input:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Input");
                            //#[ transition 2 
                            OUT_PORT(input)->GEN(evstart);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.idle1");
                            rootState_subState = idle1;
                            rootState_active = idle1;
                            rootState_timeout = scheduleTimeout(10, "ROOT.idle1");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State idle1
        case idle1:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.idle1");
                            NOTIFY_STATE_ENTERED("ROOT.idle");
                            rootState_subState = idle;
                            rootState_active = idle;
                            NOTIFY_TRANSITION_TERMINATED("3");
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
void OMAnimatedtest::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedIdisplay::serializeAttributes(aomsAttributes);
}

void OMAnimatedtest::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedIdisplay::serializeRelations(aomsRelations);
}

void OMAnimatedtest::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case test::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case test::Input:
        {
            Input_serializeStates(aomsState);
        }
        break;
        case test::idle1:
        {
            idle1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedtest::Input_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Input");
}

void OMAnimatedtest::idle1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle1");
}

void OMAnimatedtest::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(test, HardwarePkg, false, Idisplay, OMAnimatedIdisplay, OMAnimatedtest)

OMINIT_SUPERCLASS(Idisplay, OMAnimatedIdisplay)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\test.cpp
*********************************************************************/

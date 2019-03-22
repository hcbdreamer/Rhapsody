/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: DefaultComponent 
	Configuration 	: VSTest
	Model Element	: AccelerRometerClass
//!	Generated Date	: 周一, 14, 1月 2019  
	File Path	: E:\学习\研究生课题任务\作战流程仿真\顶层建模\2019.1.14\测试\VSConnectionTest\VSConnectionTest\AccelerRometerClass.cpp
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
    cleanUpStatechart();
}

bool AccelerRometerClass::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void AccelerRometerClass::initStatechart() {
    delete rootState;
    rootState = new AccelerRometerClass_ROOT(this, NULL);
    rootState->subState = NULL;
    rootState->active = NULL;
    state_1 = new AccelerRometerClass_state_1(this, rootState, rootState);
    state_0 = new AccelerRometerClass_state_0(this, rootState, rootState);
    concept = this;
}

void AccelerRometerClass::cleanUpStatechart() {
    delete rootState;
    rootState = NULL;
    delete state_1;
    state_1 = NULL;
    delete state_0;
    state_0 = NULL;
}

void AccelerRometerClass::rootStateEntDef() {
    NOTIFY_TRANSITION_STARTED("0");
    state_0->entDef();
    NOTIFY_TRANSITION_TERMINATED("0");
}

IOxfReactive::TakeEventStatus AccelerRometerClass::state_0TakeevSetCount() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("1");
    state_0->exitState();
    //#[ transition 1 
      setCount(20);
    //#]
    state_1->entDef();
    NOTIFY_TRANSITION_TERMINATED("1");
    res = eventConsumed;
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
//#]
#endif // _OMINSTRUMENT

//#[ ignore
AccelerRometerClass_ROOT::AccelerRometerClass_ROOT(AccelerRometerClass* c, OMState* p) : OMComponentState(p) {
    concept = c;
    stateHandle = "ROOT";
}

AOMInstance* AccelerRometerClass_ROOT::getConcept() const {
    return AOM_CONCEPT;
}

void AccelerRometerClass_ROOT::entDef() {
    enterState();
    concept->rootStateEntDef();
}

AccelerRometerClass_state_1::AccelerRometerClass_state_1(AccelerRometerClass* c, OMState* p, OMState* cmp) : OMLeafState(p, cmp) {
    concept = c;
    stateHandle = "ROOT.state_1";
}

AOMInstance* AccelerRometerClass_state_1::getConcept() const {
    return AOM_CONCEPT;
}

AccelerRometerClass_state_0::AccelerRometerClass_state_0(AccelerRometerClass* c, OMState* p, OMState* cmp) : OMLeafState(p, cmp) {
    concept = c;
    stateHandle = "ROOT.state_0";
}

AOMInstance* AccelerRometerClass_state_0::getConcept() const {
    return AOM_CONCEPT;
}

IOxfReactive::TakeEventStatus AccelerRometerClass_state_0::handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evSetCount_AccelerRometerPkg_id))
        {
            res = concept->state_0TakeevSetCount();
        }
    
    if(res == eventNotConsumed)
        {
            res = parent->handleEvent();
        }
    return res;
}
//#]

#ifdef _OMINSTRUMENT
IMPLEMENT_REACTIVE_META_S_P(AccelerRometerClass, AccelerRometerPkg, false, TestObjectClass, OMAnimatedTestObjectClass, OMAnimatedAccelerRometerClass)

OMINIT_SUPERCLASS(TestObjectClass, OMAnimatedTestObjectClass)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: E:\学习\研究生课题任务\作战流程仿真\顶层建模\2019.1.14\测试\VSConnectionTest\VSConnectionTest\AccelerRometerClass.cpp
*********************************************************************/

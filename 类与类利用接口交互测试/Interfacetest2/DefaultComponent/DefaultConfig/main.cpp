/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: main
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\main.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "main.h"
//#[ ignore
#define mainPkg_main_main_SERIALIZE OM_NO_OP

#define mainPkg_main_in_SERIALIZE aomsmethod->addAttribute("a", x2String(a));

#define mainPkg_main_start_SERIALIZE OM_NO_OP
//#]

//## package mainPkg

//## class main
//#[ ignore
main::display_C::display_C() : _p_(0) {
    itsIdisplay = NULL;
}

main::display_C::~display_C() {
    cleanUpRelations();
}

Idisplay* main::display_C::getItsIdisplay() {
    return this;
}

Idisplay* main::display_C::getOutBound() {
    return this;
}

void main::display_C::show(int aMsg) {
    
    if (itsIdisplay != NULL) {
        itsIdisplay->show(aMsg);
    }
    
}

void main::display_C::setItsIdisplay(Idisplay* p_Idisplay) {
    itsIdisplay = p_Idisplay;
}

void main::display_C::cleanUpRelations() {
    if(itsIdisplay != NULL)
        {
            itsIdisplay = NULL;
        }
}

main::input_C::input_C() : _p_(0) {
    itsIinput = NULL;
}

main::input_C::~input_C() {
    cleanUpRelations();
}

void main::input_C::connectMain(main* part) {
    setItsIinput(part);
    
}

Iinput* main::input_C::getItsIinput() {
    return this;
}

int main::input_C::in(int a) {
    int res = 0;
    if (itsIinput != NULL) {
        res = itsIinput->in(a);
    }
    return res;
}

bool main::input_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsIinput != NULL) {
            if (event->isTypeOf(evstart_mainPkg_id)) {
                res = itsIinput->send(event, params);
            }
        }
    }
    return res;
    
}

bool main::input_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsIinput != NULL) {
            if (event->isTypeOf(evstart_mainPkg_id)) {
                res = itsIinput->send(event);
            }
        }
    }
    return res;
    
}

void main::input_C::setItsIinput(Iinput* p_Iinput) {
    itsIinput = p_Iinput;
}

void main::input_C::cleanUpRelations() {
    if(itsIinput != NULL)
        {
            itsIinput = NULL;
        }
}
//#]

main::main(IOxfActive* theActiveContext) : number(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(main, main(), 0, mainPkg_main_main_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
    //#[ operation main()
    std::cout<<"Contructed!"<<std::endl;
    //#]
}

main::~main() {
    NOTIFY_DESTRUCTOR(~main, false);
    cancelTimeouts();
}

int main::in(int a) {
    NOTIFY_OPERATION(in, in(int), 1, mainPkg_main_in_SERIALIZE);
    //#[ operation in(int)
    number=a;
    std::cout<<"main get number is: "<<number<<std::endl;
    return number;
    //#]
}

void main::start() {
    NOTIFY_OPERATION(start, start(), 0, mainPkg_main_start_SERIALIZE);
    //#[ operation start()
    OUT_PORT(display)->show(number);
    //#]
}

main::display_C* main::getDisplay() const {
    return (main::display_C*) &display;
}

main::display_C* main::get_display() const {
    return (main::display_C*) &display;
}

main::input_C* main::getInput() const {
    return (main::input_C*) &input;
}

main::input_C* main::get_input() const {
    return (main::input_C*) &input;
}

int main::getNumber() const {
    return number;
}

void main::setNumber(int p_number) {
    number = p_number;
    NOTIFY_SET_OPERATION;
}

bool main::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void main::initRelations() {
    if (get_input() != NULL) {
        get_input()->connectMain(this);
    }
}

void main::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void main::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool main::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void main::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("2");
        NOTIFY_STATE_ENTERED("ROOT.idle1");
        rootState_subState = idle1;
        rootState_active = idle1;
        NOTIFY_TRANSITION_TERMINATED("2");
    }
}

IOxfReactive::TakeEventStatus main::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle1
        case idle1:
        {
            if(IS_EVENT_TYPE_OF(evstart_mainPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.idle1");
                    //#[ transition 0 
                    start();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Display");
                    rootState_subState = Display;
                    rootState_active = Display;
                    rootState_timeout = scheduleTimeout(10, "ROOT.Display");
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Display
        case Display:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Display");
                            NOTIFY_STATE_ENTERED("ROOT.idle1");
                            rootState_subState = idle1;
                            rootState_active = idle1;
                            NOTIFY_TRANSITION_TERMINATED("1");
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
void OMAnimatedmain::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("number", x2String(myReal->number));
    OMAnimatedIinput::serializeAttributes(aomsAttributes);
}

void OMAnimatedmain::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedIinput::serializeRelations(aomsRelations);
}

void OMAnimatedmain::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case main::idle1:
        {
            idle1_serializeStates(aomsState);
        }
        break;
        case main::Display:
        {
            Display_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedmain::idle1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle1");
}

void OMAnimatedmain::Display_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Display");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(main, mainPkg, false, Iinput, OMAnimatedIinput, OMAnimatedmain)

OMINIT_SUPERCLASS(Iinput, OMAnimatedIinput)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\main.cpp
*********************************************************************/

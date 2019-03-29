/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sifu
//!	Generated Date	: ÖÜ¶þ, 13, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\sifu.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "sifu.h"
//#[ ignore
#define sifuPkg_sifu_sifu_SERIALIZE OM_NO_OP

#define sifuPkg_sifu_left_SERIALIZE OM_NO_OP

#define sifuPkg_sifu_right_SERIALIZE OM_NO_OP
//#]

//## package sifuPkg

//## class sifu
sifu::sifu(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(sifu, sifu(), 0, sifuPkg_sifu_sifu_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

sifu::~sifu() {
    NOTIFY_DESTRUCTOR(~sifu, true);
}

void sifu::left() {
    NOTIFY_OPERATION(left, left(), 0, sifuPkg_sifu_left_SERIALIZE);
    //#[ operation left()
    //#]
}

void sifu::right() {
    NOTIFY_OPERATION(right, right(), 0, sifuPkg_sifu_right_SERIALIZE);
    //#[ operation right()
    //#]
}

int sifu::getX() const {
    return x;
}

void sifu::setX(int p_x) {
    x = p_x;
}

int sifu::getY() const {
    return y;
}

void sifu::setY(int p_y) {
    y = p_y;
}

bool sifu::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void sifu::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void sifu::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus sifu::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State idle
    if(rootState_active == idle)
        {
            if(IS_EVENT_TYPE_OF(tleft_sifuPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    //#[ transition 1 
                    
                    left();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.left");
                    rootState_subState = left;
                    rootState_active = left;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(tright_sifuPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    //#[ transition 2 
                    
                    right();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.right");
                    rootState_subState = right;
                    rootState_active = right;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedsifu::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("x", x2String(myReal->x));
    aomsAttributes->addAttribute("y", x2String(myReal->y));
}

void OMAnimatedsifu::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case sifu::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case sifu::left:
        {
            left_serializeStates(aomsState);
        }
        break;
        case sifu::right:
        {
            right_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsifu::right_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.right");
}

void OMAnimatedsifu::left_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.left");
}

void OMAnimatedsifu::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(sifu, sifuPkg, sifuPkg, false, OMAnimatedsifu)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sifu.cpp
*********************************************************************/

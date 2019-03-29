/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sink
//!	Generated Date	: ÖÜËÄ, 19, 4ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Sink.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Sink.h"
//#[ ignore
#define Default_Sink_Sink_SERIALIZE OM_NO_OP

#define Default_Sink_Direction_SERIALIZE OM_NO_OP

#define Default_Sink_Fuzhi_SERIALIZE OM_NO_OP

#define Default_Sink_RadJudgement_SERIALIZE OM_NO_OP

#define Default_Sink_Reget_SERIALIZE OM_NO_OP

#define Default_Sink_Transverter_SERIALIZE OM_NO_OP

#define Default_Sink_Warning_SERIALIZE OM_NO_OP

#define Default_Sink_showleft_SERIALIZE OM_NO_OP

#define Default_Sink_showright_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Sink
//#[ ignore
Sink::p1_SP_C::p1_SP_C() : _p_(0) {
    itsDoubleFlowInterface = NULL;
}

Sink::p1_SP_C::~p1_SP_C() {
    cleanUpRelations();
}

void Sink::p1_SP_C::SetValue(double data, void * pCaller) {
    
    if (itsDoubleFlowInterface != NULL) {
        itsDoubleFlowInterface->SetValue(data,this);
    }
    
}

void Sink::p1_SP_C::connectSink(Sink* part) {
    setItsDoubleFlowInterface(part);
    
}

doubleFlowInterface* Sink::p1_SP_C::getItsDoubleFlowInterface() {
    return this;
}

void Sink::p1_SP_C::setItsDoubleFlowInterface(doubleFlowInterface* p_doubleFlowInterface) {
    itsDoubleFlowInterface = p_doubleFlowInterface;
}

void Sink::p1_SP_C::cleanUpRelations() {
    if(itsDoubleFlowInterface != NULL)
        {
            itsDoubleFlowInterface = NULL;
        }
}
//#]

Sink::Sink(IOxfActive* theActiveContext) : W(0), Y(0), N(27) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Sink, Sink(), 0, Default_Sink_Sink_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Sink::~Sink() {
    NOTIFY_DESTRUCTOR(~Sink, true);
    cancelTimeouts();
}

bool Sink::Direction() {
    NOTIFY_OPERATION(Direction, Direction(), 0, Default_Sink_Direction_SERIALIZE);
    //#[ operation Direction()
    if(0>W){
       return true;
    }              
    else{
       return false;
    }
    //#]
}

void Sink::Fuzhi() {
    NOTIFY_OPERATION(Fuzhi, Fuzhi(), 0, Default_Sink_Fuzhi_SERIALIZE);
    //#[ operation Fuzhi()
    Y=X;
    //#]
}

bool Sink::RadJudgement() {
    NOTIFY_OPERATION(RadJudgement, RadJudgement(), 0, Default_Sink_RadJudgement_SERIALIZE);
    //#[ operation RadJudgement()
    if (-W0<W&&W0>W)
    {
    	return true;
    	}
    else
    {
        return false;
     }
    //#]
}

void Sink::Reget() {
    NOTIFY_OPERATION(Reget, Reget(), 0, Default_Sink_Reget_SERIALIZE);
    //#[ operation Reget()
    W0=84.82;
    //std::cin>>W;
    W=p1;
    //#]
}

void Sink::Warning() {
    NOTIFY_OPERATION(Warning, Warning(), 0, Default_Sink_Warning_SERIALIZE);
    //#[ operation Warning()
    std::cout<<"Output arc is not within range, please select the appropriate input value" <<std::endl;
    //#]
}

void Sink::showleft() {
    NOTIFY_OPERATION(showleft, showleft(), 0, Default_Sink_showleft_SERIALIZE);
    //#[ operation showleft()
    std::cout<<"xiang zuo zhuan de jiaodu zhi wei:"<<-Y<<std::endl;
    //#]
}

void Sink::showright() {
    NOTIFY_OPERATION(showright, showright(), 0, Default_Sink_showright_SERIALIZE);
    //#[ operation showright()
    std::cout<<"xiang you zhuan de jiaodu zhi wei:"<<Y<<std::endl;
    //#]
}

Sink::p1_SP_C* Sink::getP1_SP() const {
    return (Sink::p1_SP_C*) &p1_SP;
}

Sink::p1_SP_C* Sink::get_p1_SP() const {
    return (Sink::p1_SP_C*) &p1_SP;
}

double Sink::getW() const {
    return W;
}

void Sink::setW(double p_W) {
    W = p_W;
    NOTIFY_SET_OPERATION;
}

double Sink::getW0() const {
    return W0;
}

void Sink::setW0(double p_W0) {
    W0 = p_W0;
}

double Sink::getY() const {
    return Y;
}

void Sink::setY(double p_Y) {
    Y = p_Y;
    NOTIFY_SET_OPERATION;
}

double Sink::getP1() const {
    return p1;
}

bool Sink::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Sink::initRelations() {
    if (get_p1_SP() != NULL) {
        get_p1_SP()->connectSink(this);
    }
}

void Sink::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Sink::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Sink::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Sink::Transverter() {
    NOTIFY_OPERATION(Transverter, Transverter(), 0, Default_Sink_Transverter_SERIALIZE);
    //#[ operation Transverter()
    X=W/27*180/3.14;
    //#]
}

int Sink::getN() const {
    return N;
}

void Sink::setN(int p_N) {
    N = p_N;
}

double Sink::getX() const {
    return X;
}

void Sink::setX(double p_X) {
    X = p_X;
}

//#[ ignore
void Sink::SetValue(double data, void * pCaller) {
    if (pCaller == (void *)get_p1_SP()) {
        setP1(data);
    }
}

void Sink::setP1(double p_p1) {
    if (p1 != p_p1) {
        p1 = p_p1;
        FLOW_DATA_RECEIVE("p1", p1, x2String);
    }
    
}
//#]

void Sink::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Sink::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(EvStart_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    //#[ transition 5 
                     Reget();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.reget");
                    rootState_subState = reget;
                    rootState_active = reget;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State stop
        case stop:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.stop");
                            NOTIFY_STATE_ENTERED("ROOT.idle");
                            rootState_subState = idle;
                            rootState_active = idle;
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State legal
        case legal:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.legal");
                    //#[ transition 10 
                      Transverter();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Gongzuotai");
                    rootState_subState = Gongzuotai;
                    rootState_active = Gongzuotai;
                    rootState_timeout = scheduleTimeout(200, "ROOT.Gongzuotai");
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
        }
        break;
        // State left
        case left:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("8");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.left");
                            NOTIFY_STATE_ENTERED("ROOT.idle");
                            rootState_subState = idle;
                            rootState_active = idle;
                            NOTIFY_TRANSITION_TERMINATED("8");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State right
        case right:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("9");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.right");
                            NOTIFY_STATE_ENTERED("ROOT.idle");
                            rootState_subState = idle;
                            rootState_active = idle;
                            NOTIFY_TRANSITION_TERMINATED("9");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State reget
        case reget:
        {
            if(IS_EVENT_TYPE_OF(evlegal_Default_id))
                {
                    //## transition 1 
                    if( RadJudgement())
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_STATE_EXITED("ROOT.reget");
                            NOTIFY_STATE_ENTERED("ROOT.legal");
                            pushNullTransition();
                            rootState_subState = legal;
                            rootState_active = legal;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_STATE_EXITED("ROOT.reget");
                            //#[ transition 2 
                              Warning();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.stop");
                            rootState_subState = stop;
                            rootState_active = stop;
                            rootState_timeout = scheduleTimeout(200, "ROOT.stop");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Gongzuotai
        case Gongzuotai:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            //## transition 3 
                            if(Direction())
                                {
                                    NOTIFY_TRANSITION_STARTED("11");
                                    NOTIFY_TRANSITION_STARTED("3");
                                    cancel(rootState_timeout);
                                    NOTIFY_STATE_EXITED("ROOT.Gongzuotai");
                                    //#[ transition 3 
                                     Fuzhi();
                                     showleft();
                                    //#]
                                    NOTIFY_STATE_ENTERED("ROOT.left");
                                    rootState_subState = left;
                                    rootState_active = left;
                                    rootState_timeout = scheduleTimeout(200, "ROOT.left");
                                    NOTIFY_TRANSITION_TERMINATED("3");
                                    NOTIFY_TRANSITION_TERMINATED("11");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    NOTIFY_TRANSITION_STARTED("11");
                                    NOTIFY_TRANSITION_STARTED("4");
                                    cancel(rootState_timeout);
                                    NOTIFY_STATE_EXITED("ROOT.Gongzuotai");
                                    //#[ transition 4 
                                    Fuzhi();
                                    showright();
                                    //#]
                                    NOTIFY_STATE_ENTERED("ROOT.right");
                                    rootState_subState = right;
                                    rootState_active = right;
                                    rootState_timeout = scheduleTimeout(200, "ROOT.right");
                                    NOTIFY_TRANSITION_TERMINATED("4");
                                    NOTIFY_TRANSITION_TERMINATED("11");
                                    res = eventConsumed;
                                }
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
void OMAnimatedSink::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("W0", x2String(myReal->W0));
    aomsAttributes->addAttribute("W", x2String(myReal->W));
    aomsAttributes->addAttribute("Y", x2String(myReal->Y));
    aomsAttributes->addAttribute("p1", x2String(myReal->p1));
    aomsAttributes->addAttribute("N", x2String(myReal->N));
    aomsAttributes->addAttribute("X", x2String(myReal->X));
}

void OMAnimatedSink::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedSink::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Sink::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case Sink::stop:
        {
            stop_serializeStates(aomsState);
        }
        break;
        case Sink::legal:
        {
            legal_serializeStates(aomsState);
        }
        break;
        case Sink::left:
        {
            left_serializeStates(aomsState);
        }
        break;
        case Sink::right:
        {
            right_serializeStates(aomsState);
        }
        break;
        case Sink::reget:
        {
            reget_serializeStates(aomsState);
        }
        break;
        case Sink::Gongzuotai:
        {
            Gongzuotai_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSink::stop_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.stop");
}

void OMAnimatedSink::right_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.right");
}

void OMAnimatedSink::reget_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reget");
}

void OMAnimatedSink::legal_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.legal");
}

void OMAnimatedSink::left_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.left");
}

void OMAnimatedSink::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}

void OMAnimatedSink::Gongzuotai_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Gongzuotai");
}
//#]

IMPLEMENT_REACTIVE_META_P(Sink, Default, Default, false, OMAnimatedSink)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sink.cpp
*********************************************************************/

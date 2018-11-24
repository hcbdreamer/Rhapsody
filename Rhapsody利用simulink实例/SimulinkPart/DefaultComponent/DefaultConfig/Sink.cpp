/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sink
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Sink.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sink.h"
//#[ ignore
#define Default_Sink_Sink_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Sink
//#[ ignore
Sink::p1_SP_C::p1_SP_C() : _p_(0) {
    itsIntFlowInterface = NULL;
}

Sink::p1_SP_C::~p1_SP_C() {
    cleanUpRelations();
}

void Sink::p1_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void Sink::p1_SP_C::connectSink(Sink* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* Sink::p1_SP_C::getItsIntFlowInterface() {
    return this;
}

void Sink::p1_SP_C::setItsIntFlowInterface(intFlowInterface* p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Sink::p1_SP_C::cleanUpRelations() {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

Sink::Sink() : p1(0) {
    NOTIFY_CONSTRUCTOR(Sink, Sink(), 0, Default_Sink_Sink_SERIALIZE);
    initRelations();
}

Sink::~Sink() {
    NOTIFY_DESTRUCTOR(~Sink, true);
}

//#[ ignore
void Sink::SetValue(int data, void * pCaller) {
    if (pCaller == (void *)get_p1_SP()) {
        setP1(data);
    }
}

void Sink::setP1(int p_p1) {
    if (p1 != p_p1) {
        p1 = p_p1;
        FLOW_DATA_RECEIVE("p1", p1, x2String);
    }
    
}
//#]

Sink::p1_SP_C* Sink::getP1_SP() const {
    return (Sink::p1_SP_C*) &p1_SP;
}

Sink::p1_SP_C* Sink::get_p1_SP() const {
    return (Sink::p1_SP_C*) &p1_SP;
}

int Sink::getP1() const {
    return p1;
}

void Sink::initRelations() {
    if (get_p1_SP() != NULL) {
        get_p1_SP()->connectSink(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSink::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("p1", x2String(myReal->p1));
}

void OMAnimatedSink::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Sink, Default, Default, false, OMAnimatedSink)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sink.cpp
*********************************************************************/

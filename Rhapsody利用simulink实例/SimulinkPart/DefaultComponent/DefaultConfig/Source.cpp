/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Source
//!	Generated Date	: ÖÜ¶þ, 23, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Source.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Source.h"
//#[ ignore
#define Default_Source_Source_SERIALIZE OM_NO_OP

#define OMAnim_Default_Source_setP1_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_p1)

#define OMAnim_Default_Source_setP1_int_SERIALIZE_RET_VAL
//#]

//## package Default

//## class Source
//#[ ignore
Source::p1_SP_C::p1_SP_C() : _p_(0) {
    itsIntFlowInterface = NULL;
}

Source::p1_SP_C::~p1_SP_C() {
    cleanUpRelations();
}

void Source::p1_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* Source::p1_SP_C::getItsIntFlowInterface() {
    return this;
}

intFlowInterface* Source::p1_SP_C::getOutBound() {
    return this;
}

void Source::p1_SP_C::setItsIntFlowInterface(intFlowInterface* p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Source::p1_SP_C::cleanUpRelations() {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

Source::Source() : p1(0) {
    NOTIFY_CONSTRUCTOR(Source, Source(), 0, Default_Source_Source_SERIALIZE);
}

Source::~Source() {
    NOTIFY_DESTRUCTOR(~Source, true);
}

//#[ ignore
void Source::setP1(int p_p1) {
    if (p1 != p_p1)  {
        p1 = p_p1;
        FLOW_DATA_SEND(p1, p1_SP, SetValue, x2String);
    }
}
//#]

Source::p1_SP_C* Source::getP1_SP() const {
    return (Source::p1_SP_C*) &p1_SP;
}

Source::p1_SP_C* Source::get_p1_SP() const {
    return (Source::p1_SP_C*) &p1_SP;
}

int Source::getP1() const {
    return p1;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSource::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("p1", x2String(myReal->p1));
}
//#]

IMPLEMENT_META_P(Source, Default, Default, false, OMAnimatedSource)

IMPLEMENT_META_OP(OMAnimatedSource, Default_Source_setP1_int, "setP1", FALSE, "setP1(int)", 1)

IMPLEMENT_OP_CALL(Default_Source_setP1_int, Source, setP1(p_p1), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Source.cpp
*********************************************************************/

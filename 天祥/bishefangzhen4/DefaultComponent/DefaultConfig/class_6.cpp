/********************************************************************
	Rhapsody	: 8.2 
	Login		: ftx
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_6
//!	Generated Date	: ÖÜËÄ, 29, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\class_6.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "class_6.h"
//#[ ignore
#define Default_class_6_class_6_SERIALIZE OM_NO_OP

#define OMAnim_Default_class_6_setP1_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_p1)

#define OMAnim_Default_class_6_setP1_int_SERIALIZE_RET_VAL
//#]

//## package Default

//## class class_6
//#[ ignore
class_6::p1_SP_C::p1_SP_C() : _p_(0) {
    itsIntFlowInterface = NULL;
}

class_6::p1_SP_C::~p1_SP_C() {
    cleanUpRelations();
}

void class_6::p1_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* class_6::p1_SP_C::getItsIntFlowInterface() {
    return this;
}

intFlowInterface* class_6::p1_SP_C::getOutBound() {
    return this;
}

void class_6::p1_SP_C::setItsIntFlowInterface(intFlowInterface* p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void class_6::p1_SP_C::cleanUpRelations() {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

class_6::class_6() : p1(6) {
    NOTIFY_CONSTRUCTOR(class_6, class_6(), 0, Default_class_6_class_6_SERIALIZE);
}

class_6::~class_6() {
    NOTIFY_DESTRUCTOR(~class_6, true);
}

//#[ ignore
void class_6::setP1(int p_p1) {
    if (p1 != p_p1)  {
        p1 = p_p1;
        FLOW_DATA_SEND(p1, p1_SP, SetValue, x2String);
    }
}
//#]

class_6::p1_SP_C* class_6::getP1_SP() const {
    return (class_6::p1_SP_C*) &p1_SP;
}

class_6::p1_SP_C* class_6::get_p1_SP() const {
    return (class_6::p1_SP_C*) &p1_SP;
}

int class_6::getP1() const {
    return p1;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedclass_6::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("p1", x2String(myReal->p1));
}
//#]

IMPLEMENT_META_P(class_6, Default, Default, false, OMAnimatedclass_6)

IMPLEMENT_META_OP(OMAnimatedclass_6, Default_class_6_setP1_int, "setP1", FALSE, "setP1(int)", 1)

IMPLEMENT_OP_CALL(Default_class_6_setP1_int, class_6, setP1(p_p1), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_6.cpp
*********************************************************************/

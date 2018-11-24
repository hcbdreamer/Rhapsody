/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: test1
//!	Generated Date	: ÖÜÁù, 20, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\test1.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "test1.h"
//#[ ignore
#define HardwarePkg_test1_test1_SERIALIZE OM_NO_OP

#define HardwarePkg_test1_show_SERIALIZE aomsmethod->addAttribute("aMsg", x2String(aMsg));
//#]

//## package HardwarePkg

//## class test1
//#[ ignore
test1::Out_C::Out_C() : _p_(0) {
    itsIOut = NULL;
}

test1::Out_C::~Out_C() {
    cleanUpRelations();
}

void test1::Out_C::connectTest1(test1* part) {
    setItsIOut(part);
    
}

IOut* test1::Out_C::getItsIOut() {
    return this;
}

void test1::Out_C::show(char* aMsg) {
    
    if (itsIOut != NULL) {
        itsIOut->show(aMsg);
    }
    
}

void test1::Out_C::setItsIOut(IOut* p_IOut) {
    itsIOut = p_IOut;
}

void test1::Out_C::cleanUpRelations() {
    if(itsIOut != NULL)
        {
            itsIOut = NULL;
        }
}
//#]

test1::test1() {
    NOTIFY_CONSTRUCTOR(test1, test1(), 0, HardwarePkg_test1_test1_SERIALIZE);
    initRelations();
}

test1::~test1() {
    NOTIFY_DESTRUCTOR(~test1, false);
}

void test1::show(char* aMsg) {
    NOTIFY_OPERATION(show, show(char*), 1, HardwarePkg_test1_show_SERIALIZE);
    //#[ operation show(char*)
    std::cout<<aMsg<<std::endl;
    //#]
}

test1::Out_C* test1::getOut() const {
    return (test1::Out_C*) &Out;
}

test1::Out_C* test1::get_Out() const {
    return (test1::Out_C*) &Out;
}

void test1::initRelations() {
    if (get_Out() != NULL) {
        get_Out()->connectTest1(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedtest1::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedIOut::serializeAttributes(aomsAttributes);
}

void OMAnimatedtest1::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedIOut::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(test1, HardwarePkg, false, IOut, OMAnimatedIOut, OMAnimatedtest1)

OMINIT_SUPERCLASS(IOut, OMAnimatedIOut)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\test1.cpp
*********************************************************************/

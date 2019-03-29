/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: TestClass 
	Configuration 	: DefaultConfig
	Model Element	: TestObjectClass
//!	Generated Date	: ÖÜÒ», 14, 1ÔÂ 2019  
	File Path	: TestClass\DefaultConfig\TestObjectClass.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TestObjectClass.h"
//#[ ignore
#define BaseClassPkg_TestObjectClass_TestObjectClass_SERIALIZE OM_NO_OP
//#]

//## package BaseClassPkg

//## class TestObjectClass
TestObjectClass::TestObjectClass() : count(0) {
    NOTIFY_CONSTRUCTOR(TestObjectClass, TestObjectClass(), 0, BaseClassPkg_TestObjectClass_TestObjectClass_SERIALIZE);
}

TestObjectClass::~TestObjectClass() {
    NOTIFY_DESTRUCTOR(~TestObjectClass, true);
}

int TestObjectClass::getCount() const {
    return count;
}

void TestObjectClass::setCount(int p_count) {
    count = p_count;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTestObjectClass::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("count", x2String(myReal->count));
}
//#]

IMPLEMENT_META_P(TestObjectClass, BaseClassPkg, BaseClassPkg, false, OMAnimatedTestObjectClass)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TestClass\DefaultConfig\TestObjectClass.cpp
*********************************************************************/

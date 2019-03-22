/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: DefaultComponent 
	Configuration 	: VSTest
	Model Element	: TestObjectClass
//!	Generated Date	: 周一, 14, 1月 2019  
	File Path	: E:\学习\研究生课题任务\作战流程仿真\顶层建模\2019.1.14\测试\VSConnectionTest\VSConnectionTest\TestObjectClass.cpp
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
	File Path	: E:\学习\研究生课题任务\作战流程仿真\顶层建模\2019.1.14\测试\VSConnectionTest\VSConnectionTest\TestObjectClass.cpp
*********************************************************************/

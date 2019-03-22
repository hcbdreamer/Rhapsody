/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: DefaultComponent 
	Configuration 	: VSTest
	Model Element	: TestObjectClass
//!	Generated Date	: ��һ, 14, 1�� 2019  
	File Path	: E:\ѧϰ\�о�����������\��ս���̷���\���㽨ģ\2019.1.14\����\VSConnectionTest\VSConnectionTest\TestObjectClass.h
*********************************************************************/

#ifndef TestObjectClass_H
#define TestObjectClass_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "BaseClassPkg.h"
//## package BaseClassPkg

//## class TestObjectClass
class TestObjectClass {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTestObjectClass;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TestObjectClass();
    
    //## auto_generated
    ~TestObjectClass();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getCount() const;
    
    //## auto_generated
    void setCount(int p_count);
    
    ////    Attributes    ////

protected :

    int count;		//## attribute count
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTestObjectClass : virtual public AOMInstance {
    DECLARE_META(TestObjectClass, OMAnimatedTestObjectClass)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: E:\ѧϰ\�о�����������\��ս���̷���\���㽨ģ\2019.1.14\����\VSConnectionTest\VSConnectionTest\TestObjectClass.h
*********************************************************************/

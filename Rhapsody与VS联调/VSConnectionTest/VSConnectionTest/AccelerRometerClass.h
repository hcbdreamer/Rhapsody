/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: DefaultComponent 
	Configuration 	: VSTest
	Model Element	: AccelerRometerClass
//!	Generated Date	: 周一, 14, 1月 2019  
	File Path	: E:\学习\研究生课题任务\作战流程仿真\顶层建模\2019.1.14\测试\VSConnectionTest\VSConnectionTest\AccelerRometerClass.h
*********************************************************************/

#ifndef AccelerRometerClass_H
#define AccelerRometerClass_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "AccelerRometerPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class AccelerRometerClass
#include "TestObjectClass.h"
//## package AccelerRometerPkg

//## class AccelerRometerClass
class AccelerRometerClass : public OMReactive, public TestObjectClass {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAccelerRometerClass;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AccelerRometerClass(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~AccelerRometerClass();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpStatechart();
    
    ////    Framework operations    ////

public :

    //## statechart_method
    void rootStateEntDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_0TakeevSetCount();
    
    ////    Framework    ////
    
//#[ ignore
    AccelerRometerClass* concept;
    
    OMState* state_1;
    
    OMState* state_0;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAccelerRometerClass : public OMAnimatedTestObjectClass {
    DECLARE_REACTIVE_META(AccelerRometerClass, OMAnimatedAccelerRometerClass)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
class AccelerRometerClass_ROOT : public OMComponentState {
    ////    Constructors and destructors    ////
    
public :

    //## statechart_method
    AccelerRometerClass_ROOT(AccelerRometerClass* c, OMState* p);
    
    ////    Framework operations    ////
    
    //## statechart_method
    AOMInstance* getConcept() const;
    
    //## statechart_method
    virtual void entDef();
    
    ////    Framework    ////
    
    AccelerRometerClass* concept;
};

class AccelerRometerClass_state_1 : public OMLeafState {
    ////    Constructors and destructors    ////
    
public :

    //## statechart_method
    AccelerRometerClass_state_1(AccelerRometerClass* c, OMState* p, OMState* cmp);
    
    ////    Framework operations    ////
    
    //## statechart_method
    AOMInstance* getConcept() const;
    
    ////    Framework    ////
    
    AccelerRometerClass* concept;
};

class AccelerRometerClass_state_0 : public OMLeafState {
    ////    Constructors and destructors    ////
    
public :

    //## statechart_method
    AccelerRometerClass_state_0(AccelerRometerClass* c, OMState* p, OMState* cmp);
    
    ////    Framework operations    ////
    
    //## statechart_method
    AOMInstance* getConcept() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus handleEvent();
    
    ////    Framework    ////
    
    AccelerRometerClass* concept;
};
//#]

#endif
/*********************************************************************
	File Path	: E:\学习\研究生课题任务\作战流程仿真\顶层建模\2019.1.14\测试\VSConnectionTest\VSConnectionTest\AccelerRometerClass.h
*********************************************************************/

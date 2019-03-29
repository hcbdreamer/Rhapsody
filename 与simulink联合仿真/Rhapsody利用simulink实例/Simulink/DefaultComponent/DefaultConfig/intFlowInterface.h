/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: intFlowInterface
//!	Generated Date	: ÖÜËÄ, 22, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\intFlowInterface.h
*********************************************************************/

#ifndef intFlowInterface_H
#define intFlowInterface_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "FlowPortInterfaces.h"
//#[ ignore
//## package FlowPortInterfaces

//## ignore
class intFlowInterface {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    intFlowInterface();
    
    //## auto_generated
    virtual ~intFlowInterface() = 0;
    
    ////    Operations    ////
    
    //## operation SetValue(int,void *)
    virtual void SetValue(int data, void * pCaller = NULL) = 0;
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\intFlowInterface.h
*********************************************************************/

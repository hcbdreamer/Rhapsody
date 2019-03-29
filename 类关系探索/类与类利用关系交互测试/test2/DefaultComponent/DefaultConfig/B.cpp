/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: B
//!	Generated Date	: ÷‹ŒÂ, 30, 3‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\B.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "B.h"
//#[ ignore
#define Default_B_B_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class B
B::B() {
    NOTIFY_CONSTRUCTOR(B, B(), 0, Default_B_B_SERIALIZE);
}

B::~B() {
    NOTIFY_DESTRUCTOR(~B, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(B, Default, Default, false, OMAnimatedB)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\B.cpp
*********************************************************************/

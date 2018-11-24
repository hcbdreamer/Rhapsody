/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: Release
	Model Element	: Display
//!	Generated Date	: ÖÜËÄ, 16, 11ÔÂ 2017  
	File Path	: DefaultComponent\Release\Display.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Display.h"
//#[ ignore
#define Default_Display_showTime_SERIALIZE \
    aomsmethod->addAttribute("m", x2String(m));\
    aomsmethod->addAttribute("s", x2String(s));
#define Default_Display_Display_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Display
Display::Display() {
    NOTIFY_CONSTRUCTOR(Display, Display(), 0, Default_Display_Display_SERIALIZE);
}

Display::~Display() {
    NOTIFY_DESTRUCTOR(~Display, true);
}

void Display::showTime(int m, int s) {
    NOTIFY_OPERATION(showTime, showTime(int,int), 2, Default_Display_showTime_SERIALIZE);
    //#[ operation showTime(int,int)
    std::cout<<m<<":"<<s<<std::endl;
    //#]
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Display, Default, Default, false, OMAnimatedDisplay)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Release\Display.cpp
*********************************************************************/

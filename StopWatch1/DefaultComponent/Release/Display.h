/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: Release
	Model Element	: Display
//!	Generated Date	: ÖÜËÄ, 16, 11ÔÂ 2017  
	File Path	: DefaultComponent\Release\Display.h
*********************************************************************/

#ifndef Display_H
#define Display_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Display
class Display {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDisplay;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Display();
    
    //## auto_generated
    ~Display();
    
    ////    Operations    ////
    
    //## operation showTime(int,int)
    void showTime(int m, int s);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDisplay : virtual public AOMInstance {
    DECLARE_META(Display, OMAnimatedDisplay)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Release\Display.h
*********************************************************************/

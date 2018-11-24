/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: IDisplay
//!	Generated Date	: ÷‹ŒÂ, 24, 11‘¬ 2017  
	File Path	: TesterPrototype\Debug\IDisplay.h
*********************************************************************/

#ifndef IDisplay_H
#define IDisplay_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "InterfacePkg.h"
//## package InterfacePkg

//## class IDisplay
class IDisplay {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIDisplay;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IDisplay();
    
    //## auto_generated
    virtual ~IDisplay() = 0;
    
    ////    Operations    ////
    
    //## operation show(char*)
    virtual void show(char* aMsg) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIDisplay : virtual public AOMInstance {
    DECLARE_META(IDisplay, OMAnimatedIDisplay)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\IDisplay.h
*********************************************************************/

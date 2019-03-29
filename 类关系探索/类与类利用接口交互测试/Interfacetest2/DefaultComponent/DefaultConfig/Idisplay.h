/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Idisplay
//!	Generated Date	: ÷‹“ª, 22, 1‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\Idisplay.h
*********************************************************************/

#ifndef Idisplay_H
#define Idisplay_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "InterfacePkg.h"
//## package InterfacePkg

//## class Idisplay
class Idisplay {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIdisplay;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Idisplay();
    
    //## auto_generated
    virtual ~Idisplay() = 0;
    
    ////    Operations    ////
    
    //## operation show(int)
    virtual void show(int aMsg) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIdisplay : virtual public AOMInstance {
    DECLARE_META(Idisplay, OMAnimatedIdisplay)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Idisplay.h
*********************************************************************/

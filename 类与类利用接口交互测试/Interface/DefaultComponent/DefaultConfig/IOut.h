/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IOut
//!	Generated Date	: ÷‹ŒÂ, 19, 1‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\IOut.h
*********************************************************************/

#ifndef IOut_H
#define IOut_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "InterfacePkg.h"
//## package InterfacePkg

//## class IOut
class IOut {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIOut;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IOut();
    
    //## auto_generated
    virtual ~IOut() = 0;
    
    ////    Operations    ////
    
    //## operation show(char*)
    virtual void show(char* aMsg) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIOut : virtual public AOMInstance {
    DECLARE_META(IOut, OMAnimatedIOut)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IOut.h
*********************************************************************/

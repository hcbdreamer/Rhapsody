/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: Iprinter
//!	Generated Date	: ����, 23, 11�� 2017  
	File Path	: TesterPrototype\Debug\Iprinter.h
*********************************************************************/

#ifndef Iprinter_H
#define Iprinter_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "InterfacePkg.h"
//## package InterfacePkg

//## class Iprinter
class Iprinter {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIprinter;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Iprinter();
    
    //## auto_generated
    virtual ~Iprinter();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIprinter : virtual public AOMInstance {
    DECLARE_META(Iprinter, OMAnimatedIprinter)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\Iprinter.h
*********************************************************************/

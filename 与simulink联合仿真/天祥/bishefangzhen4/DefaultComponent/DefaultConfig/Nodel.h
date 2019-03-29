/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Nodel
//!	Generated Date	: ÖÜËÄ, 19, 4ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Nodel.h
*********************************************************************/

#ifndef Nodel_H
#define Nodel_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## class Nodel
#include <OMSimulinkBlock.h>
//## package Default

//## class Nodel
class Nodel : public OMSimulinkBlock {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNodel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    ////    Attributes    ////
    
    ////    Relations and components    ////
    
    //## auto_generated
    Nodel();
    
    //## auto_generated
    ~Nodel();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNodel : virtual public AOMInstance {
    DECLARE_META(Nodel, OMAnimatedNodel)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Nodel.h
*********************************************************************/

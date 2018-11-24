/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Eva
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Eva.h
*********************************************************************/

#ifndef Eva_H
#define Eva_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsAdam
class Adam;

//## package Default

//## class Eva
class Eva {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEva;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Eva();
    
    //## auto_generated
    ~Eva();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Adam* getItsAdam() const;
    
    //## auto_generated
    void setItsAdam(Adam* p_Adam);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Adam* itsAdam;		//## link itsAdam
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAdam(Adam* p_Adam);
    
    //## auto_generated
    void _setItsAdam(Adam* p_Adam);
    
    //## auto_generated
    void _clearItsAdam();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEva : virtual public AOMInstance {
    DECLARE_META(Eva, OMAnimatedEva)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Eva.h
*********************************************************************/

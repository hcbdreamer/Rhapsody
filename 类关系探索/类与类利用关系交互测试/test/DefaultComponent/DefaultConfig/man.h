/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: man
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\man.h
*********************************************************************/

#ifndef man_H
#define man_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsWoman
class woman;

//## package Default

//## class man
class man {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedman;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    man();
    
    //## auto_generated
    ~man();
    
    ////    Additional operations    ////
    
    //## auto_generated
    woman* getItsWoman() const;
    
    //## auto_generated
    void setItsWoman(woman* p_woman);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    woman* itsWoman;		//## link itsWoman
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsWoman(woman* p_woman);
    
    //## auto_generated
    void _setItsWoman(woman* p_woman);
    
    //## auto_generated
    void _clearItsWoman();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedman : virtual public AOMInstance {
    DECLARE_META(man, OMAnimatedman)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\man.h
*********************************************************************/

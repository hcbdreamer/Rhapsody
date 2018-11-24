/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: woman
//!	Generated Date	: ÷‹ŒÂ, 26, 1‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\woman.h
*********************************************************************/

#ifndef woman_H
#define woman_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsMan
class man;

//## package Default

//## class woman
class woman {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedwoman;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    woman();
    
    //## auto_generated
    ~woman();
    
    ////    Additional operations    ////
    
    //## auto_generated
    man* getItsMan() const;
    
    //## auto_generated
    void setItsMan(man* p_man);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    man* itsMan;		//## link itsMan
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsMan(man* p_man);
    
    //## auto_generated
    void _setItsMan(man* p_man);
    
    //## auto_generated
    void _clearItsMan();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedwoman : virtual public AOMInstance {
    DECLARE_META(woman, OMAnimatedwoman)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\woman.h
*********************************************************************/

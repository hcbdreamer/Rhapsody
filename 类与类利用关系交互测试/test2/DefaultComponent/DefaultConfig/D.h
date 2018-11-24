/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: D
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\D.h
*********************************************************************/

#ifndef D_H
#define D_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsC
class C;

//## package Default

//## class D
class D {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedD;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    D();
    
    //## auto_generated
    ~D();
    
    ////    Operations    ////
    
    //## operation transB(int)
    int transB(int Y);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getP2() const;
    
    //## auto_generated
    void setP2(int p_p2);
    
    //## auto_generated
    C* getItsC() const;
    
    //## auto_generated
    void setItsC(C* p_C);
    
    int p2;		//## attribute p2

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    ////    Relations and components    ////
    
    C* itsC;		//## link itsC
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsC(C* p_C);
    
    //## auto_generated
    void _setItsC(C* p_C);
    
    //## auto_generated
    void _clearItsC();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedD : virtual public AOMInstance {
    DECLARE_META(D, OMAnimatedD)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\D.h
*********************************************************************/

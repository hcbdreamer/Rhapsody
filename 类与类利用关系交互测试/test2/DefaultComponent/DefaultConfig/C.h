/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: C
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\C.h
*********************************************************************/

#ifndef C_H
#define C_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsD
class D;

//## package Default

//## class C
class C {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    C();
    
    //## auto_generated
    ~C();
    
    ////    Operations    ////
    
    //## operation transA(int)
    int transA(int x);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getP1() const;
    
    //## auto_generated
    void setP1(int p_p1);
    
    //## auto_generated
    D* getItsD() const;
    
    int p1;		//## attribute p1
    
    //## auto_generated
    void setItsD(D* p_D);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    ////    Relations and components    ////
    
    D* itsD;		//## link itsD
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsD(D* p_D);
    
    //## auto_generated
    void _setItsD(D* p_D);
    
    //## auto_generated
    void _clearItsD();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedC : virtual public AOMInstance {
    DECLARE_META(C, OMAnimatedC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\C.h
*********************************************************************/

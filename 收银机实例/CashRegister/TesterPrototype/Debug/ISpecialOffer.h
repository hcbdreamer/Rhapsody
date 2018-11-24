/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: ISpecialOffer
//!	Generated Date	: ÖÜËÄ, 30, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\ISpecialOffer.h
*********************************************************************/

#ifndef ISpecialOffer_H
#define ISpecialOffer_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CashRegisterPkg.h"
//## package CashRegisterPkg

//## class ISpecialOffer
class ISpecialOffer {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedISpecialOffer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ISpecialOffer();
    
    //## auto_generated
    virtual ~ISpecialOffer() = 0;
    
    ////    Operations    ////
    
    //## operation getSpecialPrice(int,int)
    virtual int getSpecialPrice(int unitPrice, int quantify) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedISpecialOffer : virtual public AOMInstance {
    DECLARE_META(ISpecialOffer, OMAnimatedISpecialOffer)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\ISpecialOffer.h
*********************************************************************/

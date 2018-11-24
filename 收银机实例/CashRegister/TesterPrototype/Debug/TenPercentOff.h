/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: TenPercentOff
//!	Generated Date	: ÖÜËÄ, 30, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\TenPercentOff.h
*********************************************************************/

#ifndef TenPercentOff_H
#define TenPercentOff_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CashRegisterPkg.h"
//## class TenPercentOff
#include "ISpecialOffer.h"
//## package CashRegisterPkg

//## class TenPercentOff
class TenPercentOff : public ISpecialOffer {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTenPercentOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TenPercentOff();
    
    //## auto_generated
    virtual ~TenPercentOff();
    
    ////    Operations    ////
    
    //## operation getSpecialPrice(int,int)
    virtual int getSpecialPrice(int unitPrice, int quantify);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTenPercentOff : public OMAnimatedISpecialOffer {
    DECLARE_META(TenPercentOff, OMAnimatedTenPercentOff)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\TenPercentOff.h
*********************************************************************/

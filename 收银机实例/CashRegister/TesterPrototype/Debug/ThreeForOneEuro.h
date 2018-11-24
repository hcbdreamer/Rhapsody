/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: ThreeForOneEuro
//!	Generated Date	: ÖÜËÄ, 30, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\ThreeForOneEuro.h
*********************************************************************/

#ifndef ThreeForOneEuro_H
#define ThreeForOneEuro_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CashRegisterPkg.h"
//## class ThreeForOneEuro
#include "ISpecialOffer.h"
//## package CashRegisterPkg

//## class ThreeForOneEuro
class ThreeForOneEuro : public ISpecialOffer {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedThreeForOneEuro;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ThreeForOneEuro();
    
    //## auto_generated
    virtual ~ThreeForOneEuro();
    
    ////    Operations    ////
    
    //## operation getSpecialPrice(int,int)
    virtual int getSpecialPrice(int unitPrice, int quantify);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedThreeForOneEuro : public OMAnimatedISpecialOffer {
    DECLARE_META(ThreeForOneEuro, OMAnimatedThreeForOneEuro)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\ThreeForOneEuro.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: BuyOneGetOneFree
//!	Generated Date	: ÷‹ŒÂ, 1, 12‘¬ 2017  
	File Path	: TesterPrototype\Debug\BuyOneGetOneFree.h
*********************************************************************/

#ifndef BuyOneGetOneFree_H
#define BuyOneGetOneFree_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CashRegisterPkg.h"
//## class BuyOneGetOneFree
#include "ISpecialOffer.h"
//## package CashRegisterPkg

//## class BuyOneGetOneFree
class BuyOneGetOneFree : public ISpecialOffer {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBuyOneGetOneFree;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    BuyOneGetOneFree();
    
    //## auto_generated
    virtual ~BuyOneGetOneFree();
    
    ////    Operations    ////
    
    //## operation getSpecialPrice(int,int)
    virtual int getSpecialPrice(int unitPrice, int quantify);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBuyOneGetOneFree : public OMAnimatedISpecialOffer {
    DECLARE_META(BuyOneGetOneFree, OMAnimatedBuyOneGetOneFree)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\BuyOneGetOneFree.h
*********************************************************************/

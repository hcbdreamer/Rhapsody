/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: CountedProduct
//!	Generated Date	: ÖÜËÄ, 30, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\CountedProduct.h
*********************************************************************/

#ifndef CountedProduct_H
#define CountedProduct_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CashRegisterPkg.h"
//## class CountedProduct
#include "Product.h"
//## auto_generated
class ISpecialOffer;

//## package CashRegisterPkg

//## class CountedProduct
class CountedProduct : public Product {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCountedProduct;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation CountedProduct(Product)
    CountedProduct(const Product& aProduct);
    
    //## auto_generated
    CountedProduct();
    
    //## auto_generated
    ~CountedProduct();
    
    ////    Operations    ////
    
    //## operation getPrice()
    int getPrice();
    
    //## operation increment()
    void increment();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getCount() const;
    
    //## auto_generated
    void setCount(int p_count);
    
    ////    Attributes    ////

protected :

    int count;		//## attribute count
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCountedProduct : public OMAnimatedProduct {
    DECLARE_META(CountedProduct, OMAnimatedCountedProduct)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\CountedProduct.h
*********************************************************************/

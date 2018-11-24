/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: CountProduct
//!	Generated Date	: ÖÜËÄ, 30, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\CountProduct.h
*********************************************************************/

#ifndef CountProduct_H
#define CountProduct_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CashRegisterPkg.h"
//## class CountProduct
#include "Product.h"
//## package CashRegisterPkg

//## class CountProduct
class CountProduct : public Product {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCountProduct;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation CountProduct(Product)
    CountProduct(const Product& aProduct);
    
    //## auto_generated
    CountProduct();
    
    //## auto_generated
    ~CountProduct();
    
    ////    Operations    ////
    
    //## operation getPrice()
    void getPrice();
    
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
class OMAnimatedCountProduct : public OMAnimatedProduct {
    DECLARE_META(CountProduct, OMAnimatedCountProduct)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\CountProduct.h
*********************************************************************/

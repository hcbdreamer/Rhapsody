/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: Product
//!	Generated Date	: ÖÜËÄ, 6, 12ÔÂ 2018  
	File Path	: TesterPrototype\Debug\Product.h
*********************************************************************/

#ifndef Product_H
#define Product_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CashRegisterPkg.h"
//## package CashRegisterPkg

//## class Product
class Product {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedProduct;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation Product(int,char*,int)
    Product(int aBarcode, char* aName, int aUnitPrice);
    
    //## operation Product(Product*)
    Product(Product* aProduct);

protected :

    //## operation Product()
    Product();

public :

    //## auto_generated
    ~Product();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getBarcode() const;
    
    //## auto_generated
    void setBarcode(int p_barcode);
    
    //## auto_generated
    const char* getName() const;
    
    //## auto_generated
    int getUnitPrice() const;
    
    //## auto_generated
    void setUnitPrice(int p_unitPrice);
    
    ////    Attributes    ////

protected :

    int barcode;		//## attribute barcode
    
    const char* name;		//## attribute name
    
    int unitPrice;		//## attribute unitPrice
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedProduct : virtual public AOMInstance {
    DECLARE_META(Product, OMAnimatedProduct)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\Product.h
*********************************************************************/

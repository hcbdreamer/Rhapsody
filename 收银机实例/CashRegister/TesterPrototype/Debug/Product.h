/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: Product
//!	Generated Date	: ÷‹ŒÂ, 1, 12‘¬ 2017  
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
//## operation Product(int,char*,int,ISpecialOffer*)
class ISpecialOffer;

//## package CashRegisterPkg

//## class Product
class Product {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedProduct;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation Product(int,char*,int,ISpecialOffer*)
    Product(int aBarcode, char* aName, int aUnitPrice, ISpecialOffer* aSpecialOffer = NULL);
    
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
    
    //## auto_generated
    ISpecialOffer* getItsSpecialOffer() const;
    
    //## auto_generated
    void setItsSpecialOffer(ISpecialOffer* p_ISpecialOffer);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int barcode;		//## attribute barcode
    
    const char* name;		//## attribute name
    
    int unitPrice;		//## attribute unitPrice
    
    ////    Relations and components    ////
    
    ISpecialOffer* itsSpecialOffer;		//## link itsSpecialOffer
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedProduct : virtual public AOMInstance {
    DECLARE_META(Product, OMAnimatedProduct)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\Product.h
*********************************************************************/

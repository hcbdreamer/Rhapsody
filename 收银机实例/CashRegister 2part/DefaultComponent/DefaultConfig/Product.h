/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Product
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\Product.h
*********************************************************************/

#ifndef Product_H
#define Product_H

//## auto_generated
#include <oxf\oxf.h>
//## package CashRegisterPkg

//## class Product
class Product {
    ////    Constructors and destructors    ////
    
public :

    //## operation Product(int,char*,int)
    Product(int aBarcode, char* aName, int aUnitPrice);

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Product.h
*********************************************************************/

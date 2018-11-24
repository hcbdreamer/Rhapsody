/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ProductDatabase
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\ProductDatabase.h
*********************************************************************/

#ifndef Productdatabase_H
#define Productdatabase_H

#ifndef Productdatabase_H
//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <oxf\ommap.h>
//## auto_generated
#include "CashRegisterPkg.h"
//## link itsProduct
class Product;

//## package CashRegisterPkg

//## class Productdatabase
class Productdatabase {
    ////    Constructors and destructors    ////
    
public :

    //## operation Productdatabase()
    Productdatabase();
    
    //## auto_generated
    ~Productdatabase();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<Product*> getItsProduct() const;
    
    //## auto_generated
    void clearItsProduct();
    
    //## auto_generated
    void removeItsProduct(Product* p_Product);
    
    //## auto_generated
    Product* getItsProduct(int key) const;
    
    //## auto_generated
    void addItsProduct(int key, Product* p_Product);
    
    //## auto_generated
    void removeItsProduct(int key);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    OMMap<int, Product*> itsProduct;		//## link itsProduct
};

#endif
//## package CashRegisterPkg

//## class ProductDatabase
class ProductDatabase {
    ////    Constructors and destructors    ////
    
public :

    //## operation ProductDatabase()
    ProductDatabase();
    
    //## auto_generated
    ~ProductDatabase();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<Product*> getItsProduct() const;
    
    //## auto_generated
    void clearItsProduct();
    
    //## auto_generated
    void removeItsProduct(Product* p_Product);
    
    //## auto_generated
    Product* getItsProduct(int key) const;
    
    //## auto_generated
    void addItsProduct(int key, Product* p_Product);
    
    //## auto_generated
    void removeItsProduct(int key);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    OMMap<int, Product*> itsProduct;		//## link itsProduct
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ProductDatabase.h
*********************************************************************/

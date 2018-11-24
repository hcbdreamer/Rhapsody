/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: ProductDatabase
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\ProductDatabase.h
*********************************************************************/

#ifndef ProductDatabase_H
#define ProductDatabase_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CashRegisterPkg.h"
//## auto_generated
#include <oxf\ommap.h>
//## link itsProduct
class Product;

//## package CashRegisterPkg

//## class ProductDatabase
class ProductDatabase {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedProductDatabase;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedProductDatabase : virtual public AOMInstance {
    DECLARE_META(ProductDatabase, OMAnimatedProductDatabase)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\ProductDatabase.h
*********************************************************************/

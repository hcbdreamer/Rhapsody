/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ProductDatabase
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\ProductDatabase.cpp
*********************************************************************/

//## auto_generated
#include "Productdatabase.h"
//## link itsProduct
#include "Product.h"
//## package CashRegisterPkg

//## class Productdatabase
Productdatabase::Productdatabase() : itsProduct() {
    //#[ operation Productdatabase()
    addItsProduct(12344,new Product(12344,"Coconuts",180));
    addItsProduct(12345,new Product(12345,"Lychees",250));
    addItsProduct(12346,new Product(12346,"Kiwis",250));           
    addItsProduct(12347,new Product(12347,"Lychees",250));
    addItsProduct(12348,new Product(12348,"Pommegranates",199));
    addItsProduct(12349,new Product(12349,"Watermelons",350));
    //#]
}

Productdatabase::~Productdatabase() {
    cleanUpRelations();
}

OMIterator<Product*> Productdatabase::getItsProduct() const {
    OMIterator<Product*> iter(itsProduct);
    return iter;
}

void Productdatabase::clearItsProduct() {
    itsProduct.removeAll();
}

void Productdatabase::removeItsProduct(Product* p_Product) {
    itsProduct.remove(p_Product);
}

Product* Productdatabase::getItsProduct(int key) const {
    return itsProduct.getKey(key);
}

void Productdatabase::addItsProduct(int key, Product* p_Product) {
    itsProduct.add(key,p_Product);
}

void Productdatabase::removeItsProduct(int key) {
    itsProduct.remove(key);
}

void Productdatabase::cleanUpRelations() {
    {
        itsProduct.removeAll();
    }
}

//## package CashRegisterPkg

//## class ProductDatabase
ProductDatabase::ProductDatabase() : itsProduct() {
    //#[ operation ProductDatabase()
    addItsProduct(12344,new Product(12344,"Coconuts",180));
    addItsProduct(12345,new Product(12345,"Lychees",250));
    addItsProduct(12346,new Product(12346,"Kiwis",250));           
    addItsProduct(12347,new Product(12347,"Lychees",250));
    addItsProduct(12348,new Product(12348,"Pommegranates",199));
    addItsProduct(12349,new Product(12349,"Watermelons",350));
    //#]
}

ProductDatabase::~ProductDatabase() {
    cleanUpRelations();
}

OMIterator<Product*> ProductDatabase::getItsProduct() const {
    OMIterator<Product*> iter(itsProduct);
    return iter;
}

void ProductDatabase::clearItsProduct() {
    itsProduct.removeAll();
}

void ProductDatabase::removeItsProduct(Product* p_Product) {
    itsProduct.remove(p_Product);
}

Product* ProductDatabase::getItsProduct(int key) const {
    return itsProduct.getKey(key);
}

void ProductDatabase::addItsProduct(int key, Product* p_Product) {
    itsProduct.add(key,p_Product);
}

void ProductDatabase::removeItsProduct(int key) {
    itsProduct.remove(key);
}

void ProductDatabase::cleanUpRelations() {
    {
        itsProduct.removeAll();
    }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ProductDatabase.cpp
*********************************************************************/

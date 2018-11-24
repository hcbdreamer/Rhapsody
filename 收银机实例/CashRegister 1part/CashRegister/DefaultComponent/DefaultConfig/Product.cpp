/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Product
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: DefaultComponent\DefaultConfig\Product.cpp
*********************************************************************/

//## auto_generated
#include "Product.h"
//## package CashRegisterPkg

//## class Product
Product::Product(int aBarcode, char* aName, int aUnitPrice) {
    //#[ operation Product(int,char*,int)
    //#]
}

Product::Product() {
    //#[ operation Product()
    //#]
}

Product::~Product() {
}

int Product::getBarcode() const {
    return barcode;
}

void Product::setBarcode(int p_barcode) {
    barcode = p_barcode;
}

const char* Product::getName() const {
    return name;
}

int Product::getUnitPrice() const {
    return unitPrice;
}

void Product::setUnitPrice(int p_unitPrice) {
    unitPrice = p_unitPrice;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Product.cpp
*********************************************************************/

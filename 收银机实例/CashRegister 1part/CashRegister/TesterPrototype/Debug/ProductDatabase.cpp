/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: ProductDatabase
//!	Generated Date	: ÷‹ŒÂ, 24, 11‘¬ 2017  
	File Path	: TesterPrototype\Debug\ProductDatabase.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ProductDatabase.h"
//## link itsProduct
#include "Product.h"
//#[ ignore
#define CashRegisterPkg_ProductDatabase_ProductDatabase_SERIALIZE OM_NO_OP
//#]

//## package CashRegisterPkg

//## class ProductDatabase
ProductDatabase::ProductDatabase() : itsProduct() {
    NOTIFY_CONSTRUCTOR(ProductDatabase, ProductDatabase(), 0, CashRegisterPkg_ProductDatabase_ProductDatabase_SERIALIZE);
    //#[ operation ProductDatabase()
    std::cout<<"HH"<<std::endl;
    addItsProduct(12344,new Product(12344,"Coconuts",180));
    addItsProduct(12345,new Product(12345,"Lychees",250));
    addItsProduct(12346,new Product(12346,"Kiwis",120));
    addItsProduct(12347,new Product(12347,"Pears",100));
    addItsProduct(12348,new Product(12348,"Pommegranates",199));
    addItsProduct(12349,new Product(12349,"Watermelons",350));
    //#]
}

ProductDatabase::~ProductDatabase() {
    NOTIFY_DESTRUCTOR(~ProductDatabase, true);
    cleanUpRelations();
}

OMIterator<Product*> ProductDatabase::getItsProduct() const {
    OMIterator<Product*> iter(itsProduct);
    return iter;
}

void ProductDatabase::clearItsProduct() {
    NOTIFY_RELATION_CLEARED("itsProduct");
    itsProduct.removeAll();
}

void ProductDatabase::removeItsProduct(Product* p_Product) {
    NOTIFY_RELATION_ITEM_REMOVED("itsProduct", p_Product);
    itsProduct.remove(p_Product);
}

Product* ProductDatabase::getItsProduct(int key) const {
    return itsProduct.getKey(key);
}

void ProductDatabase::addItsProduct(int key, Product* p_Product) {
    if(p_Product != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsProduct", p_Product, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsProduct");
        }
    itsProduct.add(key,p_Product);
}

void ProductDatabase::removeItsProduct(int key) {
    Product* p_Product = getItsProduct(key);
    NOTIFY_RELATION_ITEM_REMOVED("itsProduct", p_Product);
    itsProduct.remove(key);
}

void ProductDatabase::cleanUpRelations() {
    {
        itsProduct.removeAll();
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedProductDatabase::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsProduct", false, false);
    {
        OMIterator<Product*> iter(myReal->itsProduct);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(ProductDatabase, CashRegisterPkg, CashRegisterPkg, false, OMAnimatedProductDatabase)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TesterPrototype\Debug\ProductDatabase.cpp
*********************************************************************/

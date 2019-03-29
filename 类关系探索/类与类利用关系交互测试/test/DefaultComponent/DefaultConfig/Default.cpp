/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## classInstance Adam
#include "man.h"
//## classInstance Eva
#include "woman.h"
//## auto_generated
#include "Builder.h"
//## package Default


//## classInstance Adam
man Adam;

//## classInstance Eva
woman Eva;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations() {
    Adam.setItsWoman(&Eva);
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&Adam, man, "Adam", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&Eva, woman, "Eva", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

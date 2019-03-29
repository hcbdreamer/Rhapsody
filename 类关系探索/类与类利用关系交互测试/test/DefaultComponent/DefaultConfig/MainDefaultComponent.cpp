/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: ÷‹ŒÂ, 26, 1‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Default.h"
//## auto_generated
#include "Builder.h"
DefaultComponent::DefaultComponent() {
    Default_initRelations();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Builder * p_Builder;
            DefaultComponent initializer_DefaultComponent;
            p_Builder = new Builder;
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
            delete p_Builder;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

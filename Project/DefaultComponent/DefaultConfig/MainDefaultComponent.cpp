/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: ÖÜÁù, 5, 5ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Man.h"
//## auto_generated
#include "Woman.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Man * p_Man;
            Woman * p_Woman;
            p_Man = new Man;
            p_Man->startBehavior();
            p_Woman = new Woman;
            //#[ configuration DefaultComponent::DefaultConfig  
            p_Man->setItsWoman(p_Woman);
            //#]
            OXF::start();
            delete p_Man;
            delete p_Woman;
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

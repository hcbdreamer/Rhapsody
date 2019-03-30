/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: ÷‹»’, 28, 1‘¬ 2018  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Hello.h" 
#include "QApplication"
int main(int argc, char* argv[]) {
    int status = 0;
    QApplication app(argc, argv);
    if(OXF::initialize())
        {
            Hello * p_Hello;
            p_Hello = new Hello;
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            app.exec();
            
            delete p_Hello;
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

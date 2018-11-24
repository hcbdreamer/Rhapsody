/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: Debug
	Model Element	: Debug
//!	Generated Date	: ÖÜËÄ, 16, 11ÔÂ 2017  
	File Path	: DefaultComponent\Debug\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Timer.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Timer * p_Timer;
            p_Timer = new Timer;
            p_Timer->startBehavior();
            //#[ configuration DefaultComponent::Debug 
            //#]
            OXF::start();
            delete p_Timer;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\Debug\MainDefaultComponent.cpp
*********************************************************************/

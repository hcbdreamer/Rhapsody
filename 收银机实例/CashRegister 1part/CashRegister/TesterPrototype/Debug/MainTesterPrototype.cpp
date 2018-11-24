/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: Debug
//!	Generated Date	: ÖÜËÄ, 23, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\MainTesterPrototype.cpp
*********************************************************************/

//## auto_generated
#include "MainTesterPrototype.h"
//## auto_generated
#include "TesterBuilder.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            TesterBuilder * p_TesterBuilder;
            p_TesterBuilder = new TesterBuilder;
            //#[ configuration TesterPrototype::Debug 
            //#]
            OXF::start();
            delete p_TesterBuilder;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: TesterPrototype\Debug\MainTesterPrototype.cpp
*********************************************************************/

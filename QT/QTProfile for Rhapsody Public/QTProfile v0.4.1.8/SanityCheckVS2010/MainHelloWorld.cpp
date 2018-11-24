/********************************************************************
	Rhapsody	: 7.6.1 
	Login		: Paolo
	Component	: HelloWorld 
	Configuration 	: Windows
	Model Element	: Windows
//!	Generated Date	: Thu, 14, Jun 2012  
	File Path	: HelloWorld\Windows\MainHelloWorld.cpp
*********************************************************************/

#include <QApplication>
//## auto_generated
#include "MainHelloWorld.h"
//## auto_generated
#include "Hello.h"
int main(int argc, char* argv[]) {
    int status = 0;
    QApplication app(argc, argv);
    Hello * p_Hello;
    p_Hello = new Hello;
    app.exec();

    delete p_Hello;
    status = 0;
    return status;
}

/*********************************************************************
	File Path	: HelloWorld\Windows\MainHelloWorld.cpp
*********************************************************************/

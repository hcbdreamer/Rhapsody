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
#include "Receiver.h"
//## auto_generated
#include "Sender.h" 
#include <QApplication.h>

int main(int argc, char* argv[]) {
    int status = 0;
    QApplication app(argc, argv);
    if(OXF::initialize())
        {
            Receiver * p_Receiver;
            Sender * p_Sender;
            p_Receiver = new Receiver;
            p_Sender = new Sender;
            //#[ configuration DefaultComponent::DefaultConfig 
              Sender s;
              Receiver r;
              QObject::connect(&s,SIGNAL(sendValue(int)),&r,SLOT(receiveValue(int)));
              
              for(int i=0;i<10;i++){
              s.sendValue(i+1);
              }
            //#]
            app.exec();
            
            delete p_Receiver;
            delete p_Sender;
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

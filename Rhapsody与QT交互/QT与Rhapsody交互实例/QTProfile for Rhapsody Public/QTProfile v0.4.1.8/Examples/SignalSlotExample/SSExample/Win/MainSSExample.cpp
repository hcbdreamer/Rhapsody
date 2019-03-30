/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: SSExample 
	Configuration 	: Win
	Model Element	: Win
//!	Generated Date	: ÷‹»’, 28, 1‘¬ 2018  
	File Path	: SSExample\Win\MainSSExample.cpp
*********************************************************************/

//## auto_generated
#include "MainSSExample.h"
#include "QApplication.h"
int main(int argc, char* argv[]) {
    int status = 0;
    QApplication app(argc, argv);
    if(OXF::initialize())
        {
            //#[ configuration SSExample::Win 
            Sender s;
            Receiver r;
            QObject::connect(&s, SIGNAL(sendValue(int)), &r, SLOT(receiveValue(int)));
            
            for(int i=0; i<10; i++) s.sendValue(i+1);
            //#]
            app.exec();
            
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: SSExample\Win\MainSSExample.cpp
*********************************************************************/

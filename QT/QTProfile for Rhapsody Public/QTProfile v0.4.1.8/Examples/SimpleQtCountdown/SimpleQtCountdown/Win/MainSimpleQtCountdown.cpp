/********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: SimpleQtCountdown 
	Configuration 	: Win
	Model Element	: Win
//!	Generated Date	: ÖÜÒ», 29, 1ÔÂ 2018  
	File Path	: SimpleQtCountdown\Win\MainSimpleQtCountdown.cpp
*********************************************************************/

//## auto_generated
#include "MainSimpleQtCountdown.h"
//## auto_generated
#include "MyCountdown.h"
int main(int argc, char* argv[]) {
    int status = 0;
    QApplication app(argc, argv);
    if(OXF::initialize())
        {
            MyCountdown * p_MyCountdown;
            p_MyCountdown = new MyCountdown;
            p_MyCountdown->startBehavior();
            //#[ configuration SimpleQtCountdown::Win 
            //#]
            app.exec();
            
            delete p_MyCountdown;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: SimpleQtCountdown\Win\MainSimpleQtCountdown.cpp
*********************************************************************/

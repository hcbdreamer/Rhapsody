/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: DefaultComponent 
	Configuration 	: VSTest
	Model Element	: VSTest
//!	Generated Date	: ��һ, 14, 1�� 2019  
	File Path	: E:\ѧϰ\�о�����������\��ս���̷���\���㽨ģ\2019.1.14\����\VSConnectionTest\VSConnectionTest\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "AccelerRometerClass.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            AccelerRometerClass * p_AccelerRometerClass;
            p_AccelerRometerClass = new AccelerRometerClass;
            p_AccelerRometerClass->startBehavior();
            //#[ configuration DefaultComponent::VSTest 
            //#]
            OXF::start();
            delete p_AccelerRometerClass;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: E:\ѧϰ\�о�����������\��ս���̷���\���㽨ģ\2019.1.14\����\VSConnectionTest\VSConnectionTest\MainDefaultComponent.cpp
*********************************************************************/

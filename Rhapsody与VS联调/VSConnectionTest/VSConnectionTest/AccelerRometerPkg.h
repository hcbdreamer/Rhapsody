/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: 15636
	Component	: DefaultComponent 
	Configuration 	: VSTest
	Model Element	: AccelerRometerPkg
//!	Generated Date	: ��һ, 14, 1�� 2019  
	File Path	: E:\ѧϰ\�о�����������\��ս���̷���\���㽨ģ\2019.1.14\����\VSConnectionTest\VSConnectionTest\AccelerRometerPkg.h
*********************************************************************/

#ifndef AccelerRometerPkg_H
#define AccelerRometerPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class AccelerRometerClass;

//#[ ignore
#define evSetCount_AccelerRometerPkg_id 10801
//#]

//## package AccelerRometerPkg



//## event evSetCount()
class evSetCount : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSetCount;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSetCount();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSetCount : virtual public AOMEvent {
    DECLARE_META_EVENT(evSetCount)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: E:\ѧϰ\�о�����������\��ս���̷���\���㽨ģ\2019.1.14\����\VSConnectionTest\VSConnectionTest\AccelerRometerPkg.h
*********************************************************************/

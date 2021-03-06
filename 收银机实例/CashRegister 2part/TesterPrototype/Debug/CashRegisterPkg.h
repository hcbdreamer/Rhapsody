/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: CashRegisterPkg
//!	Generated Date	: ����, 24, 11�� 2017  
	File Path	: TesterPrototype\Debug\CashRegisterPkg.h
*********************************************************************/

#ifndef CashRegisterPkg_H
#define CashRegisterPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class CashRegister;

//## auto_generated
class Product;

//## auto_generated
class ProductDatabase;

//#[ ignore
#define evStart_CashRegisterPkg_id 1401

#define evBarcode_CashRegisterPkg_id 1402

#define evEnd_CashRegisterPkg_id 1403

#define evCancle_CashRegisterPkg_id 1404

#define evCancel_CashRegisterPkg_id 1405
//#]

//## package CashRegisterPkg


//## attribute Productdatabase_H
#define Productdatabase_H

//## event evStart()
class evStart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStart : virtual public AOMEvent {
    DECLARE_META_EVENT(evStart)
};
//#]
#endif // _OMINSTRUMENT

//## event evBarcode(int)
class evBarcode : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevBarcode;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evBarcode();
    
    //## auto_generated
    evBarcode(int p_aCode);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    int aCode;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevBarcode : virtual public AOMEvent {
    DECLARE_META_EVENT(evBarcode)
};
//#]
#endif // _OMINSTRUMENT

//## event evEnd()
class evEnd : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevEnd;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evEnd();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevEnd : virtual public AOMEvent {
    DECLARE_META_EVENT(evEnd)
};
//#]
#endif // _OMINSTRUMENT

//## event evCancle()
class evCancle : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCancle;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCancle();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCancle : virtual public AOMEvent {
    DECLARE_META_EVENT(evCancle)
};
//#]
#endif // _OMINSTRUMENT

//## event evCancel()
class evCancel : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCancel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCancel();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCancel : virtual public AOMEvent {
    DECLARE_META_EVENT(evCancel)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\CashRegisterPkg.h
*********************************************************************/

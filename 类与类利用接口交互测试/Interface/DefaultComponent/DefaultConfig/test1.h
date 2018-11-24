/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: test1
//!	Generated Date	: ÖÜÁù, 20, 1ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\test1.h
*********************************************************************/

#ifndef test1_H
#define test1_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "HardwarePkg.h"
//## class test1
#include "IOut.h"
//## package HardwarePkg

//## class test1
class test1 : public IOut {
public :

//#[ ignore
    //## package HardwarePkg
    class Out_C : public IOut {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Out_C();
        
        //## auto_generated
        virtual ~Out_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTest1(test1* part);
        
        //## auto_generated
        IOut* getItsIOut();
        
        //## auto_generated
        virtual void show(char* aMsg);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIOut(IOut* p_IOut);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        IOut* itsIOut;		//## link itsIOut
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedtest1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    test1();
    
    //## auto_generated
    virtual ~test1();
    
    ////    Operations    ////
    
    //## operation show(char*)
    virtual void show(char* aMsg);
    
    ////    Additional operations    ////
    
    //## auto_generated
    Out_C* getOut() const;
    
    //## auto_generated
    Out_C* get_Out() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    Out_C Out;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtest1 : public OMAnimatedIOut {
    DECLARE_META(test1, OMAnimatedtest1)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\test1.h
*********************************************************************/

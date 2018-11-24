/*********************************************************************
	Rhapsody	: 8.2 
	Login		: h
	Component	: TesterPrototype 
	Configuration 	: Debug
	Model Element	: KeyReader
//!	Generated Date	: ÖÜËÄ, 30, 11ÔÂ 2017  
	File Path	: TesterPrototype\Debug\KeyReader.h
*********************************************************************/

#ifndef KeyReader_H
#define KeyReader_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "TesterPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## class KeyReader
#include "IKeyboardEnabled.h"
//## package HardwarePkg::TesterPkg

//## class KeyReader
class KeyReader : public OMThread, public IKeyboardEnabled {
public :

//#[ ignore
    //## package HardwarePkg::TesterPkg
    class keyboard_C : public IKeyboardEnabled {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        keyboard_C();
        
        //## auto_generated
        virtual ~keyboard_C();
        
        ////    Operations    ////
        
        //## auto_generated
        IKeyboardEnabled* getItsIKeyboardEnabled();
        
        //## auto_generated
        IKeyboardEnabled* getOutBound();
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIKeyboardEnabled(OMReactive* p_OMReactive);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        OMReactive* itsIKeyboardEnabled;		//## link itsIKeyboardEnabled
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedKeyReader;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    KeyReader(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~KeyReader();
    
    ////    Operations    ////
    
    //## operation execute()
    OMReactive* execute();
    
    //## operation parse(char)
    void parse(char c);
    
    ////    Additional operations    ////
    
    //## auto_generated
    keyboard_C* getKeyboard() const;
    
    //## auto_generated
    keyboard_C* get_keyboard() const;
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Relations and components    ////

protected :

//#[ ignore
    keyboard_C keyboard;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedKeyReader : public OMAnimatedIKeyboardEnabled {
    DECLARE_META(KeyReader, OMAnimatedKeyReader)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TesterPrototype\Debug\KeyReader.h
*********************************************************************/

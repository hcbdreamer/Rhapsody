/********************************************************************
	Rhapsody	: 8.2 
	Login		: ftx
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: class_4
//!	Generated Date	: ÖÜËÄ, 29, 3ÔÂ 2018  
	File Path	: DefaultComponent\DefaultConfig\class_4.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "class_4.h"
//#[ ignore
#define Default_class_4_class_4_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class class_4
class_4::class_4(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(class_4, class_4(), 0, Default_class_4_class_4_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsSink.setShouldDelete(false);
        }
        {
            itsNodel.setShouldDelete(false);
        }
        {
            itsSource.setShouldDelete(false);
        }
    }
    initRelations();
}

class_4::~class_4() {
    NOTIFY_DESTRUCTOR(~class_4, true);
}

Nodel* class_4::getItsNodel() const {
    return (Nodel*) &itsNodel;
}

Sink* class_4::getItsSink() const {
    return (Sink*) &itsSink;
}

Source* class_4::getItsSource() const {
    return (Source*) &itsSource;
}

bool class_4::startBehavior() {
    bool done = true;
    done &= itsNodel.startBehavior();
    done &= itsSink.startBehavior();
    done &= itsSource.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void class_4::initRelations() {
    {
        
        itsSource.get_p1_SP()->setItsIntFlowInterface(itsNodel.get_In1_SP()->getItsIntFlowInterface());
        
    }
    {
        
        itsNodel.get_Out1_SP()->setItsIntFlowInterface(itsSink.get_p1_SP()->getItsIntFlowInterface());
        
    }
}

void class_4::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsSink.setActiveContext(theActiveContext, false);
        itsNodel.setActiveContext(theActiveContext, false);
        itsSource.setActiveContext(theActiveContext, false);
    }
}

void class_4::destroy() {
    itsNodel.destroy();
    itsSink.destroy();
    itsSource.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedclass_4::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSink", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSink);
    aomsRelations->addRelation("itsNodel", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNodel);
    aomsRelations->addRelation("itsSource", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSource);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(class_4, Default, Default, false, OMAnimatedclass_4)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\class_4.cpp
*********************************************************************/

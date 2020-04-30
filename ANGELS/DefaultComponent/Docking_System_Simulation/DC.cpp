/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: DC
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\DC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DC.h"
//## link itsDocking_System_5
#include "Docking_System.h"
//#[ ignore
#define ActorPkg_DC_DC_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor DC
DC::DC() {
    NOTIFY_CONSTRUCTOR(DC, DC(), 0, ActorPkg_DC_DC_SERIALIZE);
    itsDocking_System_5 = NULL;
}

DC::~DC() {
    NOTIFY_DESTRUCTOR(~DC, true);
    cleanUpRelations();
}

Docking_System* DC::getItsDocking_System_5() const {
    return itsDocking_System_5;
}

void DC::setItsDocking_System_5(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsDC(this);
        }
    _setItsDocking_System_5(p_Docking_System);
}

void DC::cleanUpRelations() {
    if(itsDocking_System_5 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_5");
            DC* p_DC = itsDocking_System_5->getItsDC();
            if(p_DC != NULL)
                {
                    itsDocking_System_5->__setItsDC(NULL);
                }
            itsDocking_System_5 = NULL;
        }
}

void DC::__setItsDocking_System_5(Docking_System* p_Docking_System) {
    itsDocking_System_5 = p_Docking_System;
    if(p_Docking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_System_5", p_Docking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_5");
        }
}

void DC::_setItsDocking_System_5(Docking_System* p_Docking_System) {
    if(itsDocking_System_5 != NULL)
        {
            itsDocking_System_5->__setItsDC(NULL);
        }
    __setItsDocking_System_5(p_Docking_System);
}

void DC::_clearItsDocking_System_5() {
    NOTIFY_RELATION_CLEARED("itsDocking_System_5");
    itsDocking_System_5 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDocking_System_5", false, true);
    if(myReal->itsDocking_System_5)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System_5);
        }
}
//#]

IMPLEMENT_META_P(DC, ActorPkg, ActorPkg, false, OMAnimatedDC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\DC.cpp
*********************************************************************/

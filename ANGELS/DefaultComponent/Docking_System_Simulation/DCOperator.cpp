/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\DCOperator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCOperator.h"
//## link itsDocking_System
#include "Docking_System.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define ActorPkg_DCOperator_DCOperator_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor DCOperator
DCOperator::DCOperator() {
    NOTIFY_CONSTRUCTOR(DCOperator, DCOperator(), 0, ActorPkg_DCOperator_DCOperator_SERIALIZE);
    itsDocking_System = NULL;
    itsTruck = NULL;
}

DCOperator::~DCOperator() {
    NOTIFY_DESTRUCTOR(~DCOperator, true);
    cleanUpRelations();
}

Docking_System* DCOperator::getItsDocking_System() const {
    return itsDocking_System;
}

void DCOperator::setItsDocking_System(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsDCOperator(this);
        }
    _setItsDocking_System(p_Docking_System);
}

Truck* DCOperator::getItsTruck() const {
    return itsTruck;
}

void DCOperator::setItsTruck(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDCOperator(this);
        }
    _setItsTruck(p_Truck);
}

void DCOperator::cleanUpRelations() {
    if(itsDocking_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System");
            DCOperator* p_DCOperator = itsDocking_System->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsDocking_System->__setItsDCOperator(NULL);
                }
            itsDocking_System = NULL;
        }
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            DCOperator* p_DCOperator = itsTruck->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsTruck->__setItsDCOperator(NULL);
                }
            itsTruck = NULL;
        }
}

void DCOperator::__setItsDocking_System(Docking_System* p_Docking_System) {
    itsDocking_System = p_Docking_System;
    if(p_Docking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_System", p_Docking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System");
        }
}

void DCOperator::_setItsDocking_System(Docking_System* p_Docking_System) {
    if(itsDocking_System != NULL)
        {
            itsDocking_System->__setItsDCOperator(NULL);
        }
    __setItsDocking_System(p_Docking_System);
}

void DCOperator::_clearItsDocking_System() {
    NOTIFY_RELATION_CLEARED("itsDocking_System");
    itsDocking_System = NULL;
}

void DCOperator::__setItsTruck(Truck* p_Truck) {
    itsTruck = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
        }
}

void DCOperator::_setItsTruck(Truck* p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsDCOperator(NULL);
        }
    __setItsTruck(p_Truck);
}

void DCOperator::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCOperator::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsDocking_System", false, true);
    if(myReal->itsDocking_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System);
        }
}
//#]

IMPLEMENT_META_P(DCOperator, ActorPkg, ActorPkg, false, OMAnimatedDCOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\DCOperator.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: ChargingInfrastructure
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\ChargingInfrastructure.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ChargingInfrastructure.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsCharging_System
#include "Charging_System.h"
//#[ ignore
#define ANGELSPkg_ChargingInfrastructure_ChargingInfrastructure_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg

//## class ChargingInfrastructure
ChargingInfrastructure::ChargingInfrastructure() {
    NOTIFY_CONSTRUCTOR(ChargingInfrastructure, ChargingInfrastructure(), 0, ANGELSPkg_ChargingInfrastructure_ChargingInfrastructure_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsCharging_System = NULL;
}

ChargingInfrastructure::~ChargingInfrastructure() {
    NOTIFY_DESTRUCTOR(~ChargingInfrastructure, true);
    cleanUpRelations();
}

ANGELS* ChargingInfrastructure::getItsANGELS() const {
    return itsANGELS;
}

void ChargingInfrastructure::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsChargingInfrastructure_1(this);
        }
    _setItsANGELS(p_ANGELS);
}

ANGELS* ChargingInfrastructure::getItsANGELS_1() const {
    return itsANGELS_1;
}

void ChargingInfrastructure::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsChargingInfrastructure(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

Charging_System* ChargingInfrastructure::getItsCharging_System() const {
    return itsCharging_System;
}

void ChargingInfrastructure::setItsCharging_System(Charging_System* p_Charging_System) {
    if(p_Charging_System != NULL)
        {
            p_Charging_System->_setItsChargingInfrastructure(this);
        }
    _setItsCharging_System(p_Charging_System);
}

void ChargingInfrastructure::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            ChargingInfrastructure* p_ChargingInfrastructure = itsANGELS->getItsChargingInfrastructure_1();
            if(p_ChargingInfrastructure != NULL)
                {
                    itsANGELS->__setItsChargingInfrastructure_1(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            ChargingInfrastructure* p_ChargingInfrastructure = itsANGELS_1->getItsChargingInfrastructure();
            if(p_ChargingInfrastructure != NULL)
                {
                    itsANGELS_1->__setItsChargingInfrastructure(NULL);
                }
            itsANGELS_1 = NULL;
        }
    if(itsCharging_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCharging_System");
            ChargingInfrastructure* p_ChargingInfrastructure = itsCharging_System->getItsChargingInfrastructure();
            if(p_ChargingInfrastructure != NULL)
                {
                    itsCharging_System->__setItsChargingInfrastructure(NULL);
                }
            itsCharging_System = NULL;
        }
}

void ChargingInfrastructure::__setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
        }
}

void ChargingInfrastructure::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsChargingInfrastructure_1(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void ChargingInfrastructure::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void ChargingInfrastructure::__setItsANGELS_1(ANGELS* p_ANGELS) {
    itsANGELS_1 = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS_1", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
        }
}

void ChargingInfrastructure::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsChargingInfrastructure(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void ChargingInfrastructure::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

void ChargingInfrastructure::__setItsCharging_System(Charging_System* p_Charging_System) {
    itsCharging_System = p_Charging_System;
    if(p_Charging_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCharging_System", p_Charging_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCharging_System");
        }
}

void ChargingInfrastructure::_setItsCharging_System(Charging_System* p_Charging_System) {
    if(itsCharging_System != NULL)
        {
            itsCharging_System->__setItsChargingInfrastructure(NULL);
        }
    __setItsCharging_System(p_Charging_System);
}

void ChargingInfrastructure::_clearItsCharging_System() {
    NOTIFY_RELATION_CLEARED("itsCharging_System");
    itsCharging_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedChargingInfrastructure::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
    aomsRelations->addRelation("itsCharging_System", false, true);
    if(myReal->itsCharging_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsCharging_System);
        }
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(ChargingInfrastructure, ANGELSPkg, ANGELSPkg, false, OMAnimatedChargingInfrastructure)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\ChargingInfrastructure.cpp
*********************************************************************/

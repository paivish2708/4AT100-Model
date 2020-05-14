/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\DCOperator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCOperator.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsCharging_System
#include "Charging_System.h"
//## link itsDocking_Process
#include "Docking_Process.h"
//## link itsLoading_Process
#include "Loading_Process.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_DCOperator_DCOperator_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DCOperator
DCOperator::DCOperator() {
    NOTIFY_CONSTRUCTOR(DCOperator, DCOperator(), 0, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_DCOperator_DCOperator_SERIALIZE);
    itsANGELS = NULL;
    itsCharging_System = NULL;
    itsDocking_Process = NULL;
    itsDocking_Process_1 = NULL;
    itsLoading_Process = NULL;
}

DCOperator::~DCOperator() {
    NOTIFY_DESTRUCTOR(~DCOperator, true);
    cleanUpRelations();
}

ANGELS* DCOperator::getItsANGELS() const {
    return itsANGELS;
}

void DCOperator::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDCOperator(this);
        }
    _setItsANGELS(p_ANGELS);
}

Charging_System* DCOperator::getItsCharging_System() const {
    return itsCharging_System;
}

void DCOperator::setItsCharging_System(Charging_System* p_Charging_System) {
    if(p_Charging_System != NULL)
        {
            p_Charging_System->_setItsDCOperator(this);
        }
    _setItsCharging_System(p_Charging_System);
}

Docking_Process* DCOperator::getItsDocking_Process() const {
    return itsDocking_Process;
}

void DCOperator::setItsDocking_Process(Docking_Process* p_Docking_Process) {
    if(p_Docking_Process != NULL)
        {
            p_Docking_Process->_setItsDCOperator(this);
        }
    _setItsDocking_Process(p_Docking_Process);
}

Docking_Process* DCOperator::getItsDocking_Process_1() const {
    return itsDocking_Process_1;
}

void DCOperator::setItsDocking_Process_1(Docking_Process* p_Docking_Process) {
    itsDocking_Process_1 = p_Docking_Process;
    if(p_Docking_Process != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_Process_1", p_Docking_Process, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_Process_1");
        }
}

Loading_Process* DCOperator::getItsLoading_Process() const {
    return itsLoading_Process;
}

void DCOperator::setItsLoading_Process(Loading_Process* p_Loading_Process) {
    if(p_Loading_Process != NULL)
        {
            p_Loading_Process->_setItsDCOperator(this);
        }
    _setItsLoading_Process(p_Loading_Process);
}

void DCOperator::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            DCOperator* p_DCOperator = itsANGELS->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsANGELS->__setItsDCOperator(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsCharging_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCharging_System");
            DCOperator* p_DCOperator = itsCharging_System->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsCharging_System->__setItsDCOperator(NULL);
                }
            itsCharging_System = NULL;
        }
    if(itsDocking_Process != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_Process");
            DCOperator* p_DCOperator = itsDocking_Process->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsDocking_Process->__setItsDCOperator(NULL);
                }
            itsDocking_Process = NULL;
        }
    if(itsDocking_Process_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_Process_1");
            itsDocking_Process_1 = NULL;
        }
    if(itsLoading_Process != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoading_Process");
            DCOperator* p_DCOperator = itsLoading_Process->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsLoading_Process->__setItsDCOperator(NULL);
                }
            itsLoading_Process = NULL;
        }
}

void DCOperator::__setItsANGELS(ANGELS* p_ANGELS) {
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

void DCOperator::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsDCOperator(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void DCOperator::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void DCOperator::__setItsCharging_System(Charging_System* p_Charging_System) {
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

void DCOperator::_setItsCharging_System(Charging_System* p_Charging_System) {
    if(itsCharging_System != NULL)
        {
            itsCharging_System->__setItsDCOperator(NULL);
        }
    __setItsCharging_System(p_Charging_System);
}

void DCOperator::_clearItsCharging_System() {
    NOTIFY_RELATION_CLEARED("itsCharging_System");
    itsCharging_System = NULL;
}

void DCOperator::__setItsDocking_Process(Docking_Process* p_Docking_Process) {
    itsDocking_Process = p_Docking_Process;
    if(p_Docking_Process != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_Process", p_Docking_Process, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_Process");
        }
}

void DCOperator::_setItsDocking_Process(Docking_Process* p_Docking_Process) {
    if(itsDocking_Process != NULL)
        {
            itsDocking_Process->__setItsDCOperator(NULL);
        }
    __setItsDocking_Process(p_Docking_Process);
}

void DCOperator::_clearItsDocking_Process() {
    NOTIFY_RELATION_CLEARED("itsDocking_Process");
    itsDocking_Process = NULL;
}

void DCOperator::__setItsLoading_Process(Loading_Process* p_Loading_Process) {
    itsLoading_Process = p_Loading_Process;
    if(p_Loading_Process != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoading_Process", p_Loading_Process, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoading_Process");
        }
}

void DCOperator::_setItsLoading_Process(Loading_Process* p_Loading_Process) {
    if(itsLoading_Process != NULL)
        {
            itsLoading_Process->__setItsDCOperator(NULL);
        }
    __setItsLoading_Process(p_Loading_Process);
}

void DCOperator::_clearItsLoading_Process() {
    NOTIFY_RELATION_CLEARED("itsLoading_Process");
    itsLoading_Process = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCOperator::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLoading_Process", false, true);
    if(myReal->itsLoading_Process)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoading_Process);
        }
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsDocking_Process", false, true);
    if(myReal->itsDocking_Process)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_Process);
        }
    aomsRelations->addRelation("itsDocking_Process_1", false, true);
    if(myReal->itsDocking_Process_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_Process_1);
        }
    aomsRelations->addRelation("itsCharging_System", false, true);
    if(myReal->itsCharging_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsCharging_System);
        }
}
//#]

IMPLEMENT_META_P(DCOperator, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg, UseCaseAnalysisPkg::ANGELSPkg::ActorPkg, false, OMAnimatedDCOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\DCOperator.cpp
*********************************************************************/

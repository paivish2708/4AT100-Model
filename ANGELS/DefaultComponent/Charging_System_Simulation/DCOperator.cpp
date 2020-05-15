/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Fri, 15, May 2020  
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
//## link itsDockingProcess
#include "DockingProcess.h"
//## link itsLoadingProcessBlock
#include "LoadingProcessBlock.h"
//#[ ignore
#define ANGELSPkg_ActorPkg_DCOperator_DCOperator_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ActorPkg

//## actor DCOperator
DCOperator::DCOperator() {
    NOTIFY_CONSTRUCTOR(DCOperator, DCOperator(), 0, ANGELSPkg_ActorPkg_DCOperator_DCOperator_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsCharging_System = NULL;
    itsDockingProcess = NULL;
    itsDockingProcess_1 = NULL;
    itsDockingProcess_2 = NULL;
    itsLoadingProcessBlock = NULL;
}

DCOperator::~DCOperator() {
    NOTIFY_DESTRUCTOR(~DCOperator, true);
    cleanUpRelations();
}

ANGELS* DCOperator::getItsANGELS() const {
    return itsANGELS;
}

void DCOperator::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* DCOperator::getItsANGELS_1() const {
    return itsANGELS_1;
}

void DCOperator::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDCOperator(this);
        }
    _setItsANGELS_1(p_ANGELS);
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

DockingProcess* DCOperator::getItsDockingProcess() const {
    return itsDockingProcess;
}

void DCOperator::setItsDockingProcess(DockingProcess* p_DockingProcess) {
    itsDockingProcess = p_DockingProcess;
    if(p_DockingProcess != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDockingProcess", p_DockingProcess, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcess");
        }
}

DockingProcess* DCOperator::getItsDockingProcess_1() const {
    return itsDockingProcess_1;
}

void DCOperator::setItsDockingProcess_1(DockingProcess* p_DockingProcess) {
    if(p_DockingProcess != NULL)
        {
            p_DockingProcess->_setItsDCOperator(this);
        }
    _setItsDockingProcess_1(p_DockingProcess);
}

DockingProcess* DCOperator::getItsDockingProcess_2() const {
    return itsDockingProcess_2;
}

void DCOperator::setItsDockingProcess_2(DockingProcess* p_DockingProcess) {
    itsDockingProcess_2 = p_DockingProcess;
    if(p_DockingProcess != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDockingProcess_2", p_DockingProcess, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcess_2");
        }
}

LoadingProcessBlock* DCOperator::getItsLoadingProcessBlock() const {
    return itsLoadingProcessBlock;
}

void DCOperator::setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    if(p_LoadingProcessBlock != NULL)
        {
            p_LoadingProcessBlock->_setItsDCOperator(this);
        }
    _setItsLoadingProcessBlock(p_LoadingProcessBlock);
}

void DCOperator::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            DCOperator* p_DCOperator = itsANGELS_1->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsANGELS_1->__setItsDCOperator(NULL);
                }
            itsANGELS_1 = NULL;
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
    if(itsDockingProcess != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcess");
            itsDockingProcess = NULL;
        }
    if(itsDockingProcess_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcess_1");
            DCOperator* p_DCOperator = itsDockingProcess_1->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsDockingProcess_1->__setItsDCOperator(NULL);
                }
            itsDockingProcess_1 = NULL;
        }
    if(itsDockingProcess_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcess_2");
            itsDockingProcess_2 = NULL;
        }
    if(itsLoadingProcessBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
            DCOperator* p_DCOperator = itsLoadingProcessBlock->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsLoadingProcessBlock->__setItsDCOperator(NULL);
                }
            itsLoadingProcessBlock = NULL;
        }
}

void DCOperator::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void DCOperator::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsDCOperator(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void DCOperator::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
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

void DCOperator::__setItsDockingProcess_1(DockingProcess* p_DockingProcess) {
    itsDockingProcess_1 = p_DockingProcess;
    if(p_DockingProcess != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDockingProcess_1", p_DockingProcess, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcess_1");
        }
}

void DCOperator::_setItsDockingProcess_1(DockingProcess* p_DockingProcess) {
    if(itsDockingProcess_1 != NULL)
        {
            itsDockingProcess_1->__setItsDCOperator(NULL);
        }
    __setItsDockingProcess_1(p_DockingProcess);
}

void DCOperator::_clearItsDockingProcess_1() {
    NOTIFY_RELATION_CLEARED("itsDockingProcess_1");
    itsDockingProcess_1 = NULL;
}

void DCOperator::__setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    itsLoadingProcessBlock = p_LoadingProcessBlock;
    if(p_LoadingProcessBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoadingProcessBlock", p_LoadingProcessBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
        }
}

void DCOperator::_setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    if(itsLoadingProcessBlock != NULL)
        {
            itsLoadingProcessBlock->__setItsDCOperator(NULL);
        }
    __setItsLoadingProcessBlock(p_LoadingProcessBlock);
}

void DCOperator::_clearItsLoadingProcessBlock() {
    NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
    itsLoadingProcessBlock = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCOperator::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLoadingProcessBlock", false, true);
    if(myReal->itsLoadingProcessBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoadingProcessBlock);
        }
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsDockingProcess_1", false, true);
    if(myReal->itsDockingProcess_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcess_1);
        }
    aomsRelations->addRelation("itsDockingProcess_2", false, true);
    if(myReal->itsDockingProcess_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcess_2);
        }
    aomsRelations->addRelation("itsCharging_System", false, true);
    if(myReal->itsCharging_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsCharging_System);
        }
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
    aomsRelations->addRelation("itsDockingProcess", false, true);
    if(myReal->itsDockingProcess)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcess);
        }
}
//#]

IMPLEMENT_META_P(DCOperator, ANGELSPkg_ActorPkg, ANGELSPkg::ActorPkg, false, OMAnimatedDCOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\DCOperator.cpp
*********************************************************************/

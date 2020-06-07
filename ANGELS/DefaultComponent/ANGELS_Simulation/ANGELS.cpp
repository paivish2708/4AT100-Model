/********************************************************************
	Rhapsody	: 8.4 
	Login		: kevin
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: ANGELS
//!	Generated Date	: Fri, 29, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\ANGELS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "ANGELS.h"
//## link itsChargingInfrastructure
#include "ChargingInfrastructure.h"
//## link itsCollision_Detection
#include "Collision_Detection.h"
//## link itsDC
#include "DC.h"
//## link itsDCOperator
#include "DCOperator.h"
//## link itsDockingSystem
#include "DockingSystem.h"
//## link itsDriver
#include "Driver.h"
//## link itsEnvironment
#include "Environment.h"
//## link itsGovernment
#include "Government.h"
//## link itsLoadingSystemBlock
#include "LoadingSystemBlock.h"
//## link itsLocalizationArchitecture
#include "LocalizationArchitecture.h"
//## link itsObstacle
#include "Obstacle.h"
//## link itsSafetyStandards
#include "SafetyStandards.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define ANGELSPkg_ANGELS_ANGELS_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg

//## class ANGELS
ANGELS::ANGELS(IOxfActive* theActiveContext) : ChargeState(15), LoadingTime(0), ParkingTime(0), dt(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ANGELS, ANGELS(), 0, ANGELSPkg_ANGELS_ANGELS_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsChargingSystemBlock.setShouldDelete(false);
        }
        {
            itsLoadingProcessBlock.setShouldDelete(false);
        }
        {
            itsParkingSystemBlock.setShouldDelete(false);
        }
        {
            itsDockingProcessBlock.setShouldDelete(false);
        }
    }
    itsChargingInfrastructure = NULL;
    itsCollision_Detection = NULL;
    itsDC = NULL;
    itsDCOperator = NULL;
    itsDockingSystem = NULL;
    itsDriver = NULL;
    itsEnvironment = NULL;
    itsGovernment = NULL;
    itsLoadingSystemBlock = NULL;
    itsLocalizationArchitecture = NULL;
    itsObstacle = NULL;
    itsSafetyStandards = NULL;
    itsTruck = NULL;
    initStatechart();
}

ANGELS::~ANGELS() {
    NOTIFY_DESTRUCTOR(~ANGELS, true);
    cleanUpRelations();
}

double ANGELS::getChargeState() const {
    return ChargeState;
}

void ANGELS::setChargeState(double p_ChargeState) {
    ChargeState = p_ChargeState;
}

double ANGELS::getDSInput() const {
    return DSInput;
}

void ANGELS::setDSInput(double p_DSInput) {
    DSInput = p_DSInput;
}

double ANGELS::getDockingStatus() const {
    return DockingStatus;
}

void ANGELS::setDockingStatus(double p_DockingStatus) {
    DockingStatus = p_DockingStatus;
}

double ANGELS::getDockingTime() const {
    return DockingTime;
}

void ANGELS::setDockingTime(double p_DockingTime) {
    DockingTime = p_DockingTime;
}

RhpBoolean ANGELS::getDoorstatus() const {
    return Doorstatus;
}

void ANGELS::setDoorstatus(RhpBoolean p_Doorstatus) {
    Doorstatus = p_Doorstatus;
}

OMIterator<int> ANGELS::getLoadingTime() const {
    OMIterator<int> iter(LoadingTime);
    return iter;
}

void ANGELS::setLoadingTime(int p_LoadingTime) {
    LoadingTime.add(p_LoadingTime);
}

double ANGELS::getPSInput() const {
    return PSInput;
}

void ANGELS::setPSInput(double p_PSInput) {
    PSInput = p_PSInput;
}

double ANGELS::getParkingStatus() const {
    return ParkingStatus;
}

void ANGELS::setParkingStatus(double p_ParkingStatus) {
    ParkingStatus = p_ParkingStatus;
}

double ANGELS::getParkingTime() const {
    return ParkingTime;
}

void ANGELS::setParkingTime(double p_ParkingTime) {
    ParkingTime = p_ParkingTime;
}

double ANGELS::getSpeed() const {
    return Speed;
}

void ANGELS::setSpeed(double p_Speed) {
    Speed = p_Speed;
}

double ANGELS::getSteerAngle() const {
    return SteerAngle;
}

void ANGELS::setSteerAngle(double p_SteerAngle) {
    SteerAngle = p_SteerAngle;
}

double ANGELS::getDt() const {
    return dt;
}

void ANGELS::setDt(double p_dt) {
    dt = p_dt;
}

ChargingInfrastructure* ANGELS::getItsChargingInfrastructure() const {
    return itsChargingInfrastructure;
}

void ANGELS::setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure) {
    if(p_ChargingInfrastructure != NULL)
        {
            p_ChargingInfrastructure->_setItsANGELS_1(this);
        }
    _setItsChargingInfrastructure(p_ChargingInfrastructure);
}

ChargingSystemBlock* ANGELS::getItsChargingSystemBlock() const {
    return (ChargingSystemBlock*) &itsChargingSystemBlock;
}

Collision_Detection* ANGELS::getItsCollision_Detection() const {
    return itsCollision_Detection;
}

void ANGELS::setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsANGELS(this);
        }
    _setItsCollision_Detection(p_Collision_Detection);
}

DC* ANGELS::getItsDC() const {
    return itsDC;
}

void ANGELS::setItsDC(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsANGELS_2(this);
        }
    _setItsDC(p_DC);
}

DCOperator* ANGELS::getItsDCOperator() const {
    return itsDCOperator;
}

void ANGELS::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsANGELS_1(this);
        }
    _setItsDCOperator(p_DCOperator);
}

DockingProcessBlock* ANGELS::getItsDockingProcessBlock() const {
    return (DockingProcessBlock*) &itsDockingProcessBlock;
}

DockingSystem* ANGELS::getItsDockingSystem() const {
    return itsDockingSystem;
}

void ANGELS::setItsDockingSystem(DockingSystem* p_DockingSystem) {
    if(p_DockingSystem != NULL)
        {
            p_DockingSystem->_setItsANGELS_1(this);
        }
    _setItsDockingSystem(p_DockingSystem);
}

Driver* ANGELS::getItsDriver() const {
    return itsDriver;
}

void ANGELS::setItsDriver(Driver* p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsANGELS_3(this);
        }
    _setItsDriver(p_Driver);
}

Environment* ANGELS::getItsEnvironment() const {
    return itsEnvironment;
}

void ANGELS::setItsEnvironment(Environment* p_Environment) {
    if(p_Environment != NULL)
        {
            p_Environment->_setItsANGELS_2(this);
        }
    _setItsEnvironment(p_Environment);
}

Government* ANGELS::getItsGovernment() const {
    return itsGovernment;
}

void ANGELS::setItsGovernment(Government* p_Government) {
    if(p_Government != NULL)
        {
            p_Government->_setItsANGELS_2(this);
        }
    _setItsGovernment(p_Government);
}

LoadingProcessBlock* ANGELS::getItsLoadingProcessBlock() const {
    return (LoadingProcessBlock*) &itsLoadingProcessBlock;
}

LoadingSystemBlock* ANGELS::getItsLoadingSystemBlock() const {
    return itsLoadingSystemBlock;
}

void ANGELS::setItsLoadingSystemBlock(LoadingSystemBlock* p_LoadingSystemBlock) {
    if(p_LoadingSystemBlock != NULL)
        {
            p_LoadingSystemBlock->_setItsANGELS_1(this);
        }
    _setItsLoadingSystemBlock(p_LoadingSystemBlock);
}

LocalizationArchitecture* ANGELS::getItsLocalizationArchitecture() const {
    return itsLocalizationArchitecture;
}

void ANGELS::setItsLocalizationArchitecture(LocalizationArchitecture* p_LocalizationArchitecture) {
    if(p_LocalizationArchitecture != NULL)
        {
            p_LocalizationArchitecture->_setItsANGELS_1(this);
        }
    _setItsLocalizationArchitecture(p_LocalizationArchitecture);
}

Obstacle* ANGELS::getItsObstacle() const {
    return itsObstacle;
}

void ANGELS::setItsObstacle(Obstacle* p_Obstacle) {
    if(p_Obstacle != NULL)
        {
            p_Obstacle->_setItsANGELS_2(this);
        }
    _setItsObstacle(p_Obstacle);
}

ParkingSystemBlock* ANGELS::getItsParkingSystemBlock() const {
    return (ParkingSystemBlock*) &itsParkingSystemBlock;
}

SafetyStandards* ANGELS::getItsSafetyStandards() const {
    return itsSafetyStandards;
}

void ANGELS::setItsSafetyStandards(SafetyStandards* p_SafetyStandards) {
    if(p_SafetyStandards != NULL)
        {
            p_SafetyStandards->_setItsANGELS_1(this);
        }
    _setItsSafetyStandards(p_SafetyStandards);
}

Truck* ANGELS::getItsTruck() const {
    return itsTruck;
}

void ANGELS::setItsTruck(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsANGELS(this);
        }
    _setItsTruck(p_Truck);
}

bool ANGELS::startBehavior() {
    bool done = true;
    done &= itsChargingSystemBlock.startBehavior();
    done &= itsDockingProcessBlock.startBehavior();
    done &= itsLoadingProcessBlock.startBehavior();
    done &= itsParkingSystemBlock.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void ANGELS::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void ANGELS::cleanUpRelations() {
    if(itsChargingInfrastructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsChargingInfrastructure");
            ANGELS* p_ANGELS = itsChargingInfrastructure->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsChargingInfrastructure->__setItsANGELS_1(NULL);
                }
            itsChargingInfrastructure = NULL;
        }
    if(itsCollision_Detection != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection");
            ANGELS* p_ANGELS = itsCollision_Detection->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsCollision_Detection->__setItsANGELS(NULL);
                }
            itsCollision_Detection = NULL;
        }
    if(itsDC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC");
            ANGELS* p_ANGELS = itsDC->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsDC->__setItsANGELS_2(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            ANGELS* p_ANGELS = itsDCOperator->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsDCOperator->__setItsANGELS_1(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsDockingSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingSystem");
            ANGELS* p_ANGELS = itsDockingSystem->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsDockingSystem->__setItsANGELS_1(NULL);
                }
            itsDockingSystem = NULL;
        }
    if(itsDriver != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
            ANGELS* p_ANGELS = itsDriver->getItsANGELS_3();
            if(p_ANGELS != NULL)
                {
                    itsDriver->__setItsANGELS_3(NULL);
                }
            itsDriver = NULL;
        }
    if(itsEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
            ANGELS* p_ANGELS = itsEnvironment->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsEnvironment->__setItsANGELS_2(NULL);
                }
            itsEnvironment = NULL;
        }
    if(itsGovernment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGovernment");
            ANGELS* p_ANGELS = itsGovernment->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsGovernment->__setItsANGELS_2(NULL);
                }
            itsGovernment = NULL;
        }
    if(itsLoadingSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingSystemBlock");
            ANGELS* p_ANGELS = itsLoadingSystemBlock->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsLoadingSystemBlock->__setItsANGELS_1(NULL);
                }
            itsLoadingSystemBlock = NULL;
        }
    if(itsLocalizationArchitecture != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLocalizationArchitecture");
            ANGELS* p_ANGELS = itsLocalizationArchitecture->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsLocalizationArchitecture->__setItsANGELS_1(NULL);
                }
            itsLocalizationArchitecture = NULL;
        }
    if(itsObstacle != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsObstacle");
            ANGELS* p_ANGELS = itsObstacle->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsObstacle->__setItsANGELS_2(NULL);
                }
            itsObstacle = NULL;
        }
    if(itsSafetyStandards != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSafetyStandards");
            ANGELS* p_ANGELS = itsSafetyStandards->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsSafetyStandards->__setItsANGELS_1(NULL);
                }
            itsSafetyStandards = NULL;
        }
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            ANGELS* p_ANGELS = itsTruck->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsTruck->__setItsANGELS(NULL);
                }
            itsTruck = NULL;
        }
}

void ANGELS::__setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure) {
    itsChargingInfrastructure = p_ChargingInfrastructure;
    if(p_ChargingInfrastructure != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsChargingInfrastructure", p_ChargingInfrastructure, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsChargingInfrastructure");
        }
}

void ANGELS::_setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure) {
    if(itsChargingInfrastructure != NULL)
        {
            itsChargingInfrastructure->__setItsANGELS_1(NULL);
        }
    __setItsChargingInfrastructure(p_ChargingInfrastructure);
}

void ANGELS::_clearItsChargingInfrastructure() {
    NOTIFY_RELATION_CLEARED("itsChargingInfrastructure");
    itsChargingInfrastructure = NULL;
}

void ANGELS::__setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    itsCollision_Detection = p_Collision_Detection;
    if(p_Collision_Detection != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Detection", p_Collision_Detection, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection");
        }
}

void ANGELS::_setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection != NULL)
        {
            itsCollision_Detection->__setItsANGELS(NULL);
        }
    __setItsCollision_Detection(p_Collision_Detection);
}

void ANGELS::_clearItsCollision_Detection() {
    NOTIFY_RELATION_CLEARED("itsCollision_Detection");
    itsCollision_Detection = NULL;
}

void ANGELS::__setItsDC(DC* p_DC) {
    itsDC = p_DC;
    if(p_DC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDC", p_DC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDC");
        }
}

void ANGELS::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsANGELS_2(NULL);
        }
    __setItsDC(p_DC);
}

void ANGELS::_clearItsDC() {
    NOTIFY_RELATION_CLEARED("itsDC");
    itsDC = NULL;
}

void ANGELS::__setItsDCOperator(DCOperator* p_DCOperator) {
    itsDCOperator = p_DCOperator;
    if(p_DCOperator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCOperator", p_DCOperator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
        }
}

void ANGELS::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsANGELS_1(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void ANGELS::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void ANGELS::__setItsDockingSystem(DockingSystem* p_DockingSystem) {
    itsDockingSystem = p_DockingSystem;
    if(p_DockingSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDockingSystem", p_DockingSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDockingSystem");
        }
}

void ANGELS::_setItsDockingSystem(DockingSystem* p_DockingSystem) {
    if(itsDockingSystem != NULL)
        {
            itsDockingSystem->__setItsANGELS_1(NULL);
        }
    __setItsDockingSystem(p_DockingSystem);
}

void ANGELS::_clearItsDockingSystem() {
    NOTIFY_RELATION_CLEARED("itsDockingSystem");
    itsDockingSystem = NULL;
}

void ANGELS::__setItsDriver(Driver* p_Driver) {
    itsDriver = p_Driver;
    if(p_Driver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDriver", p_Driver, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
        }
}

void ANGELS::_setItsDriver(Driver* p_Driver) {
    if(itsDriver != NULL)
        {
            itsDriver->__setItsANGELS_3(NULL);
        }
    __setItsDriver(p_Driver);
}

void ANGELS::_clearItsDriver() {
    NOTIFY_RELATION_CLEARED("itsDriver");
    itsDriver = NULL;
}

void ANGELS::__setItsEnvironment(Environment* p_Environment) {
    itsEnvironment = p_Environment;
    if(p_Environment != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEnvironment", p_Environment, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
        }
}

void ANGELS::_setItsEnvironment(Environment* p_Environment) {
    if(itsEnvironment != NULL)
        {
            itsEnvironment->__setItsANGELS_2(NULL);
        }
    __setItsEnvironment(p_Environment);
}

void ANGELS::_clearItsEnvironment() {
    NOTIFY_RELATION_CLEARED("itsEnvironment");
    itsEnvironment = NULL;
}

void ANGELS::__setItsGovernment(Government* p_Government) {
    itsGovernment = p_Government;
    if(p_Government != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGovernment", p_Government, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGovernment");
        }
}

void ANGELS::_setItsGovernment(Government* p_Government) {
    if(itsGovernment != NULL)
        {
            itsGovernment->__setItsANGELS_2(NULL);
        }
    __setItsGovernment(p_Government);
}

void ANGELS::_clearItsGovernment() {
    NOTIFY_RELATION_CLEARED("itsGovernment");
    itsGovernment = NULL;
}

void ANGELS::__setItsLoadingSystemBlock(LoadingSystemBlock* p_LoadingSystemBlock) {
    itsLoadingSystemBlock = p_LoadingSystemBlock;
    if(p_LoadingSystemBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoadingSystemBlock", p_LoadingSystemBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoadingSystemBlock");
        }
}

void ANGELS::_setItsLoadingSystemBlock(LoadingSystemBlock* p_LoadingSystemBlock) {
    if(itsLoadingSystemBlock != NULL)
        {
            itsLoadingSystemBlock->__setItsANGELS_1(NULL);
        }
    __setItsLoadingSystemBlock(p_LoadingSystemBlock);
}

void ANGELS::_clearItsLoadingSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsLoadingSystemBlock");
    itsLoadingSystemBlock = NULL;
}

void ANGELS::__setItsLocalizationArchitecture(LocalizationArchitecture* p_LocalizationArchitecture) {
    itsLocalizationArchitecture = p_LocalizationArchitecture;
    if(p_LocalizationArchitecture != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLocalizationArchitecture", p_LocalizationArchitecture, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLocalizationArchitecture");
        }
}

void ANGELS::_setItsLocalizationArchitecture(LocalizationArchitecture* p_LocalizationArchitecture) {
    if(itsLocalizationArchitecture != NULL)
        {
            itsLocalizationArchitecture->__setItsANGELS_1(NULL);
        }
    __setItsLocalizationArchitecture(p_LocalizationArchitecture);
}

void ANGELS::_clearItsLocalizationArchitecture() {
    NOTIFY_RELATION_CLEARED("itsLocalizationArchitecture");
    itsLocalizationArchitecture = NULL;
}

void ANGELS::__setItsObstacle(Obstacle* p_Obstacle) {
    itsObstacle = p_Obstacle;
    if(p_Obstacle != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsObstacle", p_Obstacle, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsObstacle");
        }
}

void ANGELS::_setItsObstacle(Obstacle* p_Obstacle) {
    if(itsObstacle != NULL)
        {
            itsObstacle->__setItsANGELS_2(NULL);
        }
    __setItsObstacle(p_Obstacle);
}

void ANGELS::_clearItsObstacle() {
    NOTIFY_RELATION_CLEARED("itsObstacle");
    itsObstacle = NULL;
}

void ANGELS::__setItsSafetyStandards(SafetyStandards* p_SafetyStandards) {
    itsSafetyStandards = p_SafetyStandards;
    if(p_SafetyStandards != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSafetyStandards", p_SafetyStandards, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSafetyStandards");
        }
}

void ANGELS::_setItsSafetyStandards(SafetyStandards* p_SafetyStandards) {
    if(itsSafetyStandards != NULL)
        {
            itsSafetyStandards->__setItsANGELS_1(NULL);
        }
    __setItsSafetyStandards(p_SafetyStandards);
}

void ANGELS::_clearItsSafetyStandards() {
    NOTIFY_RELATION_CLEARED("itsSafetyStandards");
    itsSafetyStandards = NULL;
}

void ANGELS::__setItsTruck(Truck* p_Truck) {
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

void ANGELS::_setItsTruck(Truck* p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsANGELS(NULL);
        }
    __setItsTruck(p_Truck);
}

void ANGELS::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck = NULL;
}

void ANGELS::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsChargingSystemBlock.setActiveContext(theActiveContext, false);
        itsLoadingProcessBlock.setActiveContext(theActiveContext, false);
        itsParkingSystemBlock.setActiveContext(theActiveContext, false);
        itsDockingProcessBlock.setActiveContext(theActiveContext, false);
    }
}

void ANGELS::destroy() {
    itsChargingSystemBlock.destroy();
    itsDockingProcessBlock.destroy();
    itsLoadingProcessBlock.destroy();
    itsParkingSystemBlock.destroy();
    OMReactive::destroy();
}

void ANGELS::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.InitANGELS");
        rootState_subState = InitANGELS;
        rootState_active = InitANGELS;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus ANGELS::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State InitANGELS
        case InitANGELS:
        {
            if(IS_EVENT_TYPE_OF(SwitchOnANGELS_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.InitANGELS");
                    NOTIFY_STATE_ENTERED("ROOT.ON");
                    rootState_subState = ON;
                    rootState_active = ON;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ON
        case ON:
        {
            if(IS_EVENT_TYPE_OF(SwitchOffANGELSFunc_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.ON");
                    NOTIFY_STATE_ENTERED("ROOT.OFF");
                    rootState_subState = OFF;
                    rootState_active = OFF;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State OFF
        case OFF:
        {
            if(IS_EVENT_TYPE_OF(TurnOffANGELS_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.OFF");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_3");
                    rootState_subState = terminationstate_3;
                    rootState_active = terminationstate_3;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedANGELS::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Speed", x2String(myReal->Speed));
    aomsAttributes->addAttribute("SteerAngle", x2String(myReal->SteerAngle));
    aomsAttributes->addAttribute("PSInput", x2String(myReal->PSInput));
    aomsAttributes->addAttribute("DockingTime", x2String(myReal->DockingTime));
    aomsAttributes->addAttribute("Doorstatus", x2String(myReal->Doorstatus));
    aomsAttributes->addAttribute("DSInput", x2String(myReal->DSInput));
    aomsAttributes->addAttribute("DockingStatus", x2String(myReal->DockingStatus));
    aomsAttributes->addAttribute("ParkingStatus", x2String(myReal->ParkingStatus));
    aomsAttributes->addAttribute("dt", x2String(myReal->dt));
    aomsAttributes->addAttribute("LoadingTime", UNKNOWN2STRING(myReal->LoadingTime));
    aomsAttributes->addAttribute("ChargeState", x2String(myReal->ChargeState));
    aomsAttributes->addAttribute("ParkingTime", x2String(myReal->ParkingTime));
}

void OMAnimatedANGELS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEnvironment", false, true);
    if(myReal->itsEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironment);
        }
    aomsRelations->addRelation("itsLocalizationArchitecture", false, true);
    if(myReal->itsLocalizationArchitecture)
        {
            aomsRelations->ADD_ITEM(myReal->itsLocalizationArchitecture);
        }
    aomsRelations->addRelation("itsDockingSystem", false, true);
    if(myReal->itsDockingSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingSystem);
        }
    aomsRelations->addRelation("itsLoadingSystemBlock", false, true);
    if(myReal->itsLoadingSystemBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoadingSystemBlock);
        }
    aomsRelations->addRelation("itsChargingInfrastructure", false, true);
    if(myReal->itsChargingInfrastructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsChargingInfrastructure);
        }
    aomsRelations->addRelation("itsObstacle", false, true);
    if(myReal->itsObstacle)
        {
            aomsRelations->ADD_ITEM(myReal->itsObstacle);
        }
    aomsRelations->addRelation("itsGovernment", false, true);
    if(myReal->itsGovernment)
        {
            aomsRelations->ADD_ITEM(myReal->itsGovernment);
        }
    aomsRelations->addRelation("itsSafetyStandards", false, true);
    if(myReal->itsSafetyStandards)
        {
            aomsRelations->ADD_ITEM(myReal->itsSafetyStandards);
        }
    aomsRelations->addRelation("itsDCOperator", false, true);
    if(myReal->itsDCOperator)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator);
        }
    aomsRelations->addRelation("itsDC", false, true);
    if(myReal->itsDC)
        {
            aomsRelations->ADD_ITEM(myReal->itsDC);
        }
    aomsRelations->addRelation("itsDriver", false, true);
    if(myReal->itsDriver)
        {
            aomsRelations->ADD_ITEM(myReal->itsDriver);
        }
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsCollision_Detection", false, true);
    if(myReal->itsCollision_Detection)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Detection);
        }
    aomsRelations->addRelation("itsChargingSystemBlock", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsChargingSystemBlock);
    aomsRelations->addRelation("itsLoadingProcessBlock", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLoadingProcessBlock);
    aomsRelations->addRelation("itsParkingSystemBlock", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsParkingSystemBlock);
    aomsRelations->addRelation("itsDockingProcessBlock", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDockingProcessBlock);
}

void OMAnimatedANGELS::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case ANGELS::InitANGELS:
        {
            InitANGELS_serializeStates(aomsState);
        }
        break;
        case ANGELS::ON:
        {
            ON_serializeStates(aomsState);
        }
        break;
        case ANGELS::OFF:
        {
            OFF_serializeStates(aomsState);
        }
        break;
        case ANGELS::terminationstate_3:
        {
            terminationstate_3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedANGELS::terminationstate_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_3");
}

void OMAnimatedANGELS::ON_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ON");
}

void OMAnimatedANGELS::OFF_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OFF");
}

void OMAnimatedANGELS::InitANGELS_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.InitANGELS");
}
//#]

IMPLEMENT_REACTIVE_META_P(ANGELS, ANGELSPkg, ANGELSPkg, false, OMAnimatedANGELS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\ANGELS.cpp
*********************************************************************/

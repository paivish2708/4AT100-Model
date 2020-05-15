/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcess_Simulation
	Model Element	: ANGELS
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\DockingProcess_Simulation\ANGELS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ANGELS.h"
//## link itsChargingInfrastructure
#include "ChargingInfrastructure.h"
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
//## link itsLoadingSystem
#include "LoadingSystem.h"
//## link itsLocalization
#include "Localization.h"
//## link itsObjectDetecttion
#include "ObjectDetecttion.h"
//## link itsObstacle
#include "Obstacle.h"
//## link itsSafetyStandards
#include "SafetyStandards.h"
//#[ ignore
#define ANGELSPkg_ANGELS_ANGELS_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg

//## class ANGELS
ANGELS::ANGELS(IOxfActive* theActiveContext) : ChargeState(15), dt(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ANGELS, ANGELS(), 0, ANGELSPkg_ANGELS_ANGELS_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsLoading_Process.setShouldDelete(false);
        }
        {
            itsDockingProcess.setShouldDelete(false);
        }
        {
            itsCharging_System.setShouldDelete(false);
        }
        {
            itsCharging_System_1.setShouldDelete(false);
        }
        {
            itsDockingProcess_1.setShouldDelete(false);
        }
    }
    itsChargingInfrastructure = NULL;
    itsDC = NULL;
    itsDCOperator = NULL;
    itsDockingSystem = NULL;
    itsDriver = NULL;
    itsEnvironment = NULL;
    itsGovernment = NULL;
    itsLoadingSystem = NULL;
    itsLocalization = NULL;
    itsObjectDetecttion = NULL;
    itsObstacle = NULL;
    itsSafetyStandards = NULL;
    itsTruck = NULL;
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

OMIterator<double> ANGELS::getLoadingTime() const {
    OMIterator<double> iter(LoadingTime);
    return iter;
}

void ANGELS::setLoadingTime(double p_LoadingTime) {
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

Charging_System* ANGELS::getItsCharging_System() const {
    return (Charging_System*) &itsCharging_System;
}

Charging_System* ANGELS::getItsCharging_System_1() const {
    return (Charging_System*) &itsCharging_System_1;
}

Collision_Avoidance* ANGELS::getItsCollision_Avoidance_1() const {
    return (Collision_Avoidance*) &itsCollision_Avoidance_1;
}

Collision_Detection* ANGELS::getItsCollision_Detection_2() const {
    return (Collision_Detection*) &itsCollision_Detection_2;
}

Collision_Detection* ANGELS::getItsCollision_Detection_3() const {
    return (Collision_Detection*) &itsCollision_Detection_3;
}

Communication_System* ANGELS::getItsCommunication_System_1() const {
    return (Communication_System*) &itsCommunication_System_1;
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

DockingProcess* ANGELS::getItsDockingProcess() const {
    return (DockingProcess*) &itsDockingProcess;
}

DockingProcess* ANGELS::getItsDockingProcess_1() const {
    return (DockingProcess*) &itsDockingProcess_1;
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

LoadingSystem* ANGELS::getItsLoadingSystem() const {
    return itsLoadingSystem;
}

void ANGELS::setItsLoadingSystem(LoadingSystem* p_LoadingSystem) {
    if(p_LoadingSystem != NULL)
        {
            p_LoadingSystem->_setItsANGELS_1(this);
        }
    _setItsLoadingSystem(p_LoadingSystem);
}

Loading_Process* ANGELS::getItsLoading_Process() const {
    return (Loading_Process*) &itsLoading_Process;
}

Localisation_System* ANGELS::getItsLocalisation_System_1() const {
    return (Localisation_System*) &itsLocalisation_System_1;
}

Localization* ANGELS::getItsLocalization() const {
    return itsLocalization;
}

void ANGELS::setItsLocalization(Localization* p_Localization) {
    if(p_Localization != NULL)
        {
            p_Localization->_setItsANGELS_1(this);
        }
    _setItsLocalization(p_Localization);
}

ObjectDetecttion* ANGELS::getItsObjectDetecttion() const {
    return itsObjectDetecttion;
}

void ANGELS::setItsObjectDetecttion(ObjectDetecttion* p_ObjectDetecttion) {
    if(p_ObjectDetecttion != NULL)
        {
            p_ObjectDetecttion->_setItsANGELS_2(this);
        }
    _setItsObjectDetecttion(p_ObjectDetecttion);
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

ParkingSystem* ANGELS::getItsParkingSystem_1() const {
    return (ParkingSystem*) &itsParkingSystem_1;
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
            p_Truck->_setItsANGELS_2(this);
        }
    _setItsTruck(p_Truck);
}

Truck* ANGELS::getItsTruck_1() const {
    return (Truck*) &itsTruck_1;
}

bool ANGELS::startBehavior() {
    bool done = true;
    done &= itsCharging_System.startBehavior();
    done &= itsCharging_System_1.startBehavior();
    done &= itsDockingProcess.startBehavior();
    done &= itsDockingProcess_1.startBehavior();
    done &= itsLoading_Process.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
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
    if(itsLoadingSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingSystem");
            ANGELS* p_ANGELS = itsLoadingSystem->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsLoadingSystem->__setItsANGELS_1(NULL);
                }
            itsLoadingSystem = NULL;
        }
    if(itsLocalization != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLocalization");
            ANGELS* p_ANGELS = itsLocalization->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsLocalization->__setItsANGELS_1(NULL);
                }
            itsLocalization = NULL;
        }
    if(itsObjectDetecttion != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsObjectDetecttion");
            ANGELS* p_ANGELS = itsObjectDetecttion->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsObjectDetecttion->__setItsANGELS_2(NULL);
                }
            itsObjectDetecttion = NULL;
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
            ANGELS* p_ANGELS = itsTruck->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsTruck->__setItsANGELS_2(NULL);
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

void ANGELS::__setItsLoadingSystem(LoadingSystem* p_LoadingSystem) {
    itsLoadingSystem = p_LoadingSystem;
    if(p_LoadingSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoadingSystem", p_LoadingSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoadingSystem");
        }
}

void ANGELS::_setItsLoadingSystem(LoadingSystem* p_LoadingSystem) {
    if(itsLoadingSystem != NULL)
        {
            itsLoadingSystem->__setItsANGELS_1(NULL);
        }
    __setItsLoadingSystem(p_LoadingSystem);
}

void ANGELS::_clearItsLoadingSystem() {
    NOTIFY_RELATION_CLEARED("itsLoadingSystem");
    itsLoadingSystem = NULL;
}

void ANGELS::__setItsLocalization(Localization* p_Localization) {
    itsLocalization = p_Localization;
    if(p_Localization != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLocalization", p_Localization, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLocalization");
        }
}

void ANGELS::_setItsLocalization(Localization* p_Localization) {
    if(itsLocalization != NULL)
        {
            itsLocalization->__setItsANGELS_1(NULL);
        }
    __setItsLocalization(p_Localization);
}

void ANGELS::_clearItsLocalization() {
    NOTIFY_RELATION_CLEARED("itsLocalization");
    itsLocalization = NULL;
}

void ANGELS::__setItsObjectDetecttion(ObjectDetecttion* p_ObjectDetecttion) {
    itsObjectDetecttion = p_ObjectDetecttion;
    if(p_ObjectDetecttion != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsObjectDetecttion", p_ObjectDetecttion, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsObjectDetecttion");
        }
}

void ANGELS::_setItsObjectDetecttion(ObjectDetecttion* p_ObjectDetecttion) {
    if(itsObjectDetecttion != NULL)
        {
            itsObjectDetecttion->__setItsANGELS_2(NULL);
        }
    __setItsObjectDetecttion(p_ObjectDetecttion);
}

void ANGELS::_clearItsObjectDetecttion() {
    NOTIFY_RELATION_CLEARED("itsObjectDetecttion");
    itsObjectDetecttion = NULL;
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
            itsTruck->__setItsANGELS_2(NULL);
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
        itsLoading_Process.setActiveContext(theActiveContext, false);
        itsDockingProcess.setActiveContext(theActiveContext, false);
        itsCharging_System.setActiveContext(theActiveContext, false);
        itsCharging_System_1.setActiveContext(theActiveContext, false);
        itsDockingProcess_1.setActiveContext(theActiveContext, false);
    }
}

void ANGELS::destroy() {
    itsCharging_System.destroy();
    itsCharging_System_1.destroy();
    itsDockingProcess.destroy();
    itsDockingProcess_1.destroy();
    itsLoading_Process.destroy();
    OMReactive::destroy();
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
}

void OMAnimatedANGELS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCollision_Avoidance_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCollision_Avoidance_1);
    aomsRelations->addRelation("itsLoading_Process", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLoading_Process);
    aomsRelations->addRelation("itsCommunication_System_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCommunication_System_1);
    aomsRelations->addRelation("itsCollision_Detection_2", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCollision_Detection_2);
    aomsRelations->addRelation("itsDockingProcess", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDockingProcess);
    aomsRelations->addRelation("itsLocalisation_System_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLocalisation_System_1);
    aomsRelations->addRelation("itsCollision_Detection_3", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCollision_Detection_3);
    aomsRelations->addRelation("itsParkingSystem_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsParkingSystem_1);
    aomsRelations->addRelation("itsTruck_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTruck_1);
    aomsRelations->addRelation("itsCharging_System", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCharging_System);
    aomsRelations->addRelation("itsEnvironment", false, true);
    if(myReal->itsEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironment);
        }
    aomsRelations->addRelation("itsLocalization", false, true);
    if(myReal->itsLocalization)
        {
            aomsRelations->ADD_ITEM(myReal->itsLocalization);
        }
    aomsRelations->addRelation("itsDockingSystem", false, true);
    if(myReal->itsDockingSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingSystem);
        }
    aomsRelations->addRelation("itsLoadingSystem", false, true);
    if(myReal->itsLoadingSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoadingSystem);
        }
    aomsRelations->addRelation("itsChargingInfrastructure", false, true);
    if(myReal->itsChargingInfrastructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsChargingInfrastructure);
        }
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsObjectDetecttion", false, true);
    if(myReal->itsObjectDetecttion)
        {
            aomsRelations->ADD_ITEM(myReal->itsObjectDetecttion);
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
    aomsRelations->addRelation("itsCharging_System_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCharging_System_1);
    aomsRelations->addRelation("itsDockingProcess_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDockingProcess_1);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(ANGELS, ANGELSPkg, ANGELSPkg, false, OMAnimatedANGELS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DockingProcess_Simulation\ANGELS.cpp
*********************************************************************/

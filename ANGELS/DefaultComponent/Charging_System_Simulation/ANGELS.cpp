/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: ANGELS
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\ANGELS.cpp
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
//## link itsSafety_Standards
#include "Safety_Standards.h"
//## link itsSafetyStandards
#include "SafetyStandards.h"
//## link itsTruck1
#include "Truck1.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ANGELS_ANGELS_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg

//## class ANGELS
ANGELS::ANGELS(IOxfActive* theActiveContext) : ChargeState(15), dt(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ANGELS, ANGELS(), 0, UseCaseAnalysisPkg_ANGELSPkg_ANGELS_ANGELS_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsLoading_Process.setShouldDelete(false);
        }
        {
            itsDocking_Process.setShouldDelete(false);
        }
        {
            itsCharging_System.setShouldDelete(false);
        }
    }
    itsChargingInfrastructure = NULL;
    itsCollision_Avoidance = NULL;
    itsCollision_Detection = NULL;
    itsCommunication_System = NULL;
    itsDC = NULL;
    itsDCOperator = NULL;
    itsDC_1 = NULL;
    itsDockingSystem = NULL;
    itsDocking_Process_1 = NULL;
    itsDriver = NULL;
    itsEnvironment = NULL;
    itsEnvironment_1 = NULL;
    itsGovernment = NULL;
    itsGovernment_1 = NULL;
    itsLoadingSystem = NULL;
    itsLoading_Process_1 = NULL;
    itsLocalisation_System = NULL;
    itsLocalization = NULL;
    itsObjectDetecttion = NULL;
    itsObjectDetecttion_1 = NULL;
    itsObstacle = NULL;
    itsObstacle_1 = NULL;
    itsParkingSystem = NULL;
    itsSafetyStandards = NULL;
    itsSafety_Standards = NULL;
    itsTruck = NULL;
    itsTruck1 = NULL;
    itsTruck_2 = NULL;
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
            p_ChargingInfrastructure->_setItsANGELS(this);
        }
    _setItsChargingInfrastructure(p_ChargingInfrastructure);
}

Charging_System* ANGELS::getItsCharging_System() const {
    return (Charging_System*) &itsCharging_System;
}

Collision_Avoidance* ANGELS::getItsCollision_Avoidance() const {
    return itsCollision_Avoidance;
}

void ANGELS::setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(p_Collision_Avoidance != NULL)
        {
            p_Collision_Avoidance->_setItsANGELS(this);
        }
    _setItsCollision_Avoidance(p_Collision_Avoidance);
}

Collision_Avoidance* ANGELS::getItsCollision_Avoidance_1() const {
    return (Collision_Avoidance*) &itsCollision_Avoidance_1;
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

Collision_Detection* ANGELS::getItsCollision_Detection_2() const {
    return (Collision_Detection*) &itsCollision_Detection_2;
}

Collision_Detection* ANGELS::getItsCollision_Detection_3() const {
    return (Collision_Detection*) &itsCollision_Detection_3;
}

Communication_System* ANGELS::getItsCommunication_System() const {
    return itsCommunication_System;
}

void ANGELS::setItsCommunication_System(Communication_System* p_Communication_System) {
    if(p_Communication_System != NULL)
        {
            p_Communication_System->_setItsANGELS(this);
        }
    _setItsCommunication_System(p_Communication_System);
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
            p_DC->_setItsANGELS(this);
        }
    _setItsDC(p_DC);
}

DCOperator* ANGELS::getItsDCOperator() const {
    return itsDCOperator;
}

void ANGELS::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsANGELS(this);
        }
    _setItsDCOperator(p_DCOperator);
}

DC* ANGELS::getItsDC_1() const {
    return itsDC_1;
}

void ANGELS::setItsDC_1(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsANGELS_1(this);
        }
    _setItsDC_1(p_DC);
}

DockingSystem* ANGELS::getItsDockingSystem() const {
    return itsDockingSystem;
}

void ANGELS::setItsDockingSystem(DockingSystem* p_DockingSystem) {
    if(p_DockingSystem != NULL)
        {
            p_DockingSystem->_setItsANGELS(this);
        }
    _setItsDockingSystem(p_DockingSystem);
}

Docking_Process* ANGELS::getItsDocking_Process() const {
    return (Docking_Process*) &itsDocking_Process;
}

Docking_Process* ANGELS::getItsDocking_Process_1() const {
    return itsDocking_Process_1;
}

void ANGELS::setItsDocking_Process_1(Docking_Process* p_Docking_Process) {
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

Driver* ANGELS::getItsDriver() const {
    return itsDriver;
}

void ANGELS::setItsDriver(Driver* p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsANGELS_1(this);
        }
    _setItsDriver(p_Driver);
}

Environment* ANGELS::getItsEnvironment() const {
    return itsEnvironment;
}

void ANGELS::setItsEnvironment(Environment* p_Environment) {
    if(p_Environment != NULL)
        {
            p_Environment->_setItsANGELS(this);
        }
    _setItsEnvironment(p_Environment);
}

Environment* ANGELS::getItsEnvironment_1() const {
    return itsEnvironment_1;
}

void ANGELS::setItsEnvironment_1(Environment* p_Environment) {
    if(p_Environment != NULL)
        {
            p_Environment->_setItsANGELS_1(this);
        }
    _setItsEnvironment_1(p_Environment);
}

Government* ANGELS::getItsGovernment() const {
    return itsGovernment;
}

void ANGELS::setItsGovernment(Government* p_Government) {
    if(p_Government != NULL)
        {
            p_Government->_setItsANGELS(this);
        }
    _setItsGovernment(p_Government);
}

Government* ANGELS::getItsGovernment_1() const {
    return itsGovernment_1;
}

void ANGELS::setItsGovernment_1(Government* p_Government) {
    if(p_Government != NULL)
        {
            p_Government->_setItsANGELS_1(this);
        }
    _setItsGovernment_1(p_Government);
}

LoadingSystem* ANGELS::getItsLoadingSystem() const {
    return itsLoadingSystem;
}

void ANGELS::setItsLoadingSystem(LoadingSystem* p_LoadingSystem) {
    if(p_LoadingSystem != NULL)
        {
            p_LoadingSystem->_setItsANGELS(this);
        }
    _setItsLoadingSystem(p_LoadingSystem);
}

Loading_Process* ANGELS::getItsLoading_Process() const {
    return (Loading_Process*) &itsLoading_Process;
}

Loading_Process* ANGELS::getItsLoading_Process_1() const {
    return itsLoading_Process_1;
}

void ANGELS::setItsLoading_Process_1(Loading_Process* p_Loading_Process) {
    if(p_Loading_Process != NULL)
        {
            p_Loading_Process->_setItsANGELS(this);
        }
    _setItsLoading_Process_1(p_Loading_Process);
}

Localisation_System* ANGELS::getItsLocalisation_System() const {
    return itsLocalisation_System;
}

void ANGELS::setItsLocalisation_System(Localisation_System* p_Localisation_System) {
    if(p_Localisation_System != NULL)
        {
            p_Localisation_System->_setItsANGELS(this);
        }
    _setItsLocalisation_System(p_Localisation_System);
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
            p_Localization->_setItsANGELS(this);
        }
    _setItsLocalization(p_Localization);
}

ObjectDetecttion* ANGELS::getItsObjectDetecttion() const {
    return itsObjectDetecttion;
}

void ANGELS::setItsObjectDetecttion(ObjectDetecttion* p_ObjectDetecttion) {
    if(p_ObjectDetecttion != NULL)
        {
            p_ObjectDetecttion->_setItsANGELS(this);
        }
    _setItsObjectDetecttion(p_ObjectDetecttion);
}

ObjectDetecttion* ANGELS::getItsObjectDetecttion_1() const {
    return itsObjectDetecttion_1;
}

void ANGELS::setItsObjectDetecttion_1(ObjectDetecttion* p_ObjectDetecttion) {
    if(p_ObjectDetecttion != NULL)
        {
            p_ObjectDetecttion->_setItsANGELS_1(this);
        }
    _setItsObjectDetecttion_1(p_ObjectDetecttion);
}

Obstacle* ANGELS::getItsObstacle() const {
    return itsObstacle;
}

void ANGELS::setItsObstacle(Obstacle* p_Obstacle) {
    if(p_Obstacle != NULL)
        {
            p_Obstacle->_setItsANGELS(this);
        }
    _setItsObstacle(p_Obstacle);
}

Obstacle* ANGELS::getItsObstacle_1() const {
    return itsObstacle_1;
}

void ANGELS::setItsObstacle_1(Obstacle* p_Obstacle) {
    if(p_Obstacle != NULL)
        {
            p_Obstacle->_setItsANGELS_1(this);
        }
    _setItsObstacle_1(p_Obstacle);
}

ParkingSystem* ANGELS::getItsParkingSystem() const {
    return itsParkingSystem;
}

void ANGELS::setItsParkingSystem(ParkingSystem* p_ParkingSystem) {
    if(p_ParkingSystem != NULL)
        {
            p_ParkingSystem->_setItsANGELS(this);
        }
    _setItsParkingSystem(p_ParkingSystem);
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
            p_SafetyStandards->_setItsANGELS(this);
        }
    _setItsSafetyStandards(p_SafetyStandards);
}

Safety_Standards* ANGELS::getItsSafety_Standards() const {
    return itsSafety_Standards;
}

void ANGELS::setItsSafety_Standards(Safety_Standards* p_Safety_Standards) {
    if(p_Safety_Standards != NULL)
        {
            p_Safety_Standards->_setItsANGELS(this);
        }
    _setItsSafety_Standards(p_Safety_Standards);
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

Truck1* ANGELS::getItsTruck1() const {
    return itsTruck1;
}

void ANGELS::setItsTruck1(Truck1* p_Truck1) {
    if(p_Truck1 != NULL)
        {
            p_Truck1->_setItsANGELS(this);
        }
    _setItsTruck1(p_Truck1);
}

Truck* ANGELS::getItsTruck_1() const {
    return (Truck*) &itsTruck_1;
}

Truck* ANGELS::getItsTruck_2() const {
    return itsTruck_2;
}

void ANGELS::setItsTruck_2(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsANGELS_1(this);
        }
    _setItsTruck_2(p_Truck);
}

bool ANGELS::startBehavior() {
    bool done = true;
    done &= itsCharging_System.startBehavior();
    done &= itsDocking_Process.startBehavior();
    done &= itsLoading_Process.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void ANGELS::cleanUpRelations() {
    if(itsChargingInfrastructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsChargingInfrastructure");
            ANGELS* p_ANGELS = itsChargingInfrastructure->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsChargingInfrastructure->__setItsANGELS(NULL);
                }
            itsChargingInfrastructure = NULL;
        }
    if(itsCollision_Avoidance != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
            ANGELS* p_ANGELS = itsCollision_Avoidance->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsCollision_Avoidance->__setItsANGELS(NULL);
                }
            itsCollision_Avoidance = NULL;
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
    if(itsCommunication_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System");
            ANGELS* p_ANGELS = itsCommunication_System->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsCommunication_System->__setItsANGELS(NULL);
                }
            itsCommunication_System = NULL;
        }
    if(itsDC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC");
            ANGELS* p_ANGELS = itsDC->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDC->__setItsANGELS(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            ANGELS* p_ANGELS = itsDCOperator->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDCOperator->__setItsANGELS(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsDC_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC_1");
            ANGELS* p_ANGELS = itsDC_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsDC_1->__setItsANGELS_1(NULL);
                }
            itsDC_1 = NULL;
        }
    if(itsDockingSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingSystem");
            ANGELS* p_ANGELS = itsDockingSystem->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDockingSystem->__setItsANGELS(NULL);
                }
            itsDockingSystem = NULL;
        }
    if(itsDocking_Process_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_Process_1");
            itsDocking_Process_1 = NULL;
        }
    if(itsDriver != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
            ANGELS* p_ANGELS = itsDriver->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsDriver->__setItsANGELS_1(NULL);
                }
            itsDriver = NULL;
        }
    if(itsEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
            ANGELS* p_ANGELS = itsEnvironment->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsEnvironment->__setItsANGELS(NULL);
                }
            itsEnvironment = NULL;
        }
    if(itsEnvironment_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment_1");
            ANGELS* p_ANGELS = itsEnvironment_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsEnvironment_1->__setItsANGELS_1(NULL);
                }
            itsEnvironment_1 = NULL;
        }
    if(itsGovernment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGovernment");
            ANGELS* p_ANGELS = itsGovernment->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsGovernment->__setItsANGELS(NULL);
                }
            itsGovernment = NULL;
        }
    if(itsGovernment_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGovernment_1");
            ANGELS* p_ANGELS = itsGovernment_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsGovernment_1->__setItsANGELS_1(NULL);
                }
            itsGovernment_1 = NULL;
        }
    if(itsLoadingSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingSystem");
            ANGELS* p_ANGELS = itsLoadingSystem->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsLoadingSystem->__setItsANGELS(NULL);
                }
            itsLoadingSystem = NULL;
        }
    if(itsLoading_Process_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoading_Process_1");
            ANGELS* p_ANGELS = itsLoading_Process_1->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsLoading_Process_1->__setItsANGELS(NULL);
                }
            itsLoading_Process_1 = NULL;
        }
    if(itsLocalisation_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLocalisation_System");
            ANGELS* p_ANGELS = itsLocalisation_System->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsLocalisation_System->__setItsANGELS(NULL);
                }
            itsLocalisation_System = NULL;
        }
    if(itsLocalization != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLocalization");
            ANGELS* p_ANGELS = itsLocalization->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsLocalization->__setItsANGELS(NULL);
                }
            itsLocalization = NULL;
        }
    if(itsObjectDetecttion != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsObjectDetecttion");
            ANGELS* p_ANGELS = itsObjectDetecttion->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsObjectDetecttion->__setItsANGELS(NULL);
                }
            itsObjectDetecttion = NULL;
        }
    if(itsObjectDetecttion_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsObjectDetecttion_1");
            ANGELS* p_ANGELS = itsObjectDetecttion_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsObjectDetecttion_1->__setItsANGELS_1(NULL);
                }
            itsObjectDetecttion_1 = NULL;
        }
    if(itsObstacle != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsObstacle");
            ANGELS* p_ANGELS = itsObstacle->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsObstacle->__setItsANGELS(NULL);
                }
            itsObstacle = NULL;
        }
    if(itsObstacle_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsObstacle_1");
            ANGELS* p_ANGELS = itsObstacle_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsObstacle_1->__setItsANGELS_1(NULL);
                }
            itsObstacle_1 = NULL;
        }
    if(itsParkingSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsParkingSystem");
            ANGELS* p_ANGELS = itsParkingSystem->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsParkingSystem->__setItsANGELS(NULL);
                }
            itsParkingSystem = NULL;
        }
    if(itsSafetyStandards != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSafetyStandards");
            ANGELS* p_ANGELS = itsSafetyStandards->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsSafetyStandards->__setItsANGELS(NULL);
                }
            itsSafetyStandards = NULL;
        }
    if(itsSafety_Standards != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSafety_Standards");
            ANGELS* p_ANGELS = itsSafety_Standards->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsSafety_Standards->__setItsANGELS(NULL);
                }
            itsSafety_Standards = NULL;
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
    if(itsTruck1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck1");
            ANGELS* p_ANGELS = itsTruck1->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsTruck1->__setItsANGELS(NULL);
                }
            itsTruck1 = NULL;
        }
    if(itsTruck_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_2");
            ANGELS* p_ANGELS = itsTruck_2->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsTruck_2->__setItsANGELS_1(NULL);
                }
            itsTruck_2 = NULL;
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
            itsChargingInfrastructure->__setItsANGELS(NULL);
        }
    __setItsChargingInfrastructure(p_ChargingInfrastructure);
}

void ANGELS::_clearItsChargingInfrastructure() {
    NOTIFY_RELATION_CLEARED("itsChargingInfrastructure");
    itsChargingInfrastructure = NULL;
}

void ANGELS::__setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    itsCollision_Avoidance = p_Collision_Avoidance;
    if(p_Collision_Avoidance != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Avoidance", p_Collision_Avoidance, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
        }
}

void ANGELS::_setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(itsCollision_Avoidance != NULL)
        {
            itsCollision_Avoidance->__setItsANGELS(NULL);
        }
    __setItsCollision_Avoidance(p_Collision_Avoidance);
}

void ANGELS::_clearItsCollision_Avoidance() {
    NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
    itsCollision_Avoidance = NULL;
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

void ANGELS::__setItsCommunication_System(Communication_System* p_Communication_System) {
    itsCommunication_System = p_Communication_System;
    if(p_Communication_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_System", p_Communication_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System");
        }
}

void ANGELS::_setItsCommunication_System(Communication_System* p_Communication_System) {
    if(itsCommunication_System != NULL)
        {
            itsCommunication_System->__setItsANGELS(NULL);
        }
    __setItsCommunication_System(p_Communication_System);
}

void ANGELS::_clearItsCommunication_System() {
    NOTIFY_RELATION_CLEARED("itsCommunication_System");
    itsCommunication_System = NULL;
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
            itsDC->__setItsANGELS(NULL);
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
            itsDCOperator->__setItsANGELS(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void ANGELS::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void ANGELS::__setItsDC_1(DC* p_DC) {
    itsDC_1 = p_DC;
    if(p_DC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDC_1", p_DC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDC_1");
        }
}

void ANGELS::_setItsDC_1(DC* p_DC) {
    if(itsDC_1 != NULL)
        {
            itsDC_1->__setItsANGELS_1(NULL);
        }
    __setItsDC_1(p_DC);
}

void ANGELS::_clearItsDC_1() {
    NOTIFY_RELATION_CLEARED("itsDC_1");
    itsDC_1 = NULL;
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
            itsDockingSystem->__setItsANGELS(NULL);
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
            itsDriver->__setItsANGELS_1(NULL);
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
            itsEnvironment->__setItsANGELS(NULL);
        }
    __setItsEnvironment(p_Environment);
}

void ANGELS::_clearItsEnvironment() {
    NOTIFY_RELATION_CLEARED("itsEnvironment");
    itsEnvironment = NULL;
}

void ANGELS::__setItsEnvironment_1(Environment* p_Environment) {
    itsEnvironment_1 = p_Environment;
    if(p_Environment != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEnvironment_1", p_Environment, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment_1");
        }
}

void ANGELS::_setItsEnvironment_1(Environment* p_Environment) {
    if(itsEnvironment_1 != NULL)
        {
            itsEnvironment_1->__setItsANGELS_1(NULL);
        }
    __setItsEnvironment_1(p_Environment);
}

void ANGELS::_clearItsEnvironment_1() {
    NOTIFY_RELATION_CLEARED("itsEnvironment_1");
    itsEnvironment_1 = NULL;
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
            itsGovernment->__setItsANGELS(NULL);
        }
    __setItsGovernment(p_Government);
}

void ANGELS::_clearItsGovernment() {
    NOTIFY_RELATION_CLEARED("itsGovernment");
    itsGovernment = NULL;
}

void ANGELS::__setItsGovernment_1(Government* p_Government) {
    itsGovernment_1 = p_Government;
    if(p_Government != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGovernment_1", p_Government, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGovernment_1");
        }
}

void ANGELS::_setItsGovernment_1(Government* p_Government) {
    if(itsGovernment_1 != NULL)
        {
            itsGovernment_1->__setItsANGELS_1(NULL);
        }
    __setItsGovernment_1(p_Government);
}

void ANGELS::_clearItsGovernment_1() {
    NOTIFY_RELATION_CLEARED("itsGovernment_1");
    itsGovernment_1 = NULL;
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
            itsLoadingSystem->__setItsANGELS(NULL);
        }
    __setItsLoadingSystem(p_LoadingSystem);
}

void ANGELS::_clearItsLoadingSystem() {
    NOTIFY_RELATION_CLEARED("itsLoadingSystem");
    itsLoadingSystem = NULL;
}

void ANGELS::__setItsLoading_Process_1(Loading_Process* p_Loading_Process) {
    itsLoading_Process_1 = p_Loading_Process;
    if(p_Loading_Process != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoading_Process_1", p_Loading_Process, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoading_Process_1");
        }
}

void ANGELS::_setItsLoading_Process_1(Loading_Process* p_Loading_Process) {
    if(itsLoading_Process_1 != NULL)
        {
            itsLoading_Process_1->__setItsANGELS(NULL);
        }
    __setItsLoading_Process_1(p_Loading_Process);
}

void ANGELS::_clearItsLoading_Process_1() {
    NOTIFY_RELATION_CLEARED("itsLoading_Process_1");
    itsLoading_Process_1 = NULL;
}

void ANGELS::__setItsLocalisation_System(Localisation_System* p_Localisation_System) {
    itsLocalisation_System = p_Localisation_System;
    if(p_Localisation_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLocalisation_System", p_Localisation_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLocalisation_System");
        }
}

void ANGELS::_setItsLocalisation_System(Localisation_System* p_Localisation_System) {
    if(itsLocalisation_System != NULL)
        {
            itsLocalisation_System->__setItsANGELS(NULL);
        }
    __setItsLocalisation_System(p_Localisation_System);
}

void ANGELS::_clearItsLocalisation_System() {
    NOTIFY_RELATION_CLEARED("itsLocalisation_System");
    itsLocalisation_System = NULL;
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
            itsLocalization->__setItsANGELS(NULL);
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
            itsObjectDetecttion->__setItsANGELS(NULL);
        }
    __setItsObjectDetecttion(p_ObjectDetecttion);
}

void ANGELS::_clearItsObjectDetecttion() {
    NOTIFY_RELATION_CLEARED("itsObjectDetecttion");
    itsObjectDetecttion = NULL;
}

void ANGELS::__setItsObjectDetecttion_1(ObjectDetecttion* p_ObjectDetecttion) {
    itsObjectDetecttion_1 = p_ObjectDetecttion;
    if(p_ObjectDetecttion != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsObjectDetecttion_1", p_ObjectDetecttion, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsObjectDetecttion_1");
        }
}

void ANGELS::_setItsObjectDetecttion_1(ObjectDetecttion* p_ObjectDetecttion) {
    if(itsObjectDetecttion_1 != NULL)
        {
            itsObjectDetecttion_1->__setItsANGELS_1(NULL);
        }
    __setItsObjectDetecttion_1(p_ObjectDetecttion);
}

void ANGELS::_clearItsObjectDetecttion_1() {
    NOTIFY_RELATION_CLEARED("itsObjectDetecttion_1");
    itsObjectDetecttion_1 = NULL;
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
            itsObstacle->__setItsANGELS(NULL);
        }
    __setItsObstacle(p_Obstacle);
}

void ANGELS::_clearItsObstacle() {
    NOTIFY_RELATION_CLEARED("itsObstacle");
    itsObstacle = NULL;
}

void ANGELS::__setItsObstacle_1(Obstacle* p_Obstacle) {
    itsObstacle_1 = p_Obstacle;
    if(p_Obstacle != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsObstacle_1", p_Obstacle, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsObstacle_1");
        }
}

void ANGELS::_setItsObstacle_1(Obstacle* p_Obstacle) {
    if(itsObstacle_1 != NULL)
        {
            itsObstacle_1->__setItsANGELS_1(NULL);
        }
    __setItsObstacle_1(p_Obstacle);
}

void ANGELS::_clearItsObstacle_1() {
    NOTIFY_RELATION_CLEARED("itsObstacle_1");
    itsObstacle_1 = NULL;
}

void ANGELS::__setItsParkingSystem(ParkingSystem* p_ParkingSystem) {
    itsParkingSystem = p_ParkingSystem;
    if(p_ParkingSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsParkingSystem", p_ParkingSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsParkingSystem");
        }
}

void ANGELS::_setItsParkingSystem(ParkingSystem* p_ParkingSystem) {
    if(itsParkingSystem != NULL)
        {
            itsParkingSystem->__setItsANGELS(NULL);
        }
    __setItsParkingSystem(p_ParkingSystem);
}

void ANGELS::_clearItsParkingSystem() {
    NOTIFY_RELATION_CLEARED("itsParkingSystem");
    itsParkingSystem = NULL;
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
            itsSafetyStandards->__setItsANGELS(NULL);
        }
    __setItsSafetyStandards(p_SafetyStandards);
}

void ANGELS::_clearItsSafetyStandards() {
    NOTIFY_RELATION_CLEARED("itsSafetyStandards");
    itsSafetyStandards = NULL;
}

void ANGELS::__setItsSafety_Standards(Safety_Standards* p_Safety_Standards) {
    itsSafety_Standards = p_Safety_Standards;
    if(p_Safety_Standards != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSafety_Standards", p_Safety_Standards, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSafety_Standards");
        }
}

void ANGELS::_setItsSafety_Standards(Safety_Standards* p_Safety_Standards) {
    if(itsSafety_Standards != NULL)
        {
            itsSafety_Standards->__setItsANGELS(NULL);
        }
    __setItsSafety_Standards(p_Safety_Standards);
}

void ANGELS::_clearItsSafety_Standards() {
    NOTIFY_RELATION_CLEARED("itsSafety_Standards");
    itsSafety_Standards = NULL;
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

void ANGELS::__setItsTruck1(Truck1* p_Truck1) {
    itsTruck1 = p_Truck1;
    if(p_Truck1 != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck1", p_Truck1, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck1");
        }
}

void ANGELS::_setItsTruck1(Truck1* p_Truck1) {
    if(itsTruck1 != NULL)
        {
            itsTruck1->__setItsANGELS(NULL);
        }
    __setItsTruck1(p_Truck1);
}

void ANGELS::_clearItsTruck1() {
    NOTIFY_RELATION_CLEARED("itsTruck1");
    itsTruck1 = NULL;
}

void ANGELS::__setItsTruck_2(Truck* p_Truck) {
    itsTruck_2 = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck_2", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck_2");
        }
}

void ANGELS::_setItsTruck_2(Truck* p_Truck) {
    if(itsTruck_2 != NULL)
        {
            itsTruck_2->__setItsANGELS_1(NULL);
        }
    __setItsTruck_2(p_Truck);
}

void ANGELS::_clearItsTruck_2() {
    NOTIFY_RELATION_CLEARED("itsTruck_2");
    itsTruck_2 = NULL;
}

void ANGELS::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsLoading_Process.setActiveContext(theActiveContext, false);
        itsDocking_Process.setActiveContext(theActiveContext, false);
        itsCharging_System.setActiveContext(theActiveContext, false);
    }
}

void ANGELS::destroy() {
    itsCharging_System.destroy();
    itsDocking_Process.destroy();
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
    aomsRelations->addRelation("itsCollision_Avoidance", false, true);
    if(myReal->itsCollision_Avoidance)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Avoidance);
        }
    aomsRelations->addRelation("itsCommunication_System", false, true);
    if(myReal->itsCommunication_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_System);
        }
    aomsRelations->addRelation("itsCollision_Detection", false, true);
    if(myReal->itsCollision_Detection)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Detection);
        }
    aomsRelations->addRelation("itsLoading_Process_1", false, true);
    if(myReal->itsLoading_Process_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoading_Process_1);
        }
    aomsRelations->addRelation("itsSafety_Standards", false, true);
    if(myReal->itsSafety_Standards)
        {
            aomsRelations->ADD_ITEM(myReal->itsSafety_Standards);
        }
    aomsRelations->addRelation("itsParkingSystem", false, true);
    if(myReal->itsParkingSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsParkingSystem);
        }
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsLocalisation_System", false, true);
    if(myReal->itsLocalisation_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsLocalisation_System);
        }
    aomsRelations->addRelation("itsDocking_Process_1", false, true);
    if(myReal->itsDocking_Process_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_Process_1);
        }
    aomsRelations->addRelation("itsGovernment", false, true);
    if(myReal->itsGovernment)
        {
            aomsRelations->ADD_ITEM(myReal->itsGovernment);
        }
    aomsRelations->addRelation("itsDC", false, true);
    if(myReal->itsDC)
        {
            aomsRelations->ADD_ITEM(myReal->itsDC);
        }
    aomsRelations->addRelation("itsDCOperator", false, true);
    if(myReal->itsDCOperator)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator);
        }
    aomsRelations->addRelation("itsCollision_Avoidance_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCollision_Avoidance_1);
    aomsRelations->addRelation("itsLoading_Process", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLoading_Process);
    aomsRelations->addRelation("itsCommunication_System_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCommunication_System_1);
    aomsRelations->addRelation("itsCollision_Detection_2", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCollision_Detection_2);
    aomsRelations->addRelation("itsDocking_Process", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDocking_Process);
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
    aomsRelations->addRelation("itsDriver", false, true);
    if(myReal->itsDriver)
        {
            aomsRelations->ADD_ITEM(myReal->itsDriver);
        }
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
    aomsRelations->addRelation("itsGovernment_1", false, true);
    if(myReal->itsGovernment_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsGovernment_1);
        }
    aomsRelations->addRelation("itsObstacle", false, true);
    if(myReal->itsObstacle)
        {
            aomsRelations->ADD_ITEM(myReal->itsObstacle);
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
    aomsRelations->addRelation("itsTruck1", false, true);
    if(myReal->itsTruck1)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck1);
        }
    aomsRelations->addRelation("itsObjectDetecttion", false, true);
    if(myReal->itsObjectDetecttion)
        {
            aomsRelations->ADD_ITEM(myReal->itsObjectDetecttion);
        }
    aomsRelations->addRelation("itsEnvironment_1", false, true);
    if(myReal->itsEnvironment_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironment_1);
        }
    aomsRelations->addRelation("itsSafetyStandards", false, true);
    if(myReal->itsSafetyStandards)
        {
            aomsRelations->ADD_ITEM(myReal->itsSafetyStandards);
        }
    aomsRelations->addRelation("itsObstacle_1", false, true);
    if(myReal->itsObstacle_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsObstacle_1);
        }
    aomsRelations->addRelation("itsObjectDetecttion_1", false, true);
    if(myReal->itsObjectDetecttion_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsObjectDetecttion_1);
        }
    aomsRelations->addRelation("itsTruck_2", false, true);
    if(myReal->itsTruck_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck_2);
        }
    aomsRelations->addRelation("itsDC_1", false, true);
    if(myReal->itsDC_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDC_1);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(ANGELS, UseCaseAnalysisPkg_ANGELSPkg, UseCaseAnalysisPkg::ANGELSPkg, false, OMAnimatedANGELS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\ANGELS.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ANGELS
//!	Generated Date	: Wed, 13, May 2020  
	File Path	: DefaultComponent\DefaultConfig\ANGELS.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "ANGELS.h"
//## link itsDC
#include "DC.h"
//## link itsDCOperator
#include "DCOperator.h"
//## link itsGovernment
#include "Government.h"
//## link itsSafety_Standards
#include "Safety_Standards.h"
//## package UseCaseAnalysisPkg::ANGELSPkg

//## class ANGELS
ANGELS::ANGELS(IOxfActive* theActiveContext) : ChargingState(15), dt(10) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsLoading_System_1.setShouldDelete(false);
        }
        {
            itsDocking_System_1.setShouldDelete(false);
        }
        {
            itsCharging_System.setShouldDelete(false);
        }
    }
    itsCollision_Avoidance = NULL;
    itsCollision_Detection = NULL;
    itsCommunication_System = NULL;
    itsDC = NULL;
    itsDCOperator = NULL;
    itsDocking_System = NULL;
    itsGovernment = NULL;
    itsLoading_System = NULL;
    itsLocalisation_System = NULL;
    itsParkingSystem = NULL;
    itsSafety_Standards = NULL;
    itsTruck = NULL;
}

ANGELS::~ANGELS() {
    cleanUpRelations();
}

double ANGELS::getChargingState() const {
    return ChargingState;
}

void ANGELS::setChargingState(double p_ChargingState) {
    ChargingState = p_ChargingState;
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

Docking_System* ANGELS::getItsDocking_System() const {
    return itsDocking_System;
}

void ANGELS::setItsDocking_System(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsANGELS(this);
        }
    _setItsDocking_System(p_Docking_System);
}

Docking_System* ANGELS::getItsDocking_System_1() const {
    return (Docking_System*) &itsDocking_System_1;
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

Loading_System* ANGELS::getItsLoading_System() const {
    return itsLoading_System;
}

void ANGELS::setItsLoading_System(Loading_System* p_Loading_System) {
    if(p_Loading_System != NULL)
        {
            p_Loading_System->_setItsANGELS(this);
        }
    _setItsLoading_System(p_Loading_System);
}

Loading_System* ANGELS::getItsLoading_System_1() const {
    return (Loading_System*) &itsLoading_System_1;
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

Truck* ANGELS::getItsTruck_1() const {
    return (Truck*) &itsTruck_1;
}

bool ANGELS::startBehavior() {
    bool done = true;
    done &= itsCharging_System.startBehavior();
    done &= itsDocking_System_1.startBehavior();
    done &= itsLoading_System_1.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void ANGELS::cleanUpRelations() {
    if(itsCollision_Avoidance != NULL)
        {
            ANGELS* p_ANGELS = itsCollision_Avoidance->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsCollision_Avoidance->__setItsANGELS(NULL);
                }
            itsCollision_Avoidance = NULL;
        }
    if(itsCollision_Detection != NULL)
        {
            ANGELS* p_ANGELS = itsCollision_Detection->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsCollision_Detection->__setItsANGELS(NULL);
                }
            itsCollision_Detection = NULL;
        }
    if(itsCommunication_System != NULL)
        {
            ANGELS* p_ANGELS = itsCommunication_System->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsCommunication_System->__setItsANGELS(NULL);
                }
            itsCommunication_System = NULL;
        }
    if(itsDC != NULL)
        {
            ANGELS* p_ANGELS = itsDC->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDC->__setItsANGELS(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            ANGELS* p_ANGELS = itsDCOperator->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDCOperator->__setItsANGELS(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsDocking_System != NULL)
        {
            ANGELS* p_ANGELS = itsDocking_System->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDocking_System->__setItsANGELS(NULL);
                }
            itsDocking_System = NULL;
        }
    if(itsGovernment != NULL)
        {
            ANGELS* p_ANGELS = itsGovernment->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsGovernment->__setItsANGELS(NULL);
                }
            itsGovernment = NULL;
        }
    if(itsLoading_System != NULL)
        {
            ANGELS* p_ANGELS = itsLoading_System->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsLoading_System->__setItsANGELS(NULL);
                }
            itsLoading_System = NULL;
        }
    if(itsLocalisation_System != NULL)
        {
            ANGELS* p_ANGELS = itsLocalisation_System->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsLocalisation_System->__setItsANGELS(NULL);
                }
            itsLocalisation_System = NULL;
        }
    if(itsParkingSystem != NULL)
        {
            ANGELS* p_ANGELS = itsParkingSystem->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsParkingSystem->__setItsANGELS(NULL);
                }
            itsParkingSystem = NULL;
        }
    if(itsSafety_Standards != NULL)
        {
            ANGELS* p_ANGELS = itsSafety_Standards->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsSafety_Standards->__setItsANGELS(NULL);
                }
            itsSafety_Standards = NULL;
        }
    if(itsTruck != NULL)
        {
            ANGELS* p_ANGELS = itsTruck->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsTruck->__setItsANGELS(NULL);
                }
            itsTruck = NULL;
        }
}

void ANGELS::__setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    itsCollision_Avoidance = p_Collision_Avoidance;
}

void ANGELS::_setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(itsCollision_Avoidance != NULL)
        {
            itsCollision_Avoidance->__setItsANGELS(NULL);
        }
    __setItsCollision_Avoidance(p_Collision_Avoidance);
}

void ANGELS::_clearItsCollision_Avoidance() {
    itsCollision_Avoidance = NULL;
}

void ANGELS::__setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    itsCollision_Detection = p_Collision_Detection;
}

void ANGELS::_setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection != NULL)
        {
            itsCollision_Detection->__setItsANGELS(NULL);
        }
    __setItsCollision_Detection(p_Collision_Detection);
}

void ANGELS::_clearItsCollision_Detection() {
    itsCollision_Detection = NULL;
}

void ANGELS::__setItsCommunication_System(Communication_System* p_Communication_System) {
    itsCommunication_System = p_Communication_System;
}

void ANGELS::_setItsCommunication_System(Communication_System* p_Communication_System) {
    if(itsCommunication_System != NULL)
        {
            itsCommunication_System->__setItsANGELS(NULL);
        }
    __setItsCommunication_System(p_Communication_System);
}

void ANGELS::_clearItsCommunication_System() {
    itsCommunication_System = NULL;
}

void ANGELS::__setItsDC(DC* p_DC) {
    itsDC = p_DC;
}

void ANGELS::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsANGELS(NULL);
        }
    __setItsDC(p_DC);
}

void ANGELS::_clearItsDC() {
    itsDC = NULL;
}

void ANGELS::__setItsDCOperator(DCOperator* p_DCOperator) {
    itsDCOperator = p_DCOperator;
}

void ANGELS::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsANGELS(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void ANGELS::_clearItsDCOperator() {
    itsDCOperator = NULL;
}

void ANGELS::__setItsDocking_System(Docking_System* p_Docking_System) {
    itsDocking_System = p_Docking_System;
}

void ANGELS::_setItsDocking_System(Docking_System* p_Docking_System) {
    if(itsDocking_System != NULL)
        {
            itsDocking_System->__setItsANGELS(NULL);
        }
    __setItsDocking_System(p_Docking_System);
}

void ANGELS::_clearItsDocking_System() {
    itsDocking_System = NULL;
}

void ANGELS::__setItsGovernment(Government* p_Government) {
    itsGovernment = p_Government;
}

void ANGELS::_setItsGovernment(Government* p_Government) {
    if(itsGovernment != NULL)
        {
            itsGovernment->__setItsANGELS(NULL);
        }
    __setItsGovernment(p_Government);
}

void ANGELS::_clearItsGovernment() {
    itsGovernment = NULL;
}

void ANGELS::__setItsLoading_System(Loading_System* p_Loading_System) {
    itsLoading_System = p_Loading_System;
}

void ANGELS::_setItsLoading_System(Loading_System* p_Loading_System) {
    if(itsLoading_System != NULL)
        {
            itsLoading_System->__setItsANGELS(NULL);
        }
    __setItsLoading_System(p_Loading_System);
}

void ANGELS::_clearItsLoading_System() {
    itsLoading_System = NULL;
}

void ANGELS::__setItsLocalisation_System(Localisation_System* p_Localisation_System) {
    itsLocalisation_System = p_Localisation_System;
}

void ANGELS::_setItsLocalisation_System(Localisation_System* p_Localisation_System) {
    if(itsLocalisation_System != NULL)
        {
            itsLocalisation_System->__setItsANGELS(NULL);
        }
    __setItsLocalisation_System(p_Localisation_System);
}

void ANGELS::_clearItsLocalisation_System() {
    itsLocalisation_System = NULL;
}

void ANGELS::__setItsParkingSystem(ParkingSystem* p_ParkingSystem) {
    itsParkingSystem = p_ParkingSystem;
}

void ANGELS::_setItsParkingSystem(ParkingSystem* p_ParkingSystem) {
    if(itsParkingSystem != NULL)
        {
            itsParkingSystem->__setItsANGELS(NULL);
        }
    __setItsParkingSystem(p_ParkingSystem);
}

void ANGELS::_clearItsParkingSystem() {
    itsParkingSystem = NULL;
}

void ANGELS::__setItsSafety_Standards(Safety_Standards* p_Safety_Standards) {
    itsSafety_Standards = p_Safety_Standards;
}

void ANGELS::_setItsSafety_Standards(Safety_Standards* p_Safety_Standards) {
    if(itsSafety_Standards != NULL)
        {
            itsSafety_Standards->__setItsANGELS(NULL);
        }
    __setItsSafety_Standards(p_Safety_Standards);
}

void ANGELS::_clearItsSafety_Standards() {
    itsSafety_Standards = NULL;
}

void ANGELS::__setItsTruck(Truck* p_Truck) {
    itsTruck = p_Truck;
}

void ANGELS::_setItsTruck(Truck* p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsANGELS(NULL);
        }
    __setItsTruck(p_Truck);
}

void ANGELS::_clearItsTruck() {
    itsTruck = NULL;
}

void ANGELS::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsLoading_System_1.setActiveContext(theActiveContext, false);
        itsDocking_System_1.setActiveContext(theActiveContext, false);
        itsCharging_System.setActiveContext(theActiveContext, false);
    }
}

void ANGELS::destroy() {
    itsCharging_System.destroy();
    itsDocking_System_1.destroy();
    itsLoading_System_1.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ANGELS.cpp
*********************************************************************/

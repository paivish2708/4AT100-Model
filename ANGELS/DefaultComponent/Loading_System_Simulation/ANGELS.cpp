/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: ANGELS
//!	Generated Date	: Wed, 13, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\ANGELS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

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
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ANGELS_ANGELS_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg

//## class ANGELS
ANGELS::ANGELS(IOxfActive* theActiveContext) : ChargingState(15), dt(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ANGELS, ANGELS(), 0, UseCaseAnalysisPkg_ANGELSPkg_ANGELS_ANGELS_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsLoading_System_1.setShouldDelete(false);
        }
        {
            itsDocking_System_1.setShouldDelete(false);
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
    NOTIFY_DESTRUCTOR(~ANGELS, true);
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
    done &= itsDocking_System_1.startBehavior();
    done &= itsLoading_System_1.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void ANGELS::cleanUpRelations() {
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
    if(itsDocking_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System");
            ANGELS* p_ANGELS = itsDocking_System->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDocking_System->__setItsANGELS(NULL);
                }
            itsDocking_System = NULL;
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
    if(itsLoading_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoading_System");
            ANGELS* p_ANGELS = itsLoading_System->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsLoading_System->__setItsANGELS(NULL);
                }
            itsLoading_System = NULL;
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

void ANGELS::__setItsDocking_System(Docking_System* p_Docking_System) {
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

void ANGELS::_setItsDocking_System(Docking_System* p_Docking_System) {
    if(itsDocking_System != NULL)
        {
            itsDocking_System->__setItsANGELS(NULL);
        }
    __setItsDocking_System(p_Docking_System);
}

void ANGELS::_clearItsDocking_System() {
    NOTIFY_RELATION_CLEARED("itsDocking_System");
    itsDocking_System = NULL;
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

void ANGELS::__setItsLoading_System(Loading_System* p_Loading_System) {
    itsLoading_System = p_Loading_System;
    if(p_Loading_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoading_System", p_Loading_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoading_System");
        }
}

void ANGELS::_setItsLoading_System(Loading_System* p_Loading_System) {
    if(itsLoading_System != NULL)
        {
            itsLoading_System->__setItsANGELS(NULL);
        }
    __setItsLoading_System(p_Loading_System);
}

void ANGELS::_clearItsLoading_System() {
    NOTIFY_RELATION_CLEARED("itsLoading_System");
    itsLoading_System = NULL;
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

void ANGELS::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsLoading_System_1.setActiveContext(theActiveContext, false);
        itsDocking_System_1.setActiveContext(theActiveContext, false);
    }
}

void ANGELS::destroy() {
    itsDocking_System_1.destroy();
    itsLoading_System_1.destroy();
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
    aomsAttributes->addAttribute("ChargingState", x2String(myReal->ChargingState));
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
    aomsRelations->addRelation("itsLoading_System", false, true);
    if(myReal->itsLoading_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoading_System);
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
    aomsRelations->addRelation("itsDocking_System", false, true);
    if(myReal->itsDocking_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System);
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
    aomsRelations->addRelation("itsLoading_System_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLoading_System_1);
    aomsRelations->addRelation("itsCommunication_System_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCommunication_System_1);
    aomsRelations->addRelation("itsCollision_Detection_2", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCollision_Detection_2);
    aomsRelations->addRelation("itsDocking_System_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDocking_System_1);
    aomsRelations->addRelation("itsLocalisation_System_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLocalisation_System_1);
    aomsRelations->addRelation("itsCollision_Detection_3", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCollision_Detection_3);
    aomsRelations->addRelation("itsParkingSystem_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsParkingSystem_1);
    aomsRelations->addRelation("itsTruck_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTruck_1);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(ANGELS, UseCaseAnalysisPkg_ANGELSPkg, UseCaseAnalysisPkg::ANGELSPkg, false, OMAnimatedANGELS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\ANGELS.cpp
*********************************************************************/

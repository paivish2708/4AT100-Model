/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Docking_System
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Docking_System.cpp
*********************************************************************/

//## auto_generated
#include "Docking_System.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDCOperator
#include "DCOperator.h"
//## auto_generated
#include <oxf\omthread.h>
//## link itsCollision_Avoidance_1
#include "Collision_Avoidance.h"
//## link itsCollision_Detection_1
#include "Collision_Detection.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg

//## class Docking_System
Docking_System::Docking_System(IOxfActive* theActiveContext) : DSInput(1), DockingStatus(0), DockingTime(10), Doorstatus(1), Speed(15), SteerAngle(10) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsLoading_System.setShouldDelete(false);
        }
    }
    itsANGELS = NULL;
    itsCollision_Avoidance_1 = NULL;
    itsCollision_Detection_1 = NULL;
    itsDCOperator = NULL;
    itsDCOperator_1 = NULL;
    itsTruck_1 = NULL;
    initStatechart();
}

Docking_System::~Docking_System() {
    cleanUpRelations();
    cancelTimeouts();
}

void Docking_System::MoveTruck(double SteeringAngle, double speed, double DockingStatus) {
    //#[ operation MoveTruck(double,double,double)
    if (DockingStatus !=1)
    {SteeringAngle = SteerAngle;
    speed = Speed;}
    else
    { 
    SteerAngle = 0;
    Speed = 0;}  
    
    //#]
}

ANGELS* Docking_System::getItsANGELS() const {
    return itsANGELS;
}

void Docking_System::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDocking_System(this);
        }
    _setItsANGELS(p_ANGELS);
}

Collision_Avoidance* Docking_System::getItsCollision_Avoidance_1() const {
    return itsCollision_Avoidance_1;
}

void Docking_System::setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance) {
    if(p_Collision_Avoidance != NULL)
        {
            p_Collision_Avoidance->_setItsDocking_System(this);
        }
    _setItsCollision_Avoidance_1(p_Collision_Avoidance);
}

Collision_Detection* Docking_System::getItsCollision_Detection_1() const {
    return itsCollision_Detection_1;
}

void Docking_System::setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsDocking_System(this);
        }
    _setItsCollision_Detection_1(p_Collision_Detection);
}

DCOperator* Docking_System::getItsDCOperator() const {
    return itsDCOperator;
}

void Docking_System::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsDocking_System(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Truck* Docking_System::getItsTruck() const {
    return (Truck*) &itsTruck;
}

Truck* Docking_System::getItsTruck_1() const {
    return itsTruck_1;
}

void Docking_System::setItsTruck_1(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDocking_System(this);
        }
    _setItsTruck_1(p_Truck);
}

bool Docking_System::startBehavior() {
    bool done = true;
    done &= itsLoading_System.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Docking_System::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Docking_subState = OMNonState;
    Docking_timeout = NULL;
}

void Docking_System::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            Docking_System* p_Docking_System = itsANGELS->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsANGELS->__setItsDocking_System(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsCollision_Avoidance_1 != NULL)
        {
            Docking_System* p_Docking_System = itsCollision_Avoidance_1->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsCollision_Avoidance_1->__setItsDocking_System(NULL);
                }
            itsCollision_Avoidance_1 = NULL;
        }
    if(itsCollision_Detection_1 != NULL)
        {
            Docking_System* p_Docking_System = itsCollision_Detection_1->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsCollision_Detection_1->__setItsDocking_System(NULL);
                }
            itsCollision_Detection_1 = NULL;
        }
    if(itsDCOperator != NULL)
        {
            Docking_System* p_Docking_System = itsDCOperator->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsDCOperator->__setItsDocking_System(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsDCOperator_1 != NULL)
        {
            Docking_System* p_Docking_System = itsDCOperator_1->getItsDocking_System_1();
            if(p_Docking_System != NULL)
                {
                    itsDCOperator_1->__setItsDocking_System_1(NULL);
                }
            itsDCOperator_1 = NULL;
        }
    if(itsTruck_1 != NULL)
        {
            Docking_System* p_Docking_System = itsTruck_1->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsTruck_1->__setItsDocking_System(NULL);
                }
            itsTruck_1 = NULL;
        }
}

void Docking_System::cancelTimeouts() {
    cancel(Docking_timeout);
}

bool Docking_System::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Docking_timeout == arg)
        {
            Docking_timeout = NULL;
            res = true;
        }
    return res;
}

void Docking_System::__setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
}

void Docking_System::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsDocking_System(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Docking_System::_clearItsANGELS() {
    itsANGELS = NULL;
}

void Docking_System::__setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance) {
    itsCollision_Avoidance_1 = p_Collision_Avoidance;
}

void Docking_System::_setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance) {
    if(itsCollision_Avoidance_1 != NULL)
        {
            itsCollision_Avoidance_1->__setItsDocking_System(NULL);
        }
    __setItsCollision_Avoidance_1(p_Collision_Avoidance);
}

void Docking_System::_clearItsCollision_Avoidance_1() {
    itsCollision_Avoidance_1 = NULL;
}

void Docking_System::__setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    itsCollision_Detection_1 = p_Collision_Detection;
}

void Docking_System::_setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection_1 != NULL)
        {
            itsCollision_Detection_1->__setItsDocking_System(NULL);
        }
    __setItsCollision_Detection_1(p_Collision_Detection);
}

void Docking_System::_clearItsCollision_Detection_1() {
    itsCollision_Detection_1 = NULL;
}

void Docking_System::__setItsDCOperator(DCOperator* p_DCOperator) {
    itsDCOperator = p_DCOperator;
}

void Docking_System::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsDocking_System(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void Docking_System::_clearItsDCOperator() {
    itsDCOperator = NULL;
}

void Docking_System::__setItsTruck_1(Truck* p_Truck) {
    itsTruck_1 = p_Truck;
}

void Docking_System::_setItsTruck_1(Truck* p_Truck) {
    if(itsTruck_1 != NULL)
        {
            itsTruck_1->__setItsDocking_System(NULL);
        }
    __setItsTruck_1(p_Truck);
}

void Docking_System::_clearItsTruck_1() {
    itsTruck_1 = NULL;
}

void Docking_System::CheckDockingStatus() {
    //#[ operation CheckDockingStatus()
    if (DockingStatus != 0)
    {   Speed = 0;
        SteerAngle = 0 ; }
     
    //#]
}

void Docking_System::DockInput(double DS) {
    //#[ operation DockInput(double)
    DSInput = DS;
    //#]
}

double Docking_System::getDSInput() const {
    return DSInput;
}

void Docking_System::setDSInput(double p_DSInput) {
    DSInput = p_DSInput;
}

double Docking_System::getDockingStatus() const {
    return DockingStatus;
}

void Docking_System::setDockingStatus(double p_DockingStatus) {
    DockingStatus = p_DockingStatus;
}

double Docking_System::getDockingTime() const {
    return DockingTime;
}

void Docking_System::setDockingTime(double p_DockingTime) {
    DockingTime = p_DockingTime;
}

RhpBoolean Docking_System::getDoorstatus() const {
    return Doorstatus;
}

void Docking_System::setDoorstatus(RhpBoolean p_Doorstatus) {
    Doorstatus = p_Doorstatus;
}

double Docking_System::getSpeed() const {
    return Speed;
}

void Docking_System::setSpeed(double p_Speed) {
    Speed = p_Speed;
}

double Docking_System::getSteerAngle() const {
    return SteerAngle;
}

void Docking_System::setSteerAngle(double p_SteerAngle) {
    SteerAngle = p_SteerAngle;
}

DCOperator* Docking_System::getItsDCOperator_1() const {
    return itsDCOperator_1;
}

void Docking_System::setItsDCOperator_1(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsDocking_System_1(this);
        }
    _setItsDCOperator_1(p_DCOperator);
}

Loading_System* Docking_System::getItsLoading_System() const {
    return (Loading_System*) &itsLoading_System;
}

void Docking_System::__setItsDCOperator_1(DCOperator* p_DCOperator) {
    itsDCOperator_1 = p_DCOperator;
}

void Docking_System::_setItsDCOperator_1(DCOperator* p_DCOperator) {
    if(itsDCOperator_1 != NULL)
        {
            itsDCOperator_1->__setItsDocking_System_1(NULL);
        }
    __setItsDCOperator_1(p_DCOperator);
}

void Docking_System::_clearItsDCOperator_1() {
    itsDCOperator_1 = NULL;
}

void Docking_System::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsLoading_System.setActiveContext(theActiveContext, false);
    }
}

void Docking_System::destroy() {
    itsLoading_System.destroy();
    OMReactive::destroy();
}

void Docking_System::rootState_entDef() {
    {
        rootState_subState = ManualState;
        rootState_active = ManualState;
    }
}

IOxfReactive::TakeEventStatus Docking_System::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State ManualState
        case ManualState:
        {
            if(IS_EVENT_TYPE_OF(Autonomousmode_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    rootState_subState = AutonomousState;
                    rootState_active = AutonomousState;
                    res = eventConsumed;
                }
            
        }
        break;
        // State AutonomousState
        case AutonomousState:
        {
            if(IS_EVENT_TYPE_OF(StartDockingProcedure_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    //#[ transition 2 
                    DockInput(2);
                    //#]
                    Docking_entDef();
                    res = eventConsumed;
                }
            
        }
        break;
        // State MoveTheTruck
        case MoveTheTruck:
        {
            if(IS_EVENT_TYPE_OF(EndDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    switch (Docking_subState) {
                        // State MoveTheTruck
                        case MoveTheTruck:
                        {
                            cancel(Docking_timeout);
                        }
                        break;
                        
                        default:
                            break;
                    }
                    Docking_subState = OMNonState;
                    //#[ transition 7 
                    MoveTruck(0,0,1);
                    //#]
                    pushNullTransition();
                    rootState_subState = IdleTruck;
                    rootState_active = IdleTruck;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Docking_timeout)
                        {
                            cancel(Docking_timeout);
                            //#[ transition 5 
                            CheckDockingStatus();
                            DockingTime++;
                            //#]
                            Docking_subState = MoveTheTruck;
                            rootState_active = MoveTheTruck;
                            Docking_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(TruckDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State BeginMovement
        case BeginMovement:
        {
            if(IS_EVENT_TYPE_OF(BeginTruckMovement_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    Docking_subState = MoveTheTruck;
                    rootState_active = MoveTheTruck;
                    Docking_timeout = scheduleTimeout(1000, NULL);
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State IdleTruck
        case IdleTruck:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = terminationstate_7;
                    rootState_active = terminationstate_7;
                    res = eventConsumed;
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

void Docking_System::Docking_entDef() {
    rootState_subState = Docking;
    Docking_subState = BeginMovement;
    rootState_active = BeginMovement;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Docking_System.cpp
*********************************************************************/

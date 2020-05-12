/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Docking_System
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Docking_System.h
*********************************************************************/

#ifndef Docking_System_H
#define Docking_System_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "DockingSystemPkg.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsCollision_Avoidance_1
class Collision_Avoidance;

//## link itsCollision_Detection_1
class Collision_Detection;

//## classInstance itsTruck
#include "Truck.h"
//## classInstance itsLoading_System
#include "Loading_System.h"
//## link itsDCOperator
class DCOperator;

//## link itsANGELS
class ANGELS;

//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg

//## class Docking_System
class Docking_System : public OMReactive {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Docking_System(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Docking_System();
    
    ////    Operations    ////
    
    //## operation MoveTruck(double,double,double)
    virtual void MoveTruck(double SteeringAngle, double speed, double DockingStatus);
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    Collision_Avoidance* getItsCollision_Avoidance_1() const;
    
    //## auto_generated
    void setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection_1() const;
    
    //## auto_generated
    void setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    Truck* getItsTruck_1() const;
    
    //## auto_generated
    void setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    Collision_Avoidance* itsCollision_Avoidance_1;		//## link itsCollision_Avoidance_1
    
    Collision_Detection* itsCollision_Detection_1;		//## link itsCollision_Detection_1
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Truck* itsTruck_1;		//## link itsTruck_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
    
    //## auto_generated
    void __setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _clearItsCollision_Avoidance_1();
    
    //## auto_generated
    void __setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _clearItsCollision_Detection_1();
    
    //## auto_generated
    void __setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator();
    
    //## auto_generated
    void __setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck_1();
    
    ////    Framework    ////
    
    //## operation CheckDockingStatus()
    virtual void CheckDockingStatus();
    
    //## operation DockInput(double)
    virtual void DockInput(double DS);
    
    //## auto_generated
    double getDSInput() const;
    
    //## auto_generated
    void setDSInput(double p_DSInput);
    
    //## auto_generated
    double getDockingStatus() const;
    
    //## auto_generated
    void setDockingStatus(double p_DockingStatus);
    
    //## auto_generated
    double getDockingTime() const;
    
    //## auto_generated
    void setDockingTime(double p_DockingTime);
    
    //## auto_generated
    RhpBoolean getDoorstatus() const;
    
    //## auto_generated
    void setDoorstatus(RhpBoolean p_Doorstatus);
    
    //## auto_generated
    double getSpeed() const;
    
    //## auto_generated
    void setSpeed(double p_Speed);
    
    //## auto_generated
    double getSteerAngle() const;
    
    //## auto_generated
    void setSteerAngle(double p_SteerAngle);
    
    //## auto_generated
    DCOperator* getItsDCOperator_1() const;
    
    //## auto_generated
    void setItsDCOperator_1(DCOperator* p_DCOperator);
    
    //## auto_generated
    Loading_System* getItsLoading_System() const;

protected :

    double DSInput;		//## attribute DSInput
    
    double DockingStatus;		//## attribute DockingStatus
    
    double DockingTime;		//## attribute DockingTime
    
    RhpBoolean Doorstatus;		//## attribute Doorstatus
    
    double Speed;		//## attribute Speed
    
    double SteerAngle;		//## attribute SteerAngle
    
    DCOperator* itsDCOperator_1;		//## link itsDCOperator_1
    
    Loading_System itsLoading_System;		//## classInstance itsLoading_System
    
    Truck itsTruck;		//## classInstance itsTruck

public :

    //## auto_generated
    void __setItsDCOperator_1(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator_1(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator_1();
    
    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // terminationstate_7:
    //## statechart_method
    inline bool terminationstate_7_IN() const;
    
    // ManualState:
    //## statechart_method
    inline bool ManualState_IN() const;
    
    // IdleTruck:
    //## statechart_method
    inline bool IdleTruck_IN() const;
    
    // Docking:
    //## statechart_method
    inline bool Docking_IN() const;
    
    //## statechart_method
    void Docking_entDef();
    
    // MoveTheTruck:
    //## statechart_method
    inline bool MoveTheTruck_IN() const;
    
    // BeginMovement:
    //## statechart_method
    inline bool BeginMovement_IN() const;
    
    // AutonomousState:
    //## statechart_method
    inline bool AutonomousState_IN() const;

protected :

//#[ ignore
    enum Docking_System_Enum {
        OMNonState = 0,
        terminationstate_7 = 1,
        ManualState = 2,
        IdleTruck = 3,
        Docking = 4,
        MoveTheTruck = 5,
        BeginMovement = 6,
        AutonomousState = 7
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int Docking_subState;
    
    IOxfTimeout* Docking_timeout;
//#]
};

inline bool Docking_System::rootState_IN() const {
    return true;
}

inline bool Docking_System::rootState_isCompleted() {
    return ( IS_IN(terminationstate_7) );
}

inline bool Docking_System::terminationstate_7_IN() const {
    return rootState_subState == terminationstate_7;
}

inline bool Docking_System::ManualState_IN() const {
    return rootState_subState == ManualState;
}

inline bool Docking_System::IdleTruck_IN() const {
    return rootState_subState == IdleTruck;
}

inline bool Docking_System::Docking_IN() const {
    return rootState_subState == Docking;
}

inline bool Docking_System::MoveTheTruck_IN() const {
    return Docking_subState == MoveTheTruck;
}

inline bool Docking_System::BeginMovement_IN() const {
    return Docking_subState == BeginMovement;
}

inline bool Docking_System::AutonomousState_IN() const {
    return rootState_subState == AutonomousState;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Docking_System.h
*********************************************************************/

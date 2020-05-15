/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcess_Simulation
	Model Element	: DockingProcess
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\DockingProcess_Simulation\DockingProcess.h
*********************************************************************/

#ifndef DockingProcess_H
#define DockingProcess_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsTruck
#include "Truck.h"
//## auto_generated
#include "DockingProcessPkg.h"
//## classInstance itsLoading_Process
#include "Loading_Process.h"
//## link itsDCOperator
class DCOperator;

//## link itsANGELS
class ANGELS;

//## package ANGELSPkg::DockingProcessPkg

//## class DockingProcess
class DockingProcess : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDockingProcess;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
    //## operation MoveTruck(double,double,double)
    virtual void MoveTruck(double SteeringAngle, double speed, double DockingState);
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
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
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator();
    
    ////    Framework    ////
    
    //## auto_generated
    DockingProcess(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~DockingProcess();
    
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
    Loading_Process* getItsLoading_Process() const;

protected :

    double DSInput;		//## attribute DSInput
    
    double DockingStatus;		//## attribute DockingStatus
    
    double DockingTime;		//## attribute DockingTime
    
    RhpBoolean Doorstatus;		//## attribute Doorstatus
    
    double Speed;		//## attribute Speed
    
    double SteerAngle;		//## attribute SteerAngle
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    Loading_Process itsLoading_Process;		//## classInstance itsLoading_Process
    
    Truck itsTruck;		//## classInstance itsTruck

public :

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
    enum DockingProcess_Enum {
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDockingProcess : virtual public AOMInstance {
    DECLARE_REACTIVE_META(DockingProcess, OMAnimatedDockingProcess)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ManualState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void IdleTruck_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Docking_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void MoveTheTruck_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void BeginMovement_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AutonomousState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool DockingProcess::rootState_IN() const {
    return true;
}

inline bool DockingProcess::rootState_isCompleted() {
    return ( IS_IN(terminationstate_7) );
}

inline bool DockingProcess::terminationstate_7_IN() const {
    return rootState_subState == terminationstate_7;
}

inline bool DockingProcess::ManualState_IN() const {
    return rootState_subState == ManualState;
}

inline bool DockingProcess::IdleTruck_IN() const {
    return rootState_subState == IdleTruck;
}

inline bool DockingProcess::Docking_IN() const {
    return rootState_subState == Docking;
}

inline bool DockingProcess::MoveTheTruck_IN() const {
    return Docking_subState == MoveTheTruck;
}

inline bool DockingProcess::BeginMovement_IN() const {
    return Docking_subState == BeginMovement;
}

inline bool DockingProcess::AutonomousState_IN() const {
    return rootState_subState == AutonomousState;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DockingProcess_Simulation\DockingProcess.h
*********************************************************************/

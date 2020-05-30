/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: DockingProcessBlock
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\DockingProcessBlock.h
*********************************************************************/

#ifndef DockingProcessBlock_H
#define DockingProcessBlock_H

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
//## auto_generated
#include "DockingPkg.h"
//## link itsChargingSystemBlock_1
class ChargingSystemBlock;

//## link itsDC
class DC;

//## link itsDCOperator
class DCOperator;

//## link itsDriver
class Driver;

//#[ ignore
#define OMAnim_ANGELSPkg_DockingPkg_DockingProcessBlock_setDSInput_double_ARGS_DECLARATION double p_DSInput;
//#]

//## link itsTruck_1
class Truck;

//## link itsANGELS
class ANGELS;

//## package ANGELSPkg::DockingPkg

//## class DockingProcessBlock
class DockingProcessBlock : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDockingProcessBlock;
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
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    ////    Framework operations    ////

public :

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
    
    //## auto_generated
    DockingProcessBlock(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~DockingProcessBlock();
    
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
    ChargingSystemBlock* getItsChargingSystemBlock_1() const;
    
    //## auto_generated
    void setItsChargingSystemBlock_1(ChargingSystemBlock* p_ChargingSystemBlock);
    
    //## auto_generated
    DC* getItsDC() const;
    
    //## auto_generated
    void setItsDC(DC* p_DC);
    
    //## auto_generated
    DCOperator* getItsDCOperator_1() const;
    
    //## auto_generated
    void setItsDCOperator_1(DCOperator* p_DCOperator);
    
    //## auto_generated
    Driver* getItsDriver() const;
    
    //## auto_generated
    void setItsDriver(Driver* p_Driver);

protected :

    double DSInput;		//## attribute DSInput
    
    double DockingStatus;		//## attribute DockingStatus
    
    double DockingTime;		//## attribute DockingTime
    
    RhpBoolean Doorstatus;		//## attribute Doorstatus
    
    double Speed;		//## attribute Speed
    
    double SteerAngle;		//## attribute SteerAngle
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ChargingSystemBlock* itsChargingSystemBlock_1;		//## link itsChargingSystemBlock_1
    
    DC* itsDC;		//## link itsDC
    
    DCOperator* itsDCOperator_1;		//## link itsDCOperator_1
    
    Driver* itsDriver;		//## link itsDriver
    
    Truck* itsTruck_1;		//## link itsTruck_1

public :

    //## auto_generated
    void __setItsChargingSystemBlock_1(ChargingSystemBlock* p_ChargingSystemBlock);
    
    //## auto_generated
    void _setItsChargingSystemBlock_1(ChargingSystemBlock* p_ChargingSystemBlock);
    
    //## auto_generated
    void _clearItsChargingSystemBlock_1();
    
    //## auto_generated
    void __setItsDC(DC* p_DC);
    
    //## auto_generated
    void _setItsDC(DC* p_DC);
    
    //## auto_generated
    void _clearItsDC();
    
    //## auto_generated
    void __setItsDCOperator_1(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator_1(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator_1();
    
    //## auto_generated
    void __setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver();
    
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
    enum DockingProcessBlock_Enum {
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
DECLARE_OPERATION_CLASS(ANGELSPkg_DockingPkg_DockingProcessBlock_setDSInput_double)

//#[ ignore
class OMAnimatedDockingProcessBlock : virtual public AOMInstance {
    DECLARE_REACTIVE_META(DockingProcessBlock, OMAnimatedDockingProcessBlock)
    
    DECLARE_META_OP(ANGELSPkg_DockingPkg_DockingProcessBlock_setDSInput_double)
    
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

inline bool DockingProcessBlock::rootState_IN() const {
    return true;
}

inline bool DockingProcessBlock::rootState_isCompleted() {
    return ( IS_IN(terminationstate_7) );
}

inline bool DockingProcessBlock::terminationstate_7_IN() const {
    return rootState_subState == terminationstate_7;
}

inline bool DockingProcessBlock::ManualState_IN() const {
    return rootState_subState == ManualState;
}

inline bool DockingProcessBlock::IdleTruck_IN() const {
    return rootState_subState == IdleTruck;
}

inline bool DockingProcessBlock::Docking_IN() const {
    return rootState_subState == Docking;
}

inline bool DockingProcessBlock::MoveTheTruck_IN() const {
    return Docking_subState == MoveTheTruck;
}

inline bool DockingProcessBlock::BeginMovement_IN() const {
    return Docking_subState == BeginMovement;
}

inline bool DockingProcessBlock::AutonomousState_IN() const {
    return rootState_subState == AutonomousState;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\DockingProcessBlock.h
*********************************************************************/

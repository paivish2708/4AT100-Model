/*********************************************************************
	Rhapsody	: 8.4 
	Login		: kevin
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: ParkingSystemBlock
//!	Generated Date	: Fri, 29, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\ParkingSystemBlock.h
*********************************************************************/

#ifndef ParkingSystemBlock_H
#define ParkingSystemBlock_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ParkingProcessPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsDC
class DC;

//## link itsDCOperator
class DCOperator;

//## link itsDriver
class Driver;

//## package ANGELSPkg::ParkingProcessPkg

//## class ParkingSystemBlock
class ParkingSystemBlock : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedParkingSystemBlock;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ParkingSystemBlock(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~ParkingSystemBlock();
    
    ////    Operations    ////
    
    //## operation CheckParkingStatus()
    virtual void CheckParkingStatus();
    
    //## operation StopTruck()
    virtual void StopTruck();
    
    ////    Additional operations    ////
    
    //## auto_generated
    double getChargeState() const;
    
    //## auto_generated
    void setChargeState(double p_ChargeState);
    
    //## auto_generated
    double getParkingStatus() const;
    
    //## auto_generated
    void setParkingStatus(double p_ParkingStatus);
    
    //## auto_generated
    double getParkingTime() const;
    
    //## auto_generated
    void setParkingTime(double p_ParkingTime);
    
    //## auto_generated
    double getSpeed() const;
    
    //## auto_generated
    void setSpeed(double p_Speed);
    
    //## auto_generated
    double getSteerAngle() const;
    
    //## auto_generated
    void setSteerAngle(double p_SteerAngle);
    
    //## auto_generated
    double getDt() const;
    
    //## auto_generated
    void setDt(double p_dt);
    
    //## auto_generated
    DC* getItsDC() const;
    
    //## auto_generated
    void setItsDC(DC* p_DC);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    Driver* getItsDriver() const;
    
    //## auto_generated
    void setItsDriver(Driver* p_Driver);
    
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
    
    ////    Attributes    ////
    
    double ChargeState;		//## attribute ChargeState
    
    double ParkingStatus;		//## attribute ParkingStatus
    
    double ParkingTime;		//## attribute ParkingTime
    
    double Speed;		//## attribute Speed
    
    double SteerAngle;		//## attribute SteerAngle
    
    double dt;		//## attribute dt
    
    ////    Relations and components    ////
    
    DC* itsDC;		//## link itsDC
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Driver* itsDriver;		//## link itsDriver
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDC(DC* p_DC);
    
    //## auto_generated
    void _setItsDC(DC* p_DC);
    
    //## auto_generated
    void _clearItsDC();
    
    //## auto_generated
    void __setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator();
    
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
    
    // terminationstate_8:
    //## statechart_method
    inline bool terminationstate_8_IN() const;
    
    // Parking:
    //## statechart_method
    inline bool Parking_IN() const;
    
    //## statechart_method
    void Parking_entDef();
    
    // IdleState:
    //## statechart_method
    inline bool IdleState_IN() const;
    
    // BeginParking:
    //## statechart_method
    inline bool BeginParking_IN() const;
    
    // ParkedState:
    //## statechart_method
    inline bool ParkedState_IN() const;
    
    // ManualState:
    //## statechart_method
    inline bool ManualState_IN() const;
    
    // LoadedState:
    //## statechart_method
    inline bool LoadedState_IN() const;
    
    // AutonomousMode:
    //## statechart_method
    inline bool AutonomousMode_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum ParkingSystemBlock_Enum {
        OMNonState = 0,
        terminationstate_8 = 1,
        Parking = 2,
        IdleState = 3,
        BeginParking = 4,
        ParkedState = 5,
        ManualState = 6,
        LoadedState = 7,
        AutonomousMode = 8
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int Parking_subState;
    
    IOxfTimeout* Parking_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedParkingSystemBlock : virtual public AOMInstance {
    DECLARE_REACTIVE_META(ParkingSystemBlock, OMAnimatedParkingSystemBlock)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Parking_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void IdleState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void BeginParking_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ParkedState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ManualState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LoadedState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AutonomousMode_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool ParkingSystemBlock::rootState_IN() const {
    return true;
}

inline bool ParkingSystemBlock::rootState_isCompleted() {
    return ( IS_IN(terminationstate_8) );
}

inline bool ParkingSystemBlock::terminationstate_8_IN() const {
    return rootState_subState == terminationstate_8;
}

inline bool ParkingSystemBlock::Parking_IN() const {
    return rootState_subState == Parking;
}

inline bool ParkingSystemBlock::IdleState_IN() const {
    return Parking_subState == IdleState;
}

inline bool ParkingSystemBlock::BeginParking_IN() const {
    return Parking_subState == BeginParking;
}

inline bool ParkingSystemBlock::ParkedState_IN() const {
    return rootState_subState == ParkedState;
}

inline bool ParkingSystemBlock::ManualState_IN() const {
    return rootState_subState == ManualState;
}

inline bool ParkingSystemBlock::LoadedState_IN() const {
    return rootState_subState == LoadedState;
}

inline bool ParkingSystemBlock::AutonomousMode_IN() const {
    return rootState_subState == AutonomousMode;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\ParkingSystemBlock.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: ANGELS
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\ANGELS.h
*********************************************************************/

#ifndef ANGELS_H
#define ANGELS_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ANGELSPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include <oxf\omcollec.h>
//## classInstance itsChargingSystemBlock
#include "ChargingSystemBlock.h"
//## classInstance itsDockingProcessBlock
#include "DockingProcessBlock.h"
//## classInstance itsEBS
#include "EBS.h"
//## classInstance itsLoadingProcessBlock
#include "LoadingProcessBlock.h"
//## classInstance itsParkingSystemBlock
#include "ParkingSystemBlock.h"
//## link itsChargingInfrastructure
class ChargingInfrastructure;

//## link itsCollision_Detection
class Collision_Detection;

//## link itsDC
class DC;

//## link itsDCOperator
class DCOperator;

//## link itsDockingSystem
class DockingSystem;

//## link itsDriver
class Driver;

//## link itsEnvironment
class Environment;

//## link itsGovernment
class Government;

//## link itsLoadingSystemBlock
class LoadingSystemBlock;

//## link itsLocalizationArchitecture
class LocalizationArchitecture;

//## link itsObstacle
class Obstacle;

//## link itsSafetyStandards
class SafetyStandards;

//## link itsTruck
class Truck;

//## package ANGELSPkg

//## class ANGELS
class ANGELS : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedANGELS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ANGELS(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~ANGELS();
    
    ////    Additional operations    ////
    
    //## auto_generated
    double getChargeState() const;
    
    //## auto_generated
    void setChargeState(double p_ChargeState);
    
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
    OMIterator<int> getLoadingTime() const;
    
    //## auto_generated
    void setLoadingTime(int p_LoadingTime);
    
    //## auto_generated
    double getPSInput() const;
    
    //## auto_generated
    void setPSInput(double p_PSInput);
    
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
    ChargingInfrastructure* getItsChargingInfrastructure() const;
    
    //## auto_generated
    void setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure);
    
    //## auto_generated
    ChargingSystemBlock* getItsChargingSystemBlock() const;
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection() const;
    
    //## auto_generated
    void setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    DC* getItsDC() const;
    
    //## auto_generated
    void setItsDC(DC* p_DC);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    DockingProcessBlock* getItsDockingProcessBlock() const;
    
    //## auto_generated
    DockingSystem* getItsDockingSystem() const;
    
    //## auto_generated
    void setItsDockingSystem(DockingSystem* p_DockingSystem);
    
    //## auto_generated
    Driver* getItsDriver() const;
    
    //## auto_generated
    void setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    EBS* getItsEBS() const;
    
    //## auto_generated
    Environment* getItsEnvironment() const;
    
    //## auto_generated
    void setItsEnvironment(Environment* p_Environment);
    
    //## auto_generated
    Government* getItsGovernment() const;
    
    //## auto_generated
    void setItsGovernment(Government* p_Government);
    
    //## auto_generated
    LoadingProcessBlock* getItsLoadingProcessBlock() const;
    
    //## auto_generated
    LoadingSystemBlock* getItsLoadingSystemBlock() const;
    
    //## auto_generated
    void setItsLoadingSystemBlock(LoadingSystemBlock* p_LoadingSystemBlock);
    
    //## auto_generated
    LocalizationArchitecture* getItsLocalizationArchitecture() const;
    
    //## auto_generated
    void setItsLocalizationArchitecture(LocalizationArchitecture* p_LocalizationArchitecture);
    
    //## auto_generated
    Obstacle* getItsObstacle() const;
    
    //## auto_generated
    void setItsObstacle(Obstacle* p_Obstacle);
    
    //## auto_generated
    ParkingSystemBlock* getItsParkingSystemBlock() const;
    
    //## auto_generated
    SafetyStandards* getItsSafetyStandards() const;
    
    //## auto_generated
    void setItsSafetyStandards(SafetyStandards* p_SafetyStandards);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    double ChargeState;		//## attribute ChargeState
    
    double DSInput;		//## attribute DSInput
    
    double DockingStatus;		//## attribute DockingStatus
    
    double DockingTime;		//## attribute DockingTime
    
    RhpBoolean Doorstatus;		//## attribute Doorstatus
    
    OMCollection<int> LoadingTime;		//## attribute LoadingTime
    
    double PSInput;		//## attribute PSInput
    
    double ParkingStatus;		//## attribute ParkingStatus
    
    double ParkingTime;		//## attribute ParkingTime
    
    double Speed;		//## attribute Speed
    
    double SteerAngle;		//## attribute SteerAngle
    
    double dt;		//## attribute dt
    
    ////    Relations and components    ////
    
    ChargingInfrastructure* itsChargingInfrastructure;		//## link itsChargingInfrastructure
    
    ChargingSystemBlock itsChargingSystemBlock;		//## classInstance itsChargingSystemBlock
    
    Collision_Detection* itsCollision_Detection;		//## link itsCollision_Detection
    
    DC* itsDC;		//## link itsDC
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    DockingProcessBlock itsDockingProcessBlock;		//## classInstance itsDockingProcessBlock
    
    DockingSystem* itsDockingSystem;		//## link itsDockingSystem
    
    Driver* itsDriver;		//## link itsDriver
    
    EBS itsEBS;		//## classInstance itsEBS
    
    Environment* itsEnvironment;		//## link itsEnvironment
    
    Government* itsGovernment;		//## link itsGovernment
    
    LoadingProcessBlock itsLoadingProcessBlock;		//## classInstance itsLoadingProcessBlock
    
    LoadingSystemBlock* itsLoadingSystemBlock;		//## link itsLoadingSystemBlock
    
    LocalizationArchitecture* itsLocalizationArchitecture;		//## link itsLocalizationArchitecture
    
    Obstacle* itsObstacle;		//## link itsObstacle
    
    ParkingSystemBlock itsParkingSystemBlock;		//## classInstance itsParkingSystemBlock
    
    SafetyStandards* itsSafetyStandards;		//## link itsSafetyStandards
    
    Truck* itsTruck;		//## link itsTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure);
    
    //## auto_generated
    void _setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure);
    
    //## auto_generated
    void _clearItsChargingInfrastructure();
    
    //## auto_generated
    void __setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _clearItsCollision_Detection();
    
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
    void __setItsDockingSystem(DockingSystem* p_DockingSystem);
    
    //## auto_generated
    void _setItsDockingSystem(DockingSystem* p_DockingSystem);
    
    //## auto_generated
    void _clearItsDockingSystem();
    
    //## auto_generated
    void __setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver();
    
    //## auto_generated
    void __setItsEnvironment(Environment* p_Environment);
    
    //## auto_generated
    void _setItsEnvironment(Environment* p_Environment);
    
    //## auto_generated
    void _clearItsEnvironment();
    
    //## auto_generated
    void __setItsGovernment(Government* p_Government);
    
    //## auto_generated
    void _setItsGovernment(Government* p_Government);
    
    //## auto_generated
    void _clearItsGovernment();
    
    //## auto_generated
    void __setItsLoadingSystemBlock(LoadingSystemBlock* p_LoadingSystemBlock);
    
    //## auto_generated
    void _setItsLoadingSystemBlock(LoadingSystemBlock* p_LoadingSystemBlock);
    
    //## auto_generated
    void _clearItsLoadingSystemBlock();
    
    //## auto_generated
    void __setItsLocalizationArchitecture(LocalizationArchitecture* p_LocalizationArchitecture);
    
    //## auto_generated
    void _setItsLocalizationArchitecture(LocalizationArchitecture* p_LocalizationArchitecture);
    
    //## auto_generated
    void _clearItsLocalizationArchitecture();
    
    //## auto_generated
    void __setItsObstacle(Obstacle* p_Obstacle);
    
    //## auto_generated
    void _setItsObstacle(Obstacle* p_Obstacle);
    
    //## auto_generated
    void _clearItsObstacle();
    
    //## auto_generated
    void __setItsSafetyStandards(SafetyStandards* p_SafetyStandards);
    
    //## auto_generated
    void _setItsSafetyStandards(SafetyStandards* p_SafetyStandards);
    
    //## auto_generated
    void _clearItsSafetyStandards();
    
    //## auto_generated
    void __setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck();
    
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
    
    // terminationstate_3:
    //## statechart_method
    inline bool terminationstate_3_IN() const;
    
    // ON:
    //## statechart_method
    inline bool ON_IN() const;
    
    // OFF:
    //## statechart_method
    inline bool OFF_IN() const;
    
    // InitANGELS:
    //## statechart_method
    inline bool InitANGELS_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum ANGELS_Enum {
        OMNonState = 0,
        terminationstate_3 = 1,
        ON = 2,
        OFF = 3,
        InitANGELS = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedANGELS : virtual public AOMInstance {
    DECLARE_REACTIVE_META(ANGELS, OMAnimatedANGELS)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ON_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void OFF_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void InitANGELS_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool ANGELS::rootState_IN() const {
    return true;
}

inline bool ANGELS::rootState_isCompleted() {
    return ( IS_IN(terminationstate_3) );
}

inline bool ANGELS::terminationstate_3_IN() const {
    return rootState_subState == terminationstate_3;
}

inline bool ANGELS::ON_IN() const {
    return rootState_subState == ON;
}

inline bool ANGELS::OFF_IN() const {
    return rootState_subState == OFF;
}

inline bool ANGELS::InitANGELS_IN() const {
    return rootState_subState == InitANGELS;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\ANGELS.h
*********************************************************************/

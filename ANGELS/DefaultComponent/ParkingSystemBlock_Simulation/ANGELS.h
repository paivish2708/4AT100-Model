/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ParkingSystemBlock_Simulation
	Model Element	: ANGELS
//!	Generated Date	: Mon, 18, May 2020  
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\ANGELS.h
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
//## classInstance itsCollision_Avoidance_1
#include "Collision_Avoidance.h"
//## classInstance itsCollision_Detection_2
#include "Collision_Detection.h"
//## classInstance itsCommunicationSystemBlock
#include "CommunicationSystemBlock.h"
//## classInstance itsDockingProcessBlock
#include "DockingProcessBlock.h"
//## classInstance itsLoadingProcessBlock
#include "LoadingProcessBlock.h"
//## classInstance itsLocalisation_System_1
#include "Localisation_System.h"
//## classInstance itsParkingSystemBlock
#include "ParkingSystemBlock.h"
//## classInstance itsTruck_1
#include "Truck.h"
//## link itsChargingInfrastructure
class ChargingInfrastructure;

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

//## link itsLoadingSystem
class LoadingSystem;

//## link itsLocalizationArchitecture
class LocalizationArchitecture;

//## link itsObstacle
class Obstacle;

//## link itsSafetyStandards
class SafetyStandards;

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
    ChargingSystemBlock* getItsChargingSystemBlock_1() const;
    
    //## auto_generated
    Collision_Avoidance* getItsCollision_Avoidance_1() const;
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection() const;
    
    //## auto_generated
    void setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection_2() const;
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection_3() const;
    
    //## auto_generated
    CommunicationSystemBlock* getItsCommunicationSystemBlock() const;
    
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
    DockingProcessBlock* getItsDockingProcessBlock_1() const;
    
    //## auto_generated
    DockingSystem* getItsDockingSystem() const;
    
    //## auto_generated
    void setItsDockingSystem(DockingSystem* p_DockingSystem);
    
    //## auto_generated
    Driver* getItsDriver() const;
    
    //## auto_generated
    void setItsDriver(Driver* p_Driver);
    
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
    LoadingProcessBlock* getItsLoadingProcessBlock_1() const;
    
    //## auto_generated
    LoadingSystem* getItsLoadingSystem() const;
    
    //## auto_generated
    void setItsLoadingSystem(LoadingSystem* p_LoadingSystem);
    
    //## auto_generated
    Localisation_System* getItsLocalisation_System_1() const;
    
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
    ParkingSystemBlock* getItsParkingSystemBlock_1() const;
    
    //## auto_generated
    SafetyStandards* getItsSafetyStandards() const;
    
    //## auto_generated
    void setItsSafetyStandards(SafetyStandards* p_SafetyStandards);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    Truck* getItsTruck_1() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

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
    
    ChargingSystemBlock itsChargingSystemBlock_1;		//## classInstance itsChargingSystemBlock_1
    
    Collision_Avoidance itsCollision_Avoidance_1;		//## classInstance itsCollision_Avoidance_1
    
    Collision_Detection* itsCollision_Detection;		//## link itsCollision_Detection
    
    Collision_Detection itsCollision_Detection_2;		//## classInstance itsCollision_Detection_2
    
    Collision_Detection itsCollision_Detection_3;		//## classInstance itsCollision_Detection_3
    
    CommunicationSystemBlock itsCommunicationSystemBlock;		//## classInstance itsCommunicationSystemBlock
    
    DC* itsDC;		//## link itsDC
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    DockingProcessBlock itsDockingProcessBlock;		//## classInstance itsDockingProcessBlock
    
    DockingProcessBlock itsDockingProcessBlock_1;		//## classInstance itsDockingProcessBlock_1
    
    DockingSystem* itsDockingSystem;		//## link itsDockingSystem
    
    Driver* itsDriver;		//## link itsDriver
    
    Environment* itsEnvironment;		//## link itsEnvironment
    
    Government* itsGovernment;		//## link itsGovernment
    
    LoadingProcessBlock itsLoadingProcessBlock;		//## classInstance itsLoadingProcessBlock
    
    LoadingProcessBlock itsLoadingProcessBlock_1;		//## classInstance itsLoadingProcessBlock_1
    
    LoadingSystem* itsLoadingSystem;		//## link itsLoadingSystem
    
    Localisation_System itsLocalisation_System_1;		//## classInstance itsLocalisation_System_1
    
    LocalizationArchitecture* itsLocalizationArchitecture;		//## link itsLocalizationArchitecture
    
    Obstacle* itsObstacle;		//## link itsObstacle
    
    ParkingSystemBlock itsParkingSystemBlock;		//## classInstance itsParkingSystemBlock
    
    ParkingSystemBlock itsParkingSystemBlock_1;		//## classInstance itsParkingSystemBlock_1
    
    SafetyStandards* itsSafetyStandards;		//## link itsSafetyStandards
    
    Truck* itsTruck;		//## link itsTruck
    
    Truck itsTruck_1;		//## classInstance itsTruck_1
    
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
    void __setItsLoadingSystem(LoadingSystem* p_LoadingSystem);
    
    //## auto_generated
    void _setItsLoadingSystem(LoadingSystem* p_LoadingSystem);
    
    //## auto_generated
    void _clearItsLoadingSystem();
    
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
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedANGELS : virtual public AOMInstance {
    DECLARE_META(ANGELS, OMAnimatedANGELS)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\ANGELS.h
*********************************************************************/

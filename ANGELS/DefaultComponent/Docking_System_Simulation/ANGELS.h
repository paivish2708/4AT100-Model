/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: ANGELS
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\ANGELS.h
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
//## classInstance itsCollision_Avoidance_1
#include "Collision_Avoidance.h"
//## classInstance itsCollision_Detection_2
#include "Collision_Detection.h"
//## classInstance itsCommunication_System_1
#include "Communication_System.h"
//## classInstance itsDocking_System_1
#include "Docking_System.h"
//## classInstance itsLoading_System_1
#include "Loading_System.h"
//## classInstance itsLocalisation_System_1
#include "Localisation_System.h"
//## classInstance itsParkingSystem_1
#include "ParkingSystem.h"
//## classInstance itsTruck_1
#include "Truck.h"
//## link itsDC
class DC;

//## link itsDCOperator
class DCOperator;

//## link itsGovernment
class Government;

//## link itsSafety_Standards
class Safety_Standards;

//## package UseCaseAnalysisPkg::ANGELSPkg

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
    OMIterator<double> getLoadingTime() const;
    
    //## auto_generated
    void setLoadingTime(double p_LoadingTime);
    
    //## auto_generated
    double getPSInput() const;
    
    //## auto_generated
    void setPSInput(double p_PSInput);
    
    //## auto_generated
    double getParkingStatus() const;
    
    //## auto_generated
    void setParkingStatus(double p_ParkingStatus);
    
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
    Collision_Avoidance* getItsCollision_Avoidance() const;
    
    //## auto_generated
    void setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance);
    
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
    Communication_System* getItsCommunication_System() const;
    
    //## auto_generated
    void setItsCommunication_System(Communication_System* p_Communication_System);
    
    //## auto_generated
    Communication_System* getItsCommunication_System_1() const;
    
    //## auto_generated
    DC* getItsDC() const;
    
    //## auto_generated
    void setItsDC(DC* p_DC);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    Docking_System* getItsDocking_System() const;
    
    //## auto_generated
    void setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    Docking_System* getItsDocking_System_1() const;
    
    //## auto_generated
    Government* getItsGovernment() const;
    
    //## auto_generated
    void setItsGovernment(Government* p_Government);
    
    //## auto_generated
    Loading_System* getItsLoading_System() const;
    
    //## auto_generated
    void setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    Loading_System* getItsLoading_System_1() const;
    
    //## auto_generated
    Localisation_System* getItsLocalisation_System() const;
    
    //## auto_generated
    void setItsLocalisation_System(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    Localisation_System* getItsLocalisation_System_1() const;
    
    //## auto_generated
    ParkingSystem* getItsParkingSystem() const;
    
    //## auto_generated
    void setItsParkingSystem(ParkingSystem* p_ParkingSystem);
    
    //## auto_generated
    ParkingSystem* getItsParkingSystem_1() const;
    
    //## auto_generated
    Safety_Standards* getItsSafety_Standards() const;
    
    //## auto_generated
    void setItsSafety_Standards(Safety_Standards* p_Safety_Standards);
    
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
    
    double DSInput;		//## attribute DSInput
    
    double DockingStatus;		//## attribute DockingStatus
    
    double DockingTime;		//## attribute DockingTime
    
    RhpBoolean Doorstatus;		//## attribute Doorstatus
    
    OMCollection<double> LoadingTime;		//## attribute LoadingTime
    
    double PSInput;		//## attribute PSInput
    
    double ParkingStatus;		//## attribute ParkingStatus
    
    double Speed;		//## attribute Speed
    
    double SteerAngle;		//## attribute SteerAngle
    
    double dt;		//## attribute dt
    
    ////    Relations and components    ////
    
    Collision_Avoidance* itsCollision_Avoidance;		//## link itsCollision_Avoidance
    
    Collision_Avoidance itsCollision_Avoidance_1;		//## classInstance itsCollision_Avoidance_1
    
    Collision_Detection* itsCollision_Detection;		//## link itsCollision_Detection
    
    Collision_Detection itsCollision_Detection_2;		//## classInstance itsCollision_Detection_2
    
    Collision_Detection itsCollision_Detection_3;		//## classInstance itsCollision_Detection_3
    
    Communication_System* itsCommunication_System;		//## link itsCommunication_System
    
    Communication_System itsCommunication_System_1;		//## classInstance itsCommunication_System_1
    
    DC* itsDC;		//## link itsDC
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Docking_System* itsDocking_System;		//## link itsDocking_System
    
    Docking_System itsDocking_System_1;		//## classInstance itsDocking_System_1
    
    Government* itsGovernment;		//## link itsGovernment
    
    Loading_System* itsLoading_System;		//## link itsLoading_System
    
    Loading_System itsLoading_System_1;		//## classInstance itsLoading_System_1
    
    Localisation_System* itsLocalisation_System;		//## link itsLocalisation_System
    
    Localisation_System itsLocalisation_System_1;		//## classInstance itsLocalisation_System_1
    
    ParkingSystem* itsParkingSystem;		//## link itsParkingSystem
    
    ParkingSystem itsParkingSystem_1;		//## classInstance itsParkingSystem_1
    
    Safety_Standards* itsSafety_Standards;		//## link itsSafety_Standards
    
    Truck* itsTruck;		//## link itsTruck
    
    Truck itsTruck_1;		//## classInstance itsTruck_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _clearItsCollision_Avoidance();
    
    //## auto_generated
    void __setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _clearItsCollision_Detection();
    
    //## auto_generated
    void __setItsCommunication_System(Communication_System* p_Communication_System);
    
    //## auto_generated
    void _setItsCommunication_System(Communication_System* p_Communication_System);
    
    //## auto_generated
    void _clearItsCommunication_System();
    
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
    void __setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System();
    
    //## auto_generated
    void __setItsGovernment(Government* p_Government);
    
    //## auto_generated
    void _setItsGovernment(Government* p_Government);
    
    //## auto_generated
    void _clearItsGovernment();
    
    //## auto_generated
    void __setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    void _setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    void _clearItsLoading_System();
    
    //## auto_generated
    void __setItsLocalisation_System(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    void _setItsLocalisation_System(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    void _clearItsLocalisation_System();
    
    //## auto_generated
    void __setItsParkingSystem(ParkingSystem* p_ParkingSystem);
    
    //## auto_generated
    void _setItsParkingSystem(ParkingSystem* p_ParkingSystem);
    
    //## auto_generated
    void _clearItsParkingSystem();
    
    //## auto_generated
    void __setItsSafety_Standards(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    void _setItsSafety_Standards(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    void _clearItsSafety_Standards();
    
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
	File Path	: DefaultComponent\Docking_System_Simulation\ANGELS.h
*********************************************************************/

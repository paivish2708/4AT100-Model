/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: ANGELS
//!	Generated Date	: Thu, 30, Apr 2020  
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
//## link itsCollision_Avoidance
class Collision_Avoidance;

//## link itsCollision_Detection
class Collision_Detection;

//## link itsCommunication_System
class Communication_System;

//## link itsDC
class DC;

//## link itsDCOperator
class DCOperator;

//## link itsDocking_System
class Docking_System;

//## link itsGovernment
class Government;

//## link itsLoading_System
class Loading_System;

//## link itsLocalisation_System
class Localisation_System;

//## link itsParkingSystem
class ParkingSystem;

//## link itsSafety_Standards
class Safety_Standards;

//## link itsTruck
class Truck;

//## package UseCaseAnalysisPkg::ANGELSPkg

//## class ANGELS
class ANGELS {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedANGELS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ANGELS();
    
    //## auto_generated
    ~ANGELS();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Collision_Avoidance* getItsCollision_Avoidance() const;
    
    //## auto_generated
    void setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection() const;
    
    //## auto_generated
    void setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection_1() const;
    
    //## auto_generated
    void setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    Communication_System* getItsCommunication_System() const;
    
    //## auto_generated
    void setItsCommunication_System(Communication_System* p_Communication_System);
    
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
    Government* getItsGovernment() const;
    
    //## auto_generated
    void setItsGovernment(Government* p_Government);
    
    //## auto_generated
    Loading_System* getItsLoading_System() const;
    
    //## auto_generated
    void setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    Localisation_System* getItsLocalisation_System() const;
    
    //## auto_generated
    void setItsLocalisation_System(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    ParkingSystem* getItsParkingSystem() const;
    
    //## auto_generated
    void setItsParkingSystem(ParkingSystem* p_ParkingSystem);
    
    //## auto_generated
    Safety_Standards* getItsSafety_Standards() const;
    
    //## auto_generated
    void setItsSafety_Standards(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Collision_Avoidance* itsCollision_Avoidance;		//## link itsCollision_Avoidance
    
    Collision_Detection* itsCollision_Detection;		//## link itsCollision_Detection
    
    Collision_Detection* itsCollision_Detection_1;		//## link itsCollision_Detection_1
    
    Communication_System* itsCommunication_System;		//## link itsCommunication_System
    
    Docking_System* itsDocking_System;		//## link itsDocking_System
    
    Loading_System* itsLoading_System;		//## link itsLoading_System
    
    Localisation_System* itsLocalisation_System;		//## link itsLocalisation_System
    
    ParkingSystem* itsParkingSystem;		//## link itsParkingSystem
    
    Safety_Standards* itsSafety_Standards;		//## link itsSafety_Standards
    
    Truck* itsTruck;		//## link itsTruck
    
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
    void __setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _clearItsCollision_Detection_1();
    
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

protected :

    DC* itsDC;		//## link itsDC
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Government* itsGovernment;		//## link itsGovernment
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedANGELS : virtual public AOMInstance {
    DECLARE_META(ANGELS, OMAnimatedANGELS)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\ANGELS.h
*********************************************************************/

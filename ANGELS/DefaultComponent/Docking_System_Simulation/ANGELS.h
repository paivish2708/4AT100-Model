/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: ANGELS
//!	Generated Date	: Wed, 29, Apr 2020  
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
#include "AngelsPkg.h"
//## classInstance itsDCOperator
#include "DCOperator.h"
//## link itsCharging_System
class Charging_System;

//## link itsCollision_Avoidance
class Collision_Avoidance;

//## link itsCollision_Detection
class Collision_Detection;

//## link itsCommunication_System
class Communication_System;

//## link itsDC
class DC;

//## link itsDocking_System
class Docking_System;

//## link itsDriver
class Driver;

//## link itsGovernment
class Government;

//## link itsLocalisation_System
class Localisation_System;

//## link itsSafety_Standards
class Safety_Standards;

//## link itsTruck
class Truck;

//## package UseCaseAnalysisPkg::AngelsPkg

//## class ANGELS
// A Software for Autonomous truck docking system inside the DC
class ANGELS {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

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
    Charging_System* getItsCharging_System() const;
    
    //## auto_generated
    void setItsCharging_System(Charging_System* p_Charging_System);
    
    //## auto_generated
    Charging_System* getItsCharging_System_1() const;
    
    //## auto_generated
    void setItsCharging_System_1(Charging_System* p_Charging_System);
    
    //## auto_generated
    Collision_Avoidance* getItsCollision_Avoidance() const;
    
    //## auto_generated
    void setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    Collision_Avoidance* getItsCollision_Avoidance_1() const;
    
    //## auto_generated
    void setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance);
    
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
    Communication_System* getItsCommunication_System_1() const;
    
    //## auto_generated
    void setItsCommunication_System_1(Communication_System* p_Communication_System);
    
    //## auto_generated
    Communication_System* getItsCommunication_System_2() const;
    
    //## auto_generated
    void setItsCommunication_System_2(Communication_System* p_Communication_System);
    
    //## auto_generated
    DC* getItsDC() const;
    
    //## auto_generated
    void setItsDC(DC* p_DC);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    DCOperator* getItsDCOperator_1() const;
    
    //## auto_generated
    void setItsDCOperator_1(DCOperator* p_DCOperator);
    
    //## auto_generated
    DCOperator* getItsDCOperator_2() const;
    
    //## auto_generated
    void setItsDCOperator_2(DCOperator* p_DCOperator);
    
    //## auto_generated
    DCOperator* getItsDCOperator_3() const;
    
    //## auto_generated
    void setItsDCOperator_3(DCOperator* p_DCOperator);
    
    //## auto_generated
    DCOperator* getItsDCOperator_4() const;
    
    //## auto_generated
    void setItsDCOperator_4(DCOperator* p_DCOperator);
    
    //## auto_generated
    DC* getItsDC_1() const;
    
    //## auto_generated
    void setItsDC_1(DC* p_DC);
    
    //## auto_generated
    Docking_System* getItsDocking_System() const;
    
    //## auto_generated
    void setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    Docking_System* getItsDocking_System_1() const;
    
    //## auto_generated
    void setItsDocking_System_1(Docking_System* p_Docking_System);
    
    //## auto_generated
    Docking_System* getItsDocking_System_2() const;
    
    //## auto_generated
    void setItsDocking_System_2(Docking_System* p_Docking_System);
    
    //## auto_generated
    Docking_System* getItsDocking_System_3() const;
    
    //## auto_generated
    void setItsDocking_System_3(Docking_System* p_Docking_System);
    
    //## auto_generated
    Docking_System* getItsDocking_System_4() const;
    
    //## auto_generated
    void setItsDocking_System_4(Docking_System* p_Docking_System);
    
    //## auto_generated
    Docking_System* getItsDocking_System_5() const;
    
    //## auto_generated
    void setItsDocking_System_5(Docking_System* p_Docking_System);
    
    //## auto_generated
    Driver* getItsDriver() const;
    
    //## auto_generated
    void setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    Government* getItsGovernment() const;
    
    //## auto_generated
    void setItsGovernment(Government* p_Government);
    
    //## auto_generated
    Localisation_System* getItsLocalisation_System() const;
    
    //## auto_generated
    void setItsLocalisation_System(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    Localisation_System* getItsLocalisation_System_1() const;
    
    //## auto_generated
    void setItsLocalisation_System_1(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    Localisation_System* getItsLocalisation_System_2() const;
    
    //## auto_generated
    void setItsLocalisation_System_2(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    Safety_Standards* getItsSafety_Standards() const;
    
    //## auto_generated
    void setItsSafety_Standards(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    Safety_Standards* getItsSafety_Standards_1() const;
    
    //## auto_generated
    void setItsSafety_Standards_1(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    Safety_Standards* getItsSafety_Standards_2() const;
    
    //## auto_generated
    void setItsSafety_Standards_2(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    Truck* getItsTruck_1() const;
    
    //## auto_generated
    void setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    Truck* getItsTruck_2() const;
    
    //## auto_generated
    void setItsTruck_2(Truck* p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Charging_System* itsCharging_System;		//## link itsCharging_System
    
    Charging_System* itsCharging_System_1;		//## link itsCharging_System_1
    
    Collision_Avoidance* itsCollision_Avoidance;		//## link itsCollision_Avoidance
    
    Collision_Avoidance* itsCollision_Avoidance_1;		//## link itsCollision_Avoidance_1
    
    Collision_Detection* itsCollision_Detection;		//## link itsCollision_Detection
    
    Collision_Detection* itsCollision_Detection_1;		//## link itsCollision_Detection_1
    
    Communication_System* itsCommunication_System;		//## link itsCommunication_System
    
    Communication_System* itsCommunication_System_1;		//## link itsCommunication_System_1
    
    Communication_System* itsCommunication_System_2;		//## link itsCommunication_System_2
    
    DC* itsDC;		//## link itsDC
    
    DCOperator itsDCOperator;		//## classInstance itsDCOperator
    
    DCOperator* itsDCOperator_1;		//## link itsDCOperator_1
    
    DCOperator* itsDCOperator_2;		//## link itsDCOperator_2
    
    DCOperator* itsDCOperator_3;		//## link itsDCOperator_3
    
    DCOperator* itsDCOperator_4;		//## link itsDCOperator_4
    
    DC* itsDC_1;		//## link itsDC_1
    
    Docking_System* itsDocking_System;		//## link itsDocking_System
    
    Docking_System* itsDocking_System_1;		//## link itsDocking_System_1
    
    Docking_System* itsDocking_System_2;		//## link itsDocking_System_2
    
    Docking_System* itsDocking_System_3;		//## link itsDocking_System_3
    
    Docking_System* itsDocking_System_4;		//## link itsDocking_System_4
    
    Docking_System* itsDocking_System_5;		//## link itsDocking_System_5
    
    Driver* itsDriver;		//## link itsDriver
    
    Government* itsGovernment;		//## link itsGovernment
    
    Localisation_System* itsLocalisation_System;		//## link itsLocalisation_System
    
    Localisation_System* itsLocalisation_System_1;		//## link itsLocalisation_System_1
    
    Localisation_System* itsLocalisation_System_2;		//## link itsLocalisation_System_2
    
    Safety_Standards* itsSafety_Standards;		//## link itsSafety_Standards
    
    Safety_Standards* itsSafety_Standards_1;		//## link itsSafety_Standards_1
    
    Safety_Standards* itsSafety_Standards_2;		//## link itsSafety_Standards_2
    
    Truck* itsTruck;		//## link itsTruck
    
    Truck* itsTruck_1;		//## link itsTruck_1
    
    Truck* itsTruck_2;		//## link itsTruck_2
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCharging_System(Charging_System* p_Charging_System);
    
    //## auto_generated
    void _setItsCharging_System(Charging_System* p_Charging_System);
    
    //## auto_generated
    void _clearItsCharging_System();
    
    //## auto_generated
    void __setItsCharging_System_1(Charging_System* p_Charging_System);
    
    //## auto_generated
    void _setItsCharging_System_1(Charging_System* p_Charging_System);
    
    //## auto_generated
    void _clearItsCharging_System_1();
    
    //## auto_generated
    void __setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _clearItsCollision_Avoidance();
    
    //## auto_generated
    void __setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _clearItsCollision_Avoidance_1();
    
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
    void __setItsCommunication_System_1(Communication_System* p_Communication_System);
    
    //## auto_generated
    void _setItsCommunication_System_1(Communication_System* p_Communication_System);
    
    //## auto_generated
    void _clearItsCommunication_System_1();
    
    //## auto_generated
    void __setItsCommunication_System_2(Communication_System* p_Communication_System);
    
    //## auto_generated
    void _setItsCommunication_System_2(Communication_System* p_Communication_System);
    
    //## auto_generated
    void _clearItsCommunication_System_2();
    
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
    void __setItsDCOperator_2(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator_2(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator_2();
    
    //## auto_generated
    void __setItsDCOperator_3(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator_3(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator_3();
    
    //## auto_generated
    void __setItsDCOperator_4(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator_4(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator_4();
    
    //## auto_generated
    void __setItsDC_1(DC* p_DC);
    
    //## auto_generated
    void _setItsDC_1(DC* p_DC);
    
    //## auto_generated
    void _clearItsDC_1();
    
    //## auto_generated
    void __setItsDocking_System_2(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System_2(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System_2();
    
    //## auto_generated
    void __setItsDocking_System_3(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System_3(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System_3();
    
    //## auto_generated
    void __setItsDocking_System_4(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System_4(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System_4();
    
    //## auto_generated
    void __setItsDocking_System_5(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System_5(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System_5();
    
    //## auto_generated
    void __setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver();
    
    //## auto_generated
    void __setItsGovernment(Government* p_Government);
    
    //## auto_generated
    void _setItsGovernment(Government* p_Government);
    
    //## auto_generated
    void _clearItsGovernment();
    
    //## auto_generated
    void __setItsLocalisation_System(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    void _setItsLocalisation_System(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    void _clearItsLocalisation_System();
    
    //## auto_generated
    void __setItsLocalisation_System_1(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    void _setItsLocalisation_System_1(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    void _clearItsLocalisation_System_1();
    
    //## auto_generated
    void __setItsLocalisation_System_2(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    void _setItsLocalisation_System_2(Localisation_System* p_Localisation_System);
    
    //## auto_generated
    void _clearItsLocalisation_System_2();
    
    //## auto_generated
    void __setItsSafety_Standards(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    void _setItsSafety_Standards(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    void _clearItsSafety_Standards();
    
    //## auto_generated
    void __setItsSafety_Standards_1(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    void _setItsSafety_Standards_1(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    void _clearItsSafety_Standards_1();
    
    //## auto_generated
    void __setItsSafety_Standards_2(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    void _setItsSafety_Standards_2(Safety_Standards* p_Safety_Standards);
    
    //## auto_generated
    void _clearItsSafety_Standards_2();
    
    //## auto_generated
    void __setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck();
    
    //## auto_generated
    void __setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck_1();
    
    //## auto_generated
    void __setItsTruck_2(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck_2(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck_2();
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
	File Path	: DefaultComponent\Docking_System_Simulation\ANGELS.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: SafetyStandards
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\SafetyStandards.h
*********************************************************************/

#ifndef SafetyStandards_H
#define SafetyStandards_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## package ActorPkg

//## actor SafetyStandards
class SafetyStandards {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSafetyStandards;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SafetyStandards();
    
    //## auto_generated
    ~SafetyStandards();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSafetyStandards : virtual public AOMInstance {
    DECLARE_META(SafetyStandards, OMAnimatedSafetyStandards)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\SafetyStandards.h
*********************************************************************/

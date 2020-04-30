/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: SafetyStandards
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\SafetyStandards.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SafetyStandards.h"
//#[ ignore
#define ActorPkg_SafetyStandards_SafetyStandards_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor SafetyStandards
SafetyStandards::SafetyStandards() {
    NOTIFY_CONSTRUCTOR(SafetyStandards, SafetyStandards(), 0, ActorPkg_SafetyStandards_SafetyStandards_SERIALIZE);
}

SafetyStandards::~SafetyStandards() {
    NOTIFY_DESTRUCTOR(~SafetyStandards, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SafetyStandards, ActorPkg, ActorPkg, false, OMAnimatedSafetyStandards)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\SafetyStandards.cpp
*********************************************************************/

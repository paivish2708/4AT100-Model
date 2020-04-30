/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Charging_System
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Charging_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Charging_System.h"
//#[ ignore
#define Default_Charging_System_Charging_System_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Charging_System
Charging_System::Charging_System() {
    NOTIFY_CONSTRUCTOR(Charging_System, Charging_System(), 0, Default_Charging_System_Charging_System_SERIALIZE);
}

Charging_System::~Charging_System() {
    NOTIFY_DESTRUCTOR(~Charging_System, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCharging_System::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Charging_System, Default, Default, false, OMAnimatedCharging_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Charging_System.cpp
*********************************************************************/

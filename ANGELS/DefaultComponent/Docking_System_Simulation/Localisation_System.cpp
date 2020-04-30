/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Localisation_System
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Localisation_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Localisation_System.h"
//#[ ignore
#define Default_Localisation_System_Localisation_System_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Localisation_System
Localisation_System::Localisation_System() {
    NOTIFY_CONSTRUCTOR(Localisation_System, Localisation_System(), 0, Default_Localisation_System_Localisation_System_SERIALIZE);
}

Localisation_System::~Localisation_System() {
    NOTIFY_DESTRUCTOR(~Localisation_System, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLocalisation_System::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Localisation_System, Default, Default, false, OMAnimatedLocalisation_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Localisation_System.cpp
*********************************************************************/

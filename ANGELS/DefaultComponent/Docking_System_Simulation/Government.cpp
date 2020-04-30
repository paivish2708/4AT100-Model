/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Government
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Government.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Government.h"
//#[ ignore
#define ActorPkg_Government_Government_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Government
Government::Government() {
    NOTIFY_CONSTRUCTOR(Government, Government(), 0, ActorPkg_Government_Government_SERIALIZE);
}

Government::~Government() {
    NOTIFY_DESTRUCTOR(~Government, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovernment::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Government, ActorPkg, ActorPkg, false, OMAnimatedGovernment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Government.cpp
*********************************************************************/

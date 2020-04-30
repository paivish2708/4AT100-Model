/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Safety_Standards
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Safety_Standards.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Safety_Standards.h"
//#[ ignore
#define Default_Safety_Standards_Safety_Standards_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Safety_Standards
Safety_Standards::Safety_Standards() {
    NOTIFY_CONSTRUCTOR(Safety_Standards, Safety_Standards(), 0, Default_Safety_Standards_Safety_Standards_SERIALIZE);
}

Safety_Standards::~Safety_Standards() {
    NOTIFY_DESTRUCTOR(~Safety_Standards, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSafety_Standards::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Safety_Standards, Default, Default, false, OMAnimatedSafety_Standards)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Safety_Standards.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Communication_System
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Communication_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Communication_System.h"
//#[ ignore
#define Default_Communication_System_Communication_System_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Communication_System
Communication_System::Communication_System() {
    NOTIFY_CONSTRUCTOR(Communication_System, Communication_System(), 0, Default_Communication_System_Communication_System_SERIALIZE);
}

Communication_System::~Communication_System() {
    NOTIFY_DESTRUCTOR(~Communication_System, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunication_System::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Communication_System, Default, Default, false, OMAnimatedCommunication_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Communication_System.cpp
*********************************************************************/

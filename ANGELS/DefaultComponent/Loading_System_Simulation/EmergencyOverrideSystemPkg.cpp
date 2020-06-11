/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: EmergencyOverrideSystemPkg
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\EmergencyOverrideSystemPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmergencyOverrideSystemPkg.h"
//## auto_generated
#include "EBS.h"
//#[ ignore
#define DefaultMode_SERIALIZE OM_NO_OP

#define DefaultMode_UNSERIALIZE OM_NO_OP

#define DefaultMode_CONSTRUCTOR DefaultMode()
//#]

//## package ANGELSPkg::EmergencyOverrideSystemPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ANGELSPkg_EmergencyOverrideSystemPkg, ANGELSPkg::EmergencyOverrideSystemPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event DefaultMode()
DefaultMode::DefaultMode() {
    NOTIFY_EVENT_CONSTRUCTOR(DefaultMode)
    setId(DefaultMode_EmergencyOverrideSystemPkg_ANGELSPkg_id);
}

bool DefaultMode::isTypeOf(const short id) const {
    return (DefaultMode_EmergencyOverrideSystemPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(DefaultMode, ANGELSPkg_EmergencyOverrideSystemPkg, ANGELSPkg::EmergencyOverrideSystemPkg, DefaultMode())

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\EmergencyOverrideSystemPkg.cpp
*********************************************************************/

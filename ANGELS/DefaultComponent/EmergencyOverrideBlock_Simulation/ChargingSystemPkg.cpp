/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: ChargingSystemPkg
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\ChargingSystemPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ChargingSystemPkg.h"
//## auto_generated
#include "ChargingInfrastructure.h"
//## auto_generated
#include "ChargingSystemBlock.h"
//#[ ignore
#define Beginthecharging_SERIALIZE OM_NO_OP

#define Beginthecharging_UNSERIALIZE OM_NO_OP

#define Beginthecharging_CONSTRUCTOR Beginthecharging()

#define StartTheCharging_SERIALIZE OM_NO_OP

#define StartTheCharging_UNSERIALIZE OM_NO_OP

#define StartTheCharging_CONSTRUCTOR StartTheCharging()

#define InitiateChargingProcess_SERIALIZE OM_NO_OP

#define InitiateChargingProcess_UNSERIALIZE OM_NO_OP

#define InitiateChargingProcess_CONSTRUCTOR InitiateChargingProcess()

#define EndCharging_SERIALIZE OM_NO_OP

#define EndCharging_UNSERIALIZE OM_NO_OP

#define EndCharging_CONSTRUCTOR EndCharging()
//#]

//## package ANGELSPkg::ChargingSystemPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ANGELSPkg_ChargingSystemPkg, ANGELSPkg::ChargingSystemPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event Beginthecharging()
Beginthecharging::Beginthecharging() {
    NOTIFY_EVENT_CONSTRUCTOR(Beginthecharging)
    setId(Beginthecharging_ChargingSystemPkg_ANGELSPkg_id);
}

bool Beginthecharging::isTypeOf(const short id) const {
    return (Beginthecharging_ChargingSystemPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(Beginthecharging, ANGELSPkg_ChargingSystemPkg, ANGELSPkg::ChargingSystemPkg, Beginthecharging())

//## event StartTheCharging()
StartTheCharging::StartTheCharging() {
    NOTIFY_EVENT_CONSTRUCTOR(StartTheCharging)
    setId(StartTheCharging_ChargingSystemPkg_ANGELSPkg_id);
}

bool StartTheCharging::isTypeOf(const short id) const {
    return (StartTheCharging_ChargingSystemPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(StartTheCharging, ANGELSPkg_ChargingSystemPkg, ANGELSPkg::ChargingSystemPkg, StartTheCharging())

//## event InitiateChargingProcess()
InitiateChargingProcess::InitiateChargingProcess() {
    NOTIFY_EVENT_CONSTRUCTOR(InitiateChargingProcess)
    setId(InitiateChargingProcess_ChargingSystemPkg_ANGELSPkg_id);
}

bool InitiateChargingProcess::isTypeOf(const short id) const {
    return (InitiateChargingProcess_ChargingSystemPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(InitiateChargingProcess, ANGELSPkg_ChargingSystemPkg, ANGELSPkg::ChargingSystemPkg, InitiateChargingProcess())

//## event EndCharging()
EndCharging::EndCharging() {
    NOTIFY_EVENT_CONSTRUCTOR(EndCharging)
    setId(EndCharging_ChargingSystemPkg_ANGELSPkg_id);
}

bool EndCharging::isTypeOf(const short id) const {
    return (EndCharging_ChargingSystemPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(EndCharging, ANGELSPkg_ChargingSystemPkg, ANGELSPkg::ChargingSystemPkg, EndCharging())

/*********************************************************************
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\ChargingSystemPkg.cpp
*********************************************************************/

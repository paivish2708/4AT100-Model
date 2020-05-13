/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: ChargingSystemPkg
//!	Generated Date	: Wed, 13, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\ChargingSystemPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ChargingSystemPkg.h"
//## auto_generated
#include "Charging_System.h"
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

//## package UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_ANGELSPkg_ChargingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event Beginthecharging()
Beginthecharging::Beginthecharging() {
    NOTIFY_EVENT_CONSTRUCTOR(Beginthecharging)
    setId(Beginthecharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool Beginthecharging::isTypeOf(const short id) const {
    return (Beginthecharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(Beginthecharging, UseCaseAnalysisPkg_ANGELSPkg_ChargingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg, Beginthecharging())

//## event StartTheCharging()
StartTheCharging::StartTheCharging() {
    NOTIFY_EVENT_CONSTRUCTOR(StartTheCharging)
    setId(StartTheCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool StartTheCharging::isTypeOf(const short id) const {
    return (StartTheCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(StartTheCharging, UseCaseAnalysisPkg_ANGELSPkg_ChargingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg, StartTheCharging())

//## event InitiateChargingProcess()
InitiateChargingProcess::InitiateChargingProcess() {
    NOTIFY_EVENT_CONSTRUCTOR(InitiateChargingProcess)
    setId(InitiateChargingProcess_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool InitiateChargingProcess::isTypeOf(const short id) const {
    return (InitiateChargingProcess_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(InitiateChargingProcess, UseCaseAnalysisPkg_ANGELSPkg_ChargingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg, InitiateChargingProcess())

//## event EndCharging()
EndCharging::EndCharging() {
    NOTIFY_EVENT_CONSTRUCTOR(EndCharging)
    setId(EndCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool EndCharging::isTypeOf(const short id) const {
    return (EndCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(EndCharging, UseCaseAnalysisPkg_ANGELSPkg_ChargingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg, EndCharging())

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\ChargingSystemPkg.cpp
*********************************************************************/

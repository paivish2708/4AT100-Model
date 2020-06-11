/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: ParkingProcessPkg
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\ParkingProcessPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ParkingProcessPkg.h"
//## auto_generated
#include "ParkingSystemBlock.h"
//#[ ignore
#define StartParking_SERIALIZE OM_NO_OP

#define StartParking_UNSERIALIZE OM_NO_OP

#define StartParking_CONSTRUCTOR StartParking()

#define InitiateParkingProcess_SERIALIZE OM_NO_OP

#define InitiateParkingProcess_UNSERIALIZE OM_NO_OP

#define InitiateParkingProcess_CONSTRUCTOR InitiateParkingProcess()

#define EndParking_SERIALIZE OM_NO_OP

#define EndParking_UNSERIALIZE OM_NO_OP

#define EndParking_CONSTRUCTOR EndParking()

#define ChangeMode_SERIALIZE OM_NO_OP

#define ChangeMode_UNSERIALIZE OM_NO_OP

#define ChangeMode_CONSTRUCTOR ChangeMode()
//#]

//## package ANGELSPkg::ParkingProcessPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ANGELSPkg_ParkingProcessPkg, ANGELSPkg::ParkingProcessPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event StartParking()
StartParking::StartParking() {
    NOTIFY_EVENT_CONSTRUCTOR(StartParking)
    setId(StartParking_ParkingProcessPkg_ANGELSPkg_id);
}

bool StartParking::isTypeOf(const short id) const {
    return (StartParking_ParkingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(StartParking, ANGELSPkg_ParkingProcessPkg, ANGELSPkg::ParkingProcessPkg, StartParking())

//## event InitiateParkingProcess()
InitiateParkingProcess::InitiateParkingProcess() {
    NOTIFY_EVENT_CONSTRUCTOR(InitiateParkingProcess)
    setId(InitiateParkingProcess_ParkingProcessPkg_ANGELSPkg_id);
}

bool InitiateParkingProcess::isTypeOf(const short id) const {
    return (InitiateParkingProcess_ParkingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(InitiateParkingProcess, ANGELSPkg_ParkingProcessPkg, ANGELSPkg::ParkingProcessPkg, InitiateParkingProcess())

//## event EndParking()
EndParking::EndParking() {
    NOTIFY_EVENT_CONSTRUCTOR(EndParking)
    setId(EndParking_ParkingProcessPkg_ANGELSPkg_id);
}

bool EndParking::isTypeOf(const short id) const {
    return (EndParking_ParkingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(EndParking, ANGELSPkg_ParkingProcessPkg, ANGELSPkg::ParkingProcessPkg, EndParking())

//## event ChangeMode()
ChangeMode::ChangeMode() {
    NOTIFY_EVENT_CONSTRUCTOR(ChangeMode)
    setId(ChangeMode_ParkingProcessPkg_ANGELSPkg_id);
}

bool ChangeMode::isTypeOf(const short id) const {
    return (ChangeMode_ParkingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ChangeMode, ANGELSPkg_ParkingProcessPkg, ANGELSPkg::ParkingProcessPkg, ChangeMode())

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\ParkingProcessPkg.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: LoadingProcessPkg
//!	Generated Date	: Fri, 22, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\LoadingProcessPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LoadingProcessPkg.h"
//## auto_generated
#include "LoadingProcessBlock.h"
//#[ ignore
#define AlertDCManager_SERIALIZE OM_NO_OP

#define AlertDCManager_UNSERIALIZE OM_NO_OP

#define AlertDCManager_CONSTRUCTOR AlertDCManager()

#define CloseDoors_SERIALIZE OMADD_SER(doorstate, x2String(myEvent->doorstate))

#define CloseDoors_UNSERIALIZE OMADD_UNSER(double, doorstate, OMDestructiveString2X)

#define CloseDoors_CONSTRUCTOR CloseDoors(doorstate)

#define OpenDoors_SERIALIZE OM_NO_OP

#define OpenDoors_UNSERIALIZE OM_NO_OP

#define OpenDoors_CONSTRUCTOR OpenDoors()

#define StartLoadingProcedure_SERIALIZE OM_NO_OP

#define StartLoadingProcedure_UNSERIALIZE OM_NO_OP

#define StartLoadingProcedure_CONSTRUCTOR StartLoadingProcedure()

#define StopLoadingProc_SERIALIZE OM_NO_OP

#define StopLoadingProc_UNSERIALIZE OM_NO_OP

#define StopLoadingProc_CONSTRUCTOR StopLoadingProc()

#define DoorStatus_SERIALIZE OM_NO_OP

#define DoorStatus_UNSERIALIZE OM_NO_OP

#define DoorStatus_CONSTRUCTOR DoorStatus()

#define LoadingProcess_SERIALIZE OM_NO_OP

#define LoadingProcess_UNSERIALIZE OM_NO_OP

#define LoadingProcess_CONSTRUCTOR LoadingProcess()

#define ReturnToDockedState_SERIALIZE OM_NO_OP

#define ReturnToDockedState_UNSERIALIZE OM_NO_OP

#define ReturnToDockedState_CONSTRUCTOR ReturnToDockedState()
//#]

//## package ANGELSPkg::LoadingProcessPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ANGELSPkg_LoadingProcessPkg, ANGELSPkg::LoadingProcessPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event AlertDCManager()
AlertDCManager::AlertDCManager() {
    NOTIFY_EVENT_CONSTRUCTOR(AlertDCManager)
    setId(AlertDCManager_LoadingProcessPkg_ANGELSPkg_id);
}

bool AlertDCManager::isTypeOf(const short id) const {
    return (AlertDCManager_LoadingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(AlertDCManager, ANGELSPkg_LoadingProcessPkg, ANGELSPkg::LoadingProcessPkg, AlertDCManager())

//## event CloseDoors(double)
CloseDoors::CloseDoors(double p_doorstate) : doorstate(p_doorstate) {
    NOTIFY_EVENT_CONSTRUCTOR(CloseDoors)
    setId(CloseDoors_LoadingProcessPkg_ANGELSPkg_id);
}

bool CloseDoors::isTypeOf(const short id) const {
    return (CloseDoors_LoadingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(CloseDoors, ANGELSPkg_LoadingProcessPkg, ANGELSPkg::LoadingProcessPkg, CloseDoors(double))

//## event OpenDoors()
OpenDoors::OpenDoors() {
    NOTIFY_EVENT_CONSTRUCTOR(OpenDoors)
    setId(OpenDoors_LoadingProcessPkg_ANGELSPkg_id);
}

bool OpenDoors::isTypeOf(const short id) const {
    return (OpenDoors_LoadingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(OpenDoors, ANGELSPkg_LoadingProcessPkg, ANGELSPkg::LoadingProcessPkg, OpenDoors())

//## event StartLoadingProcedure()
StartLoadingProcedure::StartLoadingProcedure() {
    NOTIFY_EVENT_CONSTRUCTOR(StartLoadingProcedure)
    setId(StartLoadingProcedure_LoadingProcessPkg_ANGELSPkg_id);
}

bool StartLoadingProcedure::isTypeOf(const short id) const {
    return (StartLoadingProcedure_LoadingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(StartLoadingProcedure, ANGELSPkg_LoadingProcessPkg, ANGELSPkg::LoadingProcessPkg, StartLoadingProcedure())

//## event StopLoadingProc()
StopLoadingProc::StopLoadingProc() {
    NOTIFY_EVENT_CONSTRUCTOR(StopLoadingProc)
    setId(StopLoadingProc_LoadingProcessPkg_ANGELSPkg_id);
}

bool StopLoadingProc::isTypeOf(const short id) const {
    return (StopLoadingProc_LoadingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(StopLoadingProc, ANGELSPkg_LoadingProcessPkg, ANGELSPkg::LoadingProcessPkg, StopLoadingProc())

//## event DoorStatus()
DoorStatus::DoorStatus() {
    NOTIFY_EVENT_CONSTRUCTOR(DoorStatus)
    setId(DoorStatus_LoadingProcessPkg_ANGELSPkg_id);
}

bool DoorStatus::isTypeOf(const short id) const {
    return (DoorStatus_LoadingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(DoorStatus, ANGELSPkg_LoadingProcessPkg, ANGELSPkg::LoadingProcessPkg, DoorStatus())

//## event LoadingProcess()
LoadingProcess::LoadingProcess() {
    NOTIFY_EVENT_CONSTRUCTOR(LoadingProcess)
    setId(LoadingProcess_LoadingProcessPkg_ANGELSPkg_id);
}

bool LoadingProcess::isTypeOf(const short id) const {
    return (LoadingProcess_LoadingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(LoadingProcess, ANGELSPkg_LoadingProcessPkg, ANGELSPkg::LoadingProcessPkg, LoadingProcess())

//## event ReturnToDockedState()
ReturnToDockedState::ReturnToDockedState() {
    NOTIFY_EVENT_CONSTRUCTOR(ReturnToDockedState)
    setId(ReturnToDockedState_LoadingProcessPkg_ANGELSPkg_id);
}

bool ReturnToDockedState::isTypeOf(const short id) const {
    return (ReturnToDockedState_LoadingProcessPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ReturnToDockedState, ANGELSPkg_LoadingProcessPkg, ANGELSPkg::LoadingProcessPkg, ReturnToDockedState())

/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\LoadingProcessPkg.cpp
*********************************************************************/

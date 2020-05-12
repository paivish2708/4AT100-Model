/********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: LoadingSystemPkg
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\LoadingSystemPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LoadingSystemPkg.h"
//## auto_generated
#include "Loading_System.h"
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

//## package UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event AlertDCManager()
AlertDCManager::AlertDCManager() {
    NOTIFY_EVENT_CONSTRUCTOR(AlertDCManager)
    setId(AlertDCManager_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool AlertDCManager::isTypeOf(const short id) const {
    return (AlertDCManager_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(AlertDCManager, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg, AlertDCManager())

//## event CloseDoors(double)
CloseDoors::CloseDoors() {
    NOTIFY_EVENT_CONSTRUCTOR(CloseDoors)
    setId(CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

CloseDoors::CloseDoors(double p_doorstate) : doorstate(p_doorstate) {
    NOTIFY_EVENT_CONSTRUCTOR(CloseDoors)
    setId(CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool CloseDoors::isTypeOf(const short id) const {
    return (CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(CloseDoors, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg, CloseDoors(double))

//## event OpenDoors()
OpenDoors::OpenDoors() {
    NOTIFY_EVENT_CONSTRUCTOR(OpenDoors)
    setId(OpenDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool OpenDoors::isTypeOf(const short id) const {
    return (OpenDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(OpenDoors, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg, OpenDoors())

//## event StartLoadingProcedure()
StartLoadingProcedure::StartLoadingProcedure() {
    NOTIFY_EVENT_CONSTRUCTOR(StartLoadingProcedure)
    setId(StartLoadingProcedure_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool StartLoadingProcedure::isTypeOf(const short id) const {
    return (StartLoadingProcedure_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(StartLoadingProcedure, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg, StartLoadingProcedure())

//## event StopLoadingProc()
StopLoadingProc::StopLoadingProc() {
    NOTIFY_EVENT_CONSTRUCTOR(StopLoadingProc)
    setId(StopLoadingProc_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool StopLoadingProc::isTypeOf(const short id) const {
    return (StopLoadingProc_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(StopLoadingProc, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg, StopLoadingProc())

//## event DoorStatus()
DoorStatus::DoorStatus() {
    NOTIFY_EVENT_CONSTRUCTOR(DoorStatus)
    setId(DoorStatus_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool DoorStatus::isTypeOf(const short id) const {
    return (DoorStatus_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(DoorStatus, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg, DoorStatus())

//## event LoadingProcess()
LoadingProcess::LoadingProcess() {
    NOTIFY_EVENT_CONSTRUCTOR(LoadingProcess)
    setId(LoadingProcess_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool LoadingProcess::isTypeOf(const short id) const {
    return (LoadingProcess_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(LoadingProcess, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg, LoadingProcess())

//## event ReturnToDockedState()
ReturnToDockedState::ReturnToDockedState() {
    NOTIFY_EVENT_CONSTRUCTOR(ReturnToDockedState)
    setId(ReturnToDockedState_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool ReturnToDockedState::isTypeOf(const short id) const {
    return (ReturnToDockedState_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ReturnToDockedState, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg, ReturnToDockedState())

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\LoadingSystemPkg.cpp
*********************************************************************/

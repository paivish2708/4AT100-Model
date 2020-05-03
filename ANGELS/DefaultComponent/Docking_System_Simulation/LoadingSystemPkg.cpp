/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: LoadingSystemPkg
//!	Generated Date	: Sun, 3, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\LoadingSystemPkg.cpp
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

#define CloseDoors_SERIALIZE OM_NO_OP

#define CloseDoors_UNSERIALIZE OM_NO_OP

#define CloseDoors_CONSTRUCTOR CloseDoors()

#define OpenDoors_SERIALIZE OMADD_SER(CheckDoorStatus, x2String(myEvent->CheckDoorStatus))

#define OpenDoors_UNSERIALIZE OMADD_UNSER(RhpBoolean, CheckDoorStatus, OMDestructiveString2X)

#define OpenDoors_CONSTRUCTOR OpenDoors(CheckDoorStatus)

#define StartLoadingProcedure_SERIALIZE OM_NO_OP

#define StartLoadingProcedure_UNSERIALIZE OM_NO_OP

#define StartLoadingProcedure_CONSTRUCTOR StartLoadingProcedure()

#define StopLoadingProc_SERIALIZE OM_NO_OP

#define StopLoadingProc_UNSERIALIZE OM_NO_OP

#define StopLoadingProc_CONSTRUCTOR StopLoadingProc()
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

//## event CloseDoors()
CloseDoors::CloseDoors() {
    NOTIFY_EVENT_CONSTRUCTOR(CloseDoors)
    setId(CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool CloseDoors::isTypeOf(const short id) const {
    return (CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(CloseDoors, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg, CloseDoors())

//## event OpenDoors(RhpBoolean)
OpenDoors::OpenDoors(RhpBoolean p_CheckDoorStatus) : CheckDoorStatus(p_CheckDoorStatus) {
    NOTIFY_EVENT_CONSTRUCTOR(OpenDoors)
    setId(OpenDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool OpenDoors::isTypeOf(const short id) const {
    return (OpenDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(OpenDoors, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg, OpenDoors(RhpBoolean))

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

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\LoadingSystemPkg.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: TopLevel_Simulation
	Model Element	: DockingSystemPkg
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\TopLevel_Simulation\DockingSystemPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DockingSystemPkg.h"
//#[ ignore
#define StartDockingProcedure_SERIALIZE OM_NO_OP

#define StartDockingProcedure_UNSERIALIZE OM_NO_OP

#define StartDockingProcedure_CONSTRUCTOR StartDockingProcedure()

#define OpenDoors_SERIALIZE OM_NO_OP

#define OpenDoors_UNSERIALIZE OM_NO_OP

#define OpenDoors_CONSTRUCTOR OpenDoors()

#define CloseDoors_SERIALIZE OM_NO_OP

#define CloseDoors_UNSERIALIZE OM_NO_OP

#define CloseDoors_CONSTRUCTOR CloseDoors()

#define AlertDCManager_SERIALIZE OM_NO_OP

#define AlertDCManager_UNSERIALIZE OM_NO_OP

#define AlertDCManager_CONSTRUCTOR AlertDCManager()

#define StopLoadingProc_SERIALIZE OM_NO_OP

#define StopLoadingProc_UNSERIALIZE OM_NO_OP

#define StopLoadingProc_CONSTRUCTOR StopLoadingProc()
//#]

//## package UseCaseAnalysisPkg::DockingSystemPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* aomsAttributes);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_DockingSystemPkg, UseCaseAnalysisPkg::DockingSystemPkg)

static void serializeGlobalVars(AOMSAttributes* aomsAttributes) {
}
#endif // _OMINSTRUMENT

//## event StartDockingProcedure()
StartDockingProcedure::StartDockingProcedure() {
    NOTIFY_EVENT_CONSTRUCTOR(StartDockingProcedure)
    setId(StartDockingProcedure_DockingSystemPkg_UseCaseAnalysisPkg_id);
}

bool StartDockingProcedure::isTypeOf(const short id) const {
    return (StartDockingProcedure_DockingSystemPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(StartDockingProcedure, UseCaseAnalysisPkg_DockingSystemPkg, UseCaseAnalysisPkg::DockingSystemPkg, StartDockingProcedure())

//## event OpenDoors()
OpenDoors::OpenDoors() {
    NOTIFY_EVENT_CONSTRUCTOR(OpenDoors)
    setId(OpenDoors_DockingSystemPkg_UseCaseAnalysisPkg_id);
}

bool OpenDoors::isTypeOf(const short id) const {
    return (OpenDoors_DockingSystemPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(OpenDoors, UseCaseAnalysisPkg_DockingSystemPkg, UseCaseAnalysisPkg::DockingSystemPkg, OpenDoors())

//## event CloseDoors()
CloseDoors::CloseDoors() {
    NOTIFY_EVENT_CONSTRUCTOR(CloseDoors)
    setId(CloseDoors_DockingSystemPkg_UseCaseAnalysisPkg_id);
}

bool CloseDoors::isTypeOf(const short id) const {
    return (CloseDoors_DockingSystemPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(CloseDoors, UseCaseAnalysisPkg_DockingSystemPkg, UseCaseAnalysisPkg::DockingSystemPkg, CloseDoors())

//## event AlertDCManager()
AlertDCManager::AlertDCManager() {
    NOTIFY_EVENT_CONSTRUCTOR(AlertDCManager)
    setId(AlertDCManager_DockingSystemPkg_UseCaseAnalysisPkg_id);
}

bool AlertDCManager::isTypeOf(const short id) const {
    return (AlertDCManager_DockingSystemPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(AlertDCManager, UseCaseAnalysisPkg_DockingSystemPkg, UseCaseAnalysisPkg::DockingSystemPkg, AlertDCManager())

//## event StopLoadingProc()
StopLoadingProc::StopLoadingProc() {
    NOTIFY_EVENT_CONSTRUCTOR(StopLoadingProc)
    setId(StopLoadingProc_DockingSystemPkg_UseCaseAnalysisPkg_id);
}

bool StopLoadingProc::isTypeOf(const short id) const {
    return (StopLoadingProc_DockingSystemPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(StopLoadingProc, UseCaseAnalysisPkg_DockingSystemPkg, UseCaseAnalysisPkg::DockingSystemPkg, StopLoadingProc())

/*********************************************************************
	File Path	: DefaultComponent\TopLevel_Simulation\DockingSystemPkg.cpp
*********************************************************************/

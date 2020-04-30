/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LoadingSystemPkg
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\DefaultConfig\LoadingSystemPkg.cpp
*********************************************************************/

//## auto_generated
#include "LoadingSystemPkg.h"
//## auto_generated
#include "Loading_System.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg



//## event AlertDCManager()
AlertDCManager::AlertDCManager() {
    setId(AlertDCManager_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool AlertDCManager::isTypeOf(const short id) const {
    return (AlertDCManager_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event CloseDoors()
CloseDoors::CloseDoors() {
    setId(CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool CloseDoors::isTypeOf(const short id) const {
    return (CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event OpenDoors(RhpBoolean)
OpenDoors::OpenDoors(RhpBoolean p_CheckDoorStatus) : CheckDoorStatus(p_CheckDoorStatus) {
    setId(OpenDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool OpenDoors::isTypeOf(const short id) const {
    return (OpenDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event StartDockingProcedure()
StartDockingProcedure::StartDockingProcedure() {
    setId(StartDockingProcedure_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool StartDockingProcedure::isTypeOf(const short id) const {
    return (StartDockingProcedure_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event StopLoadingProc()
StopLoadingProc::StopLoadingProc() {
    setId(StopLoadingProc_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool StopLoadingProc::isTypeOf(const short id) const {
    return (StopLoadingProc_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LoadingSystemPkg.cpp
*********************************************************************/

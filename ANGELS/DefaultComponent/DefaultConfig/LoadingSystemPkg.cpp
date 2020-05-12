/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LoadingSystemPkg
//!	Generated Date	: Tue, 12, May 2020  
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

//## event CloseDoors(double)
CloseDoors::CloseDoors(double p_doorstate) : doorstate(p_doorstate) {
    setId(CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool CloseDoors::isTypeOf(const short id) const {
    return (CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event OpenDoors()
OpenDoors::OpenDoors() {
    setId(OpenDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool OpenDoors::isTypeOf(const short id) const {
    return (OpenDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event StartLoadingProcedure()
StartLoadingProcedure::StartLoadingProcedure() {
    setId(StartLoadingProcedure_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool StartLoadingProcedure::isTypeOf(const short id) const {
    return (StartLoadingProcedure_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event StopLoadingProc()
StopLoadingProc::StopLoadingProc() {
    setId(StopLoadingProc_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool StopLoadingProc::isTypeOf(const short id) const {
    return (StopLoadingProc_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event DoorStatus()
DoorStatus::DoorStatus() {
    setId(DoorStatus_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool DoorStatus::isTypeOf(const short id) const {
    return (DoorStatus_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event LoadingProcess()
LoadingProcess::LoadingProcess() {
    setId(LoadingProcess_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool LoadingProcess::isTypeOf(const short id) const {
    return (LoadingProcess_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event ReturnToDockedState()
ReturnToDockedState::ReturnToDockedState() {
    setId(ReturnToDockedState_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool ReturnToDockedState::isTypeOf(const short id) const {
    return (ReturnToDockedState_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LoadingSystemPkg.cpp
*********************************************************************/

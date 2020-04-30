/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DockingSystemPkg
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\DefaultConfig\DockingSystemPkg.cpp
*********************************************************************/

//## auto_generated
#include "DockingSystemPkg.h"
//## auto_generated
#include "Docking_System.h"
//## package UseCaseAnalysisPkg::DockingSystemPkg



//## event StartDockingProcedure()
StartDockingProcedure::StartDockingProcedure() {
    setId(StartDockingProcedure_DockingSystemPkg_UseCaseAnalysisPkg_id);
}

bool StartDockingProcedure::isTypeOf(const short id) const {
    return (StartDockingProcedure_DockingSystemPkg_UseCaseAnalysisPkg_id==id);
}

//## event OpenDoors(int)
OpenDoors::OpenDoors(int p_argument_0) : argument_0(p_argument_0) {
    setId(OpenDoors_DockingSystemPkg_UseCaseAnalysisPkg_id);
}

bool OpenDoors::isTypeOf(const short id) const {
    return (OpenDoors_DockingSystemPkg_UseCaseAnalysisPkg_id==id);
}

//## event CloseDoors()
CloseDoors::CloseDoors() {
    setId(CloseDoors_DockingSystemPkg_UseCaseAnalysisPkg_id);
}

bool CloseDoors::isTypeOf(const short id) const {
    return (CloseDoors_DockingSystemPkg_UseCaseAnalysisPkg_id==id);
}

//## event AlertDCManager()
AlertDCManager::AlertDCManager() {
    setId(AlertDCManager_DockingSystemPkg_UseCaseAnalysisPkg_id);
}

bool AlertDCManager::isTypeOf(const short id) const {
    return (AlertDCManager_DockingSystemPkg_UseCaseAnalysisPkg_id==id);
}

//## event StopLoadingProc()
StopLoadingProc::StopLoadingProc() {
    setId(StopLoadingProc_DockingSystemPkg_UseCaseAnalysisPkg_id);
}

bool StopLoadingProc::isTypeOf(const short id) const {
    return (StopLoadingProc_DockingSystemPkg_UseCaseAnalysisPkg_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DockingSystemPkg.cpp
*********************************************************************/

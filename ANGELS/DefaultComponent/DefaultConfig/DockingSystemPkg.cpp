/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DockingSystemPkg
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DockingSystemPkg.cpp
*********************************************************************/

//## auto_generated
#include "DockingSystemPkg.h"
//## auto_generated
#include "Docking_System.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg



//## event StartDockingProcedure()
StartDockingProcedure::StartDockingProcedure() {
    setId(StartDockingProcedure_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool StartDockingProcedure::isTypeOf(const short id) const {
    return (StartDockingProcedure_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event BeginTruckMovement()
BeginTruckMovement::BeginTruckMovement() {
    setId(BeginTruckMovement_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool BeginTruckMovement::isTypeOf(const short id) const {
    return (BeginTruckMovement_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event DCManagerInput()
DCManagerInput::DCManagerInput() {
    setId(DCManagerInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool DCManagerInput::isTypeOf(const short id) const {
    return (DCManagerInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event Autonomousmode()
Autonomousmode::Autonomousmode() {
    setId(Autonomousmode_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool Autonomousmode::isTypeOf(const short id) const {
    return (Autonomousmode_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event EndDocking()
EndDocking::EndDocking() {
    setId(EndDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool EndDocking::isTypeOf(const short id) const {
    return (EndDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event TruckDocking()
TruckDocking::TruckDocking() {
    setId(TruckDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool TruckDocking::isTypeOf(const short id) const {
    return (TruckDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event DockInput(double)
DockInput::DockInput(double p_DS) : DS(p_DS) {
    setId(DockInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool DockInput::isTypeOf(const short id) const {
    return (DockInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DockingSystemPkg.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ChargingSystemPkg
//!	Generated Date	: Wed, 13, May 2020  
	File Path	: DefaultComponent\DefaultConfig\ChargingSystemPkg.cpp
*********************************************************************/

//## auto_generated
#include "ChargingSystemPkg.h"
//## auto_generated
#include "Charging_System.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg



//## event Beginthecharging()
Beginthecharging::Beginthecharging() {
    setId(Beginthecharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool Beginthecharging::isTypeOf(const short id) const {
    return (Beginthecharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event StartTheCharging()
StartTheCharging::StartTheCharging() {
    setId(StartTheCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool StartTheCharging::isTypeOf(const short id) const {
    return (StartTheCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event InitiateChargingProcess()
InitiateChargingProcess::InitiateChargingProcess() {
    setId(InitiateChargingProcess_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool InitiateChargingProcess::isTypeOf(const short id) const {
    return (InitiateChargingProcess_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

//## event EndCharging()
EndCharging::EndCharging() {
    setId(EndCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool EndCharging::isTypeOf(const short id) const {
    return (EndCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ChargingSystemPkg.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: DockingSystemPkg
//!	Generated Date	: Mon, 11, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\DockingSystemPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DockingSystemPkg.h"
//## auto_generated
#include "Docking_System.h"
//#[ ignore
#define StartDockingProcedure_SERIALIZE OM_NO_OP

#define StartDockingProcedure_UNSERIALIZE OM_NO_OP

#define StartDockingProcedure_CONSTRUCTOR StartDockingProcedure()

#define BeginTruckMovement_SERIALIZE OM_NO_OP

#define BeginTruckMovement_UNSERIALIZE OM_NO_OP

#define BeginTruckMovement_CONSTRUCTOR BeginTruckMovement()

#define DCManagerInput_SERIALIZE OM_NO_OP

#define DCManagerInput_UNSERIALIZE OM_NO_OP

#define DCManagerInput_CONSTRUCTOR DCManagerInput()

#define Autonomousmode_SERIALIZE OM_NO_OP

#define Autonomousmode_UNSERIALIZE OM_NO_OP

#define Autonomousmode_CONSTRUCTOR Autonomousmode()

#define EndDocking_SERIALIZE OM_NO_OP

#define EndDocking_UNSERIALIZE OM_NO_OP

#define EndDocking_CONSTRUCTOR EndDocking()

#define TruckDocking_SERIALIZE OM_NO_OP

#define TruckDocking_UNSERIALIZE OM_NO_OP

#define TruckDocking_CONSTRUCTOR TruckDocking()

#define DockInput_SERIALIZE OMADD_SER(DS, x2String(myEvent->DS))

#define DockInput_UNSERIALIZE OMADD_UNSER(double, DS, OMDestructiveString2X)

#define DockInput_CONSTRUCTOR DockInput(DS)
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event StartDockingProcedure()
StartDockingProcedure::StartDockingProcedure() {
    NOTIFY_EVENT_CONSTRUCTOR(StartDockingProcedure)
    setId(StartDockingProcedure_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool StartDockingProcedure::isTypeOf(const short id) const {
    return (StartDockingProcedure_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(StartDockingProcedure, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, StartDockingProcedure())

//## event BeginTruckMovement()
BeginTruckMovement::BeginTruckMovement() {
    NOTIFY_EVENT_CONSTRUCTOR(BeginTruckMovement)
    setId(BeginTruckMovement_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool BeginTruckMovement::isTypeOf(const short id) const {
    return (BeginTruckMovement_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(BeginTruckMovement, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, BeginTruckMovement())

//## event DCManagerInput()
DCManagerInput::DCManagerInput() {
    NOTIFY_EVENT_CONSTRUCTOR(DCManagerInput)
    setId(DCManagerInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool DCManagerInput::isTypeOf(const short id) const {
    return (DCManagerInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(DCManagerInput, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, DCManagerInput())

//## event Autonomousmode()
Autonomousmode::Autonomousmode() {
    NOTIFY_EVENT_CONSTRUCTOR(Autonomousmode)
    setId(Autonomousmode_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool Autonomousmode::isTypeOf(const short id) const {
    return (Autonomousmode_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(Autonomousmode, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, Autonomousmode())

//## event EndDocking()
EndDocking::EndDocking() {
    NOTIFY_EVENT_CONSTRUCTOR(EndDocking)
    setId(EndDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool EndDocking::isTypeOf(const short id) const {
    return (EndDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(EndDocking, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, EndDocking())

//## event TruckDocking()
TruckDocking::TruckDocking() {
    NOTIFY_EVENT_CONSTRUCTOR(TruckDocking)
    setId(TruckDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool TruckDocking::isTypeOf(const short id) const {
    return (TruckDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(TruckDocking, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, TruckDocking())

//## event DockInput(double)
DockInput::DockInput() {
    NOTIFY_EVENT_CONSTRUCTOR(DockInput)
    setId(DockInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

DockInput::DockInput(double p_DS) : DS(p_DS) {
    NOTIFY_EVENT_CONSTRUCTOR(DockInput)
    setId(DockInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool DockInput::isTypeOf(const short id) const {
    return (DockInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(DockInput, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, DockInput(double))

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\DockingSystemPkg.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: DockingPkg
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\DockingPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DockingPkg.h"
//## auto_generated
#include "DockingProcessBlock.h"
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

//## package ANGELSPkg::DockingPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ANGELSPkg_DockingPkg, ANGELSPkg::DockingPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event StartDockingProcedure()
StartDockingProcedure::StartDockingProcedure() {
    NOTIFY_EVENT_CONSTRUCTOR(StartDockingProcedure)
    setId(StartDockingProcedure_DockingPkg_ANGELSPkg_id);
}

bool StartDockingProcedure::isTypeOf(const short id) const {
    return (StartDockingProcedure_DockingPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(StartDockingProcedure, ANGELSPkg_DockingPkg, ANGELSPkg::DockingPkg, StartDockingProcedure())

//## event BeginTruckMovement()
BeginTruckMovement::BeginTruckMovement() {
    NOTIFY_EVENT_CONSTRUCTOR(BeginTruckMovement)
    setId(BeginTruckMovement_DockingPkg_ANGELSPkg_id);
}

bool BeginTruckMovement::isTypeOf(const short id) const {
    return (BeginTruckMovement_DockingPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(BeginTruckMovement, ANGELSPkg_DockingPkg, ANGELSPkg::DockingPkg, BeginTruckMovement())

//## event DCManagerInput()
DCManagerInput::DCManagerInput() {
    NOTIFY_EVENT_CONSTRUCTOR(DCManagerInput)
    setId(DCManagerInput_DockingPkg_ANGELSPkg_id);
}

bool DCManagerInput::isTypeOf(const short id) const {
    return (DCManagerInput_DockingPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(DCManagerInput, ANGELSPkg_DockingPkg, ANGELSPkg::DockingPkg, DCManagerInput())

//## event Autonomousmode()
Autonomousmode::Autonomousmode() {
    NOTIFY_EVENT_CONSTRUCTOR(Autonomousmode)
    setId(Autonomousmode_DockingPkg_ANGELSPkg_id);
}

bool Autonomousmode::isTypeOf(const short id) const {
    return (Autonomousmode_DockingPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(Autonomousmode, ANGELSPkg_DockingPkg, ANGELSPkg::DockingPkg, Autonomousmode())

//## event EndDocking()
EndDocking::EndDocking() {
    NOTIFY_EVENT_CONSTRUCTOR(EndDocking)
    setId(EndDocking_DockingPkg_ANGELSPkg_id);
}

bool EndDocking::isTypeOf(const short id) const {
    return (EndDocking_DockingPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(EndDocking, ANGELSPkg_DockingPkg, ANGELSPkg::DockingPkg, EndDocking())

//## event TruckDocking()
TruckDocking::TruckDocking() {
    NOTIFY_EVENT_CONSTRUCTOR(TruckDocking)
    setId(TruckDocking_DockingPkg_ANGELSPkg_id);
}

bool TruckDocking::isTypeOf(const short id) const {
    return (TruckDocking_DockingPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(TruckDocking, ANGELSPkg_DockingPkg, ANGELSPkg::DockingPkg, TruckDocking())

//## event DockInput(double)
DockInput::DockInput() {
    NOTIFY_EVENT_CONSTRUCTOR(DockInput)
    setId(DockInput_DockingPkg_ANGELSPkg_id);
}

DockInput::DockInput(double p_DS) : DS(p_DS) {
    NOTIFY_EVENT_CONSTRUCTOR(DockInput)
    setId(DockInput_DockingPkg_ANGELSPkg_id);
}

bool DockInput::isTypeOf(const short id) const {
    return (DockInput_DockingPkg_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(DockInput, ANGELSPkg_DockingPkg, ANGELSPkg::DockingPkg, DockInput(double))

/*********************************************************************
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\DockingPkg.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: DockingSystemPkg
//!	Generated Date	: Sun, 3, May 2020  
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

#define ParkingSpotInput_SERIALIZE OMADD_SER(Parkingspot, x2String(myEvent->Parkingspot))

#define ParkingSpotInput_UNSERIALIZE OMADD_UNSER(double, Parkingspot, OMDestructiveString2X)

#define ParkingSpotInput_CONSTRUCTOR ParkingSpotInput(Parkingspot)

#define BeginMovement_SERIALIZE OM_NO_OP

#define BeginMovement_UNSERIALIZE OM_NO_OP

#define BeginMovement_CONSTRUCTOR BeginMovement()

#define DCManagerInput_SERIALIZE OM_NO_OP

#define DCManagerInput_UNSERIALIZE OM_NO_OP

#define DCManagerInput_CONSTRUCTOR DCManagerInput()
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

//## event ParkingSpotInput(double)
ParkingSpotInput::ParkingSpotInput(double p_Parkingspot) : Parkingspot(p_Parkingspot) {
    NOTIFY_EVENT_CONSTRUCTOR(ParkingSpotInput)
    setId(ParkingSpotInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool ParkingSpotInput::isTypeOf(const short id) const {
    return (ParkingSpotInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ParkingSpotInput, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, ParkingSpotInput(double))

//## event BeginMovement()
BeginMovement::BeginMovement() {
    NOTIFY_EVENT_CONSTRUCTOR(BeginMovement)
    setId(BeginMovement_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool BeginMovement::isTypeOf(const short id) const {
    return (BeginMovement_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(BeginMovement, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, BeginMovement())

//## event DCManagerInput()
DCManagerInput::DCManagerInput() {
    NOTIFY_EVENT_CONSTRUCTOR(DCManagerInput)
    setId(DCManagerInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id);
}

bool DCManagerInput::isTypeOf(const short id) const {
    return (DCManagerInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(DCManagerInput, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, DCManagerInput())

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\DockingSystemPkg.cpp
*********************************************************************/

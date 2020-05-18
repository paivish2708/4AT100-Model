/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: ParkingSystem
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\ParkingSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ParkingSystem.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define ANGELSPkg_ParkingProcessPkg_ParkingSystem_ParkingSystem_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ParkingProcessPkg

//## class ParkingSystem
ParkingSystem::ParkingSystem() {
    NOTIFY_CONSTRUCTOR(ParkingSystem, ParkingSystem(), 0, ANGELSPkg_ParkingProcessPkg_ParkingSystem_ParkingSystem_SERIALIZE);
    itsANGELS = NULL;
}

ParkingSystem::~ParkingSystem() {
    NOTIFY_DESTRUCTOR(~ParkingSystem, true);
    cleanUpRelations();
}

ANGELS* ParkingSystem::getItsANGELS() const {
    return itsANGELS;
}

void ParkingSystem::setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
        }
}

void ParkingSystem::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedParkingSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(ParkingSystem, ANGELSPkg_ParkingProcessPkg, ANGELSPkg::ParkingProcessPkg, false, OMAnimatedParkingSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\ParkingSystem.cpp
*********************************************************************/

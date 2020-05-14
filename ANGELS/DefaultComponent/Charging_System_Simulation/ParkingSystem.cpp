/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: ParkingSystem
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\ParkingSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ParkingSystem.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ParkingProcessPkg_ParkingSystem_ParkingSystem_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ParkingProcessPkg

//## class ParkingSystem
ParkingSystem::ParkingSystem() {
    NOTIFY_CONSTRUCTOR(ParkingSystem, ParkingSystem(), 0, UseCaseAnalysisPkg_ANGELSPkg_ParkingProcessPkg_ParkingSystem_ParkingSystem_SERIALIZE);
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
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsParkingSystem(this);
        }
    _setItsANGELS(p_ANGELS);
}

void ParkingSystem::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            ParkingSystem* p_ParkingSystem = itsANGELS->getItsParkingSystem();
            if(p_ParkingSystem != NULL)
                {
                    itsANGELS->__setItsParkingSystem(NULL);
                }
            itsANGELS = NULL;
        }
}

void ParkingSystem::__setItsANGELS(ANGELS* p_ANGELS) {
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

void ParkingSystem::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsParkingSystem(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void ParkingSystem::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
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

IMPLEMENT_META_P(ParkingSystem, UseCaseAnalysisPkg_ANGELSPkg_ParkingProcessPkg, UseCaseAnalysisPkg::ANGELSPkg::ParkingProcessPkg, false, OMAnimatedParkingSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\ParkingSystem.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: DockingSystem
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\DockingSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DockingSystem.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_DockingSystem_DockingSystem_DockingSystem_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystem


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_ANGELSPkg_DockingSystem, UseCaseAnalysisPkg::ANGELSPkg::DockingSystem)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystem

//## class DockingSystem
DockingSystem::DockingSystem() {
    NOTIFY_CONSTRUCTOR(DockingSystem, DockingSystem(), 0, UseCaseAnalysisPkg_ANGELSPkg_DockingSystem_DockingSystem_DockingSystem_SERIALIZE);
    itsANGELS = NULL;
}

DockingSystem::~DockingSystem() {
    NOTIFY_DESTRUCTOR(~DockingSystem, true);
    cleanUpRelations();
}

ANGELS* DockingSystem::getItsANGELS() const {
    return itsANGELS;
}

void DockingSystem::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDockingSystem(this);
        }
    _setItsANGELS(p_ANGELS);
}

void DockingSystem::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            DockingSystem* p_DockingSystem = itsANGELS->getItsDockingSystem();
            if(p_DockingSystem != NULL)
                {
                    itsANGELS->__setItsDockingSystem(NULL);
                }
            itsANGELS = NULL;
        }
}

void DockingSystem::__setItsANGELS(ANGELS* p_ANGELS) {
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

void DockingSystem::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsDockingSystem(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void DockingSystem::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDockingSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(DockingSystem, UseCaseAnalysisPkg_ANGELSPkg_DockingSystem, UseCaseAnalysisPkg::ANGELSPkg::DockingSystem, false, OMAnimatedDockingSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\DockingSystem.cpp
*********************************************************************/

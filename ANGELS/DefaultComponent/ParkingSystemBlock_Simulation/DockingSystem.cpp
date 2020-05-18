/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ParkingSystemBlock_Simulation
	Model Element	: DockingSystem
//!	Generated Date	: Mon, 18, May 2020  
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\DockingSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DockingSystem.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define ANGELSPkg_DockingSystem_DockingSystem_DockingSystem_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::DockingSystem


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ANGELSPkg_DockingSystem, ANGELSPkg::DockingSystem)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## package ANGELSPkg::DockingSystem

//## class DockingSystem
DockingSystem::DockingSystem() {
    NOTIFY_CONSTRUCTOR(DockingSystem, DockingSystem(), 0, ANGELSPkg_DockingSystem_DockingSystem_DockingSystem_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
}

DockingSystem::~DockingSystem() {
    NOTIFY_DESTRUCTOR(~DockingSystem, true);
    cleanUpRelations();
}

ANGELS* DockingSystem::getItsANGELS() const {
    return itsANGELS;
}

void DockingSystem::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* DockingSystem::getItsANGELS_1() const {
    return itsANGELS_1;
}

void DockingSystem::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDockingSystem(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

void DockingSystem::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            DockingSystem* p_DockingSystem = itsANGELS_1->getItsDockingSystem();
            if(p_DockingSystem != NULL)
                {
                    itsANGELS_1->__setItsDockingSystem(NULL);
                }
            itsANGELS_1 = NULL;
        }
}

void DockingSystem::__setItsANGELS_1(ANGELS* p_ANGELS) {
    itsANGELS_1 = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS_1", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
        }
}

void DockingSystem::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsDockingSystem(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void DockingSystem::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDockingSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
}
//#]

IMPLEMENT_META_P(DockingSystem, ANGELSPkg_DockingSystem, ANGELSPkg::DockingSystem, false, OMAnimatedDockingSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\DockingSystem.cpp
*********************************************************************/

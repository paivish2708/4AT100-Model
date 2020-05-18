/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ParkingSystemBlock_Simulation
	Model Element	: LoadingSystem
//!	Generated Date	: Mon, 18, May 2020  
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\LoadingSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LoadingSystem.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define ANGELSPkg_LoadingSystemPkg_LoadingSystem_LoadingSystem_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::LoadingSystemPkg

//## class LoadingSystem
LoadingSystem::LoadingSystem() {
    NOTIFY_CONSTRUCTOR(LoadingSystem, LoadingSystem(), 0, ANGELSPkg_LoadingSystemPkg_LoadingSystem_LoadingSystem_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
}

LoadingSystem::~LoadingSystem() {
    NOTIFY_DESTRUCTOR(~LoadingSystem, true);
    cleanUpRelations();
}

ANGELS* LoadingSystem::getItsANGELS() const {
    return itsANGELS;
}

void LoadingSystem::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* LoadingSystem::getItsANGELS_1() const {
    return itsANGELS_1;
}

void LoadingSystem::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsLoadingSystem(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

void LoadingSystem::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            LoadingSystem* p_LoadingSystem = itsANGELS_1->getItsLoadingSystem();
            if(p_LoadingSystem != NULL)
                {
                    itsANGELS_1->__setItsLoadingSystem(NULL);
                }
            itsANGELS_1 = NULL;
        }
}

void LoadingSystem::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void LoadingSystem::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsLoadingSystem(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void LoadingSystem::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLoadingSystem::serializeRelations(AOMSRelations* aomsRelations) const {
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

IMPLEMENT_META_P(LoadingSystem, ANGELSPkg_LoadingSystemPkg, ANGELSPkg::LoadingSystemPkg, false, OMAnimatedLoadingSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\LoadingSystem.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: LoadingSystem
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\LoadingSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LoadingSystem.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_Loading_systemPkg_LoadingSystem_LoadingSystem_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::Loading_systemPkg

//## class LoadingSystem
LoadingSystem::LoadingSystem() {
    NOTIFY_CONSTRUCTOR(LoadingSystem, LoadingSystem(), 0, UseCaseAnalysisPkg_ANGELSPkg_Loading_systemPkg_LoadingSystem_LoadingSystem_SERIALIZE);
    itsANGELS = NULL;
}

LoadingSystem::~LoadingSystem() {
    NOTIFY_DESTRUCTOR(~LoadingSystem, true);
    cleanUpRelations();
}

ANGELS* LoadingSystem::getItsANGELS() const {
    return itsANGELS;
}

void LoadingSystem::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsLoadingSystem(this);
        }
    _setItsANGELS(p_ANGELS);
}

void LoadingSystem::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            LoadingSystem* p_LoadingSystem = itsANGELS->getItsLoadingSystem();
            if(p_LoadingSystem != NULL)
                {
                    itsANGELS->__setItsLoadingSystem(NULL);
                }
            itsANGELS = NULL;
        }
}

void LoadingSystem::__setItsANGELS(ANGELS* p_ANGELS) {
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

void LoadingSystem::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsLoadingSystem(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void LoadingSystem::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLoadingSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(LoadingSystem, UseCaseAnalysisPkg_ANGELSPkg_Loading_systemPkg, UseCaseAnalysisPkg::ANGELSPkg::Loading_systemPkg, false, OMAnimatedLoadingSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\LoadingSystem.cpp
*********************************************************************/

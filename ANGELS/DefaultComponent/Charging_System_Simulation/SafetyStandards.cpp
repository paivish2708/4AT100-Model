/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: SafetyStandards
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\SafetyStandards.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SafetyStandards.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_SafetyStandards_SafetyStandards_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor SafetyStandards
#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_ANGELSPkg_SafetyStandards, UseCaseAnalysisPkg::ANGELSPkg::SafetyStandards)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

SafetyStandards::SafetyStandards() {
    NOTIFY_CONSTRUCTOR(SafetyStandards, SafetyStandards(), 0, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_SafetyStandards_SafetyStandards_SERIALIZE);
    itsANGELS = NULL;
}

SafetyStandards::~SafetyStandards() {
    NOTIFY_DESTRUCTOR(~SafetyStandards, true);
    cleanUpRelations();
}

ANGELS* SafetyStandards::getItsANGELS() const {
    return itsANGELS;
}

void SafetyStandards::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsSafetyStandards(this);
        }
    _setItsANGELS(p_ANGELS);
}

void SafetyStandards::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            SafetyStandards* p_SafetyStandards = itsANGELS->getItsSafetyStandards();
            if(p_SafetyStandards != NULL)
                {
                    itsANGELS->__setItsSafetyStandards(NULL);
                }
            itsANGELS = NULL;
        }
}

void SafetyStandards::__setItsANGELS(ANGELS* p_ANGELS) {
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

void SafetyStandards::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsSafetyStandards(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void SafetyStandards::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSafetyStandards::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(SafetyStandards, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg, UseCaseAnalysisPkg::ANGELSPkg::ActorPkg, false, OMAnimatedSafetyStandards)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\SafetyStandards.cpp
*********************************************************************/

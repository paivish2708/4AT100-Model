/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: SafetyStandards
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\SafetyStandards.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SafetyStandards.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsEmergencyOverrideBlock
#include "EmergencyOverrideBlock.h"
//#[ ignore
#define ANGELSPkg_ActorPkg_SafetyStandards_SafetyStandards_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ActorPkg

//## actor SafetyStandards
SafetyStandards::SafetyStandards() {
    NOTIFY_CONSTRUCTOR(SafetyStandards, SafetyStandards(), 0, ANGELSPkg_ActorPkg_SafetyStandards_SafetyStandards_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsEmergencyOverrideBlock = NULL;
}

SafetyStandards::~SafetyStandards() {
    NOTIFY_DESTRUCTOR(~SafetyStandards, true);
    cleanUpRelations();
}

ANGELS* SafetyStandards::getItsANGELS() const {
    return itsANGELS;
}

void SafetyStandards::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* SafetyStandards::getItsANGELS_1() const {
    return itsANGELS_1;
}

void SafetyStandards::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsSafetyStandards(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

EmergencyOverrideBlock* SafetyStandards::getItsEmergencyOverrideBlock() const {
    return itsEmergencyOverrideBlock;
}

void SafetyStandards::setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
    if(p_EmergencyOverrideBlock != NULL)
        {
            p_EmergencyOverrideBlock->_setItsSafetyStandards(this);
        }
    _setItsEmergencyOverrideBlock(p_EmergencyOverrideBlock);
}

void SafetyStandards::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            SafetyStandards* p_SafetyStandards = itsANGELS_1->getItsSafetyStandards();
            if(p_SafetyStandards != NULL)
                {
                    itsANGELS_1->__setItsSafetyStandards(NULL);
                }
            itsANGELS_1 = NULL;
        }
    if(itsEmergencyOverrideBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEmergencyOverrideBlock");
            SafetyStandards* p_SafetyStandards = itsEmergencyOverrideBlock->getItsSafetyStandards();
            if(p_SafetyStandards != NULL)
                {
                    itsEmergencyOverrideBlock->__setItsSafetyStandards(NULL);
                }
            itsEmergencyOverrideBlock = NULL;
        }
}

void SafetyStandards::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void SafetyStandards::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsSafetyStandards(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void SafetyStandards::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

void SafetyStandards::__setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
    itsEmergencyOverrideBlock = p_EmergencyOverrideBlock;
    if(p_EmergencyOverrideBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEmergencyOverrideBlock", p_EmergencyOverrideBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEmergencyOverrideBlock");
        }
}

void SafetyStandards::_setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
    if(itsEmergencyOverrideBlock != NULL)
        {
            itsEmergencyOverrideBlock->__setItsSafetyStandards(NULL);
        }
    __setItsEmergencyOverrideBlock(p_EmergencyOverrideBlock);
}

void SafetyStandards::_clearItsEmergencyOverrideBlock() {
    NOTIFY_RELATION_CLEARED("itsEmergencyOverrideBlock");
    itsEmergencyOverrideBlock = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSafetyStandards::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsEmergencyOverrideBlock", false, true);
    if(myReal->itsEmergencyOverrideBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsEmergencyOverrideBlock);
        }
}
//#]

IMPLEMENT_META_P(SafetyStandards, ANGELSPkg_ActorPkg, ANGELSPkg::ActorPkg, false, OMAnimatedSafetyStandards)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\SafetyStandards.cpp
*********************************************************************/

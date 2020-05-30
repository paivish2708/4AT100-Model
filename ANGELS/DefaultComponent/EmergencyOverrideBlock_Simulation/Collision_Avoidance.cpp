/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: Collision_Avoidance
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\Collision_Avoidance.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Collision_Avoidance.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDockingProcessBlock
#include "DockingProcessBlock.h"
//## link itsEmergencyOverrideBlock
#include "EmergencyOverrideBlock.h"
//#[ ignore
#define ANGELSPkg_ObstacleAvoidancePkg_Collision_Avoidance_Collision_Avoidance_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ObstacleAvoidancePkg

//## class Collision_Avoidance
Collision_Avoidance::Collision_Avoidance() {
    NOTIFY_CONSTRUCTOR(Collision_Avoidance, Collision_Avoidance(), 0, ANGELSPkg_ObstacleAvoidancePkg_Collision_Avoidance_Collision_Avoidance_SERIALIZE);
    itsANGELS = NULL;
    itsDockingProcessBlock = NULL;
    itsEmergencyOverrideBlock = NULL;
}

Collision_Avoidance::~Collision_Avoidance() {
    NOTIFY_DESTRUCTOR(~Collision_Avoidance, true);
    cleanUpRelations();
}

ANGELS* Collision_Avoidance::getItsANGELS() const {
    return itsANGELS;
}

void Collision_Avoidance::setItsANGELS(ANGELS* p_ANGELS) {
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

DockingProcessBlock* Collision_Avoidance::getItsDockingProcessBlock() const {
    return itsDockingProcessBlock;
}

void Collision_Avoidance::setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock) {
    itsDockingProcessBlock = p_DockingProcessBlock;
    if(p_DockingProcessBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDockingProcessBlock", p_DockingProcessBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock");
        }
}

EmergencyOverrideBlock* Collision_Avoidance::getItsEmergencyOverrideBlock() const {
    return itsEmergencyOverrideBlock;
}

void Collision_Avoidance::setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
    if(p_EmergencyOverrideBlock != NULL)
        {
            p_EmergencyOverrideBlock->_setItsCollision_Avoidance(this);
        }
    _setItsEmergencyOverrideBlock(p_EmergencyOverrideBlock);
}

void Collision_Avoidance::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsDockingProcessBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock");
            itsDockingProcessBlock = NULL;
        }
    if(itsEmergencyOverrideBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEmergencyOverrideBlock");
            Collision_Avoidance* p_Collision_Avoidance = itsEmergencyOverrideBlock->getItsCollision_Avoidance();
            if(p_Collision_Avoidance != NULL)
                {
                    itsEmergencyOverrideBlock->__setItsCollision_Avoidance(NULL);
                }
            itsEmergencyOverrideBlock = NULL;
        }
}

void Collision_Avoidance::__setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
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

void Collision_Avoidance::_setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
    if(itsEmergencyOverrideBlock != NULL)
        {
            itsEmergencyOverrideBlock->__setItsCollision_Avoidance(NULL);
        }
    __setItsEmergencyOverrideBlock(p_EmergencyOverrideBlock);
}

void Collision_Avoidance::_clearItsEmergencyOverrideBlock() {
    NOTIFY_RELATION_CLEARED("itsEmergencyOverrideBlock");
    itsEmergencyOverrideBlock = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCollision_Avoidance::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsDockingProcessBlock", false, true);
    if(myReal->itsDockingProcessBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcessBlock);
        }
    aomsRelations->addRelation("itsEmergencyOverrideBlock", false, true);
    if(myReal->itsEmergencyOverrideBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsEmergencyOverrideBlock);
        }
}
//#]

IMPLEMENT_META_P(Collision_Avoidance, ANGELSPkg_ObstacleAvoidancePkg, ANGELSPkg::ObstacleAvoidancePkg, false, OMAnimatedCollision_Avoidance)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\Collision_Avoidance.cpp
*********************************************************************/

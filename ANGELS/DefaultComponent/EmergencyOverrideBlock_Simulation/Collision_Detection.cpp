/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: Collision_Detection
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\Collision_Detection.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Collision_Detection.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsEmergencyOverrideBlock
#include "EmergencyOverrideBlock.h"
//#[ ignore
#define ANGELSPkg_ObstacleDetectionPkg_Collision_Detection_Collision_Detection_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ObstacleDetectionPkg

//## class Collision_Detection
Collision_Detection::Collision_Detection() {
    NOTIFY_CONSTRUCTOR(Collision_Detection, Collision_Detection(), 0, ANGELSPkg_ObstacleDetectionPkg_Collision_Detection_Collision_Detection_SERIALIZE);
    itsANGELS = NULL;
    itsEmergencyOverrideBlock = NULL;
}

Collision_Detection::~Collision_Detection() {
    NOTIFY_DESTRUCTOR(~Collision_Detection, true);
    cleanUpRelations();
}

ANGELS* Collision_Detection::getItsANGELS() const {
    return itsANGELS;
}

void Collision_Detection::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsCollision_Detection(this);
        }
    _setItsANGELS(p_ANGELS);
}

EmergencyOverrideBlock* Collision_Detection::getItsEmergencyOverrideBlock() const {
    return itsEmergencyOverrideBlock;
}

void Collision_Detection::setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
    if(p_EmergencyOverrideBlock != NULL)
        {
            p_EmergencyOverrideBlock->_setItsCollision_Detection(this);
        }
    _setItsEmergencyOverrideBlock(p_EmergencyOverrideBlock);
}

void Collision_Detection::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Collision_Detection* p_Collision_Detection = itsANGELS->getItsCollision_Detection();
            if(p_Collision_Detection != NULL)
                {
                    itsANGELS->__setItsCollision_Detection(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsEmergencyOverrideBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEmergencyOverrideBlock");
            Collision_Detection* p_Collision_Detection = itsEmergencyOverrideBlock->getItsCollision_Detection();
            if(p_Collision_Detection != NULL)
                {
                    itsEmergencyOverrideBlock->__setItsCollision_Detection(NULL);
                }
            itsEmergencyOverrideBlock = NULL;
        }
}

void Collision_Detection::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Collision_Detection::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsCollision_Detection(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Collision_Detection::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void Collision_Detection::__setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
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

void Collision_Detection::_setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
    if(itsEmergencyOverrideBlock != NULL)
        {
            itsEmergencyOverrideBlock->__setItsCollision_Detection(NULL);
        }
    __setItsEmergencyOverrideBlock(p_EmergencyOverrideBlock);
}

void Collision_Detection::_clearItsEmergencyOverrideBlock() {
    NOTIFY_RELATION_CLEARED("itsEmergencyOverrideBlock");
    itsEmergencyOverrideBlock = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCollision_Detection::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsEmergencyOverrideBlock", false, true);
    if(myReal->itsEmergencyOverrideBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsEmergencyOverrideBlock);
        }
}
//#]

IMPLEMENT_META_P(Collision_Detection, ANGELSPkg_ObstacleDetectionPkg, ANGELSPkg::ObstacleDetectionPkg, false, OMAnimatedCollision_Detection)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\Collision_Detection.cpp
*********************************************************************/

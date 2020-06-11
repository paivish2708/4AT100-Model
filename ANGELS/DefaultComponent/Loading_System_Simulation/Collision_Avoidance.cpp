/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Collision_Avoidance
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Collision_Avoidance.cpp
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
//## link itsEBS
#include "EBS.h"
//#[ ignore
#define ANGELSPkg_ObstacleAvoidancePkg_Collision_Avoidance_Collision_Avoidance_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ObstacleAvoidancePkg

//## class Collision_Avoidance
Collision_Avoidance::Collision_Avoidance() {
    NOTIFY_CONSTRUCTOR(Collision_Avoidance, Collision_Avoidance(), 0, ANGELSPkg_ObstacleAvoidancePkg_Collision_Avoidance_Collision_Avoidance_SERIALIZE);
    itsANGELS = NULL;
    itsDockingProcessBlock = NULL;
    itsEBS = NULL;
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

EBS* Collision_Avoidance::getItsEBS() const {
    return itsEBS;
}

void Collision_Avoidance::setItsEBS(EBS* p_EBS) {
    if(p_EBS != NULL)
        {
            p_EBS->_setItsCollision_Avoidance(this);
        }
    _setItsEBS(p_EBS);
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
    if(itsEBS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEBS");
            Collision_Avoidance* p_Collision_Avoidance = itsEBS->getItsCollision_Avoidance();
            if(p_Collision_Avoidance != NULL)
                {
                    itsEBS->__setItsCollision_Avoidance(NULL);
                }
            itsEBS = NULL;
        }
}

void Collision_Avoidance::__setItsEBS(EBS* p_EBS) {
    itsEBS = p_EBS;
    if(p_EBS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEBS", p_EBS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEBS");
        }
}

void Collision_Avoidance::_setItsEBS(EBS* p_EBS) {
    if(itsEBS != NULL)
        {
            itsEBS->__setItsCollision_Avoidance(NULL);
        }
    __setItsEBS(p_EBS);
}

void Collision_Avoidance::_clearItsEBS() {
    NOTIFY_RELATION_CLEARED("itsEBS");
    itsEBS = NULL;
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
    aomsRelations->addRelation("itsEBS", false, true);
    if(myReal->itsEBS)
        {
            aomsRelations->ADD_ITEM(myReal->itsEBS);
        }
}
//#]

IMPLEMENT_META_P(Collision_Avoidance, ANGELSPkg_ObstacleAvoidancePkg, ANGELSPkg::ObstacleAvoidancePkg, false, OMAnimatedCollision_Avoidance)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Collision_Avoidance.cpp
*********************************************************************/

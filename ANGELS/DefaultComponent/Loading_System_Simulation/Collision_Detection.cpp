/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Collision_Detection
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Collision_Detection.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Collision_Detection.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsEBS
#include "EBS.h"
//#[ ignore
#define ANGELSPkg_ObstacleDetectionPkg_Collision_Detection_Collision_Detection_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ObstacleDetectionPkg

//## class Collision_Detection
Collision_Detection::Collision_Detection() {
    NOTIFY_CONSTRUCTOR(Collision_Detection, Collision_Detection(), 0, ANGELSPkg_ObstacleDetectionPkg_Collision_Detection_Collision_Detection_SERIALIZE);
    itsANGELS = NULL;
    itsEBS = NULL;
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

EBS* Collision_Detection::getItsEBS() const {
    return itsEBS;
}

void Collision_Detection::setItsEBS(EBS* p_EBS) {
    if(p_EBS != NULL)
        {
            p_EBS->_setItsCollision_Detection(this);
        }
    _setItsEBS(p_EBS);
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
    if(itsEBS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEBS");
            Collision_Detection* p_Collision_Detection = itsEBS->getItsCollision_Detection();
            if(p_Collision_Detection != NULL)
                {
                    itsEBS->__setItsCollision_Detection(NULL);
                }
            itsEBS = NULL;
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

void Collision_Detection::__setItsEBS(EBS* p_EBS) {
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

void Collision_Detection::_setItsEBS(EBS* p_EBS) {
    if(itsEBS != NULL)
        {
            itsEBS->__setItsCollision_Detection(NULL);
        }
    __setItsEBS(p_EBS);
}

void Collision_Detection::_clearItsEBS() {
    NOTIFY_RELATION_CLEARED("itsEBS");
    itsEBS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCollision_Detection::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsEBS", false, true);
    if(myReal->itsEBS)
        {
            aomsRelations->ADD_ITEM(myReal->itsEBS);
        }
}
//#]

IMPLEMENT_META_P(Collision_Detection, ANGELSPkg_ObstacleDetectionPkg, ANGELSPkg::ObstacleDetectionPkg, false, OMAnimatedCollision_Detection)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Collision_Detection.cpp
*********************************************************************/

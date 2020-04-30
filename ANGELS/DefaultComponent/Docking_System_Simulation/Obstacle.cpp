/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Obstacle
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Obstacle.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Obstacle.h"
//## link itsCollision_Detection
#include "Collision_Detection.h"
//#[ ignore
#define ActorPkg_Obstacle_Obstacle_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Obstacle
Obstacle::Obstacle() {
    NOTIFY_CONSTRUCTOR(Obstacle, Obstacle(), 0, ActorPkg_Obstacle_Obstacle_SERIALIZE);
    itsCollision_Detection = NULL;
}

Obstacle::~Obstacle() {
    NOTIFY_DESTRUCTOR(~Obstacle, true);
    cleanUpRelations();
}

Collision_Detection* Obstacle::getItsCollision_Detection() const {
    return itsCollision_Detection;
}

void Obstacle::setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsObstacle(this);
        }
    _setItsCollision_Detection(p_Collision_Detection);
}

void Obstacle::cleanUpRelations() {
    if(itsCollision_Detection != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection");
            Obstacle* p_Obstacle = itsCollision_Detection->getItsObstacle();
            if(p_Obstacle != NULL)
                {
                    itsCollision_Detection->__setItsObstacle(NULL);
                }
            itsCollision_Detection = NULL;
        }
}

void Obstacle::__setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    itsCollision_Detection = p_Collision_Detection;
    if(p_Collision_Detection != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Detection", p_Collision_Detection, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection");
        }
}

void Obstacle::_setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection != NULL)
        {
            itsCollision_Detection->__setItsObstacle(NULL);
        }
    __setItsCollision_Detection(p_Collision_Detection);
}

void Obstacle::_clearItsCollision_Detection() {
    NOTIFY_RELATION_CLEARED("itsCollision_Detection");
    itsCollision_Detection = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedObstacle::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCollision_Detection", false, true);
    if(myReal->itsCollision_Detection)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Detection);
        }
}
//#]

IMPLEMENT_META_P(Obstacle, ActorPkg, ActorPkg, false, OMAnimatedObstacle)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Obstacle.cpp
*********************************************************************/

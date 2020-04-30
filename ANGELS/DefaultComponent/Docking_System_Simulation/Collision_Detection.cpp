/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Collision_Detection
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Collision_Detection.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Collision_Detection.h"
//## link itsCollision_Avoidance
#include "Collision_Avoidance.h"
//## link itsObstacle
#include "Obstacle.h"
//#[ ignore
#define Default_Collision_Detection_Collision_Detection_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Collision_Detection
Collision_Detection::Collision_Detection() {
    NOTIFY_CONSTRUCTOR(Collision_Detection, Collision_Detection(), 0, Default_Collision_Detection_Collision_Detection_SERIALIZE);
    itsCollision_Avoidance = NULL;
    itsObstacle = NULL;
}

Collision_Detection::~Collision_Detection() {
    NOTIFY_DESTRUCTOR(~Collision_Detection, true);
    cleanUpRelations();
}

Collision_Avoidance* Collision_Detection::getItsCollision_Avoidance() const {
    return itsCollision_Avoidance;
}

void Collision_Detection::setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(p_Collision_Avoidance != NULL)
        {
            p_Collision_Avoidance->_setItsCollision_Detection(this);
        }
    _setItsCollision_Avoidance(p_Collision_Avoidance);
}

Obstacle* Collision_Detection::getItsObstacle() const {
    return itsObstacle;
}

void Collision_Detection::setItsObstacle(Obstacle* p_Obstacle) {
    if(p_Obstacle != NULL)
        {
            p_Obstacle->_setItsCollision_Detection(this);
        }
    _setItsObstacle(p_Obstacle);
}

void Collision_Detection::cleanUpRelations() {
    if(itsCollision_Avoidance != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
            Collision_Detection* p_Collision_Detection = itsCollision_Avoidance->getItsCollision_Detection();
            if(p_Collision_Detection != NULL)
                {
                    itsCollision_Avoidance->__setItsCollision_Detection(NULL);
                }
            itsCollision_Avoidance = NULL;
        }
    if(itsObstacle != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsObstacle");
            Collision_Detection* p_Collision_Detection = itsObstacle->getItsCollision_Detection();
            if(p_Collision_Detection != NULL)
                {
                    itsObstacle->__setItsCollision_Detection(NULL);
                }
            itsObstacle = NULL;
        }
}

void Collision_Detection::__setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    itsCollision_Avoidance = p_Collision_Avoidance;
    if(p_Collision_Avoidance != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Avoidance", p_Collision_Avoidance, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
        }
}

void Collision_Detection::_setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(itsCollision_Avoidance != NULL)
        {
            itsCollision_Avoidance->__setItsCollision_Detection(NULL);
        }
    __setItsCollision_Avoidance(p_Collision_Avoidance);
}

void Collision_Detection::_clearItsCollision_Avoidance() {
    NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
    itsCollision_Avoidance = NULL;
}

void Collision_Detection::__setItsObstacle(Obstacle* p_Obstacle) {
    itsObstacle = p_Obstacle;
    if(p_Obstacle != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsObstacle", p_Obstacle, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsObstacle");
        }
}

void Collision_Detection::_setItsObstacle(Obstacle* p_Obstacle) {
    if(itsObstacle != NULL)
        {
            itsObstacle->__setItsCollision_Detection(NULL);
        }
    __setItsObstacle(p_Obstacle);
}

void Collision_Detection::_clearItsObstacle() {
    NOTIFY_RELATION_CLEARED("itsObstacle");
    itsObstacle = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCollision_Detection::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsObstacle", false, true);
    if(myReal->itsObstacle)
        {
            aomsRelations->ADD_ITEM(myReal->itsObstacle);
        }
    aomsRelations->addRelation("itsCollision_Avoidance", false, true);
    if(myReal->itsCollision_Avoidance)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Avoidance);
        }
}
//#]

IMPLEMENT_META_P(Collision_Detection, Default, Default, false, OMAnimatedCollision_Detection)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Collision_Detection.cpp
*********************************************************************/

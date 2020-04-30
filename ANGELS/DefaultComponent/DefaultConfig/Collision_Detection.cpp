/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Collision_Detection
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\DefaultConfig\Collision_Detection.cpp
*********************************************************************/

//## auto_generated
#include "Collision_Detection.h"
//## link itsCollision_Avoidance
#include "Collision_Avoidance.h"
//## link itsObstacle
#include "Obstacle.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ObstacleDetectionPkg

//## class Collision_Detection
Collision_Detection::Collision_Detection() {
    itsCollision_Avoidance = NULL;
    itsObstacle = NULL;
}

Collision_Detection::~Collision_Detection() {
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
            Collision_Detection* p_Collision_Detection = itsCollision_Avoidance->getItsCollision_Detection();
            if(p_Collision_Detection != NULL)
                {
                    itsCollision_Avoidance->__setItsCollision_Detection(NULL);
                }
            itsCollision_Avoidance = NULL;
        }
    if(itsObstacle != NULL)
        {
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
}

void Collision_Detection::_setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(itsCollision_Avoidance != NULL)
        {
            itsCollision_Avoidance->__setItsCollision_Detection(NULL);
        }
    __setItsCollision_Avoidance(p_Collision_Avoidance);
}

void Collision_Detection::_clearItsCollision_Avoidance() {
    itsCollision_Avoidance = NULL;
}

void Collision_Detection::__setItsObstacle(Obstacle* p_Obstacle) {
    itsObstacle = p_Obstacle;
}

void Collision_Detection::_setItsObstacle(Obstacle* p_Obstacle) {
    if(itsObstacle != NULL)
        {
            itsObstacle->__setItsCollision_Detection(NULL);
        }
    __setItsObstacle(p_Obstacle);
}

void Collision_Detection::_clearItsObstacle() {
    itsObstacle = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Collision_Detection.cpp
*********************************************************************/

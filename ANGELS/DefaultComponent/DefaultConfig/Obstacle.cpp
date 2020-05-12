/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Obstacle
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Obstacle.cpp
*********************************************************************/

//## auto_generated
#include "Obstacle.h"
//## link itsCollision_Detection_1
#include "Collision_Detection.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Obstacle
Obstacle::Obstacle() {
    itsCollision_Detection_1 = NULL;
}

Obstacle::~Obstacle() {
    cleanUpRelations();
}

Collision_Detection* Obstacle::getItsCollision_Detection_1() const {
    return itsCollision_Detection_1;
}

void Obstacle::setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsObstacle(this);
        }
    _setItsCollision_Detection_1(p_Collision_Detection);
}

void Obstacle::cleanUpRelations() {
    if(itsCollision_Detection_1 != NULL)
        {
            Obstacle* p_Obstacle = itsCollision_Detection_1->getItsObstacle();
            if(p_Obstacle != NULL)
                {
                    itsCollision_Detection_1->__setItsObstacle(NULL);
                }
            itsCollision_Detection_1 = NULL;
        }
}

void Obstacle::__setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    itsCollision_Detection_1 = p_Collision_Detection;
}

void Obstacle::_setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection_1 != NULL)
        {
            itsCollision_Detection_1->__setItsObstacle(NULL);
        }
    __setItsCollision_Detection_1(p_Collision_Detection);
}

void Obstacle::_clearItsCollision_Detection_1() {
    itsCollision_Detection_1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Obstacle.cpp
*********************************************************************/

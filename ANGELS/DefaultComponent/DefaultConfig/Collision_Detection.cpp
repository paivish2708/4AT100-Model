/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Collision_Detection
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Collision_Detection.cpp
*********************************************************************/

//## auto_generated
#include "Collision_Detection.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDocking_System
#include "Docking_System.h"
//## link itsObstacle
#include "Obstacle.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ObstacleDetectionPkg

//## class Collision_Detection
Collision_Detection::Collision_Detection() {
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsDocking_System = NULL;
    itsObstacle = NULL;
}

Collision_Detection::~Collision_Detection() {
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

ANGELS* Collision_Detection::getItsANGELS_1() const {
    return itsANGELS_1;
}

void Collision_Detection::setItsANGELS_1(ANGELS* p_ANGELS) {
    itsANGELS_1 = p_ANGELS;
}

Docking_System* Collision_Detection::getItsDocking_System() const {
    return itsDocking_System;
}

void Collision_Detection::setItsDocking_System(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsCollision_Detection_1(this);
        }
    _setItsDocking_System(p_Docking_System);
}

Obstacle* Collision_Detection::getItsObstacle() const {
    return itsObstacle;
}

void Collision_Detection::setItsObstacle(Obstacle* p_Obstacle) {
    if(p_Obstacle != NULL)
        {
            p_Obstacle->_setItsCollision_Detection_1(this);
        }
    _setItsObstacle(p_Obstacle);
}

void Collision_Detection::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            Collision_Detection* p_Collision_Detection = itsANGELS->getItsCollision_Detection();
            if(p_Collision_Detection != NULL)
                {
                    itsANGELS->__setItsCollision_Detection(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1 = NULL;
        }
    if(itsDocking_System != NULL)
        {
            Collision_Detection* p_Collision_Detection = itsDocking_System->getItsCollision_Detection_1();
            if(p_Collision_Detection != NULL)
                {
                    itsDocking_System->__setItsCollision_Detection_1(NULL);
                }
            itsDocking_System = NULL;
        }
    if(itsObstacle != NULL)
        {
            Collision_Detection* p_Collision_Detection = itsObstacle->getItsCollision_Detection_1();
            if(p_Collision_Detection != NULL)
                {
                    itsObstacle->__setItsCollision_Detection_1(NULL);
                }
            itsObstacle = NULL;
        }
}

void Collision_Detection::__setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
}

void Collision_Detection::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsCollision_Detection(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Collision_Detection::_clearItsANGELS() {
    itsANGELS = NULL;
}

void Collision_Detection::__setItsDocking_System(Docking_System* p_Docking_System) {
    itsDocking_System = p_Docking_System;
}

void Collision_Detection::_setItsDocking_System(Docking_System* p_Docking_System) {
    if(itsDocking_System != NULL)
        {
            itsDocking_System->__setItsCollision_Detection_1(NULL);
        }
    __setItsDocking_System(p_Docking_System);
}

void Collision_Detection::_clearItsDocking_System() {
    itsDocking_System = NULL;
}

void Collision_Detection::__setItsObstacle(Obstacle* p_Obstacle) {
    itsObstacle = p_Obstacle;
}

void Collision_Detection::_setItsObstacle(Obstacle* p_Obstacle) {
    if(itsObstacle != NULL)
        {
            itsObstacle->__setItsCollision_Detection_1(NULL);
        }
    __setItsObstacle(p_Obstacle);
}

void Collision_Detection::_clearItsObstacle() {
    itsObstacle = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Collision_Detection.cpp
*********************************************************************/

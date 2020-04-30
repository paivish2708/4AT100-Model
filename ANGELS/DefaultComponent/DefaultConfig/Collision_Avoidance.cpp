/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Collision_Avoidance
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\DefaultConfig\Collision_Avoidance.cpp
*********************************************************************/

//## auto_generated
#include "Collision_Avoidance.h"
//## link itsCollision_Detection
#include "Collision_Detection.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ObstacleAvoidancePkg

//## class Collision_Avoidance
Collision_Avoidance::Collision_Avoidance() {
    itsCollision_Detection = NULL;
}

Collision_Avoidance::~Collision_Avoidance() {
    cleanUpRelations();
}

Collision_Detection* Collision_Avoidance::getItsCollision_Detection() const {
    return itsCollision_Detection;
}

void Collision_Avoidance::setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsCollision_Avoidance(this);
        }
    _setItsCollision_Detection(p_Collision_Detection);
}

void Collision_Avoidance::cleanUpRelations() {
    if(itsCollision_Detection != NULL)
        {
            Collision_Avoidance* p_Collision_Avoidance = itsCollision_Detection->getItsCollision_Avoidance();
            if(p_Collision_Avoidance != NULL)
                {
                    itsCollision_Detection->__setItsCollision_Avoidance(NULL);
                }
            itsCollision_Detection = NULL;
        }
}

void Collision_Avoidance::__setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    itsCollision_Detection = p_Collision_Detection;
}

void Collision_Avoidance::_setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection != NULL)
        {
            itsCollision_Detection->__setItsCollision_Avoidance(NULL);
        }
    __setItsCollision_Detection(p_Collision_Detection);
}

void Collision_Avoidance::_clearItsCollision_Detection() {
    itsCollision_Detection = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Collision_Avoidance.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Collision_Avoidance
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Collision_Avoidance.cpp
*********************************************************************/

//## auto_generated
#include "Collision_Avoidance.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDocking_System
#include "Docking_System.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ObstacleAvoidancePkg

//## class Collision_Avoidance
Collision_Avoidance::Collision_Avoidance() {
    itsANGELS = NULL;
    itsDocking_System = NULL;
}

Collision_Avoidance::~Collision_Avoidance() {
    cleanUpRelations();
}

ANGELS* Collision_Avoidance::getItsANGELS() const {
    return itsANGELS;
}

void Collision_Avoidance::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsCollision_Avoidance(this);
        }
    _setItsANGELS(p_ANGELS);
}

Docking_System* Collision_Avoidance::getItsDocking_System() const {
    return itsDocking_System;
}

void Collision_Avoidance::setItsDocking_System(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsCollision_Avoidance_1(this);
        }
    _setItsDocking_System(p_Docking_System);
}

void Collision_Avoidance::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            Collision_Avoidance* p_Collision_Avoidance = itsANGELS->getItsCollision_Avoidance();
            if(p_Collision_Avoidance != NULL)
                {
                    itsANGELS->__setItsCollision_Avoidance(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsDocking_System != NULL)
        {
            Collision_Avoidance* p_Collision_Avoidance = itsDocking_System->getItsCollision_Avoidance_1();
            if(p_Collision_Avoidance != NULL)
                {
                    itsDocking_System->__setItsCollision_Avoidance_1(NULL);
                }
            itsDocking_System = NULL;
        }
}

void Collision_Avoidance::__setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
}

void Collision_Avoidance::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsCollision_Avoidance(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Collision_Avoidance::_clearItsANGELS() {
    itsANGELS = NULL;
}

void Collision_Avoidance::__setItsDocking_System(Docking_System* p_Docking_System) {
    itsDocking_System = p_Docking_System;
}

void Collision_Avoidance::_setItsDocking_System(Docking_System* p_Docking_System) {
    if(itsDocking_System != NULL)
        {
            itsDocking_System->__setItsCollision_Avoidance_1(NULL);
        }
    __setItsDocking_System(p_Docking_System);
}

void Collision_Avoidance::_clearItsDocking_System() {
    itsDocking_System = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Collision_Avoidance.cpp
*********************************************************************/

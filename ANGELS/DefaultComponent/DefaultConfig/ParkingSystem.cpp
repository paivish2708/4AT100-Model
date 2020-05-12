/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ParkingSystem
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\ParkingSystem.cpp
*********************************************************************/

//## auto_generated
#include "ParkingSystem.h"
//## link itsANGELS
#include "ANGELS.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ParkingSystemPkg

//## class ParkingSystem
ParkingSystem::ParkingSystem() {
    itsANGELS = NULL;
}

ParkingSystem::~ParkingSystem() {
    cleanUpRelations();
}

ANGELS* ParkingSystem::getItsANGELS() const {
    return itsANGELS;
}

void ParkingSystem::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsParkingSystem(this);
        }
    _setItsANGELS(p_ANGELS);
}

void ParkingSystem::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            ParkingSystem* p_ParkingSystem = itsANGELS->getItsParkingSystem();
            if(p_ParkingSystem != NULL)
                {
                    itsANGELS->__setItsParkingSystem(NULL);
                }
            itsANGELS = NULL;
        }
}

void ParkingSystem::__setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
}

void ParkingSystem::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsParkingSystem(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void ParkingSystem::_clearItsANGELS() {
    itsANGELS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ParkingSystem.cpp
*********************************************************************/

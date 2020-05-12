/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Truck
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Truck.cpp
*********************************************************************/

//## auto_generated
#include "Truck.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDocking_System
#include "Docking_System.h"
//## link itsDriver
#include "Driver.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::TruckPkg

//## class Truck
Truck::Truck() {
    itsANGELS = NULL;
    itsDocking_System = NULL;
    itsDriver = NULL;
}

Truck::~Truck() {
    cleanUpRelations();
}

ANGELS* Truck::getItsANGELS() const {
    return itsANGELS;
}

void Truck::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsTruck(this);
        }
    _setItsANGELS(p_ANGELS);
}

Docking_System* Truck::getItsDocking_System() const {
    return itsDocking_System;
}

void Truck::setItsDocking_System(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsTruck_1(this);
        }
    _setItsDocking_System(p_Docking_System);
}

Driver* Truck::getItsDriver() const {
    return itsDriver;
}

void Truck::setItsDriver(Driver* p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsTruck_4(this);
        }
    _setItsDriver(p_Driver);
}

void Truck::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            Truck* p_Truck = itsANGELS->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsANGELS->__setItsTruck(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsDocking_System != NULL)
        {
            Truck* p_Truck = itsDocking_System->getItsTruck_1();
            if(p_Truck != NULL)
                {
                    itsDocking_System->__setItsTruck_1(NULL);
                }
            itsDocking_System = NULL;
        }
    if(itsDriver != NULL)
        {
            Truck* p_Truck = itsDriver->getItsTruck_4();
            if(p_Truck != NULL)
                {
                    itsDriver->__setItsTruck_4(NULL);
                }
            itsDriver = NULL;
        }
}

void Truck::__setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
}

void Truck::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsTruck(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Truck::_clearItsANGELS() {
    itsANGELS = NULL;
}

void Truck::__setItsDocking_System(Docking_System* p_Docking_System) {
    itsDocking_System = p_Docking_System;
}

void Truck::_setItsDocking_System(Docking_System* p_Docking_System) {
    if(itsDocking_System != NULL)
        {
            itsDocking_System->__setItsTruck_1(NULL);
        }
    __setItsDocking_System(p_Docking_System);
}

void Truck::_clearItsDocking_System() {
    itsDocking_System = NULL;
}

void Truck::__setItsDriver(Driver* p_Driver) {
    itsDriver = p_Driver;
}

void Truck::_setItsDriver(Driver* p_Driver) {
    if(itsDriver != NULL)
        {
            itsDriver->__setItsTruck_4(NULL);
        }
    __setItsDriver(p_Driver);
}

void Truck::_clearItsDriver() {
    itsDriver = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Truck.cpp
*********************************************************************/

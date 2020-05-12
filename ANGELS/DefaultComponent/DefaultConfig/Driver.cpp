/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Driver
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/

//## auto_generated
#include "Driver.h"
//## auto_generated
#include "ANGELS.h"
//## auto_generated
#include "Docking_System.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Driver
Driver::Driver() {
    itsTruck_4 = NULL;
}

Driver::~Driver() {
    cleanUpRelations();
}

Truck* Driver::getItsTruck_4() const {
    return itsTruck_4;
}

void Driver::setItsTruck_4(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDriver(this);
        }
    _setItsTruck_4(p_Truck);
}

void Driver::cleanUpRelations() {
    if(itsTruck_4 != NULL)
        {
            Driver* p_Driver = itsTruck_4->getItsDriver();
            if(p_Driver != NULL)
                {
                    itsTruck_4->__setItsDriver(NULL);
                }
            itsTruck_4 = NULL;
        }
}

void Driver::__setItsTruck_4(Truck* p_Truck) {
    itsTruck_4 = p_Truck;
}

void Driver::_setItsTruck_4(Truck* p_Truck) {
    if(itsTruck_4 != NULL)
        {
            itsTruck_4->__setItsDriver(NULL);
        }
    __setItsTruck_4(p_Truck);
}

void Driver::_clearItsTruck_4() {
    itsTruck_4 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/

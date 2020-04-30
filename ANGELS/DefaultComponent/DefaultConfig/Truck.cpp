/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Truck
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\DefaultConfig\Truck.cpp
*********************************************************************/

//## auto_generated
#include "Truck.h"
//## link itsDCOperator
#include "DCOperator.h"
//## link itsDriver
#include "Driver.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::TruckPkg

//## class Truck
Truck::Truck() {
    itsDCOperator = NULL;
    itsDriver = NULL;
    itsDriver_1 = NULL;
    itsDriver_2 = NULL;
    itsDriver_3 = NULL;
}

Truck::~Truck() {
    cleanUpRelations();
}

DCOperator* Truck::getItsDCOperator() const {
    return itsDCOperator;
}

void Truck::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsTruck(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Driver* Truck::getItsDriver() const {
    return itsDriver;
}

void Truck::setItsDriver(Driver* p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsTruck(this);
        }
    _setItsDriver(p_Driver);
}

Driver* Truck::getItsDriver_1() const {
    return itsDriver_1;
}

void Truck::setItsDriver_1(Driver* p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsTruck_1(this);
        }
    _setItsDriver_1(p_Driver);
}

Driver* Truck::getItsDriver_2() const {
    return itsDriver_2;
}

void Truck::setItsDriver_2(Driver* p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsTruck_2(this);
        }
    _setItsDriver_2(p_Driver);
}

Driver* Truck::getItsDriver_3() const {
    return itsDriver_3;
}

void Truck::setItsDriver_3(Driver* p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsTruck_3(this);
        }
    _setItsDriver_3(p_Driver);
}

void Truck::cleanUpRelations() {
    if(itsDCOperator != NULL)
        {
            Truck* p_Truck = itsDCOperator->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsDCOperator->__setItsTruck(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsDriver != NULL)
        {
            Truck* p_Truck = itsDriver->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsDriver->__setItsTruck(NULL);
                }
            itsDriver = NULL;
        }
    if(itsDriver_1 != NULL)
        {
            Truck* p_Truck = itsDriver_1->getItsTruck_1();
            if(p_Truck != NULL)
                {
                    itsDriver_1->__setItsTruck_1(NULL);
                }
            itsDriver_1 = NULL;
        }
    if(itsDriver_2 != NULL)
        {
            Truck* p_Truck = itsDriver_2->getItsTruck_2();
            if(p_Truck != NULL)
                {
                    itsDriver_2->__setItsTruck_2(NULL);
                }
            itsDriver_2 = NULL;
        }
    if(itsDriver_3 != NULL)
        {
            Truck* p_Truck = itsDriver_3->getItsTruck_3();
            if(p_Truck != NULL)
                {
                    itsDriver_3->__setItsTruck_3(NULL);
                }
            itsDriver_3 = NULL;
        }
}

void Truck::__setItsDCOperator(DCOperator* p_DCOperator) {
    itsDCOperator = p_DCOperator;
}

void Truck::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsTruck(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void Truck::_clearItsDCOperator() {
    itsDCOperator = NULL;
}

void Truck::__setItsDriver(Driver* p_Driver) {
    itsDriver = p_Driver;
}

void Truck::_setItsDriver(Driver* p_Driver) {
    if(itsDriver != NULL)
        {
            itsDriver->__setItsTruck(NULL);
        }
    __setItsDriver(p_Driver);
}

void Truck::_clearItsDriver() {
    itsDriver = NULL;
}

void Truck::__setItsDriver_1(Driver* p_Driver) {
    itsDriver_1 = p_Driver;
}

void Truck::_setItsDriver_1(Driver* p_Driver) {
    if(itsDriver_1 != NULL)
        {
            itsDriver_1->__setItsTruck_1(NULL);
        }
    __setItsDriver_1(p_Driver);
}

void Truck::_clearItsDriver_1() {
    itsDriver_1 = NULL;
}

void Truck::__setItsDriver_2(Driver* p_Driver) {
    itsDriver_2 = p_Driver;
}

void Truck::_setItsDriver_2(Driver* p_Driver) {
    if(itsDriver_2 != NULL)
        {
            itsDriver_2->__setItsTruck_2(NULL);
        }
    __setItsDriver_2(p_Driver);
}

void Truck::_clearItsDriver_2() {
    itsDriver_2 = NULL;
}

void Truck::__setItsDriver_3(Driver* p_Driver) {
    itsDriver_3 = p_Driver;
}

void Truck::_setItsDriver_3(Driver* p_Driver) {
    if(itsDriver_3 != NULL)
        {
            itsDriver_3->__setItsTruck_3(NULL);
        }
    __setItsDriver_3(p_Driver);
}

void Truck::_clearItsDriver_3() {
    itsDriver_3 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Truck.cpp
*********************************************************************/

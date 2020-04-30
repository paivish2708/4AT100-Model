/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Truck
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Truck.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Truck.h"
//## link itsDCOperator
#include "DCOperator.h"
//## link itsDocking_System
#include "Docking_System.h"
//## link itsDriver
#include "Driver.h"
//#[ ignore
#define Default_Truck_Truck_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Truck
Truck::Truck() {
    NOTIFY_CONSTRUCTOR(Truck, Truck(), 0, Default_Truck_Truck_SERIALIZE);
    itsDCOperator = NULL;
    itsDocking_System = NULL;
    itsDriver = NULL;
    itsDriver_1 = NULL;
    itsDriver_2 = NULL;
    itsDriver_3 = NULL;
}

Truck::~Truck() {
    NOTIFY_DESTRUCTOR(~Truck, true);
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

Docking_System* Truck::getItsDocking_System() const {
    return itsDocking_System;
}

void Truck::setItsDocking_System(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsTruck(this);
        }
    _setItsDocking_System(p_Docking_System);
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
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            Truck* p_Truck = itsDCOperator->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsDCOperator->__setItsTruck(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsDocking_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System");
            Truck* p_Truck = itsDocking_System->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsDocking_System->__setItsTruck(NULL);
                }
            itsDocking_System = NULL;
        }
    if(itsDriver != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
            Truck* p_Truck = itsDriver->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsDriver->__setItsTruck(NULL);
                }
            itsDriver = NULL;
        }
    if(itsDriver_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDriver_1");
            Truck* p_Truck = itsDriver_1->getItsTruck_1();
            if(p_Truck != NULL)
                {
                    itsDriver_1->__setItsTruck_1(NULL);
                }
            itsDriver_1 = NULL;
        }
    if(itsDriver_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDriver_2");
            Truck* p_Truck = itsDriver_2->getItsTruck_2();
            if(p_Truck != NULL)
                {
                    itsDriver_2->__setItsTruck_2(NULL);
                }
            itsDriver_2 = NULL;
        }
    if(itsDriver_3 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDriver_3");
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
    if(p_DCOperator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCOperator", p_DCOperator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
        }
}

void Truck::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsTruck(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void Truck::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void Truck::__setItsDocking_System(Docking_System* p_Docking_System) {
    itsDocking_System = p_Docking_System;
    if(p_Docking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_System", p_Docking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System");
        }
}

void Truck::_setItsDocking_System(Docking_System* p_Docking_System) {
    if(itsDocking_System != NULL)
        {
            itsDocking_System->__setItsTruck(NULL);
        }
    __setItsDocking_System(p_Docking_System);
}

void Truck::_clearItsDocking_System() {
    NOTIFY_RELATION_CLEARED("itsDocking_System");
    itsDocking_System = NULL;
}

void Truck::__setItsDriver(Driver* p_Driver) {
    itsDriver = p_Driver;
    if(p_Driver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDriver", p_Driver, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
        }
}

void Truck::_setItsDriver(Driver* p_Driver) {
    if(itsDriver != NULL)
        {
            itsDriver->__setItsTruck(NULL);
        }
    __setItsDriver(p_Driver);
}

void Truck::_clearItsDriver() {
    NOTIFY_RELATION_CLEARED("itsDriver");
    itsDriver = NULL;
}

void Truck::__setItsDriver_1(Driver* p_Driver) {
    itsDriver_1 = p_Driver;
    if(p_Driver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDriver_1", p_Driver, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDriver_1");
        }
}

void Truck::_setItsDriver_1(Driver* p_Driver) {
    if(itsDriver_1 != NULL)
        {
            itsDriver_1->__setItsTruck_1(NULL);
        }
    __setItsDriver_1(p_Driver);
}

void Truck::_clearItsDriver_1() {
    NOTIFY_RELATION_CLEARED("itsDriver_1");
    itsDriver_1 = NULL;
}

void Truck::__setItsDriver_2(Driver* p_Driver) {
    itsDriver_2 = p_Driver;
    if(p_Driver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDriver_2", p_Driver, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDriver_2");
        }
}

void Truck::_setItsDriver_2(Driver* p_Driver) {
    if(itsDriver_2 != NULL)
        {
            itsDriver_2->__setItsTruck_2(NULL);
        }
    __setItsDriver_2(p_Driver);
}

void Truck::_clearItsDriver_2() {
    NOTIFY_RELATION_CLEARED("itsDriver_2");
    itsDriver_2 = NULL;
}

void Truck::__setItsDriver_3(Driver* p_Driver) {
    itsDriver_3 = p_Driver;
    if(p_Driver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDriver_3", p_Driver, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDriver_3");
        }
}

void Truck::_setItsDriver_3(Driver* p_Driver) {
    if(itsDriver_3 != NULL)
        {
            itsDriver_3->__setItsTruck_3(NULL);
        }
    __setItsDriver_3(p_Driver);
}

void Truck::_clearItsDriver_3() {
    NOTIFY_RELATION_CLEARED("itsDriver_3");
    itsDriver_3 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTruck::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDriver", false, true);
    if(myReal->itsDriver)
        {
            aomsRelations->ADD_ITEM(myReal->itsDriver);
        }
    aomsRelations->addRelation("itsDriver_1", false, true);
    if(myReal->itsDriver_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDriver_1);
        }
    aomsRelations->addRelation("itsDriver_2", false, true);
    if(myReal->itsDriver_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsDriver_2);
        }
    aomsRelations->addRelation("itsDriver_3", false, true);
    if(myReal->itsDriver_3)
        {
            aomsRelations->ADD_ITEM(myReal->itsDriver_3);
        }
    aomsRelations->addRelation("itsDCOperator", false, true);
    if(myReal->itsDCOperator)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator);
        }
    aomsRelations->addRelation("itsDocking_System", false, true);
    if(myReal->itsDocking_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System);
        }
}
//#]

IMPLEMENT_META_P(Truck, Default, Default, false, OMAnimatedTruck)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Truck.cpp
*********************************************************************/

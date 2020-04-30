/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Driver
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Driver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Driver.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define ActorPkg_Driver_Driver_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Driver
Driver::Driver() {
    NOTIFY_CONSTRUCTOR(Driver, Driver(), 0, ActorPkg_Driver_Driver_SERIALIZE);
    itsTruck = NULL;
    itsTruck_1 = NULL;
    itsTruck_2 = NULL;
    itsTruck_3 = NULL;
}

Driver::~Driver() {
    NOTIFY_DESTRUCTOR(~Driver, true);
    cleanUpRelations();
}

Truck* Driver::getItsTruck() const {
    return itsTruck;
}

void Driver::setItsTruck(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDriver(this);
        }
    _setItsTruck(p_Truck);
}

Truck* Driver::getItsTruck_1() const {
    return itsTruck_1;
}

void Driver::setItsTruck_1(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDriver_1(this);
        }
    _setItsTruck_1(p_Truck);
}

Truck* Driver::getItsTruck_2() const {
    return itsTruck_2;
}

void Driver::setItsTruck_2(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDriver_2(this);
        }
    _setItsTruck_2(p_Truck);
}

Truck* Driver::getItsTruck_3() const {
    return itsTruck_3;
}

void Driver::setItsTruck_3(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDriver_3(this);
        }
    _setItsTruck_3(p_Truck);
}

void Driver::cleanUpRelations() {
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            Driver* p_Driver = itsTruck->getItsDriver();
            if(p_Driver != NULL)
                {
                    itsTruck->__setItsDriver(NULL);
                }
            itsTruck = NULL;
        }
    if(itsTruck_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_1");
            Driver* p_Driver = itsTruck_1->getItsDriver_1();
            if(p_Driver != NULL)
                {
                    itsTruck_1->__setItsDriver_1(NULL);
                }
            itsTruck_1 = NULL;
        }
    if(itsTruck_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_2");
            Driver* p_Driver = itsTruck_2->getItsDriver_2();
            if(p_Driver != NULL)
                {
                    itsTruck_2->__setItsDriver_2(NULL);
                }
            itsTruck_2 = NULL;
        }
    if(itsTruck_3 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_3");
            Driver* p_Driver = itsTruck_3->getItsDriver_3();
            if(p_Driver != NULL)
                {
                    itsTruck_3->__setItsDriver_3(NULL);
                }
            itsTruck_3 = NULL;
        }
}

void Driver::__setItsTruck(Truck* p_Truck) {
    itsTruck = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
        }
}

void Driver::_setItsTruck(Truck* p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsDriver(NULL);
        }
    __setItsTruck(p_Truck);
}

void Driver::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck = NULL;
}

void Driver::__setItsTruck_1(Truck* p_Truck) {
    itsTruck_1 = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck_1", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck_1");
        }
}

void Driver::_setItsTruck_1(Truck* p_Truck) {
    if(itsTruck_1 != NULL)
        {
            itsTruck_1->__setItsDriver_1(NULL);
        }
    __setItsTruck_1(p_Truck);
}

void Driver::_clearItsTruck_1() {
    NOTIFY_RELATION_CLEARED("itsTruck_1");
    itsTruck_1 = NULL;
}

void Driver::__setItsTruck_2(Truck* p_Truck) {
    itsTruck_2 = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck_2", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck_2");
        }
}

void Driver::_setItsTruck_2(Truck* p_Truck) {
    if(itsTruck_2 != NULL)
        {
            itsTruck_2->__setItsDriver_2(NULL);
        }
    __setItsTruck_2(p_Truck);
}

void Driver::_clearItsTruck_2() {
    NOTIFY_RELATION_CLEARED("itsTruck_2");
    itsTruck_2 = NULL;
}

void Driver::__setItsTruck_3(Truck* p_Truck) {
    itsTruck_3 = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck_3", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck_3");
        }
}

void Driver::_setItsTruck_3(Truck* p_Truck) {
    if(itsTruck_3 != NULL)
        {
            itsTruck_3->__setItsDriver_3(NULL);
        }
    __setItsTruck_3(p_Truck);
}

void Driver::_clearItsTruck_3() {
    NOTIFY_RELATION_CLEARED("itsTruck_3");
    itsTruck_3 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDriver::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsTruck_1", false, true);
    if(myReal->itsTruck_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck_1);
        }
    aomsRelations->addRelation("itsTruck_2", false, true);
    if(myReal->itsTruck_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck_2);
        }
    aomsRelations->addRelation("itsTruck_3", false, true);
    if(myReal->itsTruck_3)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck_3);
        }
}
//#]

IMPLEMENT_META_P(Driver, ActorPkg, ActorPkg, false, OMAnimatedDriver)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Driver.cpp
*********************************************************************/

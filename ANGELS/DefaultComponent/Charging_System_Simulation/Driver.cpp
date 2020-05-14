/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Driver
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Driver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Driver.h"
//## auto_generated
#include "ANGELS.h"
//## auto_generated
#include "Docking_Process.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_Driver_Driver_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Driver
Driver::Driver() {
    NOTIFY_CONSTRUCTOR(Driver, Driver(), 0, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_Driver_Driver_SERIALIZE);
    itsANGELS_1 = NULL;
    itsTruck_4 = NULL;
}

Driver::~Driver() {
    NOTIFY_DESTRUCTOR(~Driver, false);
    cleanUpRelations();
}

ANGELS* Driver::getItsANGELS_1() const {
    return itsANGELS_1;
}

void Driver::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDriver(this);
        }
    _setItsANGELS_1(p_ANGELS);
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
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            Driver* p_Driver = itsANGELS_1->getItsDriver();
            if(p_Driver != NULL)
                {
                    itsANGELS_1->__setItsDriver(NULL);
                }
            itsANGELS_1 = NULL;
        }
    if(itsTruck_4 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_4");
            Driver* p_Driver = itsTruck_4->getItsDriver();
            if(p_Driver != NULL)
                {
                    itsTruck_4->__setItsDriver(NULL);
                }
            itsTruck_4 = NULL;
        }
}

void Driver::__setItsANGELS_1(ANGELS* p_ANGELS) {
    itsANGELS_1 = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS_1", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
        }
}

void Driver::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsDriver(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void Driver::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

void Driver::__setItsTruck_4(Truck* p_Truck) {
    itsTruck_4 = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck_4", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck_4");
        }
}

void Driver::_setItsTruck_4(Truck* p_Truck) {
    if(itsTruck_4 != NULL)
        {
            itsTruck_4->__setItsDriver(NULL);
        }
    __setItsTruck_4(p_Truck);
}

void Driver::_clearItsTruck_4() {
    NOTIFY_RELATION_CLEARED("itsTruck_4");
    itsTruck_4 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDriver::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedTruck::serializeAttributes(aomsAttributes);
}

void OMAnimatedDriver::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck_4", false, true);
    if(myReal->itsTruck_4)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck_4);
        }
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
    OMAnimatedTruck::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Driver, UseCaseAnalysisPkg::ANGELSPkg::ActorPkg, false, Truck, OMAnimatedTruck, OMAnimatedDriver)

OMINIT_SUPERCLASS(Truck, OMAnimatedTruck)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Driver.cpp
*********************************************************************/

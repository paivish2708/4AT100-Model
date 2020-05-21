/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ChargingSystemBlock_Simulation
	Model Element	: Driver
//!	Generated Date	: Thu, 21, May 2020  
	File Path	: DefaultComponent\ChargingSystemBlock_Simulation\Driver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Driver.h"
//## auto_generated
#include "ANGELS.h"
//## link itsParkingSystemBlock
#include "ParkingSystemBlock.h"
//#[ ignore
#define ANGELSPkg_ActorPkg_Driver_Driver_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ActorPkg

//## actor Driver
Driver::Driver() {
    NOTIFY_CONSTRUCTOR(Driver, Driver(), 0, ANGELSPkg_ActorPkg_Driver_Driver_SERIALIZE);
    itsANGELS_1 = NULL;
    itsANGELS_3 = NULL;
    itsParkingSystemBlock = NULL;
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

ANGELS* Driver::getItsANGELS_3() const {
    return itsANGELS_3;
}

void Driver::setItsANGELS_3(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDriver(this);
        }
    _setItsANGELS_3(p_ANGELS);
}

ParkingSystemBlock* Driver::getItsParkingSystemBlock() const {
    return itsParkingSystemBlock;
}

void Driver::setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock) {
    if(p_ParkingSystemBlock != NULL)
        {
            p_ParkingSystemBlock->_setItsDriver(this);
        }
    _setItsParkingSystemBlock(p_ParkingSystemBlock);
}

Truck* Driver::getItsTruck_4() const {
    return itsTruck_4;
}

void Driver::setItsTruck_4(Truck* p_Truck) {
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

void Driver::cleanUpRelations() {
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            itsANGELS_1 = NULL;
        }
    if(itsANGELS_3 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_3");
            Driver* p_Driver = itsANGELS_3->getItsDriver();
            if(p_Driver != NULL)
                {
                    itsANGELS_3->__setItsDriver(NULL);
                }
            itsANGELS_3 = NULL;
        }
    if(itsParkingSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsParkingSystemBlock");
            Driver* p_Driver = itsParkingSystemBlock->getItsDriver();
            if(p_Driver != NULL)
                {
                    itsParkingSystemBlock->__setItsDriver(NULL);
                }
            itsParkingSystemBlock = NULL;
        }
    if(itsTruck_4 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_4");
            itsTruck_4 = NULL;
        }
}

void Driver::__setItsANGELS_3(ANGELS* p_ANGELS) {
    itsANGELS_3 = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS_3", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_3");
        }
}

void Driver::_setItsANGELS_3(ANGELS* p_ANGELS) {
    if(itsANGELS_3 != NULL)
        {
            itsANGELS_3->__setItsDriver(NULL);
        }
    __setItsANGELS_3(p_ANGELS);
}

void Driver::_clearItsANGELS_3() {
    NOTIFY_RELATION_CLEARED("itsANGELS_3");
    itsANGELS_3 = NULL;
}

void Driver::__setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock) {
    itsParkingSystemBlock = p_ParkingSystemBlock;
    if(p_ParkingSystemBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsParkingSystemBlock", p_ParkingSystemBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsParkingSystemBlock");
        }
}

void Driver::_setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock) {
    if(itsParkingSystemBlock != NULL)
        {
            itsParkingSystemBlock->__setItsDriver(NULL);
        }
    __setItsParkingSystemBlock(p_ParkingSystemBlock);
}

void Driver::_clearItsParkingSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsParkingSystemBlock");
    itsParkingSystemBlock = NULL;
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
    aomsRelations->addRelation("itsANGELS_3", false, true);
    if(myReal->itsANGELS_3)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_3);
        }
    aomsRelations->addRelation("itsParkingSystemBlock", false, true);
    if(myReal->itsParkingSystemBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsParkingSystemBlock);
        }
    OMAnimatedTruck::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Driver, ANGELSPkg::ActorPkg, false, Truck, OMAnimatedTruck, OMAnimatedDriver)

OMINIT_SUPERCLASS(Truck, OMAnimatedTruck)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ChargingSystemBlock_Simulation\Driver.cpp
*********************************************************************/

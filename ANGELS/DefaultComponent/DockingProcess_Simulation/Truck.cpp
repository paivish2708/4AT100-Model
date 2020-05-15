/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcess_Simulation
	Model Element	: Truck
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\DockingProcess_Simulation\Truck.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Truck.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDockingProcess
#include "DockingProcess.h"
//## link itsDriver
#include "Driver.h"
//#[ ignore
#define ANGELSPkg_TruckPkg_Truck_Truck_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::TruckPkg

//## class Truck
Truck::Truck() {
    NOTIFY_CONSTRUCTOR(Truck, Truck(), 0, ANGELSPkg_TruckPkg_Truck_Truck_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsANGELS_2 = NULL;
    itsDockingProcess = NULL;
    itsDriver = NULL;
}

Truck::~Truck() {
    NOTIFY_DESTRUCTOR(~Truck, true);
    cleanUpRelations();
}

ANGELS* Truck::getItsANGELS() const {
    return itsANGELS;
}

void Truck::setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
        }
}

ANGELS* Truck::getItsANGELS_1() const {
    return itsANGELS_1;
}

void Truck::setItsANGELS_1(ANGELS* p_ANGELS) {
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

ANGELS* Truck::getItsANGELS_2() const {
    return itsANGELS_2;
}

void Truck::setItsANGELS_2(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsTruck(this);
        }
    _setItsANGELS_2(p_ANGELS);
}

DockingProcess* Truck::getItsDockingProcess() const {
    return itsDockingProcess;
}

void Truck::setItsDockingProcess(DockingProcess* p_DockingProcess) {
    itsDockingProcess = p_DockingProcess;
    if(p_DockingProcess != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDockingProcess", p_DockingProcess, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcess");
        }
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
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            itsANGELS_1 = NULL;
        }
    if(itsANGELS_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_2");
            Truck* p_Truck = itsANGELS_2->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsANGELS_2->__setItsTruck(NULL);
                }
            itsANGELS_2 = NULL;
        }
    if(itsDockingProcess != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcess");
            itsDockingProcess = NULL;
        }
    if(itsDriver != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
            Truck* p_Truck = itsDriver->getItsTruck_4();
            if(p_Truck != NULL)
                {
                    itsDriver->__setItsTruck_4(NULL);
                }
            itsDriver = NULL;
        }
}

void Truck::__setItsANGELS_2(ANGELS* p_ANGELS) {
    itsANGELS_2 = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS_2", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_2");
        }
}

void Truck::_setItsANGELS_2(ANGELS* p_ANGELS) {
    if(itsANGELS_2 != NULL)
        {
            itsANGELS_2->__setItsTruck(NULL);
        }
    __setItsANGELS_2(p_ANGELS);
}

void Truck::_clearItsANGELS_2() {
    NOTIFY_RELATION_CLEARED("itsANGELS_2");
    itsANGELS_2 = NULL;
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
            itsDriver->__setItsTruck_4(NULL);
        }
    __setItsDriver(p_Driver);
}

void Truck::_clearItsDriver() {
    NOTIFY_RELATION_CLEARED("itsDriver");
    itsDriver = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTruck::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsDriver", false, true);
    if(myReal->itsDriver)
        {
            aomsRelations->ADD_ITEM(myReal->itsDriver);
        }
    aomsRelations->addRelation("itsDockingProcess", false, true);
    if(myReal->itsDockingProcess)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcess);
        }
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
    aomsRelations->addRelation("itsANGELS_2", false, true);
    if(myReal->itsANGELS_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_2);
        }
}
//#]

IMPLEMENT_META_P(Truck, ANGELSPkg_TruckPkg, ANGELSPkg::TruckPkg, false, OMAnimatedTruck)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DockingProcess_Simulation\Truck.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Truck
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Truck.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Truck.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDocking_Process
#include "Docking_Process.h"
//## link itsDriver
#include "Driver.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_TruckPkg_Truck_Truck_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::TruckPkg

//## class Truck
Truck::Truck() {
    NOTIFY_CONSTRUCTOR(Truck, Truck(), 0, UseCaseAnalysisPkg_ANGELSPkg_TruckPkg_Truck_Truck_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsDocking_Process = NULL;
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
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsTruck(this);
        }
    _setItsANGELS(p_ANGELS);
}

ANGELS* Truck::getItsANGELS_1() const {
    return itsANGELS_1;
}

void Truck::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsTruck_2(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

Docking_Process* Truck::getItsDocking_Process() const {
    return itsDocking_Process;
}

void Truck::setItsDocking_Process(Docking_Process* p_Docking_Process) {
    itsDocking_Process = p_Docking_Process;
    if(p_Docking_Process != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_Process", p_Docking_Process, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_Process");
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
            Truck* p_Truck = itsANGELS->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsANGELS->__setItsTruck(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            Truck* p_Truck = itsANGELS_1->getItsTruck_2();
            if(p_Truck != NULL)
                {
                    itsANGELS_1->__setItsTruck_2(NULL);
                }
            itsANGELS_1 = NULL;
        }
    if(itsDocking_Process != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_Process");
            itsDocking_Process = NULL;
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

void Truck::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Truck::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsTruck(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Truck::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void Truck::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void Truck::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsTruck_2(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void Truck::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
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
    aomsRelations->addRelation("itsDocking_Process", false, true);
    if(myReal->itsDocking_Process)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_Process);
        }
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
}
//#]

IMPLEMENT_META_P(Truck, UseCaseAnalysisPkg_ANGELSPkg_TruckPkg, UseCaseAnalysisPkg::ANGELSPkg::TruckPkg, false, OMAnimatedTruck)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Truck.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Truck
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Truck.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Truck.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsChargingSystemBlock
#include "ChargingSystemBlock.h"
//## link itsDockingProcessBlock
#include "DockingProcessBlock.h"
//## link itsEBS
#include "EBS.h"
//#[ ignore
#define ANGELSPkg_TruckPkg_Truck_Truck_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::TruckPkg

//## class Truck
Truck::Truck() {
    NOTIFY_CONSTRUCTOR(Truck, Truck(), 0, ANGELSPkg_TruckPkg_Truck_Truck_SERIALIZE);
    itsANGELS = NULL;
    itsChargingSystemBlock = NULL;
    itsDockingProcessBlock = NULL;
    itsEBS = NULL;
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

ChargingSystemBlock* Truck::getItsChargingSystemBlock() const {
    return itsChargingSystemBlock;
}

void Truck::setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(p_ChargingSystemBlock != NULL)
        {
            p_ChargingSystemBlock->_setItsTruck(this);
        }
    _setItsChargingSystemBlock(p_ChargingSystemBlock);
}

DockingProcessBlock* Truck::getItsDockingProcessBlock() const {
    return itsDockingProcessBlock;
}

void Truck::setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock) {
    if(p_DockingProcessBlock != NULL)
        {
            p_DockingProcessBlock->_setItsTruck_1(this);
        }
    _setItsDockingProcessBlock(p_DockingProcessBlock);
}

EBS* Truck::getItsEBS() const {
    return itsEBS;
}

void Truck::setItsEBS(EBS* p_EBS) {
    if(p_EBS != NULL)
        {
            p_EBS->_setItsTruck(this);
        }
    _setItsEBS(p_EBS);
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
    if(itsChargingSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
            Truck* p_Truck = itsChargingSystemBlock->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsChargingSystemBlock->__setItsTruck(NULL);
                }
            itsChargingSystemBlock = NULL;
        }
    if(itsDockingProcessBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock");
            Truck* p_Truck = itsDockingProcessBlock->getItsTruck_1();
            if(p_Truck != NULL)
                {
                    itsDockingProcessBlock->__setItsTruck_1(NULL);
                }
            itsDockingProcessBlock = NULL;
        }
    if(itsEBS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEBS");
            Truck* p_Truck = itsEBS->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsEBS->__setItsTruck(NULL);
                }
            itsEBS = NULL;
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

void Truck::__setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    itsChargingSystemBlock = p_ChargingSystemBlock;
    if(p_ChargingSystemBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsChargingSystemBlock", p_ChargingSystemBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
        }
}

void Truck::_setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(itsChargingSystemBlock != NULL)
        {
            itsChargingSystemBlock->__setItsTruck(NULL);
        }
    __setItsChargingSystemBlock(p_ChargingSystemBlock);
}

void Truck::_clearItsChargingSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
    itsChargingSystemBlock = NULL;
}

void Truck::__setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock) {
    itsDockingProcessBlock = p_DockingProcessBlock;
    if(p_DockingProcessBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDockingProcessBlock", p_DockingProcessBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock");
        }
}

void Truck::_setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock) {
    if(itsDockingProcessBlock != NULL)
        {
            itsDockingProcessBlock->__setItsTruck_1(NULL);
        }
    __setItsDockingProcessBlock(p_DockingProcessBlock);
}

void Truck::_clearItsDockingProcessBlock() {
    NOTIFY_RELATION_CLEARED("itsDockingProcessBlock");
    itsDockingProcessBlock = NULL;
}

void Truck::__setItsEBS(EBS* p_EBS) {
    itsEBS = p_EBS;
    if(p_EBS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEBS", p_EBS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEBS");
        }
}

void Truck::_setItsEBS(EBS* p_EBS) {
    if(itsEBS != NULL)
        {
            itsEBS->__setItsTruck(NULL);
        }
    __setItsEBS(p_EBS);
}

void Truck::_clearItsEBS() {
    NOTIFY_RELATION_CLEARED("itsEBS");
    itsEBS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTruck::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsDockingProcessBlock", false, true);
    if(myReal->itsDockingProcessBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcessBlock);
        }
    aomsRelations->addRelation("itsChargingSystemBlock", false, true);
    if(myReal->itsChargingSystemBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsChargingSystemBlock);
        }
    aomsRelations->addRelation("itsEBS", false, true);
    if(myReal->itsEBS)
        {
            aomsRelations->ADD_ITEM(myReal->itsEBS);
        }
}
//#]

IMPLEMENT_META_P(Truck, ANGELSPkg_TruckPkg, ANGELSPkg::TruckPkg, false, OMAnimatedTruck)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Truck.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ParkingSystemBlock_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Mon, 18, May 2020  
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\DCOperator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCOperator.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsChargingSystemBlock
#include "ChargingSystemBlock.h"
//## link itsDockingProcessBlock
#include "DockingProcessBlock.h"
//## link itsLoadingProcessBlock
#include "LoadingProcessBlock.h"
//## link itsParkingSystemBlock
#include "ParkingSystemBlock.h"
//#[ ignore
#define ANGELSPkg_ActorPkg_DCOperator_DCOperator_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ActorPkg

//## actor DCOperator
DCOperator::DCOperator() {
    NOTIFY_CONSTRUCTOR(DCOperator, DCOperator(), 0, ANGELSPkg_ActorPkg_DCOperator_DCOperator_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsChargingSystemBlock = NULL;
    itsDockingProcessBlock = NULL;
    itsDockingProcessBlock_1 = NULL;
    itsDockingProcessBlock_2 = NULL;
    itsLoadingProcessBlock = NULL;
    itsParkingSystemBlock = NULL;
}

DCOperator::~DCOperator() {
    NOTIFY_DESTRUCTOR(~DCOperator, true);
    cleanUpRelations();
}

ANGELS* DCOperator::getItsANGELS() const {
    return itsANGELS;
}

void DCOperator::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* DCOperator::getItsANGELS_1() const {
    return itsANGELS_1;
}

void DCOperator::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDCOperator(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

ChargingSystemBlock* DCOperator::getItsChargingSystemBlock() const {
    return itsChargingSystemBlock;
}

void DCOperator::setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(p_ChargingSystemBlock != NULL)
        {
            p_ChargingSystemBlock->_setItsDCOperator(this);
        }
    _setItsChargingSystemBlock(p_ChargingSystemBlock);
}

DockingProcessBlock* DCOperator::getItsDockingProcessBlock() const {
    return itsDockingProcessBlock;
}

void DCOperator::setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock) {
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

DockingProcessBlock* DCOperator::getItsDockingProcessBlock_1() const {
    return itsDockingProcessBlock_1;
}

void DCOperator::setItsDockingProcessBlock_1(DockingProcessBlock* p_DockingProcessBlock) {
    itsDockingProcessBlock_1 = p_DockingProcessBlock;
    if(p_DockingProcessBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDockingProcessBlock_1", p_DockingProcessBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock_1");
        }
}

DockingProcessBlock* DCOperator::getItsDockingProcessBlock_2() const {
    return itsDockingProcessBlock_2;
}

void DCOperator::setItsDockingProcessBlock_2(DockingProcessBlock* p_DockingProcessBlock) {
    if(p_DockingProcessBlock != NULL)
        {
            p_DockingProcessBlock->_setItsDCOperator(this);
        }
    _setItsDockingProcessBlock_2(p_DockingProcessBlock);
}

LoadingProcessBlock* DCOperator::getItsLoadingProcessBlock() const {
    return itsLoadingProcessBlock;
}

void DCOperator::setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    if(p_LoadingProcessBlock != NULL)
        {
            p_LoadingProcessBlock->_setItsDCOperator(this);
        }
    _setItsLoadingProcessBlock(p_LoadingProcessBlock);
}

ParkingSystemBlock* DCOperator::getItsParkingSystemBlock() const {
    return itsParkingSystemBlock;
}

void DCOperator::setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock) {
    if(p_ParkingSystemBlock != NULL)
        {
            p_ParkingSystemBlock->_setItsDCOperator(this);
        }
    _setItsParkingSystemBlock(p_ParkingSystemBlock);
}

void DCOperator::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            DCOperator* p_DCOperator = itsANGELS_1->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsANGELS_1->__setItsDCOperator(NULL);
                }
            itsANGELS_1 = NULL;
        }
    if(itsChargingSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
            DCOperator* p_DCOperator = itsChargingSystemBlock->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsChargingSystemBlock->__setItsDCOperator(NULL);
                }
            itsChargingSystemBlock = NULL;
        }
    if(itsDockingProcessBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock");
            itsDockingProcessBlock = NULL;
        }
    if(itsDockingProcessBlock_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock_1");
            itsDockingProcessBlock_1 = NULL;
        }
    if(itsDockingProcessBlock_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock_2");
            DCOperator* p_DCOperator = itsDockingProcessBlock_2->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsDockingProcessBlock_2->__setItsDCOperator(NULL);
                }
            itsDockingProcessBlock_2 = NULL;
        }
    if(itsLoadingProcessBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
            DCOperator* p_DCOperator = itsLoadingProcessBlock->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsLoadingProcessBlock->__setItsDCOperator(NULL);
                }
            itsLoadingProcessBlock = NULL;
        }
    if(itsParkingSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsParkingSystemBlock");
            DCOperator* p_DCOperator = itsParkingSystemBlock->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsParkingSystemBlock->__setItsDCOperator(NULL);
                }
            itsParkingSystemBlock = NULL;
        }
}

void DCOperator::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void DCOperator::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsDCOperator(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void DCOperator::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

void DCOperator::__setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
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

void DCOperator::_setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(itsChargingSystemBlock != NULL)
        {
            itsChargingSystemBlock->__setItsDCOperator(NULL);
        }
    __setItsChargingSystemBlock(p_ChargingSystemBlock);
}

void DCOperator::_clearItsChargingSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
    itsChargingSystemBlock = NULL;
}

void DCOperator::__setItsDockingProcessBlock_2(DockingProcessBlock* p_DockingProcessBlock) {
    itsDockingProcessBlock_2 = p_DockingProcessBlock;
    if(p_DockingProcessBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDockingProcessBlock_2", p_DockingProcessBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock_2");
        }
}

void DCOperator::_setItsDockingProcessBlock_2(DockingProcessBlock* p_DockingProcessBlock) {
    if(itsDockingProcessBlock_2 != NULL)
        {
            itsDockingProcessBlock_2->__setItsDCOperator(NULL);
        }
    __setItsDockingProcessBlock_2(p_DockingProcessBlock);
}

void DCOperator::_clearItsDockingProcessBlock_2() {
    NOTIFY_RELATION_CLEARED("itsDockingProcessBlock_2");
    itsDockingProcessBlock_2 = NULL;
}

void DCOperator::__setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    itsLoadingProcessBlock = p_LoadingProcessBlock;
    if(p_LoadingProcessBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoadingProcessBlock", p_LoadingProcessBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
        }
}

void DCOperator::_setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    if(itsLoadingProcessBlock != NULL)
        {
            itsLoadingProcessBlock->__setItsDCOperator(NULL);
        }
    __setItsLoadingProcessBlock(p_LoadingProcessBlock);
}

void DCOperator::_clearItsLoadingProcessBlock() {
    NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
    itsLoadingProcessBlock = NULL;
}

void DCOperator::__setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock) {
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

void DCOperator::_setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock) {
    if(itsParkingSystemBlock != NULL)
        {
            itsParkingSystemBlock->__setItsDCOperator(NULL);
        }
    __setItsParkingSystemBlock(p_ParkingSystemBlock);
}

void DCOperator::_clearItsParkingSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsParkingSystemBlock");
    itsParkingSystemBlock = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCOperator::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLoadingProcessBlock", false, true);
    if(myReal->itsLoadingProcessBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoadingProcessBlock);
        }
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsDockingProcessBlock_2", false, true);
    if(myReal->itsDockingProcessBlock_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcessBlock_2);
        }
    aomsRelations->addRelation("itsDockingProcessBlock_1", false, true);
    if(myReal->itsDockingProcessBlock_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcessBlock_1);
        }
    aomsRelations->addRelation("itsChargingSystemBlock", false, true);
    if(myReal->itsChargingSystemBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsChargingSystemBlock);
        }
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
    aomsRelations->addRelation("itsDockingProcessBlock", false, true);
    if(myReal->itsDockingProcessBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcessBlock);
        }
    aomsRelations->addRelation("itsParkingSystemBlock", false, true);
    if(myReal->itsParkingSystemBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsParkingSystemBlock);
        }
}
//#]

IMPLEMENT_META_P(DCOperator, ANGELSPkg_ActorPkg, ANGELSPkg::ActorPkg, false, OMAnimatedDCOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\DCOperator.cpp
*********************************************************************/

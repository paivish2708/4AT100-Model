/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: DC
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\DC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DC.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDockingProcessBlock
#include "DockingProcessBlock.h"
//## link itsEmergencyOverrideBlock
#include "EmergencyOverrideBlock.h"
//## link itsLoadingProcessBlock
#include "LoadingProcessBlock.h"
//## link itsParkingSystemBlock
#include "ParkingSystemBlock.h"
//#[ ignore
#define ANGELSPkg_ActorPkg_DC_DC_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ActorPkg

//## actor DC
DC::DC() {
    NOTIFY_CONSTRUCTOR(DC, DC(), 0, ANGELSPkg_ActorPkg_DC_DC_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsANGELS_2 = NULL;
    itsDockingProcessBlock = NULL;
    itsEmergencyOverrideBlock = NULL;
    itsLoadingProcessBlock = NULL;
    itsParkingSystemBlock = NULL;
}

DC::~DC() {
    NOTIFY_DESTRUCTOR(~DC, true);
    cleanUpRelations();
}

ANGELS* DC::getItsANGELS() const {
    return itsANGELS;
}

void DC::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* DC::getItsANGELS_1() const {
    return itsANGELS_1;
}

void DC::setItsANGELS_1(ANGELS* p_ANGELS) {
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

ANGELS* DC::getItsANGELS_2() const {
    return itsANGELS_2;
}

void DC::setItsANGELS_2(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDC(this);
        }
    _setItsANGELS_2(p_ANGELS);
}

DockingProcessBlock* DC::getItsDockingProcessBlock() const {
    return itsDockingProcessBlock;
}

void DC::setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock) {
    if(p_DockingProcessBlock != NULL)
        {
            p_DockingProcessBlock->_setItsDC(this);
        }
    _setItsDockingProcessBlock(p_DockingProcessBlock);
}

EmergencyOverrideBlock* DC::getItsEmergencyOverrideBlock() const {
    return itsEmergencyOverrideBlock;
}

void DC::setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
    if(p_EmergencyOverrideBlock != NULL)
        {
            p_EmergencyOverrideBlock->_setItsDC(this);
        }
    _setItsEmergencyOverrideBlock(p_EmergencyOverrideBlock);
}

LoadingProcessBlock* DC::getItsLoadingProcessBlock() const {
    return itsLoadingProcessBlock;
}

void DC::setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    if(p_LoadingProcessBlock != NULL)
        {
            p_LoadingProcessBlock->_setItsDC(this);
        }
    _setItsLoadingProcessBlock(p_LoadingProcessBlock);
}

ParkingSystemBlock* DC::getItsParkingSystemBlock() const {
    return itsParkingSystemBlock;
}

void DC::setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock) {
    if(p_ParkingSystemBlock != NULL)
        {
            p_ParkingSystemBlock->_setItsDC(this);
        }
    _setItsParkingSystemBlock(p_ParkingSystemBlock);
}

void DC::cleanUpRelations() {
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
            DC* p_DC = itsANGELS_2->getItsDC();
            if(p_DC != NULL)
                {
                    itsANGELS_2->__setItsDC(NULL);
                }
            itsANGELS_2 = NULL;
        }
    if(itsDockingProcessBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock");
            DC* p_DC = itsDockingProcessBlock->getItsDC();
            if(p_DC != NULL)
                {
                    itsDockingProcessBlock->__setItsDC(NULL);
                }
            itsDockingProcessBlock = NULL;
        }
    if(itsEmergencyOverrideBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEmergencyOverrideBlock");
            DC* p_DC = itsEmergencyOverrideBlock->getItsDC();
            if(p_DC != NULL)
                {
                    itsEmergencyOverrideBlock->__setItsDC(NULL);
                }
            itsEmergencyOverrideBlock = NULL;
        }
    if(itsLoadingProcessBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
            DC* p_DC = itsLoadingProcessBlock->getItsDC();
            if(p_DC != NULL)
                {
                    itsLoadingProcessBlock->__setItsDC(NULL);
                }
            itsLoadingProcessBlock = NULL;
        }
    if(itsParkingSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsParkingSystemBlock");
            DC* p_DC = itsParkingSystemBlock->getItsDC();
            if(p_DC != NULL)
                {
                    itsParkingSystemBlock->__setItsDC(NULL);
                }
            itsParkingSystemBlock = NULL;
        }
}

void DC::__setItsANGELS_2(ANGELS* p_ANGELS) {
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

void DC::_setItsANGELS_2(ANGELS* p_ANGELS) {
    if(itsANGELS_2 != NULL)
        {
            itsANGELS_2->__setItsDC(NULL);
        }
    __setItsANGELS_2(p_ANGELS);
}

void DC::_clearItsANGELS_2() {
    NOTIFY_RELATION_CLEARED("itsANGELS_2");
    itsANGELS_2 = NULL;
}

void DC::__setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock) {
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

void DC::_setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock) {
    if(itsDockingProcessBlock != NULL)
        {
            itsDockingProcessBlock->__setItsDC(NULL);
        }
    __setItsDockingProcessBlock(p_DockingProcessBlock);
}

void DC::_clearItsDockingProcessBlock() {
    NOTIFY_RELATION_CLEARED("itsDockingProcessBlock");
    itsDockingProcessBlock = NULL;
}

void DC::__setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
    itsEmergencyOverrideBlock = p_EmergencyOverrideBlock;
    if(p_EmergencyOverrideBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEmergencyOverrideBlock", p_EmergencyOverrideBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEmergencyOverrideBlock");
        }
}

void DC::_setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock) {
    if(itsEmergencyOverrideBlock != NULL)
        {
            itsEmergencyOverrideBlock->__setItsDC(NULL);
        }
    __setItsEmergencyOverrideBlock(p_EmergencyOverrideBlock);
}

void DC::_clearItsEmergencyOverrideBlock() {
    NOTIFY_RELATION_CLEARED("itsEmergencyOverrideBlock");
    itsEmergencyOverrideBlock = NULL;
}

void DC::__setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
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

void DC::_setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    if(itsLoadingProcessBlock != NULL)
        {
            itsLoadingProcessBlock->__setItsDC(NULL);
        }
    __setItsLoadingProcessBlock(p_LoadingProcessBlock);
}

void DC::_clearItsLoadingProcessBlock() {
    NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
    itsLoadingProcessBlock = NULL;
}

void DC::__setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock) {
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

void DC::_setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock) {
    if(itsParkingSystemBlock != NULL)
        {
            itsParkingSystemBlock->__setItsDC(NULL);
        }
    __setItsParkingSystemBlock(p_ParkingSystemBlock);
}

void DC::_clearItsParkingSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsParkingSystemBlock");
    itsParkingSystemBlock = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDC::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsParkingSystemBlock", false, true);
    if(myReal->itsParkingSystemBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsParkingSystemBlock);
        }
    aomsRelations->addRelation("itsDockingProcessBlock", false, true);
    if(myReal->itsDockingProcessBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcessBlock);
        }
    aomsRelations->addRelation("itsEmergencyOverrideBlock", false, true);
    if(myReal->itsEmergencyOverrideBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsEmergencyOverrideBlock);
        }
}
//#]

IMPLEMENT_META_P(DC, ANGELSPkg_ActorPkg, ANGELSPkg::ActorPkg, false, OMAnimatedDC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\DC.cpp
*********************************************************************/

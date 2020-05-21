/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ChargingSystemBlock_Simulation
	Model Element	: ChargingInfrastructure
//!	Generated Date	: Thu, 21, May 2020  
	File Path	: DefaultComponent\ChargingSystemBlock_Simulation\ChargingInfrastructure.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ChargingInfrastructure.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsChargingSystemBlock
#include "ChargingSystemBlock.h"
//#[ ignore
#define ANGELSPkg_ChargingInfrastructure_ChargingInfrastructure_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg

//## class ChargingInfrastructure
ChargingInfrastructure::ChargingInfrastructure() {
    NOTIFY_CONSTRUCTOR(ChargingInfrastructure, ChargingInfrastructure(), 0, ANGELSPkg_ChargingInfrastructure_ChargingInfrastructure_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsChargingSystemBlock = NULL;
}

ChargingInfrastructure::~ChargingInfrastructure() {
    NOTIFY_DESTRUCTOR(~ChargingInfrastructure, true);
    cleanUpRelations();
}

ANGELS* ChargingInfrastructure::getItsANGELS() const {
    return itsANGELS;
}

void ChargingInfrastructure::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* ChargingInfrastructure::getItsANGELS_1() const {
    return itsANGELS_1;
}

void ChargingInfrastructure::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsChargingInfrastructure(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

ChargingSystemBlock* ChargingInfrastructure::getItsChargingSystemBlock() const {
    return itsChargingSystemBlock;
}

void ChargingInfrastructure::setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(p_ChargingSystemBlock != NULL)
        {
            p_ChargingSystemBlock->_setItsChargingInfrastructure(this);
        }
    _setItsChargingSystemBlock(p_ChargingSystemBlock);
}

void ChargingInfrastructure::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            ChargingInfrastructure* p_ChargingInfrastructure = itsANGELS_1->getItsChargingInfrastructure();
            if(p_ChargingInfrastructure != NULL)
                {
                    itsANGELS_1->__setItsChargingInfrastructure(NULL);
                }
            itsANGELS_1 = NULL;
        }
    if(itsChargingSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
            ChargingInfrastructure* p_ChargingInfrastructure = itsChargingSystemBlock->getItsChargingInfrastructure();
            if(p_ChargingInfrastructure != NULL)
                {
                    itsChargingSystemBlock->__setItsChargingInfrastructure(NULL);
                }
            itsChargingSystemBlock = NULL;
        }
}

void ChargingInfrastructure::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void ChargingInfrastructure::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsChargingInfrastructure(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void ChargingInfrastructure::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

void ChargingInfrastructure::__setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
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

void ChargingInfrastructure::_setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(itsChargingSystemBlock != NULL)
        {
            itsChargingSystemBlock->__setItsChargingInfrastructure(NULL);
        }
    __setItsChargingSystemBlock(p_ChargingSystemBlock);
}

void ChargingInfrastructure::_clearItsChargingSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
    itsChargingSystemBlock = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedChargingInfrastructure::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
    aomsRelations->addRelation("itsChargingSystemBlock", false, true);
    if(myReal->itsChargingSystemBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsChargingSystemBlock);
        }
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(ChargingInfrastructure, ANGELSPkg, ANGELSPkg, false, OMAnimatedChargingInfrastructure)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ChargingSystemBlock_Simulation\ChargingInfrastructure.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: CommunicationSystemBlock
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\CommunicationSystemBlock.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationSystemBlock.h"
//## link itsChargingSystemBlock
#include "ChargingSystemBlock.h"
//#[ ignore
#define ANGELSPkg_CommunicationPkg_CommunicationSystemBlock_CommunicationSystemBlock_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::CommunicationPkg

//## class CommunicationSystemBlock
CommunicationSystemBlock::CommunicationSystemBlock() {
    NOTIFY_CONSTRUCTOR(CommunicationSystemBlock, CommunicationSystemBlock(), 0, ANGELSPkg_CommunicationPkg_CommunicationSystemBlock_CommunicationSystemBlock_SERIALIZE);
    itsChargingSystemBlock = NULL;
}

CommunicationSystemBlock::~CommunicationSystemBlock() {
    NOTIFY_DESTRUCTOR(~CommunicationSystemBlock, true);
    cleanUpRelations();
}

ChargingSystemBlock* CommunicationSystemBlock::getItsChargingSystemBlock() const {
    return itsChargingSystemBlock;
}

void CommunicationSystemBlock::setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(p_ChargingSystemBlock != NULL)
        {
            p_ChargingSystemBlock->_setItsCommunicationSystemBlock(this);
        }
    _setItsChargingSystemBlock(p_ChargingSystemBlock);
}

void CommunicationSystemBlock::cleanUpRelations() {
    if(itsChargingSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
            CommunicationSystemBlock* p_CommunicationSystemBlock = itsChargingSystemBlock->getItsCommunicationSystemBlock();
            if(p_CommunicationSystemBlock != NULL)
                {
                    itsChargingSystemBlock->__setItsCommunicationSystemBlock(NULL);
                }
            itsChargingSystemBlock = NULL;
        }
}

void CommunicationSystemBlock::__setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
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

void CommunicationSystemBlock::_setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(itsChargingSystemBlock != NULL)
        {
            itsChargingSystemBlock->__setItsCommunicationSystemBlock(NULL);
        }
    __setItsChargingSystemBlock(p_ChargingSystemBlock);
}

void CommunicationSystemBlock::_clearItsChargingSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
    itsChargingSystemBlock = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationSystemBlock::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsChargingSystemBlock", false, true);
    if(myReal->itsChargingSystemBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsChargingSystemBlock);
        }
}
//#]

IMPLEMENT_META_P(CommunicationSystemBlock, ANGELSPkg_CommunicationPkg, ANGELSPkg::CommunicationPkg, false, OMAnimatedCommunicationSystemBlock)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\CommunicationSystemBlock.cpp
*********************************************************************/

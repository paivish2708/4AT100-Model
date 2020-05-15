/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: CommunicationSystemBlock
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\CommunicationSystemBlock.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationSystemBlock.h"
//## link itsCharging_System
#include "Charging_System.h"
//#[ ignore
#define ANGELSPkg_CommunicationPkg_CommunicationSystemBlock_CommunicationSystemBlock_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::CommunicationPkg

//## class CommunicationSystemBlock
CommunicationSystemBlock::CommunicationSystemBlock() {
    NOTIFY_CONSTRUCTOR(CommunicationSystemBlock, CommunicationSystemBlock(), 0, ANGELSPkg_CommunicationPkg_CommunicationSystemBlock_CommunicationSystemBlock_SERIALIZE);
    itsCharging_System = NULL;
}

CommunicationSystemBlock::~CommunicationSystemBlock() {
    NOTIFY_DESTRUCTOR(~CommunicationSystemBlock, true);
    cleanUpRelations();
}

Charging_System* CommunicationSystemBlock::getItsCharging_System() const {
    return itsCharging_System;
}

void CommunicationSystemBlock::setItsCharging_System(Charging_System* p_Charging_System) {
    if(p_Charging_System != NULL)
        {
            p_Charging_System->_setItsCommunicationSystemBlock(this);
        }
    _setItsCharging_System(p_Charging_System);
}

void CommunicationSystemBlock::cleanUpRelations() {
    if(itsCharging_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCharging_System");
            CommunicationSystemBlock* p_CommunicationSystemBlock = itsCharging_System->getItsCommunicationSystemBlock();
            if(p_CommunicationSystemBlock != NULL)
                {
                    itsCharging_System->__setItsCommunicationSystemBlock(NULL);
                }
            itsCharging_System = NULL;
        }
}

void CommunicationSystemBlock::__setItsCharging_System(Charging_System* p_Charging_System) {
    itsCharging_System = p_Charging_System;
    if(p_Charging_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCharging_System", p_Charging_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCharging_System");
        }
}

void CommunicationSystemBlock::_setItsCharging_System(Charging_System* p_Charging_System) {
    if(itsCharging_System != NULL)
        {
            itsCharging_System->__setItsCommunicationSystemBlock(NULL);
        }
    __setItsCharging_System(p_Charging_System);
}

void CommunicationSystemBlock::_clearItsCharging_System() {
    NOTIFY_RELATION_CLEARED("itsCharging_System");
    itsCharging_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationSystemBlock::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCharging_System", false, true);
    if(myReal->itsCharging_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsCharging_System);
        }
}
//#]

IMPLEMENT_META_P(CommunicationSystemBlock, ANGELSPkg_CommunicationPkg, ANGELSPkg::CommunicationPkg, false, OMAnimatedCommunicationSystemBlock)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\CommunicationSystemBlock.cpp
*********************************************************************/

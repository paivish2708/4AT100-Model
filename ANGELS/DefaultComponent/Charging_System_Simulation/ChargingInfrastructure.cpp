/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: ChargingInfrastructure
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\ChargingInfrastructure.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ChargingInfrastructure.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ChargingInfrastructure_ChargingInfrastructure_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg

//## class ChargingInfrastructure
ChargingInfrastructure::ChargingInfrastructure() {
    NOTIFY_CONSTRUCTOR(ChargingInfrastructure, ChargingInfrastructure(), 0, UseCaseAnalysisPkg_ANGELSPkg_ChargingInfrastructure_ChargingInfrastructure_SERIALIZE);
    itsANGELS = NULL;
}

ChargingInfrastructure::~ChargingInfrastructure() {
    NOTIFY_DESTRUCTOR(~ChargingInfrastructure, true);
    cleanUpRelations();
}

ANGELS* ChargingInfrastructure::getItsANGELS() const {
    return itsANGELS;
}

void ChargingInfrastructure::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsChargingInfrastructure(this);
        }
    _setItsANGELS(p_ANGELS);
}

void ChargingInfrastructure::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            ChargingInfrastructure* p_ChargingInfrastructure = itsANGELS->getItsChargingInfrastructure();
            if(p_ChargingInfrastructure != NULL)
                {
                    itsANGELS->__setItsChargingInfrastructure(NULL);
                }
            itsANGELS = NULL;
        }
}

void ChargingInfrastructure::__setItsANGELS(ANGELS* p_ANGELS) {
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

void ChargingInfrastructure::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsChargingInfrastructure(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void ChargingInfrastructure::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedChargingInfrastructure::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(ChargingInfrastructure, UseCaseAnalysisPkg_ANGELSPkg, UseCaseAnalysisPkg::ANGELSPkg, false, OMAnimatedChargingInfrastructure)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\ChargingInfrastructure.cpp
*********************************************************************/

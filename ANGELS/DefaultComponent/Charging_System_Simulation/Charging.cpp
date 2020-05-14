/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Charging
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Charging.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Charging.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_Charging_Charging_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg

//## class Charging
Charging::Charging() {
    NOTIFY_CONSTRUCTOR(Charging, Charging(), 0, UseCaseAnalysisPkg_ANGELSPkg_Charging_Charging_SERIALIZE);
    itsANGELS = NULL;
}

Charging::~Charging() {
    NOTIFY_DESTRUCTOR(~Charging, true);
    cleanUpRelations();
}

ANGELS* Charging::getItsANGELS() const {
    return itsANGELS;
}

void Charging::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsCharging(this);
        }
    _setItsANGELS(p_ANGELS);
}

void Charging::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Charging* p_Charging = itsANGELS->getItsCharging();
            if(p_Charging != NULL)
                {
                    itsANGELS->__setItsCharging(NULL);
                }
            itsANGELS = NULL;
        }
}

void Charging::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Charging::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsCharging(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Charging::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCharging::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(Charging, UseCaseAnalysisPkg_ANGELSPkg, UseCaseAnalysisPkg::ANGELSPkg, false, OMAnimatedCharging)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Charging.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Localization
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Localization.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Localization.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_Localization_Localization_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg

//## class Localization
Localization::Localization() {
    NOTIFY_CONSTRUCTOR(Localization, Localization(), 0, UseCaseAnalysisPkg_ANGELSPkg_Localization_Localization_SERIALIZE);
    itsANGELS = NULL;
}

Localization::~Localization() {
    NOTIFY_DESTRUCTOR(~Localization, true);
    cleanUpRelations();
}

ANGELS* Localization::getItsANGELS() const {
    return itsANGELS;
}

void Localization::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsLocalization(this);
        }
    _setItsANGELS(p_ANGELS);
}

void Localization::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Localization* p_Localization = itsANGELS->getItsLocalization();
            if(p_Localization != NULL)
                {
                    itsANGELS->__setItsLocalization(NULL);
                }
            itsANGELS = NULL;
        }
}

void Localization::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Localization::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsLocalization(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Localization::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLocalization::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(Localization, UseCaseAnalysisPkg_ANGELSPkg, UseCaseAnalysisPkg::ANGELSPkg, false, OMAnimatedLocalization)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Localization.cpp
*********************************************************************/

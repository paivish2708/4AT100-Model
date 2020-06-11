/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ChargingSystemBlock_Simulation
	Model Element	: LocalizationArchitecture
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\ChargingSystemBlock_Simulation\LocalizationArchitecture.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LocalizationArchitecture.h"
//## link itsANGELS_1
#include "ANGELS.h"
//#[ ignore
#define ANGELSPkg_LocalisationPkg_LocalizationArchitecture_LocalizationArchitecture_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::LocalisationPkg

//## class LocalizationArchitecture
LocalizationArchitecture::LocalizationArchitecture() {
    NOTIFY_CONSTRUCTOR(LocalizationArchitecture, LocalizationArchitecture(), 0, ANGELSPkg_LocalisationPkg_LocalizationArchitecture_LocalizationArchitecture_SERIALIZE);
    itsANGELS_1 = NULL;
}

LocalizationArchitecture::~LocalizationArchitecture() {
    NOTIFY_DESTRUCTOR(~LocalizationArchitecture, true);
    cleanUpRelations();
}

ANGELS* LocalizationArchitecture::getItsANGELS_1() const {
    return itsANGELS_1;
}

void LocalizationArchitecture::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsLocalizationArchitecture(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

void LocalizationArchitecture::cleanUpRelations() {
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            LocalizationArchitecture* p_LocalizationArchitecture = itsANGELS_1->getItsLocalizationArchitecture();
            if(p_LocalizationArchitecture != NULL)
                {
                    itsANGELS_1->__setItsLocalizationArchitecture(NULL);
                }
            itsANGELS_1 = NULL;
        }
}

void LocalizationArchitecture::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void LocalizationArchitecture::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsLocalizationArchitecture(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void LocalizationArchitecture::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLocalizationArchitecture::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
}
//#]

IMPLEMENT_META_P(LocalizationArchitecture, ANGELSPkg_LocalisationPkg, ANGELSPkg::LocalisationPkg, false, OMAnimatedLocalizationArchitecture)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ChargingSystemBlock_Simulation\LocalizationArchitecture.cpp
*********************************************************************/

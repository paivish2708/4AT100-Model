/********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Localisation_System
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Localisation_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Localisation_System.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_LocalisationPkg_Localisation_System_Localisation_System_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::LocalisationPkg

//## class Localisation_System
Localisation_System::Localisation_System() {
    NOTIFY_CONSTRUCTOR(Localisation_System, Localisation_System(), 0, UseCaseAnalysisPkg_ANGELSPkg_LocalisationPkg_Localisation_System_Localisation_System_SERIALIZE);
    itsANGELS = NULL;
}

Localisation_System::~Localisation_System() {
    NOTIFY_DESTRUCTOR(~Localisation_System, true);
    cleanUpRelations();
}

ANGELS* Localisation_System::getItsANGELS() const {
    return itsANGELS;
}

void Localisation_System::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsLocalisation_System(this);
        }
    _setItsANGELS(p_ANGELS);
}

void Localisation_System::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Localisation_System* p_Localisation_System = itsANGELS->getItsLocalisation_System();
            if(p_Localisation_System != NULL)
                {
                    itsANGELS->__setItsLocalisation_System(NULL);
                }
            itsANGELS = NULL;
        }
}

void Localisation_System::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Localisation_System::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsLocalisation_System(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Localisation_System::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLocalisation_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(Localisation_System, UseCaseAnalysisPkg_ANGELSPkg_LocalisationPkg, UseCaseAnalysisPkg::ANGELSPkg::LocalisationPkg, false, OMAnimatedLocalisation_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Localisation_System.cpp
*********************************************************************/

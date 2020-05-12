/********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Safety_Standards
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Safety_Standards.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Safety_Standards.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_SafetyStandards_Safety_Standards_Safety_Standards_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::SafetyStandards

//## class Safety_Standards
Safety_Standards::Safety_Standards() {
    NOTIFY_CONSTRUCTOR(Safety_Standards, Safety_Standards(), 0, UseCaseAnalysisPkg_ANGELSPkg_SafetyStandards_Safety_Standards_Safety_Standards_SERIALIZE);
    itsANGELS = NULL;
}

Safety_Standards::~Safety_Standards() {
    NOTIFY_DESTRUCTOR(~Safety_Standards, true);
    cleanUpRelations();
}

ANGELS* Safety_Standards::getItsANGELS() const {
    return itsANGELS;
}

void Safety_Standards::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsSafety_Standards(this);
        }
    _setItsANGELS(p_ANGELS);
}

void Safety_Standards::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Safety_Standards* p_Safety_Standards = itsANGELS->getItsSafety_Standards();
            if(p_Safety_Standards != NULL)
                {
                    itsANGELS->__setItsSafety_Standards(NULL);
                }
            itsANGELS = NULL;
        }
}

void Safety_Standards::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Safety_Standards::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsSafety_Standards(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Safety_Standards::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSafety_Standards::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(Safety_Standards, UseCaseAnalysisPkg_ANGELSPkg_SafetyStandards, UseCaseAnalysisPkg::ANGELSPkg::SafetyStandards, false, OMAnimatedSafety_Standards)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Safety_Standards.cpp
*********************************************************************/

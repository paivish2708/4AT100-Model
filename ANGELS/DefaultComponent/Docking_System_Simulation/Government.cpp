/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Government
//!	Generated Date	: Sun, 3, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Government.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Government.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_Government_Government_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Government
Government::Government() {
    NOTIFY_CONSTRUCTOR(Government, Government(), 0, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_Government_Government_SERIALIZE);
    itsANGELS = NULL;
}

Government::~Government() {
    NOTIFY_DESTRUCTOR(~Government, true);
    cleanUpRelations();
}

ANGELS* Government::getItsANGELS() const {
    return itsANGELS;
}

void Government::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsGovernment(this);
        }
    _setItsANGELS(p_ANGELS);
}

void Government::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Government* p_Government = itsANGELS->getItsGovernment();
            if(p_Government != NULL)
                {
                    itsANGELS->__setItsGovernment(NULL);
                }
            itsANGELS = NULL;
        }
}

void Government::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Government::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsGovernment(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Government::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovernment::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(Government, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg, UseCaseAnalysisPkg::ANGELSPkg::ActorPkg, false, OMAnimatedGovernment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Government.cpp
*********************************************************************/

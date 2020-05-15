/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcess_Simulation
	Model Element	: Localization
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\DockingProcess_Simulation\Localization.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Localization.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define ANGELSPkg_Localization_Localization_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg

//## class Localization
Localization::Localization() {
    NOTIFY_CONSTRUCTOR(Localization, Localization(), 0, ANGELSPkg_Localization_Localization_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
}

Localization::~Localization() {
    NOTIFY_DESTRUCTOR(~Localization, true);
    cleanUpRelations();
}

ANGELS* Localization::getItsANGELS() const {
    return itsANGELS;
}

void Localization::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* Localization::getItsANGELS_1() const {
    return itsANGELS_1;
}

void Localization::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsLocalization(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

void Localization::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            Localization* p_Localization = itsANGELS_1->getItsLocalization();
            if(p_Localization != NULL)
                {
                    itsANGELS_1->__setItsLocalization(NULL);
                }
            itsANGELS_1 = NULL;
        }
}

void Localization::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void Localization::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsLocalization(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void Localization::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLocalization::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
}
//#]

IMPLEMENT_META_P(Localization, ANGELSPkg, ANGELSPkg, false, OMAnimatedLocalization)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DockingProcess_Simulation\Localization.cpp
*********************************************************************/

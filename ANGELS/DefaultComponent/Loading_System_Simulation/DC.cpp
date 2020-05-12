/********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: DC
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\DC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DC.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsLoading_System
#include "Loading_System.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_DC_DC_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DC
DC::DC() {
    NOTIFY_CONSTRUCTOR(DC, DC(), 0, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_DC_DC_SERIALIZE);
    itsANGELS = NULL;
    itsLoading_System = NULL;
}

DC::~DC() {
    NOTIFY_DESTRUCTOR(~DC, true);
    cleanUpRelations();
}

ANGELS* DC::getItsANGELS() const {
    return itsANGELS;
}

void DC::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDC(this);
        }
    _setItsANGELS(p_ANGELS);
}

Loading_System* DC::getItsLoading_System() const {
    return itsLoading_System;
}

void DC::setItsLoading_System(Loading_System* p_Loading_System) {
    if(p_Loading_System != NULL)
        {
            p_Loading_System->_setItsDC(this);
        }
    _setItsLoading_System(p_Loading_System);
}

void DC::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            DC* p_DC = itsANGELS->getItsDC();
            if(p_DC != NULL)
                {
                    itsANGELS->__setItsDC(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsLoading_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoading_System");
            DC* p_DC = itsLoading_System->getItsDC();
            if(p_DC != NULL)
                {
                    itsLoading_System->__setItsDC(NULL);
                }
            itsLoading_System = NULL;
        }
}

void DC::__setItsANGELS(ANGELS* p_ANGELS) {
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

void DC::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsDC(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void DC::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void DC::__setItsLoading_System(Loading_System* p_Loading_System) {
    itsLoading_System = p_Loading_System;
    if(p_Loading_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoading_System", p_Loading_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoading_System");
        }
}

void DC::_setItsLoading_System(Loading_System* p_Loading_System) {
    if(itsLoading_System != NULL)
        {
            itsLoading_System->__setItsDC(NULL);
        }
    __setItsLoading_System(p_Loading_System);
}

void DC::_clearItsLoading_System() {
    NOTIFY_RELATION_CLEARED("itsLoading_System");
    itsLoading_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLoading_System", false, true);
    if(myReal->itsLoading_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoading_System);
        }
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(DC, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg, UseCaseAnalysisPkg::ANGELSPkg::ActorPkg, false, OMAnimatedDC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\DC.cpp
*********************************************************************/

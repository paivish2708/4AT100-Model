/********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\DCOperator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCOperator.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDocking_System
#include "Docking_System.h"
//## link itsLoading_System
#include "Loading_System.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_DCOperator_DCOperator_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DCOperator
DCOperator::DCOperator() {
    NOTIFY_CONSTRUCTOR(DCOperator, DCOperator(), 0, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_DCOperator_DCOperator_SERIALIZE);
    itsANGELS = NULL;
    itsDocking_System = NULL;
    itsDocking_System_1 = NULL;
    itsLoading_System = NULL;
}

DCOperator::~DCOperator() {
    NOTIFY_DESTRUCTOR(~DCOperator, true);
    cleanUpRelations();
}

ANGELS* DCOperator::getItsANGELS() const {
    return itsANGELS;
}

void DCOperator::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDCOperator(this);
        }
    _setItsANGELS(p_ANGELS);
}

Docking_System* DCOperator::getItsDocking_System() const {
    return itsDocking_System;
}

void DCOperator::setItsDocking_System(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsDCOperator(this);
        }
    _setItsDocking_System(p_Docking_System);
}

Docking_System* DCOperator::getItsDocking_System_1() const {
    return itsDocking_System_1;
}

void DCOperator::setItsDocking_System_1(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsDCOperator_1(this);
        }
    _setItsDocking_System_1(p_Docking_System);
}

Loading_System* DCOperator::getItsLoading_System() const {
    return itsLoading_System;
}

void DCOperator::setItsLoading_System(Loading_System* p_Loading_System) {
    if(p_Loading_System != NULL)
        {
            p_Loading_System->_setItsDCOperator(this);
        }
    _setItsLoading_System(p_Loading_System);
}

void DCOperator::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            DCOperator* p_DCOperator = itsANGELS->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsANGELS->__setItsDCOperator(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsDocking_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System");
            DCOperator* p_DCOperator = itsDocking_System->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsDocking_System->__setItsDCOperator(NULL);
                }
            itsDocking_System = NULL;
        }
    if(itsDocking_System_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_1");
            DCOperator* p_DCOperator = itsDocking_System_1->getItsDCOperator_1();
            if(p_DCOperator != NULL)
                {
                    itsDocking_System_1->__setItsDCOperator_1(NULL);
                }
            itsDocking_System_1 = NULL;
        }
    if(itsLoading_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoading_System");
            DCOperator* p_DCOperator = itsLoading_System->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsLoading_System->__setItsDCOperator(NULL);
                }
            itsLoading_System = NULL;
        }
}

void DCOperator::__setItsANGELS(ANGELS* p_ANGELS) {
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

void DCOperator::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsDCOperator(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void DCOperator::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void DCOperator::__setItsDocking_System(Docking_System* p_Docking_System) {
    itsDocking_System = p_Docking_System;
    if(p_Docking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_System", p_Docking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System");
        }
}

void DCOperator::_setItsDocking_System(Docking_System* p_Docking_System) {
    if(itsDocking_System != NULL)
        {
            itsDocking_System->__setItsDCOperator(NULL);
        }
    __setItsDocking_System(p_Docking_System);
}

void DCOperator::_clearItsDocking_System() {
    NOTIFY_RELATION_CLEARED("itsDocking_System");
    itsDocking_System = NULL;
}

void DCOperator::__setItsDocking_System_1(Docking_System* p_Docking_System) {
    itsDocking_System_1 = p_Docking_System;
    if(p_Docking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_System_1", p_Docking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_1");
        }
}

void DCOperator::_setItsDocking_System_1(Docking_System* p_Docking_System) {
    if(itsDocking_System_1 != NULL)
        {
            itsDocking_System_1->__setItsDCOperator_1(NULL);
        }
    __setItsDocking_System_1(p_Docking_System);
}

void DCOperator::_clearItsDocking_System_1() {
    NOTIFY_RELATION_CLEARED("itsDocking_System_1");
    itsDocking_System_1 = NULL;
}

void DCOperator::__setItsLoading_System(Loading_System* p_Loading_System) {
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

void DCOperator::_setItsLoading_System(Loading_System* p_Loading_System) {
    if(itsLoading_System != NULL)
        {
            itsLoading_System->__setItsDCOperator(NULL);
        }
    __setItsLoading_System(p_Loading_System);
}

void DCOperator::_clearItsLoading_System() {
    NOTIFY_RELATION_CLEARED("itsLoading_System");
    itsLoading_System = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCOperator::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsDocking_System", false, true);
    if(myReal->itsDocking_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System);
        }
    aomsRelations->addRelation("itsDocking_System_1", false, true);
    if(myReal->itsDocking_System_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System_1);
        }
}
//#]

IMPLEMENT_META_P(DCOperator, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg, UseCaseAnalysisPkg::ANGELSPkg::ActorPkg, false, OMAnimatedDCOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\DCOperator.cpp
*********************************************************************/

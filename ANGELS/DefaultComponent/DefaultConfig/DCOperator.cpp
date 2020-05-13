/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCOperator
//!	Generated Date	: Wed, 13, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DCOperator.cpp
*********************************************************************/

//## auto_generated
#include "DCOperator.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsCharging_System
#include "Charging_System.h"
//## link itsDocking_System
#include "Docking_System.h"
//## link itsLoading_System
#include "Loading_System.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DCOperator
DCOperator::DCOperator() {
    itsANGELS = NULL;
    itsCharging_System = NULL;
    itsDocking_System = NULL;
    itsDocking_System_1 = NULL;
    itsLoading_System = NULL;
}

DCOperator::~DCOperator() {
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

Charging_System* DCOperator::getItsCharging_System() const {
    return itsCharging_System;
}

void DCOperator::setItsCharging_System(Charging_System* p_Charging_System) {
    if(p_Charging_System != NULL)
        {
            p_Charging_System->_setItsDCOperator(this);
        }
    _setItsCharging_System(p_Charging_System);
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
            DCOperator* p_DCOperator = itsANGELS->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsANGELS->__setItsDCOperator(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsCharging_System != NULL)
        {
            DCOperator* p_DCOperator = itsCharging_System->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsCharging_System->__setItsDCOperator(NULL);
                }
            itsCharging_System = NULL;
        }
    if(itsDocking_System != NULL)
        {
            DCOperator* p_DCOperator = itsDocking_System->getItsDCOperator();
            if(p_DCOperator != NULL)
                {
                    itsDocking_System->__setItsDCOperator(NULL);
                }
            itsDocking_System = NULL;
        }
    if(itsDocking_System_1 != NULL)
        {
            DCOperator* p_DCOperator = itsDocking_System_1->getItsDCOperator_1();
            if(p_DCOperator != NULL)
                {
                    itsDocking_System_1->__setItsDCOperator_1(NULL);
                }
            itsDocking_System_1 = NULL;
        }
    if(itsLoading_System != NULL)
        {
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
}

void DCOperator::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsDCOperator(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void DCOperator::_clearItsANGELS() {
    itsANGELS = NULL;
}

void DCOperator::__setItsCharging_System(Charging_System* p_Charging_System) {
    itsCharging_System = p_Charging_System;
}

void DCOperator::_setItsCharging_System(Charging_System* p_Charging_System) {
    if(itsCharging_System != NULL)
        {
            itsCharging_System->__setItsDCOperator(NULL);
        }
    __setItsCharging_System(p_Charging_System);
}

void DCOperator::_clearItsCharging_System() {
    itsCharging_System = NULL;
}

void DCOperator::__setItsDocking_System(Docking_System* p_Docking_System) {
    itsDocking_System = p_Docking_System;
}

void DCOperator::_setItsDocking_System(Docking_System* p_Docking_System) {
    if(itsDocking_System != NULL)
        {
            itsDocking_System->__setItsDCOperator(NULL);
        }
    __setItsDocking_System(p_Docking_System);
}

void DCOperator::_clearItsDocking_System() {
    itsDocking_System = NULL;
}

void DCOperator::__setItsDocking_System_1(Docking_System* p_Docking_System) {
    itsDocking_System_1 = p_Docking_System;
}

void DCOperator::_setItsDocking_System_1(Docking_System* p_Docking_System) {
    if(itsDocking_System_1 != NULL)
        {
            itsDocking_System_1->__setItsDCOperator_1(NULL);
        }
    __setItsDocking_System_1(p_Docking_System);
}

void DCOperator::_clearItsDocking_System_1() {
    itsDocking_System_1 = NULL;
}

void DCOperator::__setItsLoading_System(Loading_System* p_Loading_System) {
    itsLoading_System = p_Loading_System;
}

void DCOperator::_setItsLoading_System(Loading_System* p_Loading_System) {
    if(itsLoading_System != NULL)
        {
            itsLoading_System->__setItsDCOperator(NULL);
        }
    __setItsLoading_System(p_Loading_System);
}

void DCOperator::_clearItsLoading_System() {
    itsLoading_System = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCOperator.cpp
*********************************************************************/

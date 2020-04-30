/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCOperator
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\DefaultConfig\DCOperator.cpp
*********************************************************************/

//## auto_generated
#include "DCOperator.h"
//## link itsLoading_System
#include "Loading_System.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DCOperator
DCOperator::DCOperator() {
    itsLoading_System = NULL;
}

DCOperator::~DCOperator() {
    cleanUpRelations();
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

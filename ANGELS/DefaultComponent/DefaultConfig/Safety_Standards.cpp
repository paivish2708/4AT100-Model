/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Safety_Standards
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Safety_Standards.cpp
*********************************************************************/

//## auto_generated
#include "Safety_Standards.h"
//## link itsANGELS
#include "ANGELS.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::SafetyStandards

//## class Safety_Standards
Safety_Standards::Safety_Standards() {
    itsANGELS = NULL;
}

Safety_Standards::~Safety_Standards() {
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
}

void Safety_Standards::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsSafety_Standards(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Safety_Standards::_clearItsANGELS() {
    itsANGELS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Safety_Standards.cpp
*********************************************************************/

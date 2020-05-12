/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Government
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/

//## auto_generated
#include "Government.h"
//## link itsANGELS
#include "ANGELS.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Government
Government::Government() {
    itsANGELS = NULL;
}

Government::~Government() {
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
}

void Government::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsGovernment(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Government::_clearItsANGELS() {
    itsANGELS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/

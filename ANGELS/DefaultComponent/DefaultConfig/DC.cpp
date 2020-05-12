/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DC
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DC.cpp
*********************************************************************/

//## auto_generated
#include "DC.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsLoading_System
#include "Loading_System.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DC
DC::DC() {
    itsANGELS = NULL;
    itsLoading_System = NULL;
}

DC::~DC() {
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
            DC* p_DC = itsANGELS->getItsDC();
            if(p_DC != NULL)
                {
                    itsANGELS->__setItsDC(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsLoading_System != NULL)
        {
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
}

void DC::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsDC(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void DC::_clearItsANGELS() {
    itsANGELS = NULL;
}

void DC::__setItsLoading_System(Loading_System* p_Loading_System) {
    itsLoading_System = p_Loading_System;
}

void DC::_setItsLoading_System(Loading_System* p_Loading_System) {
    if(itsLoading_System != NULL)
        {
            itsLoading_System->__setItsDC(NULL);
        }
    __setItsLoading_System(p_Loading_System);
}

void DC::_clearItsLoading_System() {
    itsLoading_System = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DC.cpp
*********************************************************************/

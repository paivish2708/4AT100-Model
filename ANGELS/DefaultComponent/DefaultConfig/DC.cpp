/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DC
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\DefaultConfig\DC.cpp
*********************************************************************/

//## auto_generated
#include "DC.h"
//## link itsLoading_System
#include "Loading_System.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DC
DC::DC() {
    itsLoading_System = NULL;
}

DC::~DC() {
    cleanUpRelations();
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

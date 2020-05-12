/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Communication_System
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Communication_System.cpp
*********************************************************************/

//## auto_generated
#include "Communication_System.h"
//## link itsANGELS
#include "ANGELS.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::CommunicationPkg

//## class Communication_System
Communication_System::Communication_System() {
    itsANGELS = NULL;
}

Communication_System::~Communication_System() {
    cleanUpRelations();
}

ANGELS* Communication_System::getItsANGELS() const {
    return itsANGELS;
}

void Communication_System::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsCommunication_System(this);
        }
    _setItsANGELS(p_ANGELS);
}

void Communication_System::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            Communication_System* p_Communication_System = itsANGELS->getItsCommunication_System();
            if(p_Communication_System != NULL)
                {
                    itsANGELS->__setItsCommunication_System(NULL);
                }
            itsANGELS = NULL;
        }
}

void Communication_System::__setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
}

void Communication_System::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsCommunication_System(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Communication_System::_clearItsANGELS() {
    itsANGELS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Communication_System.cpp
*********************************************************************/

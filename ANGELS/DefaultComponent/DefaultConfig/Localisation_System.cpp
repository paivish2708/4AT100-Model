/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Localisation_System
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Localisation_System.cpp
*********************************************************************/

//## auto_generated
#include "Localisation_System.h"
//## link itsANGELS
#include "ANGELS.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::LocalisationPkg

//## class Localisation_System
Localisation_System::Localisation_System() {
    itsANGELS = NULL;
}

Localisation_System::~Localisation_System() {
    cleanUpRelations();
}

ANGELS* Localisation_System::getItsANGELS() const {
    return itsANGELS;
}

void Localisation_System::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsLocalisation_System(this);
        }
    _setItsANGELS(p_ANGELS);
}

void Localisation_System::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            Localisation_System* p_Localisation_System = itsANGELS->getItsLocalisation_System();
            if(p_Localisation_System != NULL)
                {
                    itsANGELS->__setItsLocalisation_System(NULL);
                }
            itsANGELS = NULL;
        }
}

void Localisation_System::__setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
}

void Localisation_System::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsLocalisation_System(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Localisation_System::_clearItsANGELS() {
    itsANGELS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Localisation_System.cpp
*********************************************************************/

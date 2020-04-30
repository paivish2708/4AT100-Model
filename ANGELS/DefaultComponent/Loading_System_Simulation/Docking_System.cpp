/********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Docking_System
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Docking_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Docking_System.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg_Docking_System_Docking_System_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg

//## class Docking_System
Docking_System::Docking_System() {
    NOTIFY_CONSTRUCTOR(Docking_System, Docking_System(), 0, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg_Docking_System_Docking_System_SERIALIZE);
    itsANGELS = NULL;
}

Docking_System::~Docking_System() {
    NOTIFY_DESTRUCTOR(~Docking_System, true);
    cleanUpRelations();
}

ANGELS* Docking_System::getItsANGELS() const {
    return itsANGELS;
}

void Docking_System::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDocking_System(this);
        }
    _setItsANGELS(p_ANGELS);
}

void Docking_System::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Docking_System* p_Docking_System = itsANGELS->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsANGELS->__setItsDocking_System(NULL);
                }
            itsANGELS = NULL;
        }
}

void Docking_System::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Docking_System::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsDocking_System(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Docking_System::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDocking_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(Docking_System, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, false, OMAnimatedDocking_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Docking_System.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Communication_System
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Communication_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Communication_System.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_CommunicationPkg_Communication_System_Communication_System_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::CommunicationPkg

//## class Communication_System
Communication_System::Communication_System() {
    NOTIFY_CONSTRUCTOR(Communication_System, Communication_System(), 0, UseCaseAnalysisPkg_ANGELSPkg_CommunicationPkg_Communication_System_Communication_System_SERIALIZE);
    itsANGELS = NULL;
}

Communication_System::~Communication_System() {
    NOTIFY_DESTRUCTOR(~Communication_System, true);
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
            NOTIFY_RELATION_CLEARED("itsANGELS");
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
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
        }
}

void Communication_System::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsCommunication_System(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Communication_System::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunication_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(Communication_System, UseCaseAnalysisPkg_ANGELSPkg_CommunicationPkg, UseCaseAnalysisPkg::ANGELSPkg::CommunicationPkg, false, OMAnimatedCommunication_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Communication_System.cpp
*********************************************************************/

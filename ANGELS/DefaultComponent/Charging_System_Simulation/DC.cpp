/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: DC
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\DC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DC.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsLoading_Process
#include "Loading_Process.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_DC_DC_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DC
DC::DC() {
    NOTIFY_CONSTRUCTOR(DC, DC(), 0, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_DC_DC_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsLoading_Process = NULL;
}

DC::~DC() {
    NOTIFY_DESTRUCTOR(~DC, true);
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

ANGELS* DC::getItsANGELS_1() const {
    return itsANGELS_1;
}

void DC::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDC_1(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

Loading_Process* DC::getItsLoading_Process() const {
    return itsLoading_Process;
}

void DC::setItsLoading_Process(Loading_Process* p_Loading_Process) {
    if(p_Loading_Process != NULL)
        {
            p_Loading_Process->_setItsDC(this);
        }
    _setItsLoading_Process(p_Loading_Process);
}

void DC::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            DC* p_DC = itsANGELS->getItsDC();
            if(p_DC != NULL)
                {
                    itsANGELS->__setItsDC(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            DC* p_DC = itsANGELS_1->getItsDC_1();
            if(p_DC != NULL)
                {
                    itsANGELS_1->__setItsDC_1(NULL);
                }
            itsANGELS_1 = NULL;
        }
    if(itsLoading_Process != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoading_Process");
            DC* p_DC = itsLoading_Process->getItsDC();
            if(p_DC != NULL)
                {
                    itsLoading_Process->__setItsDC(NULL);
                }
            itsLoading_Process = NULL;
        }
}

void DC::__setItsANGELS(ANGELS* p_ANGELS) {
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

void DC::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsDC(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void DC::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void DC::__setItsANGELS_1(ANGELS* p_ANGELS) {
    itsANGELS_1 = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS_1", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
        }
}

void DC::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsDC_1(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void DC::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

void DC::__setItsLoading_Process(Loading_Process* p_Loading_Process) {
    itsLoading_Process = p_Loading_Process;
    if(p_Loading_Process != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoading_Process", p_Loading_Process, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoading_Process");
        }
}

void DC::_setItsLoading_Process(Loading_Process* p_Loading_Process) {
    if(itsLoading_Process != NULL)
        {
            itsLoading_Process->__setItsDC(NULL);
        }
    __setItsLoading_Process(p_Loading_Process);
}

void DC::_clearItsLoading_Process() {
    NOTIFY_RELATION_CLEARED("itsLoading_Process");
    itsLoading_Process = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsLoading_Process", false, true);
    if(myReal->itsLoading_Process)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoading_Process);
        }
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
}
//#]

IMPLEMENT_META_P(DC, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg, UseCaseAnalysisPkg::ANGELSPkg::ActorPkg, false, OMAnimatedDC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\DC.cpp
*********************************************************************/

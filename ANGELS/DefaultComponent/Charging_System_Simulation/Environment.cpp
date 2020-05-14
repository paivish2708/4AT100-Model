/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Environment
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Environment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Environment.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_Environment_Environment_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Environment
Environment::Environment() {
    NOTIFY_CONSTRUCTOR(Environment, Environment(), 0, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_Environment_Environment_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
}

Environment::~Environment() {
    NOTIFY_DESTRUCTOR(~Environment, true);
    cleanUpRelations();
}

ANGELS* Environment::getItsANGELS() const {
    return itsANGELS;
}

void Environment::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsEnvironment(this);
        }
    _setItsANGELS(p_ANGELS);
}

ANGELS* Environment::getItsANGELS_1() const {
    return itsANGELS_1;
}

void Environment::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsEnvironment_1(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

void Environment::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Environment* p_Environment = itsANGELS->getItsEnvironment();
            if(p_Environment != NULL)
                {
                    itsANGELS->__setItsEnvironment(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            Environment* p_Environment = itsANGELS_1->getItsEnvironment_1();
            if(p_Environment != NULL)
                {
                    itsANGELS_1->__setItsEnvironment_1(NULL);
                }
            itsANGELS_1 = NULL;
        }
}

void Environment::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Environment::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsEnvironment(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Environment::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void Environment::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void Environment::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsEnvironment_1(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void Environment::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEnvironment::serializeRelations(AOMSRelations* aomsRelations) const {
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

IMPLEMENT_META_P(Environment, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg, UseCaseAnalysisPkg::ANGELSPkg::ActorPkg, false, OMAnimatedEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Environment.cpp
*********************************************************************/

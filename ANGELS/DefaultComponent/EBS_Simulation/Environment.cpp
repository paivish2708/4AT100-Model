/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EBS_Simulation
	Model Element	: Environment
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\EBS_Simulation\Environment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Environment.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsEBS
#include "EBS.h"
//#[ ignore
#define ANGELSPkg_ActorPkg_Environment_Environment_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ActorPkg

//## actor Environment
Environment::Environment() {
    NOTIFY_CONSTRUCTOR(Environment, Environment(), 0, ANGELSPkg_ActorPkg_Environment_Environment_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsANGELS_2 = NULL;
    itsEBS = NULL;
}

Environment::~Environment() {
    NOTIFY_DESTRUCTOR(~Environment, true);
    cleanUpRelations();
}

ANGELS* Environment::getItsANGELS() const {
    return itsANGELS;
}

void Environment::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* Environment::getItsANGELS_1() const {
    return itsANGELS_1;
}

void Environment::setItsANGELS_1(ANGELS* p_ANGELS) {
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

ANGELS* Environment::getItsANGELS_2() const {
    return itsANGELS_2;
}

void Environment::setItsANGELS_2(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsEnvironment(this);
        }
    _setItsANGELS_2(p_ANGELS);
}

EBS* Environment::getItsEBS() const {
    return itsEBS;
}

void Environment::setItsEBS(EBS* p_EBS) {
    if(p_EBS != NULL)
        {
            p_EBS->_setItsEnvironment(this);
        }
    _setItsEBS(p_EBS);
}

void Environment::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            itsANGELS_1 = NULL;
        }
    if(itsANGELS_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_2");
            Environment* p_Environment = itsANGELS_2->getItsEnvironment();
            if(p_Environment != NULL)
                {
                    itsANGELS_2->__setItsEnvironment(NULL);
                }
            itsANGELS_2 = NULL;
        }
    if(itsEBS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEBS");
            Environment* p_Environment = itsEBS->getItsEnvironment();
            if(p_Environment != NULL)
                {
                    itsEBS->__setItsEnvironment(NULL);
                }
            itsEBS = NULL;
        }
}

void Environment::__setItsANGELS_2(ANGELS* p_ANGELS) {
    itsANGELS_2 = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS_2", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_2");
        }
}

void Environment::_setItsANGELS_2(ANGELS* p_ANGELS) {
    if(itsANGELS_2 != NULL)
        {
            itsANGELS_2->__setItsEnvironment(NULL);
        }
    __setItsANGELS_2(p_ANGELS);
}

void Environment::_clearItsANGELS_2() {
    NOTIFY_RELATION_CLEARED("itsANGELS_2");
    itsANGELS_2 = NULL;
}

void Environment::__setItsEBS(EBS* p_EBS) {
    itsEBS = p_EBS;
    if(p_EBS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEBS", p_EBS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEBS");
        }
}

void Environment::_setItsEBS(EBS* p_EBS) {
    if(itsEBS != NULL)
        {
            itsEBS->__setItsEnvironment(NULL);
        }
    __setItsEBS(p_EBS);
}

void Environment::_clearItsEBS() {
    NOTIFY_RELATION_CLEARED("itsEBS");
    itsEBS = NULL;
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
    aomsRelations->addRelation("itsANGELS_2", false, true);
    if(myReal->itsANGELS_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_2);
        }
    aomsRelations->addRelation("itsEBS", false, true);
    if(myReal->itsEBS)
        {
            aomsRelations->ADD_ITEM(myReal->itsEBS);
        }
}
//#]

IMPLEMENT_META_P(Environment, ANGELSPkg_ActorPkg, ANGELSPkg::ActorPkg, false, OMAnimatedEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\EBS_Simulation\Environment.cpp
*********************************************************************/

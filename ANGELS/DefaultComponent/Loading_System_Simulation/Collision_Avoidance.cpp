/********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Collision_Avoidance
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Collision_Avoidance.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Collision_Avoidance.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ObstacleAvoidancePkg_Collision_Avoidance_Collision_Avoidance_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ObstacleAvoidancePkg

//## class Collision_Avoidance
Collision_Avoidance::Collision_Avoidance() {
    NOTIFY_CONSTRUCTOR(Collision_Avoidance, Collision_Avoidance(), 0, UseCaseAnalysisPkg_ANGELSPkg_ObstacleAvoidancePkg_Collision_Avoidance_Collision_Avoidance_SERIALIZE);
    itsANGELS = NULL;
}

Collision_Avoidance::~Collision_Avoidance() {
    NOTIFY_DESTRUCTOR(~Collision_Avoidance, true);
    cleanUpRelations();
}

ANGELS* Collision_Avoidance::getItsANGELS() const {
    return itsANGELS;
}

void Collision_Avoidance::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsCollision_Avoidance(this);
        }
    _setItsANGELS(p_ANGELS);
}

void Collision_Avoidance::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Collision_Avoidance* p_Collision_Avoidance = itsANGELS->getItsCollision_Avoidance();
            if(p_Collision_Avoidance != NULL)
                {
                    itsANGELS->__setItsCollision_Avoidance(NULL);
                }
            itsANGELS = NULL;
        }
}

void Collision_Avoidance::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Collision_Avoidance::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsCollision_Avoidance(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Collision_Avoidance::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCollision_Avoidance::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(Collision_Avoidance, UseCaseAnalysisPkg_ANGELSPkg_ObstacleAvoidancePkg, UseCaseAnalysisPkg::ANGELSPkg::ObstacleAvoidancePkg, false, OMAnimatedCollision_Avoidance)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Collision_Avoidance.cpp
*********************************************************************/

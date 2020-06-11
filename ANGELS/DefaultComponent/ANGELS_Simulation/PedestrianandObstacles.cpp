/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: PedestrianandObstacles
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\PedestrianandObstacles.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PedestrianandObstacles.h"
//## auto_generated
#include "ANGELS.h"
//## auto_generated
#include "Collision_Detection.h"
//## auto_generated
#include "EBS.h"
//#[ ignore
#define ANGELSPkg_ActorPkg_PedestrianandObstacles_PedestrianandObstacles_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ActorPkg

//## actor PedestrianandObstacles
PedestrianandObstacles::PedestrianandObstacles() {
    NOTIFY_CONSTRUCTOR(PedestrianandObstacles, PedestrianandObstacles(), 0, ANGELSPkg_ActorPkg_PedestrianandObstacles_PedestrianandObstacles_SERIALIZE);
    itsEBS_1 = NULL;
}

PedestrianandObstacles::~PedestrianandObstacles() {
    NOTIFY_DESTRUCTOR(~PedestrianandObstacles, false);
    cleanUpRelations();
}

EBS* PedestrianandObstacles::getItsEBS_1() const {
    return itsEBS_1;
}

void PedestrianandObstacles::setItsEBS_1(EBS* p_EBS) {
    if(p_EBS != NULL)
        {
            p_EBS->_setItsPedestrianandObstacles(this);
        }
    _setItsEBS_1(p_EBS);
}

void PedestrianandObstacles::cleanUpRelations() {
    if(itsEBS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEBS_1");
            PedestrianandObstacles* p_PedestrianandObstacles = itsEBS_1->getItsPedestrianandObstacles();
            if(p_PedestrianandObstacles != NULL)
                {
                    itsEBS_1->__setItsPedestrianandObstacles(NULL);
                }
            itsEBS_1 = NULL;
        }
}

void PedestrianandObstacles::__setItsEBS_1(EBS* p_EBS) {
    itsEBS_1 = p_EBS;
    if(p_EBS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEBS_1", p_EBS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEBS_1");
        }
}

void PedestrianandObstacles::_setItsEBS_1(EBS* p_EBS) {
    if(itsEBS_1 != NULL)
        {
            itsEBS_1->__setItsPedestrianandObstacles(NULL);
        }
    __setItsEBS_1(p_EBS);
}

void PedestrianandObstacles::_clearItsEBS_1() {
    NOTIFY_RELATION_CLEARED("itsEBS_1");
    itsEBS_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPedestrianandObstacles::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedObstacle::serializeAttributes(aomsAttributes);
}

void OMAnimatedPedestrianandObstacles::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEBS_1", false, true);
    if(myReal->itsEBS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsEBS_1);
        }
    OMAnimatedObstacle::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(PedestrianandObstacles, ANGELSPkg::ActorPkg, false, Obstacle, OMAnimatedObstacle, OMAnimatedPedestrianandObstacles)

OMINIT_SUPERCLASS(Obstacle, OMAnimatedObstacle)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\PedestrianandObstacles.cpp
*********************************************************************/

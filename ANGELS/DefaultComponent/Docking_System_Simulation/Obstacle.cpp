/********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Obstacle
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Obstacle.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Obstacle.h"
//## link itsCollision_Detection_1
#include "Collision_Detection.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_Obstacle_Obstacle_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Obstacle
Obstacle::Obstacle() {
    NOTIFY_CONSTRUCTOR(Obstacle, Obstacle(), 0, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_Obstacle_Obstacle_SERIALIZE);
    itsCollision_Detection_1 = NULL;
}

Obstacle::~Obstacle() {
    NOTIFY_DESTRUCTOR(~Obstacle, true);
    cleanUpRelations();
}

Collision_Detection* Obstacle::getItsCollision_Detection_1() const {
    return itsCollision_Detection_1;
}

void Obstacle::setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsObstacle(this);
        }
    _setItsCollision_Detection_1(p_Collision_Detection);
}

void Obstacle::cleanUpRelations() {
    if(itsCollision_Detection_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection_1");
            Obstacle* p_Obstacle = itsCollision_Detection_1->getItsObstacle();
            if(p_Obstacle != NULL)
                {
                    itsCollision_Detection_1->__setItsObstacle(NULL);
                }
            itsCollision_Detection_1 = NULL;
        }
}

void Obstacle::__setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    itsCollision_Detection_1 = p_Collision_Detection;
    if(p_Collision_Detection != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Detection_1", p_Collision_Detection, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection_1");
        }
}

void Obstacle::_setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection_1 != NULL)
        {
            itsCollision_Detection_1->__setItsObstacle(NULL);
        }
    __setItsCollision_Detection_1(p_Collision_Detection);
}

void Obstacle::_clearItsCollision_Detection_1() {
    NOTIFY_RELATION_CLEARED("itsCollision_Detection_1");
    itsCollision_Detection_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedObstacle::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCollision_Detection_1", false, true);
    if(myReal->itsCollision_Detection_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Detection_1);
        }
}
//#]

IMPLEMENT_META_P(Obstacle, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg, UseCaseAnalysisPkg::ANGELSPkg::ActorPkg, false, OMAnimatedObstacle)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Obstacle.cpp
*********************************************************************/

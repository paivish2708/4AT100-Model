/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: Obstacle
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\Obstacle.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Obstacle.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsCollision_Detection_1
#include "Collision_Detection.h"
//#[ ignore
#define ANGELSPkg_ActorPkg_Obstacle_Obstacle_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ActorPkg

//## actor Obstacle
Obstacle::Obstacle() {
    NOTIFY_CONSTRUCTOR(Obstacle, Obstacle(), 0, ANGELSPkg_ActorPkg_Obstacle_Obstacle_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsANGELS_2 = NULL;
    itsCollision_Detection_1 = NULL;
}

Obstacle::~Obstacle() {
    NOTIFY_DESTRUCTOR(~Obstacle, true);
    cleanUpRelations();
}

ANGELS* Obstacle::getItsANGELS() const {
    return itsANGELS;
}

void Obstacle::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* Obstacle::getItsANGELS_1() const {
    return itsANGELS_1;
}

void Obstacle::setItsANGELS_1(ANGELS* p_ANGELS) {
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

ANGELS* Obstacle::getItsANGELS_2() const {
    return itsANGELS_2;
}

void Obstacle::setItsANGELS_2(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsObstacle(this);
        }
    _setItsANGELS_2(p_ANGELS);
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
            Obstacle* p_Obstacle = itsANGELS_2->getItsObstacle();
            if(p_Obstacle != NULL)
                {
                    itsANGELS_2->__setItsObstacle(NULL);
                }
            itsANGELS_2 = NULL;
        }
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

void Obstacle::__setItsANGELS_2(ANGELS* p_ANGELS) {
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

void Obstacle::_setItsANGELS_2(ANGELS* p_ANGELS) {
    if(itsANGELS_2 != NULL)
        {
            itsANGELS_2->__setItsObstacle(NULL);
        }
    __setItsANGELS_2(p_ANGELS);
}

void Obstacle::_clearItsANGELS_2() {
    NOTIFY_RELATION_CLEARED("itsANGELS_2");
    itsANGELS_2 = NULL;
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
}
//#]

IMPLEMENT_META_P(Obstacle, ANGELSPkg_ActorPkg, ANGELSPkg::ActorPkg, false, OMAnimatedObstacle)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\Obstacle.cpp
*********************************************************************/

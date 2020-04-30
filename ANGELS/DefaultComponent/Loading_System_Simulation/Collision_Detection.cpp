/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Collision_Detection
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Collision_Detection.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Collision_Detection.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsObstacle
#include "Obstacle.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ObstacleDetectionPkg_Collision_Detection_Collision_Detection_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ObstacleDetectionPkg

//## class Collision_Detection
Collision_Detection::Collision_Detection() {
    NOTIFY_CONSTRUCTOR(Collision_Detection, Collision_Detection(), 0, UseCaseAnalysisPkg_ANGELSPkg_ObstacleDetectionPkg_Collision_Detection_Collision_Detection_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsObstacle = NULL;
}

Collision_Detection::~Collision_Detection() {
    NOTIFY_DESTRUCTOR(~Collision_Detection, true);
    cleanUpRelations();
}

ANGELS* Collision_Detection::getItsANGELS() const {
    return itsANGELS;
}

void Collision_Detection::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsCollision_Detection(this);
        }
    _setItsANGELS(p_ANGELS);
}

ANGELS* Collision_Detection::getItsANGELS_1() const {
    return itsANGELS_1;
}

void Collision_Detection::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsCollision_Detection_1(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

Obstacle* Collision_Detection::getItsObstacle() const {
    return itsObstacle;
}

void Collision_Detection::setItsObstacle(Obstacle* p_Obstacle) {
    if(p_Obstacle != NULL)
        {
            p_Obstacle->_setItsCollision_Detection_1(this);
        }
    _setItsObstacle(p_Obstacle);
}

void Collision_Detection::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Collision_Detection* p_Collision_Detection = itsANGELS->getItsCollision_Detection();
            if(p_Collision_Detection != NULL)
                {
                    itsANGELS->__setItsCollision_Detection(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            Collision_Detection* p_Collision_Detection = itsANGELS_1->getItsCollision_Detection_1();
            if(p_Collision_Detection != NULL)
                {
                    itsANGELS_1->__setItsCollision_Detection_1(NULL);
                }
            itsANGELS_1 = NULL;
        }
    if(itsObstacle != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsObstacle");
            Collision_Detection* p_Collision_Detection = itsObstacle->getItsCollision_Detection_1();
            if(p_Collision_Detection != NULL)
                {
                    itsObstacle->__setItsCollision_Detection_1(NULL);
                }
            itsObstacle = NULL;
        }
}

void Collision_Detection::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Collision_Detection::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsCollision_Detection(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Collision_Detection::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void Collision_Detection::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void Collision_Detection::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsCollision_Detection_1(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void Collision_Detection::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

void Collision_Detection::__setItsObstacle(Obstacle* p_Obstacle) {
    itsObstacle = p_Obstacle;
    if(p_Obstacle != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsObstacle", p_Obstacle, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsObstacle");
        }
}

void Collision_Detection::_setItsObstacle(Obstacle* p_Obstacle) {
    if(itsObstacle != NULL)
        {
            itsObstacle->__setItsCollision_Detection_1(NULL);
        }
    __setItsObstacle(p_Obstacle);
}

void Collision_Detection::_clearItsObstacle() {
    NOTIFY_RELATION_CLEARED("itsObstacle");
    itsObstacle = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCollision_Detection::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsObstacle", false, true);
    if(myReal->itsObstacle)
        {
            aomsRelations->ADD_ITEM(myReal->itsObstacle);
        }
}
//#]

IMPLEMENT_META_P(Collision_Detection, UseCaseAnalysisPkg_ANGELSPkg_ObstacleDetectionPkg, UseCaseAnalysisPkg::ANGELSPkg::ObstacleDetectionPkg, false, OMAnimatedCollision_Detection)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Collision_Detection.cpp
*********************************************************************/

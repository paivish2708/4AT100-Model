/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Collision_Detection
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Collision_Detection.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Collision_Detection.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDockingProcess
#include "DockingProcess.h"
//## link itsObstacle
#include "Obstacle.h"
//#[ ignore
#define ANGELSPkg_ObstacleDetectionPkg_Collision_Detection_Collision_Detection_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ObstacleDetectionPkg

//## class Collision_Detection
Collision_Detection::Collision_Detection() {
    NOTIFY_CONSTRUCTOR(Collision_Detection, Collision_Detection(), 0, ANGELSPkg_ObstacleDetectionPkg_Collision_Detection_Collision_Detection_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsDockingProcess = NULL;
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

ANGELS* Collision_Detection::getItsANGELS_1() const {
    return itsANGELS_1;
}

void Collision_Detection::setItsANGELS_1(ANGELS* p_ANGELS) {
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

DockingProcess* Collision_Detection::getItsDockingProcess() const {
    return itsDockingProcess;
}

void Collision_Detection::setItsDockingProcess(DockingProcess* p_DockingProcess) {
    itsDockingProcess = p_DockingProcess;
    if(p_DockingProcess != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDockingProcess", p_DockingProcess, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcess");
        }
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
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            itsANGELS_1 = NULL;
        }
    if(itsDockingProcess != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcess");
            itsDockingProcess = NULL;
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
    aomsRelations->addRelation("itsDockingProcess", false, true);
    if(myReal->itsDockingProcess)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcess);
        }
}
//#]

IMPLEMENT_META_P(Collision_Detection, ANGELSPkg_ObstacleDetectionPkg, ANGELSPkg::ObstacleDetectionPkg, false, OMAnimatedCollision_Detection)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Collision_Detection.cpp
*********************************************************************/

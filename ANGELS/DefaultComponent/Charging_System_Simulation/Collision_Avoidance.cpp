/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Collision_Avoidance
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Collision_Avoidance.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Collision_Avoidance.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDockingProcess
#include "DockingProcess.h"
//#[ ignore
#define ANGELSPkg_ObstacleAvoidancePkg_Collision_Avoidance_Collision_Avoidance_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ObstacleAvoidancePkg

//## class Collision_Avoidance
Collision_Avoidance::Collision_Avoidance() {
    NOTIFY_CONSTRUCTOR(Collision_Avoidance, Collision_Avoidance(), 0, ANGELSPkg_ObstacleAvoidancePkg_Collision_Avoidance_Collision_Avoidance_SERIALIZE);
    itsANGELS = NULL;
    itsDockingProcess = NULL;
}

Collision_Avoidance::~Collision_Avoidance() {
    NOTIFY_DESTRUCTOR(~Collision_Avoidance, true);
    cleanUpRelations();
}

ANGELS* Collision_Avoidance::getItsANGELS() const {
    return itsANGELS;
}

void Collision_Avoidance::setItsANGELS(ANGELS* p_ANGELS) {
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

DockingProcess* Collision_Avoidance::getItsDockingProcess() const {
    return itsDockingProcess;
}

void Collision_Avoidance::setItsDockingProcess(DockingProcess* p_DockingProcess) {
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

void Collision_Avoidance::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsDockingProcess != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcess");
            itsDockingProcess = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCollision_Avoidance::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsDockingProcess", false, true);
    if(myReal->itsDockingProcess)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcess);
        }
}
//#]

IMPLEMENT_META_P(Collision_Avoidance, ANGELSPkg_ObstacleAvoidancePkg, ANGELSPkg::ObstacleAvoidancePkg, false, OMAnimatedCollision_Avoidance)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Collision_Avoidance.cpp
*********************************************************************/

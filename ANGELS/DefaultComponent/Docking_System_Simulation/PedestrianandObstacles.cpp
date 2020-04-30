/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: PedestrianandObstacles
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\PedestrianandObstacles.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PedestrianandObstacles.h"
//## auto_generated
#include "Collision_Detection.h"
//#[ ignore
#define ActorPkg_PedestrianandObstacles_PedestrianandObstacles_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor PedestrianandObstacles
PedestrianandObstacles::PedestrianandObstacles() {
    NOTIFY_CONSTRUCTOR(PedestrianandObstacles, PedestrianandObstacles(), 0, ActorPkg_PedestrianandObstacles_PedestrianandObstacles_SERIALIZE);
}

PedestrianandObstacles::~PedestrianandObstacles() {
    NOTIFY_DESTRUCTOR(~PedestrianandObstacles, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPedestrianandObstacles::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedObstacle::serializeAttributes(aomsAttributes);
}

void OMAnimatedPedestrianandObstacles::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedObstacle::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(PedestrianandObstacles, ActorPkg, false, Obstacle, OMAnimatedObstacle, OMAnimatedPedestrianandObstacles)

OMINIT_SUPERCLASS(Obstacle, OMAnimatedObstacle)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\PedestrianandObstacles.cpp
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: PedestrianandObstacles
//!	Generated Date	: Sun, 3, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\PedestrianandObstacles.h
*********************************************************************/

#ifndef PedestrianandObstacles_H
#define PedestrianandObstacles_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## actor PedestrianandObstacles
#include "Obstacle.h"
//## auto_generated
class Collision_Detection;

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor PedestrianandObstacles
class PedestrianandObstacles : public Obstacle {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPedestrianandObstacles;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PedestrianandObstacles();
    
    //## auto_generated
    ~PedestrianandObstacles();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPedestrianandObstacles : public OMAnimatedObstacle {
    DECLARE_META(PedestrianandObstacles, OMAnimatedPedestrianandObstacles)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\PedestrianandObstacles.h
*********************************************************************/

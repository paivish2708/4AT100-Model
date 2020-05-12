/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: PedestrianandObstacles
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\PedestrianandObstacles.h
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
//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor PedestrianandObstacles
class PedestrianandObstacles {
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
class OMAnimatedPedestrianandObstacles : virtual public AOMInstance {
    DECLARE_META(PedestrianandObstacles, OMAnimatedPedestrianandObstacles)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\PedestrianandObstacles.h
*********************************************************************/

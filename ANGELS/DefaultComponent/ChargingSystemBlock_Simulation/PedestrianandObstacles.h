/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ChargingSystemBlock_Simulation
	Model Element	: PedestrianandObstacles
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\ChargingSystemBlock_Simulation\PedestrianandObstacles.h
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
class ANGELS;

//## auto_generated
class Collision_Detection;

//## auto_generated
class EBS;

//## package ANGELSPkg::ActorPkg

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
    
    ////    Additional operations    ////
    
    //## auto_generated
    EBS* getItsEBS_1() const;
    
    //## auto_generated
    void setItsEBS_1(EBS* p_EBS);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    EBS* itsEBS_1;		//## link itsEBS_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsEBS_1(EBS* p_EBS);
    
    //## auto_generated
    void _setItsEBS_1(EBS* p_EBS);
    
    //## auto_generated
    void _clearItsEBS_1();
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
	File Path	: DefaultComponent\ChargingSystemBlock_Simulation\PedestrianandObstacles.h
*********************************************************************/

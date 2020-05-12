/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Obstacle
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Obstacle.h
*********************************************************************/

#ifndef Obstacle_H
#define Obstacle_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## link itsCollision_Detection_1
class Collision_Detection;

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Obstacle
class Obstacle {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedObstacle;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    //## auto_generated
    Obstacle();
    
    //## auto_generated
    ~Obstacle();
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection_1() const;
    
    //## auto_generated
    void setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    Collision_Detection* itsCollision_Detection_1;		//## link itsCollision_Detection_1

public :

    //## auto_generated
    void __setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _clearItsCollision_Detection_1();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedObstacle : virtual public AOMInstance {
    DECLARE_META(Obstacle, OMAnimatedObstacle)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Obstacle.h
*********************************************************************/

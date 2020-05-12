/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Obstacle
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Obstacle.h
*********************************************************************/

#ifndef Obstacle_H
#define Obstacle_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsCollision_Detection_1
class Collision_Detection;

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Obstacle
class Obstacle {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Obstacle();
    
    //## auto_generated
    ~Obstacle();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection_1() const;
    
    //## auto_generated
    void setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Collision_Detection* itsCollision_Detection_1;		//## link itsCollision_Detection_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _clearItsCollision_Detection_1();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Obstacle.h
*********************************************************************/

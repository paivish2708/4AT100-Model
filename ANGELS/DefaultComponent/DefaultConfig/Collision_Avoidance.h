/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Collision_Avoidance
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\DefaultConfig\Collision_Avoidance.h
*********************************************************************/

#ifndef Collision_Avoidance_H
#define Collision_Avoidance_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsCollision_Detection
class Collision_Detection;

//## package UseCaseAnalysisPkg::ANGELSPkg::ObstacleAvoidancePkg

//## class Collision_Avoidance
class Collision_Avoidance {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Collision_Avoidance();
    
    //## auto_generated
    ~Collision_Avoidance();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection() const;
    
    //## auto_generated
    void setItsCollision_Detection(Collision_Detection* p_Collision_Detection);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Collision_Detection* itsCollision_Detection;		//## link itsCollision_Detection
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _clearItsCollision_Detection();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Collision_Avoidance.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Obstacle
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Obstacle.h
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
//## link itsANGELS
class ANGELS;

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
    
    //## auto_generated
    Obstacle();
    
    //## auto_generated
    ~Obstacle();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    ANGELS* getItsANGELS_1() const;
    
    //## auto_generated
    void setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection_1() const;
    
    //## auto_generated
    void setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    Collision_Detection* itsCollision_Detection_1;		//## link itsCollision_Detection_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
    
    //## auto_generated
    void __setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_1();
    
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
	File Path	: DefaultComponent\Charging_System_Simulation\Obstacle.h
*********************************************************************/

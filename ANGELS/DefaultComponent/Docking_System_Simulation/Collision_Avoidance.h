/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Collision_Avoidance
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Collision_Avoidance.h
*********************************************************************/

#ifndef Collision_Avoidance_H
#define Collision_Avoidance_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsCollision_Detection
class Collision_Detection;

//## package Default

//## class Collision_Avoidance
class Collision_Avoidance {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCollision_Avoidance;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCollision_Avoidance : virtual public AOMInstance {
    DECLARE_META(Collision_Avoidance, OMAnimatedCollision_Avoidance)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Collision_Avoidance.h
*********************************************************************/
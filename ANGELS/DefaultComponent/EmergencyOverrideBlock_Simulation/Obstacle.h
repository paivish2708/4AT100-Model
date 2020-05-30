/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: Obstacle
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\Obstacle.h
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
//## actor Obstacle
#include "Collision_Detection.h"
//## auto_generated
class ANGELS;

//## auto_generated
class EmergencyOverrideBlock;

//## package ANGELSPkg::ActorPkg

//## actor Obstacle
class Obstacle : public Collision_Detection {
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
    ANGELS* getItsANGELS_2() const;
    
    //## auto_generated
    void setItsANGELS_2(ANGELS* p_ANGELS);
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection_1() const;
    
    //## auto_generated
    void setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    EmergencyOverrideBlock* getItsEmergencyOverrideBlock() const;
    
    //## auto_generated
    void setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    ANGELS* itsANGELS_2;		//## link itsANGELS_2
    
    Collision_Detection* itsCollision_Detection_1;		//## link itsCollision_Detection_1
    
    EmergencyOverrideBlock* itsEmergencyOverrideBlock;		//## link itsEmergencyOverrideBlock
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS_2(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_2(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_2();
    
    //## auto_generated
    void __setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock);
    
    //## auto_generated
    void _setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock);
    
    //## auto_generated
    void _clearItsEmergencyOverrideBlock();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedObstacle : public OMAnimatedCollision_Detection {
    DECLARE_META(Obstacle, OMAnimatedObstacle)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\Obstacle.h
*********************************************************************/

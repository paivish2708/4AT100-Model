/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: Collision_Avoidance
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\Collision_Avoidance.h
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
#include "ObstacleAvoidancePkg.h"
//## link itsANGELS
class ANGELS;

//## link itsDockingProcessBlock
class DockingProcessBlock;

//## link itsEmergencyOverrideBlock
class EmergencyOverrideBlock;

//## package ANGELSPkg::ObstacleAvoidancePkg

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
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    DockingProcessBlock* getItsDockingProcessBlock() const;
    
    //## auto_generated
    void setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    EmergencyOverrideBlock* getItsEmergencyOverrideBlock() const;
    
    //## auto_generated
    void setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    DockingProcessBlock* itsDockingProcessBlock;		//## link itsDockingProcessBlock
    
    EmergencyOverrideBlock* itsEmergencyOverrideBlock;		//## link itsEmergencyOverrideBlock
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock);
    
    //## auto_generated
    void _setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock);
    
    //## auto_generated
    void _clearItsEmergencyOverrideBlock();
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
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\Collision_Avoidance.h
*********************************************************************/

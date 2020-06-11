/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Collision_Avoidance
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Collision_Avoidance.h
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

//## link itsEBS
class EBS;

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
    EBS* getItsEBS() const;
    
    //## auto_generated
    void setItsEBS(EBS* p_EBS);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    DockingProcessBlock* itsDockingProcessBlock;		//## link itsDockingProcessBlock
    
    EBS* itsEBS;		//## link itsEBS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsEBS(EBS* p_EBS);
    
    //## auto_generated
    void _setItsEBS(EBS* p_EBS);
    
    //## auto_generated
    void _clearItsEBS();
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
	File Path	: DefaultComponent\Loading_System_Simulation\Collision_Avoidance.h
*********************************************************************/

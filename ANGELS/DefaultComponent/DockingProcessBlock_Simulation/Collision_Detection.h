/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcessBlock_Simulation
	Model Element	: Collision_Detection
//!	Generated Date	: Thu, 21, May 2020  
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\Collision_Detection.h
*********************************************************************/

#ifndef Collision_Detection_H
#define Collision_Detection_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ObstacleDetectionPkg.h"
//## link itsANGELS
class ANGELS;

//## package ANGELSPkg::ObstacleDetectionPkg

//## class Collision_Detection
class Collision_Detection {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCollision_Detection;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Collision_Detection();
    
    //## auto_generated
    ~Collision_Detection();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCollision_Detection : virtual public AOMInstance {
    DECLARE_META(Collision_Detection, OMAnimatedCollision_Detection)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\Collision_Detection.h
*********************************************************************/

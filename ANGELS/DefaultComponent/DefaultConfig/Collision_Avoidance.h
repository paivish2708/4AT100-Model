/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Collision_Avoidance
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Collision_Avoidance.h
*********************************************************************/

#ifndef Collision_Avoidance_H
#define Collision_Avoidance_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsANGELS
class ANGELS;

//## link itsDocking_System
class Docking_System;

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
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    Docking_System* getItsDocking_System() const;
    
    //## auto_generated
    void setItsDocking_System(Docking_System* p_Docking_System);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    Docking_System* itsDocking_System;		//## link itsDocking_System
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
    
    //## auto_generated
    void __setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Collision_Avoidance.h
*********************************************************************/

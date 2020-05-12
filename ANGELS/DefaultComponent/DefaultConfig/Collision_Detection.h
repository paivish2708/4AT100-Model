/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Collision_Detection
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Collision_Detection.h
*********************************************************************/

#ifndef Collision_Detection_H
#define Collision_Detection_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsANGELS
class ANGELS;

//## link itsDocking_System
class Docking_System;

//## link itsObstacle
class Obstacle;

//## package UseCaseAnalysisPkg::ANGELSPkg::ObstacleDetectionPkg

//## class Collision_Detection
class Collision_Detection {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Collision_Detection();
    
    //## auto_generated
    ~Collision_Detection();
    
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
    Docking_System* getItsDocking_System() const;
    
    //## auto_generated
    void setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    Obstacle* getItsObstacle() const;
    
    //## auto_generated
    void setItsObstacle(Obstacle* p_Obstacle);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    Docking_System* itsDocking_System;		//## link itsDocking_System
    
    Obstacle* itsObstacle;		//## link itsObstacle
    
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
    
    //## auto_generated
    void __setItsObstacle(Obstacle* p_Obstacle);
    
    //## auto_generated
    void _setItsObstacle(Obstacle* p_Obstacle);
    
    //## auto_generated
    void _clearItsObstacle();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Collision_Detection.h
*********************************************************************/

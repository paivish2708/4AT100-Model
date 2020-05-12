/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Driver
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Driver.h
*********************************************************************/

#ifndef Driver_H
#define Driver_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## actor Driver
#include "Truck.h"
//## auto_generated
class ANGELS;

//## auto_generated
class Docking_System;

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Driver
class Driver : public Truck {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Driver();
    
    //## auto_generated
    ~Driver();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Truck* getItsTruck_4() const;
    
    //## auto_generated
    void setItsTruck_4(Truck* p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Truck* itsTruck_4;		//## link itsTruck_4
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTruck_4(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck_4(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck_4();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Driver.h
*********************************************************************/

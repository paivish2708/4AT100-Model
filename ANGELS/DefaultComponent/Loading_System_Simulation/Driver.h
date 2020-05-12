/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Driver
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Driver.h
*********************************************************************/

#ifndef Driver_H
#define Driver_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## actor Driver
#include "Truck.h"
//## auto_generated
class ANGELS;

//## auto_generated
class Docking_System;

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Driver
class Driver : public Truck {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDriver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    //## auto_generated
    Driver();
    
    //## auto_generated
    ~Driver();
    
    //## auto_generated
    Truck* getItsTruck_4() const;
    
    //## auto_generated
    void setItsTruck_4(Truck* p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    Truck* itsTruck_4;		//## link itsTruck_4

public :

    //## auto_generated
    void __setItsTruck_4(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck_4(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck_4();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDriver : public OMAnimatedTruck {
    DECLARE_META(Driver, OMAnimatedDriver)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Driver.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Driver
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Driver.h
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

//## package ANGELSPkg::ActorPkg

//## actor Driver
class Driver : public Truck {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDriver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Driver();
    
    //## auto_generated
    ~Driver();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS_1() const;
    
    //## auto_generated
    void setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    ANGELS* getItsANGELS_3() const;
    
    //## auto_generated
    void setItsANGELS_3(ANGELS* p_ANGELS);
    
    //## auto_generated
    Truck* getItsTruck_4() const;
    
    //## auto_generated
    void setItsTruck_4(Truck* p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    ANGELS* itsANGELS_3;		//## link itsANGELS_3
    
    Truck* itsTruck_4;		//## link itsTruck_4
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS_3(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_3(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_3();
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
	File Path	: DefaultComponent\Charging_System_Simulation\Driver.h
*********************************************************************/

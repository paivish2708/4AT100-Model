/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Driver
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Driver.h
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
//## link itsTruck
class Truck;

//## package ActorPkg

//## actor Driver
class Driver {
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
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    Truck* getItsTruck_1() const;
    
    //## auto_generated
    void setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    Truck* getItsTruck_2() const;
    
    //## auto_generated
    void setItsTruck_2(Truck* p_Truck);
    
    //## auto_generated
    Truck* getItsTruck_3() const;
    
    //## auto_generated
    void setItsTruck_3(Truck* p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Truck* itsTruck;		//## link itsTruck
    
    Truck* itsTruck_1;		//## link itsTruck_1
    
    Truck* itsTruck_2;		//## link itsTruck_2
    
    Truck* itsTruck_3;		//## link itsTruck_3
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck();
    
    //## auto_generated
    void __setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck_1();
    
    //## auto_generated
    void __setItsTruck_2(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck_2(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck_2();
    
    //## auto_generated
    void __setItsTruck_3(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck_3(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck_3();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDriver : virtual public AOMInstance {
    DECLARE_META(Driver, OMAnimatedDriver)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Driver.h
*********************************************************************/

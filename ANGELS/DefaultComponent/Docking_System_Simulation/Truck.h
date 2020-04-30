/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Truck
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Truck.h
*********************************************************************/

#ifndef Truck_H
#define Truck_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsDCOperator
class DCOperator;

//## link itsDocking_System
class Docking_System;

//## link itsDriver
class Driver;

//## package Default

//## class Truck
class Truck {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTruck;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Truck();
    
    //## auto_generated
    ~Truck();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    Docking_System* getItsDocking_System() const;
    
    //## auto_generated
    void setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    Driver* getItsDriver() const;
    
    //## auto_generated
    void setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    Driver* getItsDriver_1() const;
    
    //## auto_generated
    void setItsDriver_1(Driver* p_Driver);
    
    //## auto_generated
    Driver* getItsDriver_2() const;
    
    //## auto_generated
    void setItsDriver_2(Driver* p_Driver);
    
    //## auto_generated
    Driver* getItsDriver_3() const;
    
    //## auto_generated
    void setItsDriver_3(Driver* p_Driver);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Docking_System* itsDocking_System;		//## link itsDocking_System
    
    Driver* itsDriver;		//## link itsDriver
    
    Driver* itsDriver_1;		//## link itsDriver_1
    
    Driver* itsDriver_2;		//## link itsDriver_2
    
    Driver* itsDriver_3;		//## link itsDriver_3
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator();
    
    //## auto_generated
    void __setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System();
    
    //## auto_generated
    void __setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver();
    
    //## auto_generated
    void __setItsDriver_1(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver_1(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver_1();
    
    //## auto_generated
    void __setItsDriver_2(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver_2(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver_2();
    
    //## auto_generated
    void __setItsDriver_3(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver_3(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver_3();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTruck : virtual public AOMInstance {
    DECLARE_META(Truck, OMAnimatedTruck)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Truck.h
*********************************************************************/

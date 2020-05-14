/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Truck
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Truck.h
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
#include "TruckPkg.h"
//## link itsANGELS
class ANGELS;

//## link itsDocking_Process
class Docking_Process;

//## link itsDriver
class Driver;

//## package UseCaseAnalysisPkg::ANGELSPkg::TruckPkg

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
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    ANGELS* getItsANGELS_1() const;
    
    //## auto_generated
    void setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    Docking_Process* getItsDocking_Process() const;
    
    //## auto_generated
    void setItsDocking_Process(Docking_Process* p_Docking_Process);
    
    //## auto_generated
    Driver* getItsDriver() const;
    
    //## auto_generated
    void setItsDriver(Driver* p_Driver);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    Docking_Process* itsDocking_Process;		//## link itsDocking_Process
    
    Driver* itsDriver;		//## link itsDriver
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
    
    //## auto_generated
    void __setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_1();
    
    //## auto_generated
    void __setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver();
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
	File Path	: DefaultComponent\Charging_System_Simulation\Truck.h
*********************************************************************/

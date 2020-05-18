/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ParkingSystemBlock_Simulation
	Model Element	: Truck
//!	Generated Date	: Mon, 18, May 2020  
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\Truck.h
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

//## package ANGELSPkg::TruckPkg

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
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\Truck.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Truck1
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Truck1.h
*********************************************************************/

#ifndef Truck1_H
#define Truck1_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ANGELSPkg.h"
//## link itsANGELS
class ANGELS;

//## package UseCaseAnalysisPkg::ANGELSPkg

//## class Truck1
class Truck1 {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTruck1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Truck1();
    
    //## auto_generated
    ~Truck1();
    
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
class OMAnimatedTruck1 : virtual public AOMInstance {
    DECLARE_META(Truck1, OMAnimatedTruck1)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Truck1.h
*********************************************************************/

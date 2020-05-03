/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: DockingSystemPkg
//!	Generated Date	: Sun, 3, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\DockingSystemPkg.h
*********************************************************************/

#ifndef DockingSystemPkg_H
#define DockingSystemPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include "ANGELSPkg.h"
//## auto_generated
class Docking_System;

//#[ ignore
#define StartDockingProcedure_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 18201

#define ParkingSpotInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 18202

#define BeginMovement_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 18203

#define DCManagerInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 18204
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg



//## event StartDockingProcedure()
class StartDockingProcedure : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStartDockingProcedure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StartDockingProcedure();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStartDockingProcedure : virtual public AOMEvent {
    DECLARE_META_EVENT(StartDockingProcedure)
};
//#]
#endif // _OMINSTRUMENT

//## event ParkingSpotInput(double)
class ParkingSpotInput : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedParkingSpotInput;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ParkingSpotInput(double p_Parkingspot = 1);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    double Parkingspot;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedParkingSpotInput : virtual public AOMEvent {
    DECLARE_META_EVENT(ParkingSpotInput)
};
//#]
#endif // _OMINSTRUMENT

//## event BeginMovement()
class BeginMovement : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBeginMovement;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    BeginMovement();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBeginMovement : virtual public AOMEvent {
    DECLARE_META_EVENT(BeginMovement)
};
//#]
#endif // _OMINSTRUMENT

//## event DCManagerInput()
class DCManagerInput : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCManagerInput;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCManagerInput();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCManagerInput : virtual public AOMEvent {
    DECLARE_META_EVENT(DCManagerInput)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\DockingSystemPkg.h
*********************************************************************/

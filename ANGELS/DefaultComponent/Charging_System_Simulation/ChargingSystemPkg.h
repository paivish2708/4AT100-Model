/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: ChargingSystemPkg
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\ChargingSystemPkg.h
*********************************************************************/

#ifndef ChargingSystemPkg_H
#define ChargingSystemPkg_H

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
class Charging_System;

//#[ ignore
#define Beginthecharging_ChargingSystemPkg_ANGELSPkg_id 7401

#define StartTheCharging_ChargingSystemPkg_ANGELSPkg_id 7402

#define InitiateChargingProcess_ChargingSystemPkg_ANGELSPkg_id 7403

#define EndCharging_ChargingSystemPkg_ANGELSPkg_id 7404
//#]

//## package ANGELSPkg::ChargingSystemPkg



//## event Beginthecharging()
class Beginthecharging : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBeginthecharging;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Beginthecharging();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBeginthecharging : virtual public AOMEvent {
    DECLARE_META_EVENT(Beginthecharging)
};
//#]
#endif // _OMINSTRUMENT

//## event StartTheCharging()
class StartTheCharging : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStartTheCharging;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StartTheCharging();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStartTheCharging : virtual public AOMEvent {
    DECLARE_META_EVENT(StartTheCharging)
};
//#]
#endif // _OMINSTRUMENT

//## event InitiateChargingProcess()
class InitiateChargingProcess : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedInitiateChargingProcess;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    InitiateChargingProcess();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedInitiateChargingProcess : virtual public AOMEvent {
    DECLARE_META_EVENT(InitiateChargingProcess)
};
//#]
#endif // _OMINSTRUMENT

//## event EndCharging()
class EndCharging : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEndCharging;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EndCharging();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEndCharging : virtual public AOMEvent {
    DECLARE_META_EVENT(EndCharging)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\ChargingSystemPkg.h
*********************************************************************/

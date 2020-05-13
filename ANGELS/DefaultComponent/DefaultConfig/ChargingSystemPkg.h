/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ChargingSystemPkg
//!	Generated Date	: Wed, 13, May 2020  
	File Path	: DefaultComponent\DefaultConfig\ChargingSystemPkg.h
*********************************************************************/

#ifndef ChargingSystemPkg_H
#define ChargingSystemPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Charging_System;

//#[ ignore
#define Beginthecharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 7401

#define StartTheCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 7402

#define InitiateChargingProcess_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 7403

#define EndCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 7404
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg



//## event Beginthecharging()
class Beginthecharging : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Beginthecharging();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event StartTheCharging()
class StartTheCharging : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    StartTheCharging();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event InitiateChargingProcess()
class InitiateChargingProcess : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    InitiateChargingProcess();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event EndCharging()
class EndCharging : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EndCharging();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ChargingSystemPkg.h
*********************************************************************/

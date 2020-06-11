/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: ParkingProcessPkg
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\ParkingProcessPkg.h
*********************************************************************/

#ifndef ParkingProcessPkg_H
#define ParkingProcessPkg_H

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
class ParkingSystemBlock;

//#[ ignore
#define StartParking_ParkingProcessPkg_ANGELSPkg_id 9001

#define InitiateParkingProcess_ParkingProcessPkg_ANGELSPkg_id 9002

#define EndParking_ParkingProcessPkg_ANGELSPkg_id 9003

#define ChangeMode_ParkingProcessPkg_ANGELSPkg_id 9004
//#]

//## package ANGELSPkg::ParkingProcessPkg



//## event StartParking()
class StartParking : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStartParking;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StartParking();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStartParking : virtual public AOMEvent {
    DECLARE_META_EVENT(StartParking)
};
//#]
#endif // _OMINSTRUMENT

//## event InitiateParkingProcess()
class InitiateParkingProcess : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedInitiateParkingProcess;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    InitiateParkingProcess();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedInitiateParkingProcess : virtual public AOMEvent {
    DECLARE_META_EVENT(InitiateParkingProcess)
};
//#]
#endif // _OMINSTRUMENT

//## event EndParking()
class EndParking : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEndParking;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EndParking();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEndParking : virtual public AOMEvent {
    DECLARE_META_EVENT(EndParking)
};
//#]
#endif // _OMINSTRUMENT

//## event ChangeMode()
class ChangeMode : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedChangeMode;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ChangeMode();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedChangeMode : virtual public AOMEvent {
    DECLARE_META_EVENT(ChangeMode)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\ParkingProcessPkg.h
*********************************************************************/

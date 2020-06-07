/*********************************************************************
	Rhapsody	: 8.4 
	Login		: kevin
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: LoadingProcessPkg
//!	Generated Date	: Fri, 29, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\LoadingProcessPkg.h
*********************************************************************/

#ifndef LoadingProcessPkg_H
#define LoadingProcessPkg_H

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
class LoadingProcessBlock;

//#[ ignore
#define AlertDCManager_LoadingProcessPkg_ANGELSPkg_id 14201

#define CloseDoors_LoadingProcessPkg_ANGELSPkg_id 14202

#define OpenDoors_LoadingProcessPkg_ANGELSPkg_id 14203

#define StartLoadingProcedure_LoadingProcessPkg_ANGELSPkg_id 14204

#define StopLoadingProc_LoadingProcessPkg_ANGELSPkg_id 14205

#define DoorStatus_LoadingProcessPkg_ANGELSPkg_id 14206

#define LoadingProcess_LoadingProcessPkg_ANGELSPkg_id 14207

#define ReturnToDockedState_LoadingProcessPkg_ANGELSPkg_id 14208
//#]

//## package ANGELSPkg::LoadingProcessPkg



//## event AlertDCManager()
class AlertDCManager : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAlertDCManager;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AlertDCManager();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAlertDCManager : virtual public AOMEvent {
    DECLARE_META_EVENT(AlertDCManager)
};
//#]
#endif // _OMINSTRUMENT

//## event CloseDoors(double)
class CloseDoors : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCloseDoors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CloseDoors(double p_doorstate = 1);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    double doorstate;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCloseDoors : virtual public AOMEvent {
    DECLARE_META_EVENT(CloseDoors)
};
//#]
#endif // _OMINSTRUMENT

//## event OpenDoors()
class OpenDoors : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOpenDoors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    OpenDoors();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOpenDoors : virtual public AOMEvent {
    DECLARE_META_EVENT(OpenDoors)
};
//#]
#endif // _OMINSTRUMENT

//## event StartLoadingProcedure()
class StartLoadingProcedure : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStartLoadingProcedure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StartLoadingProcedure();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStartLoadingProcedure : virtual public AOMEvent {
    DECLARE_META_EVENT(StartLoadingProcedure)
};
//#]
#endif // _OMINSTRUMENT

//## event StopLoadingProc()
class StopLoadingProc : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStopLoadingProc;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StopLoadingProc();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStopLoadingProc : virtual public AOMEvent {
    DECLARE_META_EVENT(StopLoadingProc)
};
//#]
#endif // _OMINSTRUMENT

//## event DoorStatus()
class DoorStatus : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDoorStatus;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DoorStatus();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDoorStatus : virtual public AOMEvent {
    DECLARE_META_EVENT(DoorStatus)
};
//#]
#endif // _OMINSTRUMENT

//## event LoadingProcess()
class LoadingProcess : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLoadingProcess;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    LoadingProcess();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLoadingProcess : virtual public AOMEvent {
    DECLARE_META_EVENT(LoadingProcess)
};
//#]
#endif // _OMINSTRUMENT

//## event ReturnToDockedState()
class ReturnToDockedState : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedReturnToDockedState;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ReturnToDockedState();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedReturnToDockedState : virtual public AOMEvent {
    DECLARE_META_EVENT(ReturnToDockedState)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\LoadingProcessPkg.h
*********************************************************************/

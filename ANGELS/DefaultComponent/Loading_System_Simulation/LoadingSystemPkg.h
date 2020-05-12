/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: LoadingSystemPkg
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\LoadingSystemPkg.h
*********************************************************************/

#ifndef LoadingSystemPkg_H
#define LoadingSystemPkg_H

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
class Loading_System;

//#[ ignore
#define AlertDCManager_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14201

#define CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14202

#define OpenDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14203

#define StartLoadingProcedure_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14204

#define StopLoadingProc_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14205

#define DoorStatus_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14206

#define LoadingProcess_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14207

#define ReturnToDockedState_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14208
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg



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
	File Path	: DefaultComponent\Loading_System_Simulation\LoadingSystemPkg.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: DockingSystemPkg
//!	Generated Date	: Wed, 29, Apr 2020  
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
#include "UseCaseAnalysisPkg.h"
//## auto_generated
class Docking_System;

//#[ ignore
#define StartDockingProcedure_DockingSystemPkg_UseCaseAnalysisPkg_id 26001

#define OpenDoors_DockingSystemPkg_UseCaseAnalysisPkg_id 26002

#define CloseDoors_DockingSystemPkg_UseCaseAnalysisPkg_id 26003

#define AlertDCManager_DockingSystemPkg_UseCaseAnalysisPkg_id 26004

#define StopLoadingProc_DockingSystemPkg_UseCaseAnalysisPkg_id 26005
//#]

//## package UseCaseAnalysisPkg::DockingSystemPkg



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

//## event OpenDoors(RhpBoolean)
class OpenDoors : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOpenDoors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    OpenDoors(RhpBoolean p_CheckDoorStatus = 1);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    RhpBoolean CheckDoorStatus;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOpenDoors : virtual public AOMEvent {
    DECLARE_META_EVENT(OpenDoors)
};
//#]
#endif // _OMINSTRUMENT

//## event CloseDoors()
class CloseDoors : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCloseDoors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CloseDoors();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCloseDoors : virtual public AOMEvent {
    DECLARE_META_EVENT(CloseDoors)
};
//#]
#endif // _OMINSTRUMENT

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\DockingSystemPkg.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LoadingSystemPkg
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\DefaultConfig\LoadingSystemPkg.h
*********************************************************************/

#ifndef LoadingSystemPkg_H
#define LoadingSystemPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Loading_System;

//#[ ignore
#define AlertDCManager_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14201

#define CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14202

#define OpenDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14203

#define StartDockingProcedure_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14204

#define StopLoadingProc_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14205
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg



//## event AlertDCManager()
class AlertDCManager : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    AlertDCManager();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event CloseDoors()
class CloseDoors : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    CloseDoors();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event OpenDoors(RhpBoolean)
class OpenDoors : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    OpenDoors(RhpBoolean p_CheckDoorStatus = 1);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    RhpBoolean CheckDoorStatus;		//## auto_generated
};

//## event StartDockingProcedure()
class StartDockingProcedure : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    StartDockingProcedure();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event StopLoadingProc()
class StopLoadingProc : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    StopLoadingProc();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LoadingSystemPkg.h
*********************************************************************/

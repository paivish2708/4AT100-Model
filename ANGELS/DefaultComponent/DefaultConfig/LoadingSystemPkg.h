/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LoadingSystemPkg
//!	Generated Date	: Tue, 12, May 2020  
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

#define StartLoadingProcedure_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14204

#define StopLoadingProc_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14205

#define DoorStatus_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14206

#define LoadingProcess_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14207

#define ReturnToDockedState_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 14208
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

//## event CloseDoors(double)
class CloseDoors : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    CloseDoors(double p_doorstate = 1);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    double doorstate;		//## auto_generated
};

//## event OpenDoors()
class OpenDoors : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    OpenDoors();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event StartLoadingProcedure()
class StartLoadingProcedure : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    StartLoadingProcedure();
    
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

//## event DoorStatus()
class DoorStatus : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DoorStatus();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event LoadingProcess()
class LoadingProcess : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    LoadingProcess();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event ReturnToDockedState()
class ReturnToDockedState : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ReturnToDockedState();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LoadingSystemPkg.h
*********************************************************************/

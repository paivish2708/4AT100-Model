/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DockingSystemPkg
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\DefaultConfig\DockingSystemPkg.h
*********************************************************************/

#ifndef DockingSystemPkg_H
#define DockingSystemPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
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
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    StartDockingProcedure();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event OpenDoors(int)
class OpenDoors : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    OpenDoors(int p_argument_0);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    int argument_0;		//## auto_generated
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
	File Path	: DefaultComponent\DefaultConfig\DockingSystemPkg.h
*********************************************************************/

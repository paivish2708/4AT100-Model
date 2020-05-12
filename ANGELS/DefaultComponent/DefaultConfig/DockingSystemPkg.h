/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DockingSystemPkg
//!	Generated Date	: Tue, 12, May 2020  
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
#define StartDockingProcedure_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 18201

#define BeginTruckMovement_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 18202

#define DCManagerInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 18203

#define Autonomousmode_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 18204

#define EndDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 18205

#define TruckDocking_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 18206

#define DockInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id 18207
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg



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

//## event BeginTruckMovement()
class BeginTruckMovement : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    BeginTruckMovement();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event DCManagerInput()
class DCManagerInput : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DCManagerInput();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event Autonomousmode()
class Autonomousmode : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Autonomousmode();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event EndDocking()
class EndDocking : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EndDocking();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event TruckDocking()
class TruckDocking : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    TruckDocking();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event DockInput(double)
class DockInput : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DockInput(double p_DS);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    double DS;		//## auto_generated
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DockingSystemPkg.h
*********************************************************************/

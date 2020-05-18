/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: DockingProcessPkg
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\DockingProcessPkg.h
*********************************************************************/

#ifndef DockingProcessPkg_H
#define DockingProcessPkg_H

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
class DockingProcess;

//#[ ignore
#define StartDockingProcedure_DockingProcessPkg_ANGELSPkg_id 18201

#define BeginTruckMovement_DockingProcessPkg_ANGELSPkg_id 18202

#define DCManagerInput_DockingProcessPkg_ANGELSPkg_id 18203

#define Autonomousmode_DockingProcessPkg_ANGELSPkg_id 18204

#define EndDocking_DockingProcessPkg_ANGELSPkg_id 18205

#define TruckDocking_DockingProcessPkg_ANGELSPkg_id 18206

#define DockInput_DockingProcessPkg_ANGELSPkg_id 18207
//#]

//## package ANGELSPkg::DockingProcessPkg



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

//## event BeginTruckMovement()
class BeginTruckMovement : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBeginTruckMovement;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    BeginTruckMovement();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBeginTruckMovement : virtual public AOMEvent {
    DECLARE_META_EVENT(BeginTruckMovement)
};
//#]
#endif // _OMINSTRUMENT

//## event DCManagerInput()
class DCManagerInput : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCManagerInput;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCManagerInput();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCManagerInput : virtual public AOMEvent {
    DECLARE_META_EVENT(DCManagerInput)
};
//#]
#endif // _OMINSTRUMENT

//## event Autonomousmode()
class Autonomousmode : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAutonomousmode;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Autonomousmode();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAutonomousmode : virtual public AOMEvent {
    DECLARE_META_EVENT(Autonomousmode)
};
//#]
#endif // _OMINSTRUMENT

//## event EndDocking()
class EndDocking : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEndDocking;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EndDocking();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEndDocking : virtual public AOMEvent {
    DECLARE_META_EVENT(EndDocking)
};
//#]
#endif // _OMINSTRUMENT

//## event TruckDocking()
class TruckDocking : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTruckDocking;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TruckDocking();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTruckDocking : virtual public AOMEvent {
    DECLARE_META_EVENT(TruckDocking)
};
//#]
#endif // _OMINSTRUMENT

//## event DockInput(double)
class DockInput : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDockInput;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DockInput();
    
    //## auto_generated
    DockInput(double p_DS);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    double DS;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDockInput : virtual public AOMEvent {
    DECLARE_META_EVENT(DockInput)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\DockingProcessPkg.h
*********************************************************************/

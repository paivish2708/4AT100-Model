/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcess_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\DockingProcess_Simulation\DCOperator.h
*********************************************************************/

#ifndef DCOperator_H
#define DCOperator_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## link itsANGELS
class ANGELS;

//## link itsCharging_System
class Charging_System;

//## link itsDockingProcess
class DockingProcess;

//## link itsLoading_Process
class Loading_Process;

//## package ANGELSPkg::ActorPkg

//## actor DCOperator
class DCOperator {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCOperator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCOperator();
    
    //## auto_generated
    ~DCOperator();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    ANGELS* getItsANGELS_1() const;
    
    //## auto_generated
    void setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    Charging_System* getItsCharging_System() const;
    
    //## auto_generated
    void setItsCharging_System(Charging_System* p_Charging_System);
    
    //## auto_generated
    DockingProcess* getItsDockingProcess() const;
    
    //## auto_generated
    void setItsDockingProcess(DockingProcess* p_DockingProcess);
    
    //## auto_generated
    DockingProcess* getItsDockingProcess_1() const;
    
    //## auto_generated
    void setItsDockingProcess_1(DockingProcess* p_DockingProcess);
    
    //## auto_generated
    DockingProcess* getItsDockingProcess_2() const;
    
    //## auto_generated
    void setItsDockingProcess_2(DockingProcess* p_DockingProcess);
    
    //## auto_generated
    Loading_Process* getItsLoading_Process() const;
    
    //## auto_generated
    void setItsLoading_Process(Loading_Process* p_Loading_Process);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    Charging_System* itsCharging_System;		//## link itsCharging_System
    
    DockingProcess* itsDockingProcess;		//## link itsDockingProcess
    
    DockingProcess* itsDockingProcess_1;		//## link itsDockingProcess_1
    
    DockingProcess* itsDockingProcess_2;		//## link itsDockingProcess_2
    
    Loading_Process* itsLoading_Process;		//## link itsLoading_Process
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_1();
    
    //## auto_generated
    void __setItsCharging_System(Charging_System* p_Charging_System);
    
    //## auto_generated
    void _setItsCharging_System(Charging_System* p_Charging_System);
    
    //## auto_generated
    void _clearItsCharging_System();
    
    //## auto_generated
    void __setItsDockingProcess_1(DockingProcess* p_DockingProcess);
    
    //## auto_generated
    void _setItsDockingProcess_1(DockingProcess* p_DockingProcess);
    
    //## auto_generated
    void _clearItsDockingProcess_1();
    
    //## auto_generated
    void __setItsLoading_Process(Loading_Process* p_Loading_Process);
    
    //## auto_generated
    void _setItsLoading_Process(Loading_Process* p_Loading_Process);
    
    //## auto_generated
    void _clearItsLoading_Process();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCOperator : virtual public AOMInstance {
    DECLARE_META(DCOperator, OMAnimatedDCOperator)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DockingProcess_Simulation\DCOperator.h
*********************************************************************/

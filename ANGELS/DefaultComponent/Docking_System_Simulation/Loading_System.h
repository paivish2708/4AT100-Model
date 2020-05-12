/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Loading_System
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Loading_System.h
*********************************************************************/

#ifndef Loading_System_H
#define Loading_System_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "LoadingSystemPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsDocking_System
#include "Docking_System.h"
//## link itsANGELS
class ANGELS;

//## link itsDC
class DC;

//## link itsDCOperator
class DCOperator;

//## package UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg

//## class Loading_System
class Loading_System : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLoading_System;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Loading_System(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Loading_System();
    
    ////    Operations    ////
    
    //## operation LoadingProcess()
    virtual void LoadingProcess();
    
    //## operation OpenDoors(RhpBoolean)
    virtual void OpenDoors(RhpBoolean Doorstate = 1);
    
    //## operation StoptheTruck(double)
    virtual void StoptheTruck(double speed);
    
    ////    Additional operations    ////
    
    //## auto_generated
    RhpBoolean getDoorstatus() const;
    
    //## auto_generated
    void setDoorstatus(RhpBoolean p_Doorstatus);
    
    //## auto_generated
    int getLoadingTime() const;
    
    //## auto_generated
    void setLoadingTime(int p_LoadingTime);
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    DC* getItsDC() const;
    
    //## auto_generated
    void setItsDC(DC* p_DC);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    Docking_System* getItsDocking_System() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    RhpBoolean Doorstatus;		//## attribute Doorstatus
    
    int LoadingTime;		//## attribute LoadingTime
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    DC* itsDC;		//## link itsDC
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Docking_System itsDocking_System;		//## classInstance itsDocking_System
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
    
    //## auto_generated
    void __setItsDC(DC* p_DC);
    
    //## auto_generated
    void _setItsDC(DC* p_DC);
    
    //## auto_generated
    void _clearItsDC();
    
    //## auto_generated
    void __setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator();
    
    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // ReadyForParking:
    //## statechart_method
    inline bool ReadyForParking_IN() const;
    
    // LoadingState:
    //## statechart_method
    inline bool LoadingState_IN() const;
    
    //## statechart_method
    void LoadingState_entDef();
    
    // StartLoading:
    //## statechart_method
    inline bool StartLoading_IN() const;
    
    // LoadedState:
    //## statechart_method
    inline bool LoadedState_IN() const;
    
    // IdleState:
    //## statechart_method
    inline bool IdleState_IN() const;
    
    // DoorsClosed:
    //## statechart_method
    inline bool DoorsClosed_IN() const;
    
    // DockedState:
    //## statechart_method
    inline bool DockedState_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Loading_System_Enum {
        OMNonState = 0,
        ReadyForParking = 1,
        LoadingState = 2,
        StartLoading = 3,
        LoadedState = 4,
        IdleState = 5,
        DoorsClosed = 6,
        DockedState = 7
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int LoadingState_subState;
    
    IOxfTimeout* LoadingState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLoading_System : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Loading_System, OMAnimatedLoading_System)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ReadyForParking_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LoadingState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StartLoading_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LoadedState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void IdleState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DoorsClosed_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DockedState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Loading_System::rootState_IN() const {
    return true;
}

inline bool Loading_System::ReadyForParking_IN() const {
    return rootState_subState == ReadyForParking;
}

inline bool Loading_System::LoadingState_IN() const {
    return rootState_subState == LoadingState;
}

inline bool Loading_System::StartLoading_IN() const {
    return LoadingState_subState == StartLoading;
}

inline bool Loading_System::LoadedState_IN() const {
    return LoadingState_subState == LoadedState;
}

inline bool Loading_System::IdleState_IN() const {
    return rootState_subState == IdleState;
}

inline bool Loading_System::DoorsClosed_IN() const {
    return rootState_subState == DoorsClosed;
}

inline bool Loading_System::DockedState_IN() const {
    return rootState_subState == DockedState;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Loading_System.h
*********************************************************************/

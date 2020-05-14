/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Loading_Process
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Loading_Process.h
*********************************************************************/

#ifndef Loading_Process_H
#define Loading_Process_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "LoadingProcessPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsTruck
#include "Truck.h"
//## link itsANGELS
class ANGELS;

//## link itsDC
class DC;

//## link itsDCOperator
class DCOperator;

//## package UseCaseAnalysisPkg::ANGELSPkg::LoadingProcessPkg

//## class Loading_Process
class Loading_Process : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLoading_Process;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Loading_Process(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Loading_Process();
    
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
    Truck* getItsTruck() const;
    
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
    
    Truck itsTruck;		//## classInstance itsTruck
    
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
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // terminationstate_9:
    //## statechart_method
    inline bool terminationstate_9_IN() const;
    
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
    enum Loading_Process_Enum {
        OMNonState = 0,
        terminationstate_9 = 1,
        ReadyForParking = 2,
        LoadingState = 3,
        StartLoading = 4,
        LoadedState = 5,
        IdleState = 6,
        DoorsClosed = 7,
        DockedState = 8
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int LoadingState_subState;
    
    IOxfTimeout* LoadingState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLoading_Process : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Loading_Process, OMAnimatedLoading_Process)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_9_serializeStates(AOMSState* aomsState) const;
    
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

inline bool Loading_Process::rootState_IN() const {
    return true;
}

inline bool Loading_Process::rootState_isCompleted() {
    return ( IS_IN(terminationstate_9) );
}

inline bool Loading_Process::terminationstate_9_IN() const {
    return rootState_subState == terminationstate_9;
}

inline bool Loading_Process::ReadyForParking_IN() const {
    return rootState_subState == ReadyForParking;
}

inline bool Loading_Process::LoadingState_IN() const {
    return rootState_subState == LoadingState;
}

inline bool Loading_Process::StartLoading_IN() const {
    return LoadingState_subState == StartLoading;
}

inline bool Loading_Process::LoadedState_IN() const {
    return LoadingState_subState == LoadedState;
}

inline bool Loading_Process::IdleState_IN() const {
    return rootState_subState == IdleState;
}

inline bool Loading_Process::DoorsClosed_IN() const {
    return rootState_subState == DoorsClosed;
}

inline bool Loading_Process::DockedState_IN() const {
    return rootState_subState == DockedState;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Loading_Process.h
*********************************************************************/

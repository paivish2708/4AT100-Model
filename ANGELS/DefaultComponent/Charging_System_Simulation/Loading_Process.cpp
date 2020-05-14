/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Loading_Process
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Loading_Process.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Loading_Process.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDC
#include "DC.h"
//## link itsDCOperator
#include "DCOperator.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_LoadingProcessPkg_Loading_Process_Loading_Process_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_ANGELSPkg_LoadingProcessPkg_Loading_Process_LoadingProcess_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_ANGELSPkg_LoadingProcessPkg_Loading_Process_OpenDoors_SERIALIZE aomsmethod->addAttribute("Doorstate", x2String(Doorstate));

#define UseCaseAnalysisPkg_ANGELSPkg_LoadingProcessPkg_Loading_Process_StoptheTruck_SERIALIZE aomsmethod->addAttribute("speed", x2String(speed));
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::LoadingProcessPkg

//## class Loading_Process
Loading_Process::Loading_Process(IOxfActive* theActiveContext) : Doorstatus(0), LoadingTime(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Loading_Process, Loading_Process(), 0, UseCaseAnalysisPkg_ANGELSPkg_LoadingProcessPkg_Loading_Process_Loading_Process_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsANGELS = NULL;
    itsDC = NULL;
    itsDCOperator = NULL;
    initStatechart();
}

Loading_Process::~Loading_Process() {
    NOTIFY_DESTRUCTOR(~Loading_Process, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Loading_Process::LoadingProcess() {
    NOTIFY_OPERATION(LoadingProcess, LoadingProcess(), 0, UseCaseAnalysisPkg_ANGELSPkg_LoadingProcessPkg_Loading_Process_LoadingProcess_SERIALIZE);
    //#[ operation LoadingProcess()
    //#]
}

void Loading_Process::OpenDoors(RhpBoolean Doorstate) {
    NOTIFY_OPERATION(OpenDoors, OpenDoors(RhpBoolean), 1, UseCaseAnalysisPkg_ANGELSPkg_LoadingProcessPkg_Loading_Process_OpenDoors_SERIALIZE);
    //#[ operation OpenDoors(RhpBoolean)
    if (Doorstatus != Doorstate)
    {Doorstatus=1;}
    //#]
}

void Loading_Process::StoptheTruck(double speed) {
    NOTIFY_OPERATION(StoptheTruck, StoptheTruck(double), 1, UseCaseAnalysisPkg_ANGELSPkg_LoadingProcessPkg_Loading_Process_StoptheTruck_SERIALIZE);
    //#[ operation StoptheTruck(double)
    speed = 0;
    double Speed = speed;
    
    //#]
}

RhpBoolean Loading_Process::getDoorstatus() const {
    return Doorstatus;
}

void Loading_Process::setDoorstatus(RhpBoolean p_Doorstatus) {
    Doorstatus = p_Doorstatus;
}

int Loading_Process::getLoadingTime() const {
    return LoadingTime;
}

void Loading_Process::setLoadingTime(int p_LoadingTime) {
    LoadingTime = p_LoadingTime;
}

ANGELS* Loading_Process::getItsANGELS() const {
    return itsANGELS;
}

void Loading_Process::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsLoading_Process_1(this);
        }
    _setItsANGELS(p_ANGELS);
}

DC* Loading_Process::getItsDC() const {
    return itsDC;
}

void Loading_Process::setItsDC(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsLoading_Process(this);
        }
    _setItsDC(p_DC);
}

DCOperator* Loading_Process::getItsDCOperator() const {
    return itsDCOperator;
}

void Loading_Process::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsLoading_Process(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Truck* Loading_Process::getItsTruck() const {
    return (Truck*) &itsTruck;
}

bool Loading_Process::startBehavior() {
    bool done = true;
    done &= OMReactive::startBehavior();
    return done;
}

void Loading_Process::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    LoadingState_subState = OMNonState;
    LoadingState_timeout = NULL;
}

void Loading_Process::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Loading_Process* p_Loading_Process = itsANGELS->getItsLoading_Process_1();
            if(p_Loading_Process != NULL)
                {
                    itsANGELS->__setItsLoading_Process_1(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsDC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC");
            Loading_Process* p_Loading_Process = itsDC->getItsLoading_Process();
            if(p_Loading_Process != NULL)
                {
                    itsDC->__setItsLoading_Process(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            Loading_Process* p_Loading_Process = itsDCOperator->getItsLoading_Process();
            if(p_Loading_Process != NULL)
                {
                    itsDCOperator->__setItsLoading_Process(NULL);
                }
            itsDCOperator = NULL;
        }
}

void Loading_Process::cancelTimeouts() {
    cancel(LoadingState_timeout);
}

bool Loading_Process::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(LoadingState_timeout == arg)
        {
            LoadingState_timeout = NULL;
            res = true;
        }
    return res;
}

void Loading_Process::__setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
        }
}

void Loading_Process::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsLoading_Process_1(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Loading_Process::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void Loading_Process::__setItsDC(DC* p_DC) {
    itsDC = p_DC;
    if(p_DC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDC", p_DC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDC");
        }
}

void Loading_Process::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsLoading_Process(NULL);
        }
    __setItsDC(p_DC);
}

void Loading_Process::_clearItsDC() {
    NOTIFY_RELATION_CLEARED("itsDC");
    itsDC = NULL;
}

void Loading_Process::__setItsDCOperator(DCOperator* p_DCOperator) {
    itsDCOperator = p_DCOperator;
    if(p_DCOperator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCOperator", p_DCOperator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
        }
}

void Loading_Process::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsLoading_Process(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void Loading_Process::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void Loading_Process::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("3");
        NOTIFY_STATE_ENTERED("ROOT.DockedState");
        rootState_subState = DockedState;
        rootState_active = DockedState;
        NOTIFY_TRANSITION_TERMINATED("3");
    }
}

IOxfReactive::TakeEventStatus Loading_Process::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State IdleState
        case IdleState:
        {
            if(IS_EVENT_TYPE_OF(StartLoadingProcedure_LoadingProcessPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.IdleState");
                    //#[ transition 0 
                    OpenDoors(1);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.DoorsClosed");
                    rootState_subState = DoorsClosed;
                    rootState_active = DoorsClosed;
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        // State LoadedState
        case LoadedState:
        {
            if(IS_EVENT_TYPE_OF(ReturnToDockedState_LoadingProcessPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    switch (LoadingState_subState) {
                        // State LoadedState
                        case LoadedState:
                        {
                            NOTIFY_STATE_EXITED("ROOT.LoadingState.LoadedState");
                        }
                        break;
                        // State StartLoading
                        case StartLoading:
                        {
                            cancel(LoadingState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.LoadingState.StartLoading");
                        }
                        break;
                        default:
                            break;
                    }
                    LoadingState_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.LoadingState");
                    NOTIFY_STATE_ENTERED("ROOT.ReadyForParking");
                    pushNullTransition();
                    rootState_subState = ReadyForParking;
                    rootState_active = ReadyForParking;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State StartLoading
        case StartLoading:
        {
            if(IS_EVENT_TYPE_OF(StopLoadingProc_LoadingProcessPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    cancel(LoadingState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.LoadingState.StartLoading");
                    NOTIFY_STATE_ENTERED("ROOT.LoadingState.LoadedState");
                    LoadingState_subState = LoadedState;
                    rootState_active = LoadedState;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == LoadingState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            cancel(LoadingState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.LoadingState.StartLoading");
                            //#[ transition 7 
                            LoadingTime++;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.LoadingState.StartLoading");
                            LoadingState_subState = StartLoading;
                            rootState_active = StartLoading;
                            LoadingState_timeout = scheduleTimeout(100, "ROOT.LoadingState.StartLoading");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State DoorsClosed
        case DoorsClosed:
        {
            if(IS_EVENT_TYPE_OF(LoadingProcess_LoadingProcessPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.DoorsClosed");
                    LoadingState_entDef();
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ReadyForParking
        case ReadyForParking:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ReadyForParking");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_9");
                    rootState_subState = terminationstate_9;
                    rootState_active = terminationstate_9;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DockedState
        case DockedState:
        {
            if(IS_EVENT_TYPE_OF(AlertDCManager_LoadingProcessPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.DockedState");
                    NOTIFY_STATE_ENTERED("ROOT.IdleState");
                    rootState_subState = IdleState;
                    rootState_active = IdleState;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

void Loading_Process::LoadingState_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.LoadingState");
    rootState_subState = LoadingState;
    NOTIFY_TRANSITION_STARTED("6");
    NOTIFY_STATE_ENTERED("ROOT.LoadingState.StartLoading");
    LoadingState_subState = StartLoading;
    rootState_active = StartLoading;
    LoadingState_timeout = scheduleTimeout(100, "ROOT.LoadingState.StartLoading");
    NOTIFY_TRANSITION_TERMINATED("6");
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLoading_Process::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Doorstatus", x2String(myReal->Doorstatus));
    aomsAttributes->addAttribute("LoadingTime", x2String(myReal->LoadingTime));
}

void OMAnimatedLoading_Process::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDC", false, true);
    if(myReal->itsDC)
        {
            aomsRelations->ADD_ITEM(myReal->itsDC);
        }
    aomsRelations->addRelation("itsDCOperator", false, true);
    if(myReal->itsDCOperator)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator);
        }
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsTruck", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTruck);
}

void OMAnimatedLoading_Process::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Loading_Process::IdleState:
        {
            IdleState_serializeStates(aomsState);
        }
        break;
        case Loading_Process::LoadingState:
        {
            LoadingState_serializeStates(aomsState);
        }
        break;
        case Loading_Process::DoorsClosed:
        {
            DoorsClosed_serializeStates(aomsState);
        }
        break;
        case Loading_Process::ReadyForParking:
        {
            ReadyForParking_serializeStates(aomsState);
        }
        break;
        case Loading_Process::DockedState:
        {
            DockedState_serializeStates(aomsState);
        }
        break;
        case Loading_Process::terminationstate_9:
        {
            terminationstate_9_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedLoading_Process::terminationstate_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_9");
}

void OMAnimatedLoading_Process::ReadyForParking_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ReadyForParking");
}

void OMAnimatedLoading_Process::LoadingState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LoadingState");
    switch (myReal->LoadingState_subState) {
        case Loading_Process::LoadedState:
        {
            LoadedState_serializeStates(aomsState);
        }
        break;
        case Loading_Process::StartLoading:
        {
            StartLoading_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedLoading_Process::StartLoading_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LoadingState.StartLoading");
}

void OMAnimatedLoading_Process::LoadedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LoadingState.LoadedState");
}

void OMAnimatedLoading_Process::IdleState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.IdleState");
}

void OMAnimatedLoading_Process::DoorsClosed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DoorsClosed");
}

void OMAnimatedLoading_Process::DockedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DockedState");
}
//#]

IMPLEMENT_REACTIVE_META_P(Loading_Process, UseCaseAnalysisPkg_ANGELSPkg_LoadingProcessPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingProcessPkg, false, OMAnimatedLoading_Process)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Loading_Process.cpp
*********************************************************************/

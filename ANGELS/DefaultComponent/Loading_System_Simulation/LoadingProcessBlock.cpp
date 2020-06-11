/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: LoadingProcessBlock
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\LoadingProcessBlock.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "LoadingProcessBlock.h"
//## event SwitchOffANGELSFunc()
#include "ANGELSPkg.h"
//## link itsChargingSystemBlock
#include "ChargingSystemBlock.h"
//## link itsDC
#include "DC.h"
//## link itsDCOperator
#include "DCOperator.h"
//## link itsLoadingSystemBlock
#include "LoadingSystemBlock.h"
//#[ ignore
#define ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_LoadingProcessBlock_SERIALIZE OM_NO_OP

#define ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_LoadingProcess_SERIALIZE OM_NO_OP

#define ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_OpenDoors_SERIALIZE aomsmethod->addAttribute("Doorstate", x2String(Doorstate));

#define ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_StoptheTruck_SERIALIZE aomsmethod->addAttribute("speed", x2String(speed));

#define OMAnim_ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_setDoorstatus_RhpBoolean_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_Doorstatus)

#define OMAnim_ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_setDoorstatus_RhpBoolean_SERIALIZE_RET_VAL
//#]

//## package ANGELSPkg::LoadingProcessPkg

//## class LoadingProcessBlock
LoadingProcessBlock::LoadingProcessBlock(IOxfActive* theActiveContext) : Doorstatus(0), LoadingTime(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(LoadingProcessBlock, LoadingProcessBlock(), 0, ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_LoadingProcessBlock_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsChargingSystemBlock = NULL;
    itsDC = NULL;
    itsDCOperator = NULL;
    itsLoadingSystemBlock = NULL;
    initStatechart();
}

LoadingProcessBlock::~LoadingProcessBlock() {
    NOTIFY_DESTRUCTOR(~LoadingProcessBlock, true);
    cleanUpRelations();
    cancelTimeouts();
}

void LoadingProcessBlock::LoadingProcess() {
    NOTIFY_OPERATION(LoadingProcess, LoadingProcess(), 0, ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_LoadingProcess_SERIALIZE);
    //#[ operation LoadingProcess()
    //#]
}

void LoadingProcessBlock::OpenDoors(RhpBoolean Doorstate) {
    NOTIFY_OPERATION(OpenDoors, OpenDoors(RhpBoolean), 1, ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_OpenDoors_SERIALIZE);
    //#[ operation OpenDoors(RhpBoolean)
    if (Doorstatus != Doorstate)
    {Doorstatus=1;}
    //#]
}

void LoadingProcessBlock::StoptheTruck(double speed) {
    NOTIFY_OPERATION(StoptheTruck, StoptheTruck(double), 1, ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_StoptheTruck_SERIALIZE);
    //#[ operation StoptheTruck(double)
    speed = 0;
    double Speed = speed;
    
    //#]
}

RhpBoolean LoadingProcessBlock::getDoorstatus() const {
    return Doorstatus;
}

void LoadingProcessBlock::setDoorstatus(RhpBoolean p_Doorstatus) {
    Doorstatus = p_Doorstatus;
    NOTIFY_SET_OPERATION;
}

int LoadingProcessBlock::getLoadingTime() const {
    return LoadingTime;
}

void LoadingProcessBlock::setLoadingTime(int p_LoadingTime) {
    LoadingTime = p_LoadingTime;
    NOTIFY_SET_OPERATION;
}

ChargingSystemBlock* LoadingProcessBlock::getItsChargingSystemBlock() const {
    return itsChargingSystemBlock;
}

void LoadingProcessBlock::setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(p_ChargingSystemBlock != NULL)
        {
            p_ChargingSystemBlock->_setItsLoadingProcessBlock(this);
        }
    _setItsChargingSystemBlock(p_ChargingSystemBlock);
}

DC* LoadingProcessBlock::getItsDC() const {
    return itsDC;
}

void LoadingProcessBlock::setItsDC(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsLoadingProcessBlock(this);
        }
    _setItsDC(p_DC);
}

DCOperator* LoadingProcessBlock::getItsDCOperator() const {
    return itsDCOperator;
}

void LoadingProcessBlock::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsLoadingProcessBlock(this);
        }
    _setItsDCOperator(p_DCOperator);
}

LoadingSystemBlock* LoadingProcessBlock::getItsLoadingSystemBlock() const {
    return itsLoadingSystemBlock;
}

void LoadingProcessBlock::setItsLoadingSystemBlock(LoadingSystemBlock* p_LoadingSystemBlock) {
    if(p_LoadingSystemBlock != NULL)
        {
            p_LoadingSystemBlock->_setItsLoadingProcessBlock(this);
        }
    _setItsLoadingSystemBlock(p_LoadingSystemBlock);
}

bool LoadingProcessBlock::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void LoadingProcessBlock::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    LoadingState_subState = OMNonState;
    LoadingState_timeout = NULL;
}

void LoadingProcessBlock::cleanUpRelations() {
    if(itsChargingSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
            LoadingProcessBlock* p_LoadingProcessBlock = itsChargingSystemBlock->getItsLoadingProcessBlock();
            if(p_LoadingProcessBlock != NULL)
                {
                    itsChargingSystemBlock->__setItsLoadingProcessBlock(NULL);
                }
            itsChargingSystemBlock = NULL;
        }
    if(itsDC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC");
            LoadingProcessBlock* p_LoadingProcessBlock = itsDC->getItsLoadingProcessBlock();
            if(p_LoadingProcessBlock != NULL)
                {
                    itsDC->__setItsLoadingProcessBlock(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            LoadingProcessBlock* p_LoadingProcessBlock = itsDCOperator->getItsLoadingProcessBlock();
            if(p_LoadingProcessBlock != NULL)
                {
                    itsDCOperator->__setItsLoadingProcessBlock(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsLoadingSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingSystemBlock");
            LoadingProcessBlock* p_LoadingProcessBlock = itsLoadingSystemBlock->getItsLoadingProcessBlock();
            if(p_LoadingProcessBlock != NULL)
                {
                    itsLoadingSystemBlock->__setItsLoadingProcessBlock(NULL);
                }
            itsLoadingSystemBlock = NULL;
        }
}

void LoadingProcessBlock::cancelTimeouts() {
    cancel(LoadingState_timeout);
}

bool LoadingProcessBlock::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(LoadingState_timeout == arg)
        {
            LoadingState_timeout = NULL;
            res = true;
        }
    return res;
}

void LoadingProcessBlock::__setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    itsChargingSystemBlock = p_ChargingSystemBlock;
    if(p_ChargingSystemBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsChargingSystemBlock", p_ChargingSystemBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
        }
}

void LoadingProcessBlock::_setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(itsChargingSystemBlock != NULL)
        {
            itsChargingSystemBlock->__setItsLoadingProcessBlock(NULL);
        }
    __setItsChargingSystemBlock(p_ChargingSystemBlock);
}

void LoadingProcessBlock::_clearItsChargingSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsChargingSystemBlock");
    itsChargingSystemBlock = NULL;
}

void LoadingProcessBlock::__setItsDC(DC* p_DC) {
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

void LoadingProcessBlock::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsLoadingProcessBlock(NULL);
        }
    __setItsDC(p_DC);
}

void LoadingProcessBlock::_clearItsDC() {
    NOTIFY_RELATION_CLEARED("itsDC");
    itsDC = NULL;
}

void LoadingProcessBlock::__setItsDCOperator(DCOperator* p_DCOperator) {
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

void LoadingProcessBlock::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsLoadingProcessBlock(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void LoadingProcessBlock::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void LoadingProcessBlock::__setItsLoadingSystemBlock(LoadingSystemBlock* p_LoadingSystemBlock) {
    itsLoadingSystemBlock = p_LoadingSystemBlock;
    if(p_LoadingSystemBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoadingSystemBlock", p_LoadingSystemBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoadingSystemBlock");
        }
}

void LoadingProcessBlock::_setItsLoadingSystemBlock(LoadingSystemBlock* p_LoadingSystemBlock) {
    if(itsLoadingSystemBlock != NULL)
        {
            itsLoadingSystemBlock->__setItsLoadingProcessBlock(NULL);
        }
    __setItsLoadingSystemBlock(p_LoadingSystemBlock);
}

void LoadingProcessBlock::_clearItsLoadingSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsLoadingSystemBlock");
    itsLoadingSystemBlock = NULL;
}

void LoadingProcessBlock::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("3");
        NOTIFY_STATE_ENTERED("ROOT.DockedState");
        rootState_subState = DockedState;
        rootState_active = DockedState;
        NOTIFY_TRANSITION_TERMINATED("3");
    }
}

IOxfReactive::TakeEventStatus LoadingProcessBlock::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State IdleState
        case IdleState:
        {
            if(IS_EVENT_TYPE_OF(StartLoadingProcedure_LoadingProcessPkg_ANGELSPkg_id))
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
            if(IS_EVENT_TYPE_OF(SwitchOffANGELSFunc_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("9");
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
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_9");
                    rootState_subState = terminationstate_9;
                    rootState_active = terminationstate_9;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(ReturnToDockedState_LoadingProcessPkg_ANGELSPkg_id))
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
            if(IS_EVENT_TYPE_OF(StopLoadingProc_LoadingProcessPkg_ANGELSPkg_id))
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
                            LoadingState_timeout = scheduleTimeout(1000, "ROOT.LoadingState.StartLoading");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State DoorsClosed
        case DoorsClosed:
        {
            if(IS_EVENT_TYPE_OF(LoadingProcess_LoadingProcessPkg_ANGELSPkg_id))
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
            if(IS_EVENT_TYPE_OF(AlertDCManager_LoadingProcessPkg_ANGELSPkg_id))
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

void LoadingProcessBlock::LoadingState_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.LoadingState");
    rootState_subState = LoadingState;
    NOTIFY_TRANSITION_STARTED("6");
    NOTIFY_STATE_ENTERED("ROOT.LoadingState.StartLoading");
    LoadingState_subState = StartLoading;
    rootState_active = StartLoading;
    LoadingState_timeout = scheduleTimeout(1000, "ROOT.LoadingState.StartLoading");
    NOTIFY_TRANSITION_TERMINATED("6");
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLoadingProcessBlock::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Doorstatus", x2String(myReal->Doorstatus));
    aomsAttributes->addAttribute("LoadingTime", x2String(myReal->LoadingTime));
}

void OMAnimatedLoadingProcessBlock::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsChargingSystemBlock", false, true);
    if(myReal->itsChargingSystemBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsChargingSystemBlock);
        }
    aomsRelations->addRelation("itsLoadingSystemBlock", false, true);
    if(myReal->itsLoadingSystemBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoadingSystemBlock);
        }
}

void OMAnimatedLoadingProcessBlock::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case LoadingProcessBlock::IdleState:
        {
            IdleState_serializeStates(aomsState);
        }
        break;
        case LoadingProcessBlock::LoadingState:
        {
            LoadingState_serializeStates(aomsState);
        }
        break;
        case LoadingProcessBlock::DoorsClosed:
        {
            DoorsClosed_serializeStates(aomsState);
        }
        break;
        case LoadingProcessBlock::ReadyForParking:
        {
            ReadyForParking_serializeStates(aomsState);
        }
        break;
        case LoadingProcessBlock::DockedState:
        {
            DockedState_serializeStates(aomsState);
        }
        break;
        case LoadingProcessBlock::terminationstate_9:
        {
            terminationstate_9_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedLoadingProcessBlock::terminationstate_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_9");
}

void OMAnimatedLoadingProcessBlock::ReadyForParking_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ReadyForParking");
}

void OMAnimatedLoadingProcessBlock::LoadingState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LoadingState");
    switch (myReal->LoadingState_subState) {
        case LoadingProcessBlock::LoadedState:
        {
            LoadedState_serializeStates(aomsState);
        }
        break;
        case LoadingProcessBlock::StartLoading:
        {
            StartLoading_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedLoadingProcessBlock::StartLoading_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LoadingState.StartLoading");
}

void OMAnimatedLoadingProcessBlock::LoadedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LoadingState.LoadedState");
}

void OMAnimatedLoadingProcessBlock::IdleState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.IdleState");
}

void OMAnimatedLoadingProcessBlock::DoorsClosed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DoorsClosed");
}

void OMAnimatedLoadingProcessBlock::DockedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DockedState");
}
//#]

IMPLEMENT_REACTIVE_META_P(LoadingProcessBlock, ANGELSPkg_LoadingProcessPkg, ANGELSPkg::LoadingProcessPkg, false, OMAnimatedLoadingProcessBlock)

IMPLEMENT_META_OP(OMAnimatedLoadingProcessBlock, ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_setDoorstatus_RhpBoolean, "setDoorstatus", FALSE, "setDoorstatus(RhpBoolean)", 1)

IMPLEMENT_OP_CALL(ANGELSPkg_LoadingProcessPkg_LoadingProcessBlock_setDoorstatus_RhpBoolean, LoadingProcessBlock, setDoorstatus(p_Doorstatus), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\LoadingProcessBlock.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcessBlock_Simulation
	Model Element	: ChargingSystemBlock
//!	Generated Date	: Thu, 21, May 2020  
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\ChargingSystemBlock.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "ChargingSystemBlock.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsChargingInfrastructure
#include "ChargingInfrastructure.h"
//## link itsCommunicationSystemBlock
#include "CommunicationSystemBlock.h"
//## link itsDCOperator
#include "DCOperator.h"
//## link itsDockingProcessBlock
#include "DockingProcessBlock.h"
//## link itsLoadingProcessBlock
#include "LoadingProcessBlock.h"
//#[ ignore
#define ANGELSPkg_ChargingSystemPkg_ChargingSystemBlock_ChargingSystemBlock_SERIALIZE OM_NO_OP

#define ANGELSPkg_ChargingSystemPkg_ChargingSystemBlock_ChargingProcess_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ChargingSystemPkg

//## class ChargingSystemBlock
ChargingSystemBlock::ChargingSystemBlock(IOxfActive* theActiveContext) : TruckChargeState(15) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ChargingSystemBlock, ChargingSystemBlock(), 0, ANGELSPkg_ChargingSystemPkg_ChargingSystemBlock_ChargingSystemBlock_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsANGELS = NULL;
    itsChargingInfrastructure = NULL;
    itsCommunicationSystemBlock = NULL;
    itsDCOperator = NULL;
    itsDockingProcessBlock = NULL;
    itsLoadingProcessBlock = NULL;
    initStatechart();
}

ChargingSystemBlock::~ChargingSystemBlock() {
    NOTIFY_DESTRUCTOR(~ChargingSystemBlock, true);
    cleanUpRelations();
    cancelTimeouts();
}

void ChargingSystemBlock::ChargingProcess() {
    NOTIFY_OPERATION(ChargingProcess, ChargingProcess(), 0, ANGELSPkg_ChargingSystemPkg_ChargingSystemBlock_ChargingProcess_SERIALIZE);
    //#[ operation ChargingProcess()
    //#]
}

double ChargingSystemBlock::getTruckChargeState() const {
    return TruckChargeState;
}

void ChargingSystemBlock::setTruckChargeState(double p_TruckChargeState) {
    TruckChargeState = p_TruckChargeState;
    NOTIFY_SET_OPERATION;
}

ANGELS* ChargingSystemBlock::getItsANGELS() const {
    return itsANGELS;
}

void ChargingSystemBlock::setItsANGELS(ANGELS* p_ANGELS) {
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

ChargingInfrastructure* ChargingSystemBlock::getItsChargingInfrastructure() const {
    return itsChargingInfrastructure;
}

void ChargingSystemBlock::setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure) {
    if(p_ChargingInfrastructure != NULL)
        {
            p_ChargingInfrastructure->_setItsChargingSystemBlock(this);
        }
    _setItsChargingInfrastructure(p_ChargingInfrastructure);
}

CommunicationSystemBlock* ChargingSystemBlock::getItsCommunicationSystemBlock() const {
    return itsCommunicationSystemBlock;
}

void ChargingSystemBlock::setItsCommunicationSystemBlock(CommunicationSystemBlock* p_CommunicationSystemBlock) {
    if(p_CommunicationSystemBlock != NULL)
        {
            p_CommunicationSystemBlock->_setItsChargingSystemBlock(this);
        }
    _setItsCommunicationSystemBlock(p_CommunicationSystemBlock);
}

DCOperator* ChargingSystemBlock::getItsDCOperator() const {
    return itsDCOperator;
}

void ChargingSystemBlock::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsChargingSystemBlock(this);
        }
    _setItsDCOperator(p_DCOperator);
}

DockingProcessBlock* ChargingSystemBlock::getItsDockingProcessBlock() const {
    return itsDockingProcessBlock;
}

void ChargingSystemBlock::setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock) {
    if(p_DockingProcessBlock != NULL)
        {
            p_DockingProcessBlock->_setItsChargingSystemBlock_1(this);
        }
    _setItsDockingProcessBlock(p_DockingProcessBlock);
}

LoadingProcessBlock* ChargingSystemBlock::getItsLoadingProcessBlock() const {
    return itsLoadingProcessBlock;
}

void ChargingSystemBlock::setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    if(p_LoadingProcessBlock != NULL)
        {
            p_LoadingProcessBlock->_setItsChargingSystemBlock(this);
        }
    _setItsLoadingProcessBlock(p_LoadingProcessBlock);
}

Truck* ChargingSystemBlock::getItsTruck() const {
    return (Truck*) &itsTruck;
}

bool ChargingSystemBlock::startBehavior() {
    bool done = true;
    done &= OMReactive::startBehavior();
    return done;
}

void ChargingSystemBlock::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Charging_subState = OMNonState;
    Charging_timeout = NULL;
}

void ChargingSystemBlock::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsChargingInfrastructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsChargingInfrastructure");
            ChargingSystemBlock* p_ChargingSystemBlock = itsChargingInfrastructure->getItsChargingSystemBlock();
            if(p_ChargingSystemBlock != NULL)
                {
                    itsChargingInfrastructure->__setItsChargingSystemBlock(NULL);
                }
            itsChargingInfrastructure = NULL;
        }
    if(itsCommunicationSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationSystemBlock");
            ChargingSystemBlock* p_ChargingSystemBlock = itsCommunicationSystemBlock->getItsChargingSystemBlock();
            if(p_ChargingSystemBlock != NULL)
                {
                    itsCommunicationSystemBlock->__setItsChargingSystemBlock(NULL);
                }
            itsCommunicationSystemBlock = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            ChargingSystemBlock* p_ChargingSystemBlock = itsDCOperator->getItsChargingSystemBlock();
            if(p_ChargingSystemBlock != NULL)
                {
                    itsDCOperator->__setItsChargingSystemBlock(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsDockingProcessBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock");
            ChargingSystemBlock* p_ChargingSystemBlock = itsDockingProcessBlock->getItsChargingSystemBlock_1();
            if(p_ChargingSystemBlock != NULL)
                {
                    itsDockingProcessBlock->__setItsChargingSystemBlock_1(NULL);
                }
            itsDockingProcessBlock = NULL;
        }
    if(itsLoadingProcessBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
            ChargingSystemBlock* p_ChargingSystemBlock = itsLoadingProcessBlock->getItsChargingSystemBlock();
            if(p_ChargingSystemBlock != NULL)
                {
                    itsLoadingProcessBlock->__setItsChargingSystemBlock(NULL);
                }
            itsLoadingProcessBlock = NULL;
        }
}

void ChargingSystemBlock::cancelTimeouts() {
    cancel(Charging_timeout);
}

bool ChargingSystemBlock::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Charging_timeout == arg)
        {
            Charging_timeout = NULL;
            res = true;
        }
    return res;
}

void ChargingSystemBlock::__setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure) {
    itsChargingInfrastructure = p_ChargingInfrastructure;
    if(p_ChargingInfrastructure != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsChargingInfrastructure", p_ChargingInfrastructure, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsChargingInfrastructure");
        }
}

void ChargingSystemBlock::_setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure) {
    if(itsChargingInfrastructure != NULL)
        {
            itsChargingInfrastructure->__setItsChargingSystemBlock(NULL);
        }
    __setItsChargingInfrastructure(p_ChargingInfrastructure);
}

void ChargingSystemBlock::_clearItsChargingInfrastructure() {
    NOTIFY_RELATION_CLEARED("itsChargingInfrastructure");
    itsChargingInfrastructure = NULL;
}

void ChargingSystemBlock::__setItsCommunicationSystemBlock(CommunicationSystemBlock* p_CommunicationSystemBlock) {
    itsCommunicationSystemBlock = p_CommunicationSystemBlock;
    if(p_CommunicationSystemBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunicationSystemBlock", p_CommunicationSystemBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationSystemBlock");
        }
}

void ChargingSystemBlock::_setItsCommunicationSystemBlock(CommunicationSystemBlock* p_CommunicationSystemBlock) {
    if(itsCommunicationSystemBlock != NULL)
        {
            itsCommunicationSystemBlock->__setItsChargingSystemBlock(NULL);
        }
    __setItsCommunicationSystemBlock(p_CommunicationSystemBlock);
}

void ChargingSystemBlock::_clearItsCommunicationSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsCommunicationSystemBlock");
    itsCommunicationSystemBlock = NULL;
}

void ChargingSystemBlock::__setItsDCOperator(DCOperator* p_DCOperator) {
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

void ChargingSystemBlock::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsChargingSystemBlock(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void ChargingSystemBlock::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void ChargingSystemBlock::__setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock) {
    itsDockingProcessBlock = p_DockingProcessBlock;
    if(p_DockingProcessBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDockingProcessBlock", p_DockingProcessBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDockingProcessBlock");
        }
}

void ChargingSystemBlock::_setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock) {
    if(itsDockingProcessBlock != NULL)
        {
            itsDockingProcessBlock->__setItsChargingSystemBlock_1(NULL);
        }
    __setItsDockingProcessBlock(p_DockingProcessBlock);
}

void ChargingSystemBlock::_clearItsDockingProcessBlock() {
    NOTIFY_RELATION_CLEARED("itsDockingProcessBlock");
    itsDockingProcessBlock = NULL;
}

void ChargingSystemBlock::__setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    itsLoadingProcessBlock = p_LoadingProcessBlock;
    if(p_LoadingProcessBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoadingProcessBlock", p_LoadingProcessBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
        }
}

void ChargingSystemBlock::_setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    if(itsLoadingProcessBlock != NULL)
        {
            itsLoadingProcessBlock->__setItsChargingSystemBlock(NULL);
        }
    __setItsLoadingProcessBlock(p_LoadingProcessBlock);
}

void ChargingSystemBlock::_clearItsLoadingProcessBlock() {
    NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
    itsLoadingProcessBlock = NULL;
}

void ChargingSystemBlock::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.IdleState");
        rootState_subState = IdleState;
        rootState_active = IdleState;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus ChargingSystemBlock::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State IdleState
        case IdleState:
        {
            if(IS_EVENT_TYPE_OF(Beginthecharging_ChargingSystemPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.IdleState");
                    NOTIFY_STATE_ENTERED("ROOT.BeginCharging");
                    rootState_subState = BeginCharging;
                    rootState_active = BeginCharging;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State BeginCharging
        case BeginCharging:
        {
            if(IS_EVENT_TYPE_OF(StartTheCharging_ChargingSystemPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.BeginCharging");
                    Charging_entDef();
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State StartCharging
        case StartCharging:
        {
            if(IS_EVENT_TYPE_OF(InitiateChargingProcess_ChargingSystemPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.Charging.StartCharging");
                    NOTIFY_STATE_ENTERED("ROOT.Charging.ChargingMode");
                    Charging_subState = ChargingMode;
                    rootState_active = ChargingMode;
                    Charging_timeout = scheduleTimeout(1000, "ROOT.Charging.ChargingMode");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State ChargingMode
        case ChargingMode:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Charging_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(Charging_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Charging.ChargingMode");
                            //#[ transition 5 
                            TruckChargeState++;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Charging.ChargingMode");
                            Charging_subState = ChargingMode;
                            rootState_active = ChargingMode;
                            Charging_timeout = scheduleTimeout(1000, "ROOT.Charging.ChargingMode");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(EndCharging_ChargingSystemPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    switch (Charging_subState) {
                        // State StartCharging
                        case StartCharging:
                        {
                            NOTIFY_STATE_EXITED("ROOT.Charging.StartCharging");
                        }
                        break;
                        // State ChargingMode
                        case ChargingMode:
                        {
                            cancel(Charging_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Charging.ChargingMode");
                        }
                        break;
                        default:
                            break;
                    }
                    Charging_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.Charging");
                    //#[ transition 6 
                    ChargingProcess();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.ChargedState");
                    pushNullTransition();
                    rootState_subState = ChargedState;
                    rootState_active = ChargedState;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State ChargedState
        case ChargedState:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ChargedState");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_6");
                    rootState_subState = terminationstate_6;
                    rootState_active = terminationstate_6;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

void ChargingSystemBlock::Charging_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Charging");
    rootState_subState = Charging;
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.Charging.StartCharging");
    Charging_subState = StartCharging;
    rootState_active = StartCharging;
    NOTIFY_TRANSITION_TERMINATED("3");
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedChargingSystemBlock::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("TruckChargeState", x2String(myReal->TruckChargeState));
}

void OMAnimatedChargingSystemBlock::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTruck);
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
    aomsRelations->addRelation("itsChargingInfrastructure", false, true);
    if(myReal->itsChargingInfrastructure)
        {
            aomsRelations->ADD_ITEM(myReal->itsChargingInfrastructure);
        }
    aomsRelations->addRelation("itsCommunicationSystemBlock", false, true);
    if(myReal->itsCommunicationSystemBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunicationSystemBlock);
        }
    aomsRelations->addRelation("itsLoadingProcessBlock", false, true);
    if(myReal->itsLoadingProcessBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoadingProcessBlock);
        }
    aomsRelations->addRelation("itsDockingProcessBlock", false, true);
    if(myReal->itsDockingProcessBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsDockingProcessBlock);
        }
}

void OMAnimatedChargingSystemBlock::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case ChargingSystemBlock::IdleState:
        {
            IdleState_serializeStates(aomsState);
        }
        break;
        case ChargingSystemBlock::BeginCharging:
        {
            BeginCharging_serializeStates(aomsState);
        }
        break;
        case ChargingSystemBlock::Charging:
        {
            Charging_serializeStates(aomsState);
        }
        break;
        case ChargingSystemBlock::ChargedState:
        {
            ChargedState_serializeStates(aomsState);
        }
        break;
        case ChargingSystemBlock::terminationstate_6:
        {
            terminationstate_6_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedChargingSystemBlock::terminationstate_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_6");
}

void OMAnimatedChargingSystemBlock::IdleState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.IdleState");
}

void OMAnimatedChargingSystemBlock::Charging_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Charging");
    switch (myReal->Charging_subState) {
        case ChargingSystemBlock::StartCharging:
        {
            StartCharging_serializeStates(aomsState);
        }
        break;
        case ChargingSystemBlock::ChargingMode:
        {
            ChargingMode_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedChargingSystemBlock::StartCharging_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Charging.StartCharging");
}

void OMAnimatedChargingSystemBlock::ChargingMode_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Charging.ChargingMode");
}

void OMAnimatedChargingSystemBlock::ChargedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ChargedState");
}

void OMAnimatedChargingSystemBlock::BeginCharging_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.BeginCharging");
}
//#]

IMPLEMENT_REACTIVE_META_P(ChargingSystemBlock, ANGELSPkg_ChargingSystemPkg, ANGELSPkg::ChargingSystemPkg, false, OMAnimatedChargingSystemBlock)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\ChargingSystemBlock.cpp
*********************************************************************/

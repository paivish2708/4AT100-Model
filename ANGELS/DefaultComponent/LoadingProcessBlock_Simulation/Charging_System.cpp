/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: Charging_System
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\Charging_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Charging_System.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsChargingInfrastructure
#include "ChargingInfrastructure.h"
//## link itsCommunicationSystemBlock
#include "CommunicationSystemBlock.h"
//## link itsDCOperator
#include "DCOperator.h"
//#[ ignore
#define ANGELSPkg_ChargingSystemPkg_Charging_System_Charging_System_SERIALIZE OM_NO_OP

#define ANGELSPkg_ChargingSystemPkg_Charging_System_ChargingProcess_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ChargingSystemPkg

//## class Charging_System
Charging_System::Charging_System(IOxfActive* theActiveContext) : TruckChargeState(15) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Charging_System, Charging_System(), 0, ANGELSPkg_ChargingSystemPkg_Charging_System_Charging_System_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsANGELS = NULL;
    itsChargingInfrastructure = NULL;
    itsCommunicationSystemBlock = NULL;
    itsDCOperator = NULL;
    initStatechart();
}

Charging_System::~Charging_System() {
    NOTIFY_DESTRUCTOR(~Charging_System, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Charging_System::ChargingProcess() {
    NOTIFY_OPERATION(ChargingProcess, ChargingProcess(), 0, ANGELSPkg_ChargingSystemPkg_Charging_System_ChargingProcess_SERIALIZE);
    //#[ operation ChargingProcess()
    //#]
}

double Charging_System::getTruckChargeState() const {
    return TruckChargeState;
}

void Charging_System::setTruckChargeState(double p_TruckChargeState) {
    TruckChargeState = p_TruckChargeState;
}

ANGELS* Charging_System::getItsANGELS() const {
    return itsANGELS;
}

void Charging_System::setItsANGELS(ANGELS* p_ANGELS) {
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

ChargingInfrastructure* Charging_System::getItsChargingInfrastructure() const {
    return itsChargingInfrastructure;
}

void Charging_System::setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure) {
    if(p_ChargingInfrastructure != NULL)
        {
            p_ChargingInfrastructure->_setItsCharging_System(this);
        }
    _setItsChargingInfrastructure(p_ChargingInfrastructure);
}

CommunicationSystemBlock* Charging_System::getItsCommunicationSystemBlock() const {
    return itsCommunicationSystemBlock;
}

void Charging_System::setItsCommunicationSystemBlock(CommunicationSystemBlock* p_CommunicationSystemBlock) {
    if(p_CommunicationSystemBlock != NULL)
        {
            p_CommunicationSystemBlock->_setItsCharging_System(this);
        }
    _setItsCommunicationSystemBlock(p_CommunicationSystemBlock);
}

DCOperator* Charging_System::getItsDCOperator() const {
    return itsDCOperator;
}

void Charging_System::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsCharging_System(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Truck* Charging_System::getItsTruck() const {
    return (Truck*) &itsTruck;
}

bool Charging_System::startBehavior() {
    bool done = true;
    done &= OMReactive::startBehavior();
    return done;
}

void Charging_System::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Charging_subState = OMNonState;
    Charging_timeout = NULL;
}

void Charging_System::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsChargingInfrastructure != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsChargingInfrastructure");
            Charging_System* p_Charging_System = itsChargingInfrastructure->getItsCharging_System();
            if(p_Charging_System != NULL)
                {
                    itsChargingInfrastructure->__setItsCharging_System(NULL);
                }
            itsChargingInfrastructure = NULL;
        }
    if(itsCommunicationSystemBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationSystemBlock");
            Charging_System* p_Charging_System = itsCommunicationSystemBlock->getItsCharging_System();
            if(p_Charging_System != NULL)
                {
                    itsCommunicationSystemBlock->__setItsCharging_System(NULL);
                }
            itsCommunicationSystemBlock = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            Charging_System* p_Charging_System = itsDCOperator->getItsCharging_System();
            if(p_Charging_System != NULL)
                {
                    itsDCOperator->__setItsCharging_System(NULL);
                }
            itsDCOperator = NULL;
        }
}

void Charging_System::cancelTimeouts() {
    cancel(Charging_timeout);
}

bool Charging_System::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Charging_timeout == arg)
        {
            Charging_timeout = NULL;
            res = true;
        }
    return res;
}

void Charging_System::__setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure) {
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

void Charging_System::_setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure) {
    if(itsChargingInfrastructure != NULL)
        {
            itsChargingInfrastructure->__setItsCharging_System(NULL);
        }
    __setItsChargingInfrastructure(p_ChargingInfrastructure);
}

void Charging_System::_clearItsChargingInfrastructure() {
    NOTIFY_RELATION_CLEARED("itsChargingInfrastructure");
    itsChargingInfrastructure = NULL;
}

void Charging_System::__setItsCommunicationSystemBlock(CommunicationSystemBlock* p_CommunicationSystemBlock) {
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

void Charging_System::_setItsCommunicationSystemBlock(CommunicationSystemBlock* p_CommunicationSystemBlock) {
    if(itsCommunicationSystemBlock != NULL)
        {
            itsCommunicationSystemBlock->__setItsCharging_System(NULL);
        }
    __setItsCommunicationSystemBlock(p_CommunicationSystemBlock);
}

void Charging_System::_clearItsCommunicationSystemBlock() {
    NOTIFY_RELATION_CLEARED("itsCommunicationSystemBlock");
    itsCommunicationSystemBlock = NULL;
}

void Charging_System::__setItsDCOperator(DCOperator* p_DCOperator) {
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

void Charging_System::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsCharging_System(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void Charging_System::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void Charging_System::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.IdleState");
        rootState_subState = IdleState;
        rootState_active = IdleState;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Charging_System::rootState_processEvent() {
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

void Charging_System::Charging_entDef() {
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
void OMAnimatedCharging_System::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("TruckChargeState", x2String(myReal->TruckChargeState));
}

void OMAnimatedCharging_System::serializeRelations(AOMSRelations* aomsRelations) const {
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
}

void OMAnimatedCharging_System::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Charging_System::IdleState:
        {
            IdleState_serializeStates(aomsState);
        }
        break;
        case Charging_System::BeginCharging:
        {
            BeginCharging_serializeStates(aomsState);
        }
        break;
        case Charging_System::Charging:
        {
            Charging_serializeStates(aomsState);
        }
        break;
        case Charging_System::ChargedState:
        {
            ChargedState_serializeStates(aomsState);
        }
        break;
        case Charging_System::terminationstate_6:
        {
            terminationstate_6_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCharging_System::terminationstate_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_6");
}

void OMAnimatedCharging_System::IdleState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.IdleState");
}

void OMAnimatedCharging_System::Charging_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Charging");
    switch (myReal->Charging_subState) {
        case Charging_System::StartCharging:
        {
            StartCharging_serializeStates(aomsState);
        }
        break;
        case Charging_System::ChargingMode:
        {
            ChargingMode_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCharging_System::StartCharging_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Charging.StartCharging");
}

void OMAnimatedCharging_System::ChargingMode_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Charging.ChargingMode");
}

void OMAnimatedCharging_System::ChargedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ChargedState");
}

void OMAnimatedCharging_System::BeginCharging_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.BeginCharging");
}
//#]

IMPLEMENT_REACTIVE_META_P(Charging_System, ANGELSPkg_ChargingSystemPkg, ANGELSPkg::ChargingSystemPkg, false, OMAnimatedCharging_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\Charging_System.cpp
*********************************************************************/

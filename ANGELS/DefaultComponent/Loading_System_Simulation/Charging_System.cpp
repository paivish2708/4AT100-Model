/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Charging_System
//!	Generated Date	: Wed, 13, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Charging_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Charging_System.h"
//## link itsDCOperator
#include "DCOperator.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ChargingSystemPkg_Charging_System_Charging_System_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg

//## class Charging_System
Charging_System::Charging_System(IOxfActive* theActiveContext) : ChargingState(15) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Charging_System, Charging_System(), 0, UseCaseAnalysisPkg_ANGELSPkg_ChargingSystemPkg_Charging_System_Charging_System_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCOperator = NULL;
    initStatechart();
}

Charging_System::~Charging_System() {
    NOTIFY_DESTRUCTOR(~Charging_System, true);
    cleanUpRelations();
    cancelTimeouts();
}

double Charging_System::getChargingState() const {
    return ChargingState;
}

void Charging_System::setChargingState(double p_ChargingState) {
    ChargingState = p_ChargingState;
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
            if(IS_EVENT_TYPE_OF(Beginthecharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
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
            if(IS_EVENT_TYPE_OF(StartTheCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
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
            if(IS_EVENT_TYPE_OF(InitiateChargingProcess_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
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
                            ChargingState++;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Charging.ChargingMode");
                            Charging_subState = ChargingMode;
                            rootState_active = ChargingMode;
                            Charging_timeout = scheduleTimeout(1000, "ROOT.Charging.ChargingMode");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(EndCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
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
    aomsAttributes->addAttribute("ChargingState", x2String(myReal->ChargingState));
}

void OMAnimatedCharging_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTruck);
    aomsRelations->addRelation("itsDCOperator", false, true);
    if(myReal->itsDCOperator)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator);
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

IMPLEMENT_REACTIVE_META_P(Charging_System, UseCaseAnalysisPkg_ANGELSPkg_ChargingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg, false, OMAnimatedCharging_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Charging_System.cpp
*********************************************************************/

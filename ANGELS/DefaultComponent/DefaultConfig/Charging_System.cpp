/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Charging_System
//!	Generated Date	: Wed, 13, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Charging_System.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Charging_System.h"
//## link itsDCOperator
#include "DCOperator.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg

//## class Charging_System
Charging_System::Charging_System(IOxfActive* theActiveContext) : ChargingState(15) {
    setActiveContext(theActiveContext, false);
    itsDCOperator = NULL;
    initStatechart();
}

Charging_System::~Charging_System() {
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
}

void Charging_System::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsCharging_System(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void Charging_System::_clearItsDCOperator() {
    itsDCOperator = NULL;
}

void Charging_System::rootState_entDef() {
    {
        rootState_subState = IdleState;
        rootState_active = IdleState;
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
                    rootState_subState = BeginCharging;
                    rootState_active = BeginCharging;
                    res = eventConsumed;
                }
            
        }
        break;
        // State BeginCharging
        case BeginCharging:
        {
            if(IS_EVENT_TYPE_OF(StartTheCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    Charging_entDef();
                    res = eventConsumed;
                }
            
        }
        break;
        // State StartCharging
        case StartCharging:
        {
            if(IS_EVENT_TYPE_OF(InitiateChargingProcess_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    Charging_subState = ChargingMode;
                    rootState_active = ChargingMode;
                    Charging_timeout = scheduleTimeout(1000, NULL);
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
                            cancel(Charging_timeout);
                            //#[ transition 5 
                            ChargingState++;
                            //#]
                            Charging_subState = ChargingMode;
                            rootState_active = ChargingMode;
                            Charging_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(EndCharging_ChargingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    switch (Charging_subState) {
                        // State ChargingMode
                        case ChargingMode:
                        {
                            cancel(Charging_timeout);
                        }
                        break;
                        default:
                            break;
                    }
                    Charging_subState = OMNonState;
                    pushNullTransition();
                    rootState_subState = ChargedState;
                    rootState_active = ChargedState;
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State ChargedState
        case ChargedState:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = terminationstate_6;
                    rootState_active = terminationstate_6;
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
    rootState_subState = Charging;
    Charging_subState = StartCharging;
    rootState_active = StartCharging;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Charging_System.cpp
*********************************************************************/

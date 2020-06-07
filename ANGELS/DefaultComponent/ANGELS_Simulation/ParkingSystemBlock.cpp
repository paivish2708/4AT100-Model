/********************************************************************
	Rhapsody	: 8.4 
	Login		: kevin
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: ParkingSystemBlock
//!	Generated Date	: Fri, 29, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\ParkingSystemBlock.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "ParkingSystemBlock.h"
//## link itsDC
#include "DC.h"
//## link itsDCOperator
#include "DCOperator.h"
//## link itsDriver
#include "Driver.h"
//## event AlertDCManager()
#include "LoadingProcessPkg.h"
//#[ ignore
#define ANGELSPkg_ParkingProcessPkg_ParkingSystemBlock_ParkingSystemBlock_SERIALIZE OM_NO_OP

#define ANGELSPkg_ParkingProcessPkg_ParkingSystemBlock_CheckParkingStatus_SERIALIZE OM_NO_OP

#define ANGELSPkg_ParkingProcessPkg_ParkingSystemBlock_StopTruck_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::ParkingProcessPkg

//## class ParkingSystemBlock
ParkingSystemBlock::ParkingSystemBlock(IOxfActive* theActiveContext) : ChargeState(15), ParkingTime(0), Speed(10), SteerAngle(10), dt(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ParkingSystemBlock, ParkingSystemBlock(), 0, ANGELSPkg_ParkingProcessPkg_ParkingSystemBlock_ParkingSystemBlock_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDC = NULL;
    itsDCOperator = NULL;
    itsDriver = NULL;
    initStatechart();
}

ParkingSystemBlock::~ParkingSystemBlock() {
    NOTIFY_DESTRUCTOR(~ParkingSystemBlock, true);
    cleanUpRelations();
    cancelTimeouts();
}

void ParkingSystemBlock::CheckParkingStatus() {
    NOTIFY_OPERATION(CheckParkingStatus, CheckParkingStatus(), 0, ANGELSPkg_ParkingProcessPkg_ParkingSystemBlock_CheckParkingStatus_SERIALIZE);
    //#[ operation CheckParkingStatus()
    if (ParkingStatus !=0)
    {
    Speed = 0;
    SteerAngle=0;}
    //#]
}

void ParkingSystemBlock::StopTruck() {
    NOTIFY_OPERATION(StopTruck, StopTruck(), 0, ANGELSPkg_ParkingProcessPkg_ParkingSystemBlock_StopTruck_SERIALIZE);
    //#[ operation StopTruck()
    Speed = 0;
    SteerAngle = 0;    
    ParkingStatus = 1;
    //#]
}

double ParkingSystemBlock::getChargeState() const {
    return ChargeState;
}

void ParkingSystemBlock::setChargeState(double p_ChargeState) {
    ChargeState = p_ChargeState;
}

double ParkingSystemBlock::getParkingStatus() const {
    return ParkingStatus;
}

void ParkingSystemBlock::setParkingStatus(double p_ParkingStatus) {
    ParkingStatus = p_ParkingStatus;
}

double ParkingSystemBlock::getParkingTime() const {
    return ParkingTime;
}

void ParkingSystemBlock::setParkingTime(double p_ParkingTime) {
    ParkingTime = p_ParkingTime;
}

double ParkingSystemBlock::getSpeed() const {
    return Speed;
}

void ParkingSystemBlock::setSpeed(double p_Speed) {
    Speed = p_Speed;
    NOTIFY_SET_OPERATION;
}

double ParkingSystemBlock::getSteerAngle() const {
    return SteerAngle;
}

void ParkingSystemBlock::setSteerAngle(double p_SteerAngle) {
    SteerAngle = p_SteerAngle;
    NOTIFY_SET_OPERATION;
}

double ParkingSystemBlock::getDt() const {
    return dt;
}

void ParkingSystemBlock::setDt(double p_dt) {
    dt = p_dt;
}

DC* ParkingSystemBlock::getItsDC() const {
    return itsDC;
}

void ParkingSystemBlock::setItsDC(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsParkingSystemBlock(this);
        }
    _setItsDC(p_DC);
}

DCOperator* ParkingSystemBlock::getItsDCOperator() const {
    return itsDCOperator;
}

void ParkingSystemBlock::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsParkingSystemBlock(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Driver* ParkingSystemBlock::getItsDriver() const {
    return itsDriver;
}

void ParkingSystemBlock::setItsDriver(Driver* p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsParkingSystemBlock(this);
        }
    _setItsDriver(p_Driver);
}

bool ParkingSystemBlock::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ParkingSystemBlock::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Parking_subState = OMNonState;
    Parking_timeout = NULL;
}

void ParkingSystemBlock::cleanUpRelations() {
    if(itsDC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC");
            ParkingSystemBlock* p_ParkingSystemBlock = itsDC->getItsParkingSystemBlock();
            if(p_ParkingSystemBlock != NULL)
                {
                    itsDC->__setItsParkingSystemBlock(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            ParkingSystemBlock* p_ParkingSystemBlock = itsDCOperator->getItsParkingSystemBlock();
            if(p_ParkingSystemBlock != NULL)
                {
                    itsDCOperator->__setItsParkingSystemBlock(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsDriver != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
            ParkingSystemBlock* p_ParkingSystemBlock = itsDriver->getItsParkingSystemBlock();
            if(p_ParkingSystemBlock != NULL)
                {
                    itsDriver->__setItsParkingSystemBlock(NULL);
                }
            itsDriver = NULL;
        }
}

void ParkingSystemBlock::cancelTimeouts() {
    cancel(Parking_timeout);
}

bool ParkingSystemBlock::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Parking_timeout == arg)
        {
            Parking_timeout = NULL;
            res = true;
        }
    return res;
}

void ParkingSystemBlock::__setItsDC(DC* p_DC) {
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

void ParkingSystemBlock::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsParkingSystemBlock(NULL);
        }
    __setItsDC(p_DC);
}

void ParkingSystemBlock::_clearItsDC() {
    NOTIFY_RELATION_CLEARED("itsDC");
    itsDC = NULL;
}

void ParkingSystemBlock::__setItsDCOperator(DCOperator* p_DCOperator) {
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

void ParkingSystemBlock::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsParkingSystemBlock(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void ParkingSystemBlock::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void ParkingSystemBlock::__setItsDriver(Driver* p_Driver) {
    itsDriver = p_Driver;
    if(p_Driver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDriver", p_Driver, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
        }
}

void ParkingSystemBlock::_setItsDriver(Driver* p_Driver) {
    if(itsDriver != NULL)
        {
            itsDriver->__setItsParkingSystemBlock(NULL);
        }
    __setItsDriver(p_Driver);
}

void ParkingSystemBlock::_clearItsDriver() {
    NOTIFY_RELATION_CLEARED("itsDriver");
    itsDriver = NULL;
}

void ParkingSystemBlock::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.LoadedState");
        rootState_subState = LoadedState;
        rootState_active = LoadedState;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus ParkingSystemBlock::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State LoadedState
        case LoadedState:
        {
            if(IS_EVENT_TYPE_OF(AlertDCManager_LoadingProcessPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.LoadedState");
                    NOTIFY_STATE_ENTERED("ROOT.AutonomousMode");
                    rootState_subState = AutonomousMode;
                    rootState_active = AutonomousMode;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State AutonomousMode
        case AutonomousMode:
        {
            if(IS_EVENT_TYPE_OF(InitiateParkingProcess_ParkingProcessPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.AutonomousMode");
                    Parking_entDef();
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State IdleState
        case IdleState:
        {
            if(IS_EVENT_TYPE_OF(StartParking_ParkingProcessPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.Parking.IdleState");
                    NOTIFY_STATE_ENTERED("ROOT.Parking.BeginParking");
                    Parking_subState = BeginParking;
                    rootState_active = BeginParking;
                    Parking_timeout = scheduleTimeout(100, "ROOT.Parking.BeginParking");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State BeginParking
        case BeginParking:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Parking_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(Parking_timeout);
                            //#[ state Parking.BeginParking.(Exit) 
                            CheckParkingStatus();
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.Parking.BeginParking");
                            //#[ transition 5 
                             ParkingTime++;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Parking.BeginParking");
                            Parking_subState = BeginParking;
                            rootState_active = BeginParking;
                            Parking_timeout = scheduleTimeout(100, "ROOT.Parking.BeginParking");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(EndParking_ParkingProcessPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    switch (Parking_subState) {
                        // State IdleState
                        case IdleState:
                        {
                            NOTIFY_STATE_EXITED("ROOT.Parking.IdleState");
                        }
                        break;
                        // State BeginParking
                        case BeginParking:
                        {
                            cancel(Parking_timeout);
                            //#[ state Parking.BeginParking.(Exit) 
                            CheckParkingStatus();
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.Parking.BeginParking");
                        }
                        break;
                        default:
                            break;
                    }
                    Parking_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.Parking");
                    //#[ transition 6 
                    StopTruck();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.ParkedState");
                    rootState_subState = ParkedState;
                    rootState_active = ParkedState;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State ParkedState
        case ParkedState:
        {
            if(IS_EVENT_TYPE_OF(ChangeMode_ParkingProcessPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.ParkedState");
                    NOTIFY_STATE_ENTERED("ROOT.ManualState");
                    pushNullTransition();
                    rootState_subState = ManualState;
                    rootState_active = ManualState;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ManualState
        case ManualState:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ManualState");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_8");
                    rootState_subState = terminationstate_8;
                    rootState_active = terminationstate_8;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

void ParkingSystemBlock::Parking_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Parking");
    rootState_subState = Parking;
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.Parking.IdleState");
    Parking_subState = IdleState;
    rootState_active = IdleState;
    NOTIFY_TRANSITION_TERMINATED("3");
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedParkingSystemBlock::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("ChargeState", x2String(myReal->ChargeState));
    aomsAttributes->addAttribute("dt", x2String(myReal->dt));
    aomsAttributes->addAttribute("ParkingStatus", x2String(myReal->ParkingStatus));
    aomsAttributes->addAttribute("Speed", x2String(myReal->Speed));
    aomsAttributes->addAttribute("SteerAngle", x2String(myReal->SteerAngle));
    aomsAttributes->addAttribute("ParkingTime", x2String(myReal->ParkingTime));
}

void OMAnimatedParkingSystemBlock::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDriver", false, true);
    if(myReal->itsDriver)
        {
            aomsRelations->ADD_ITEM(myReal->itsDriver);
        }
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
}

void OMAnimatedParkingSystemBlock::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case ParkingSystemBlock::LoadedState:
        {
            LoadedState_serializeStates(aomsState);
        }
        break;
        case ParkingSystemBlock::AutonomousMode:
        {
            AutonomousMode_serializeStates(aomsState);
        }
        break;
        case ParkingSystemBlock::Parking:
        {
            Parking_serializeStates(aomsState);
        }
        break;
        case ParkingSystemBlock::ParkedState:
        {
            ParkedState_serializeStates(aomsState);
        }
        break;
        case ParkingSystemBlock::ManualState:
        {
            ManualState_serializeStates(aomsState);
        }
        break;
        case ParkingSystemBlock::terminationstate_8:
        {
            terminationstate_8_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedParkingSystemBlock::terminationstate_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_8");
}

void OMAnimatedParkingSystemBlock::Parking_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Parking");
    switch (myReal->Parking_subState) {
        case ParkingSystemBlock::IdleState:
        {
            IdleState_serializeStates(aomsState);
        }
        break;
        case ParkingSystemBlock::BeginParking:
        {
            BeginParking_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedParkingSystemBlock::IdleState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Parking.IdleState");
}

void OMAnimatedParkingSystemBlock::BeginParking_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Parking.BeginParking");
}

void OMAnimatedParkingSystemBlock::ParkedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ParkedState");
}

void OMAnimatedParkingSystemBlock::ManualState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ManualState");
}

void OMAnimatedParkingSystemBlock::LoadedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LoadedState");
}

void OMAnimatedParkingSystemBlock::AutonomousMode_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AutonomousMode");
}
//#]

IMPLEMENT_REACTIVE_META_P(ParkingSystemBlock, ANGELSPkg_ParkingProcessPkg, ANGELSPkg::ParkingProcessPkg, false, OMAnimatedParkingSystemBlock)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\ParkingSystemBlock.cpp
*********************************************************************/

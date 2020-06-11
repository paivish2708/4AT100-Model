/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcessBlock_Simulation
	Model Element	: DockingProcessBlock
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\DockingProcessBlock.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## link itsANGELS
#include "ANGELS.h"
//## link itsDCOperator
#include "DCOperator.h"
//## auto_generated
#include "DockingProcessBlock.h"
//## link itsChargingSystemBlock_1
#include "ChargingSystemBlock.h"
//## link itsDC
#include "DC.h"
//## link itsDriver
#include "Driver.h"
//## link itsTruck_1
#include "Truck.h"
//#[ ignore
#define ANGELSPkg_DockingPkg_DockingProcessBlock_MoveTruck_SERIALIZE \
    aomsmethod->addAttribute("SteeringAngle", x2String(SteeringAngle));\
    aomsmethod->addAttribute("speed", x2String(speed));\
    aomsmethod->addAttribute("DockingState", x2String(DockingState));
#define ANGELSPkg_DockingPkg_DockingProcessBlock_DockingProcessBlock_SERIALIZE OM_NO_OP

#define ANGELSPkg_DockingPkg_DockingProcessBlock_CheckDockingStatus_SERIALIZE OM_NO_OP

#define ANGELSPkg_DockingPkg_DockingProcessBlock_DockInput_SERIALIZE aomsmethod->addAttribute("DS", x2String(DS));

#define OMAnim_ANGELSPkg_DockingPkg_DockingProcessBlock_setDSInput_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_DSInput)

#define OMAnim_ANGELSPkg_DockingPkg_DockingProcessBlock_setDSInput_double_SERIALIZE_RET_VAL
//#]

//## package ANGELSPkg::DockingPkg

//## class DockingProcessBlock
void DockingProcessBlock::MoveTruck(double SteeringAngle, double speed, double DockingState) {
    NOTIFY_OPERATION(MoveTruck, MoveTruck(double,double,double), 3, ANGELSPkg_DockingPkg_DockingProcessBlock_MoveTruck_SERIALIZE);
    //#[ operation MoveTruck(double,double,double)
    if (DockingStatus !=1)
    {SteeringAngle = SteerAngle;
    speed = Speed;}
    else
    { 
    SteerAngle = 0;
    Speed = 0;
    DockingStatus = DockingState;}  
    
    //#]
}

ANGELS* DockingProcessBlock::getItsANGELS() const {
    return itsANGELS;
}

void DockingProcessBlock::setItsANGELS(ANGELS* p_ANGELS) {
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

DCOperator* DockingProcessBlock::getItsDCOperator() const {
    return itsDCOperator;
}

void DockingProcessBlock::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsDockingProcessBlock_2(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Truck* DockingProcessBlock::getItsTruck_1() const {
    return itsTruck_1;
}

void DockingProcessBlock::setItsTruck_1(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDockingProcessBlock(this);
        }
    _setItsTruck_1(p_Truck);
}

bool DockingProcessBlock::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void DockingProcessBlock::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Docking_subState = OMNonState;
    Docking_timeout = NULL;
}

void DockingProcessBlock::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsChargingSystemBlock_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsChargingSystemBlock_1");
            DockingProcessBlock* p_DockingProcessBlock = itsChargingSystemBlock_1->getItsDockingProcessBlock();
            if(p_DockingProcessBlock != NULL)
                {
                    itsChargingSystemBlock_1->__setItsDockingProcessBlock(NULL);
                }
            itsChargingSystemBlock_1 = NULL;
        }
    if(itsDC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC");
            DockingProcessBlock* p_DockingProcessBlock = itsDC->getItsDockingProcessBlock();
            if(p_DockingProcessBlock != NULL)
                {
                    itsDC->__setItsDockingProcessBlock(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            DockingProcessBlock* p_DockingProcessBlock = itsDCOperator->getItsDockingProcessBlock_2();
            if(p_DockingProcessBlock != NULL)
                {
                    itsDCOperator->__setItsDockingProcessBlock_2(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsDCOperator_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator_1");
            DockingProcessBlock* p_DockingProcessBlock = itsDCOperator_1->getItsDockingProcessBlock_3();
            if(p_DockingProcessBlock != NULL)
                {
                    itsDCOperator_1->__setItsDockingProcessBlock_3(NULL);
                }
            itsDCOperator_1 = NULL;
        }
    if(itsDriver != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
            DockingProcessBlock* p_DockingProcessBlock = itsDriver->getItsDockingProcessBlock_1();
            if(p_DockingProcessBlock != NULL)
                {
                    itsDriver->__setItsDockingProcessBlock_1(NULL);
                }
            itsDriver = NULL;
        }
    if(itsTruck_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_1");
            DockingProcessBlock* p_DockingProcessBlock = itsTruck_1->getItsDockingProcessBlock();
            if(p_DockingProcessBlock != NULL)
                {
                    itsTruck_1->__setItsDockingProcessBlock(NULL);
                }
            itsTruck_1 = NULL;
        }
}

void DockingProcessBlock::cancelTimeouts() {
    cancel(Docking_timeout);
}

bool DockingProcessBlock::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Docking_timeout == arg)
        {
            Docking_timeout = NULL;
            res = true;
        }
    return res;
}

void DockingProcessBlock::__setItsDCOperator(DCOperator* p_DCOperator) {
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

void DockingProcessBlock::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsDockingProcessBlock_2(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void DockingProcessBlock::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void DockingProcessBlock::__setItsTruck_1(Truck* p_Truck) {
    itsTruck_1 = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck_1", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck_1");
        }
}

void DockingProcessBlock::_setItsTruck_1(Truck* p_Truck) {
    if(itsTruck_1 != NULL)
        {
            itsTruck_1->__setItsDockingProcessBlock(NULL);
        }
    __setItsTruck_1(p_Truck);
}

void DockingProcessBlock::_clearItsTruck_1() {
    NOTIFY_RELATION_CLEARED("itsTruck_1");
    itsTruck_1 = NULL;
}

DockingProcessBlock::DockingProcessBlock(IOxfActive* theActiveContext) : DSInput(1), DockingStatus(1), DockingTime(10), Doorstatus(1), Speed(15), SteerAngle(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(DockingProcessBlock, DockingProcessBlock(), 0, ANGELSPkg_DockingPkg_DockingProcessBlock_DockingProcessBlock_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsANGELS = NULL;
    itsChargingSystemBlock_1 = NULL;
    itsDC = NULL;
    itsDCOperator = NULL;
    itsDCOperator_1 = NULL;
    itsDriver = NULL;
    itsTruck_1 = NULL;
    initStatechart();
}

DockingProcessBlock::~DockingProcessBlock() {
    NOTIFY_DESTRUCTOR(~DockingProcessBlock, true);
    cleanUpRelations();
    cancelTimeouts();
}

void DockingProcessBlock::CheckDockingStatus() {
    NOTIFY_OPERATION(CheckDockingStatus, CheckDockingStatus(), 0, ANGELSPkg_DockingPkg_DockingProcessBlock_CheckDockingStatus_SERIALIZE);
    //#[ operation CheckDockingStatus()
    if (DockingStatus != 0)
    {   Speed = 0;
        SteerAngle = 0 ; }
     
    //#]
}

void DockingProcessBlock::DockInput(double DS) {
    NOTIFY_OPERATION(DockInput, DockInput(double), 1, ANGELSPkg_DockingPkg_DockingProcessBlock_DockInput_SERIALIZE);
    //#[ operation DockInput(double)
    DSInput = DS;
    //#]
}

double DockingProcessBlock::getDSInput() const {
    return DSInput;
}

void DockingProcessBlock::setDSInput(double p_DSInput) {
    DSInput = p_DSInput;
    NOTIFY_SET_OPERATION;
}

double DockingProcessBlock::getDockingStatus() const {
    return DockingStatus;
}

void DockingProcessBlock::setDockingStatus(double p_DockingStatus) {
    DockingStatus = p_DockingStatus;
}

double DockingProcessBlock::getDockingTime() const {
    return DockingTime;
}

void DockingProcessBlock::setDockingTime(double p_DockingTime) {
    DockingTime = p_DockingTime;
    NOTIFY_SET_OPERATION;
}

RhpBoolean DockingProcessBlock::getDoorstatus() const {
    return Doorstatus;
}

void DockingProcessBlock::setDoorstatus(RhpBoolean p_Doorstatus) {
    Doorstatus = p_Doorstatus;
}

double DockingProcessBlock::getSpeed() const {
    return Speed;
}

void DockingProcessBlock::setSpeed(double p_Speed) {
    Speed = p_Speed;
    NOTIFY_SET_OPERATION;
}

double DockingProcessBlock::getSteerAngle() const {
    return SteerAngle;
}

void DockingProcessBlock::setSteerAngle(double p_SteerAngle) {
    SteerAngle = p_SteerAngle;
    NOTIFY_SET_OPERATION;
}

ChargingSystemBlock* DockingProcessBlock::getItsChargingSystemBlock_1() const {
    return itsChargingSystemBlock_1;
}

void DockingProcessBlock::setItsChargingSystemBlock_1(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(p_ChargingSystemBlock != NULL)
        {
            p_ChargingSystemBlock->_setItsDockingProcessBlock(this);
        }
    _setItsChargingSystemBlock_1(p_ChargingSystemBlock);
}

DC* DockingProcessBlock::getItsDC() const {
    return itsDC;
}

void DockingProcessBlock::setItsDC(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsDockingProcessBlock(this);
        }
    _setItsDC(p_DC);
}

DCOperator* DockingProcessBlock::getItsDCOperator_1() const {
    return itsDCOperator_1;
}

void DockingProcessBlock::setItsDCOperator_1(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsDockingProcessBlock_3(this);
        }
    _setItsDCOperator_1(p_DCOperator);
}

Driver* DockingProcessBlock::getItsDriver() const {
    return itsDriver;
}

void DockingProcessBlock::setItsDriver(Driver* p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsDockingProcessBlock_1(this);
        }
    _setItsDriver(p_Driver);
}

void DockingProcessBlock::__setItsChargingSystemBlock_1(ChargingSystemBlock* p_ChargingSystemBlock) {
    itsChargingSystemBlock_1 = p_ChargingSystemBlock;
    if(p_ChargingSystemBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsChargingSystemBlock_1", p_ChargingSystemBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsChargingSystemBlock_1");
        }
}

void DockingProcessBlock::_setItsChargingSystemBlock_1(ChargingSystemBlock* p_ChargingSystemBlock) {
    if(itsChargingSystemBlock_1 != NULL)
        {
            itsChargingSystemBlock_1->__setItsDockingProcessBlock(NULL);
        }
    __setItsChargingSystemBlock_1(p_ChargingSystemBlock);
}

void DockingProcessBlock::_clearItsChargingSystemBlock_1() {
    NOTIFY_RELATION_CLEARED("itsChargingSystemBlock_1");
    itsChargingSystemBlock_1 = NULL;
}

void DockingProcessBlock::__setItsDC(DC* p_DC) {
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

void DockingProcessBlock::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsDockingProcessBlock(NULL);
        }
    __setItsDC(p_DC);
}

void DockingProcessBlock::_clearItsDC() {
    NOTIFY_RELATION_CLEARED("itsDC");
    itsDC = NULL;
}

void DockingProcessBlock::__setItsDCOperator_1(DCOperator* p_DCOperator) {
    itsDCOperator_1 = p_DCOperator;
    if(p_DCOperator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCOperator_1", p_DCOperator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator_1");
        }
}

void DockingProcessBlock::_setItsDCOperator_1(DCOperator* p_DCOperator) {
    if(itsDCOperator_1 != NULL)
        {
            itsDCOperator_1->__setItsDockingProcessBlock_3(NULL);
        }
    __setItsDCOperator_1(p_DCOperator);
}

void DockingProcessBlock::_clearItsDCOperator_1() {
    NOTIFY_RELATION_CLEARED("itsDCOperator_1");
    itsDCOperator_1 = NULL;
}

void DockingProcessBlock::__setItsDriver(Driver* p_Driver) {
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

void DockingProcessBlock::_setItsDriver(Driver* p_Driver) {
    if(itsDriver != NULL)
        {
            itsDriver->__setItsDockingProcessBlock_1(NULL);
        }
    __setItsDriver(p_Driver);
}

void DockingProcessBlock::_clearItsDriver() {
    NOTIFY_RELATION_CLEARED("itsDriver");
    itsDriver = NULL;
}

void DockingProcessBlock::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.ManualState");
        rootState_subState = ManualState;
        rootState_active = ManualState;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus DockingProcessBlock::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State ManualState
        case ManualState:
        {
            if(IS_EVENT_TYPE_OF(Autonomousmode_DockingPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.ManualState");
                    NOTIFY_STATE_ENTERED("ROOT.AutonomousState");
                    rootState_subState = AutonomousState;
                    rootState_active = AutonomousState;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State AutonomousState
        case AutonomousState:
        {
            if(IS_EVENT_TYPE_OF(StartDockingProcedure_DockingPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.AutonomousState");
                    //#[ transition 2 
                    DockInput(2);
                    //#]
                    Docking_entDef();
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State MoveTheTruck
        case MoveTheTruck:
        {
            if(IS_EVENT_TYPE_OF(EndDocking_DockingPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    switch (Docking_subState) {
                        // State MoveTheTruck
                        case MoveTheTruck:
                        {
                            cancel(Docking_timeout);
                            //#[ state Docking.MoveTheTruck.(Exit) 
                            CheckDockingStatus();
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.Docking.MoveTheTruck");
                        }
                        break;
                        // State BeginMovement
                        case BeginMovement:
                        {
                            NOTIFY_STATE_EXITED("ROOT.Docking.BeginMovement");
                        }
                        break;
                        default:
                            break;
                    }
                    Docking_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.Docking");
                    //#[ transition 6 
                    MoveTruck(0,0,1);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.IdleTruck");
                    pushNullTransition();
                    rootState_subState = IdleTruck;
                    rootState_active = IdleTruck;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Docking_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(Docking_timeout);
                            //#[ state Docking.MoveTheTruck.(Exit) 
                            CheckDockingStatus();
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.Docking.MoveTheTruck");
                            //#[ transition 5 
                            CheckDockingStatus();
                            DockingTime++;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Docking.MoveTheTruck");
                            Docking_subState = MoveTheTruck;
                            rootState_active = MoveTheTruck;
                            Docking_timeout = scheduleTimeout(1000, "ROOT.Docking.MoveTheTruck");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State BeginMovement
        case BeginMovement:
        {
            if(IS_EVENT_TYPE_OF(BeginTruckMovement_DockingPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.Docking.BeginMovement");
                    NOTIFY_STATE_ENTERED("ROOT.Docking.MoveTheTruck");
                    Docking_subState = MoveTheTruck;
                    rootState_active = MoveTheTruck;
                    Docking_timeout = scheduleTimeout(1000, "ROOT.Docking.MoveTheTruck");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State IdleTruck
        case IdleTruck:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.IdleTruck");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_7");
                    rootState_subState = terminationstate_7;
                    rootState_active = terminationstate_7;
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

void DockingProcessBlock::Docking_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Docking");
    rootState_subState = Docking;
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.Docking.BeginMovement");
    Docking_subState = BeginMovement;
    rootState_active = BeginMovement;
    NOTIFY_TRANSITION_TERMINATED("3");
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDockingProcessBlock::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("DockingStatus", x2String(myReal->DockingStatus));
    aomsAttributes->addAttribute("DockingTime", x2String(myReal->DockingTime));
    aomsAttributes->addAttribute("Doorstatus", x2String(myReal->Doorstatus));
    aomsAttributes->addAttribute("DSInput", x2String(myReal->DSInput));
    aomsAttributes->addAttribute("Speed", x2String(myReal->Speed));
    aomsAttributes->addAttribute("SteerAngle", x2String(myReal->SteerAngle));
}

void OMAnimatedDockingProcessBlock::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsDCOperator_1", false, true);
    if(myReal->itsDCOperator_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator_1);
        }
    aomsRelations->addRelation("itsChargingSystemBlock_1", false, true);
    if(myReal->itsChargingSystemBlock_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsChargingSystemBlock_1);
        }
    aomsRelations->addRelation("itsTruck_1", false, true);
    if(myReal->itsTruck_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck_1);
        }
    aomsRelations->addRelation("itsDC", false, true);
    if(myReal->itsDC)
        {
            aomsRelations->ADD_ITEM(myReal->itsDC);
        }
    aomsRelations->addRelation("itsDriver", false, true);
    if(myReal->itsDriver)
        {
            aomsRelations->ADD_ITEM(myReal->itsDriver);
        }
}

void OMAnimatedDockingProcessBlock::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case DockingProcessBlock::ManualState:
        {
            ManualState_serializeStates(aomsState);
        }
        break;
        case DockingProcessBlock::AutonomousState:
        {
            AutonomousState_serializeStates(aomsState);
        }
        break;
        case DockingProcessBlock::Docking:
        {
            Docking_serializeStates(aomsState);
        }
        break;
        case DockingProcessBlock::IdleTruck:
        {
            IdleTruck_serializeStates(aomsState);
        }
        break;
        case DockingProcessBlock::terminationstate_7:
        {
            terminationstate_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDockingProcessBlock::terminationstate_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_7");
}

void OMAnimatedDockingProcessBlock::ManualState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ManualState");
}

void OMAnimatedDockingProcessBlock::IdleTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.IdleTruck");
}

void OMAnimatedDockingProcessBlock::Docking_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Docking");
    switch (myReal->Docking_subState) {
        case DockingProcessBlock::MoveTheTruck:
        {
            MoveTheTruck_serializeStates(aomsState);
        }
        break;
        case DockingProcessBlock::BeginMovement:
        {
            BeginMovement_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDockingProcessBlock::MoveTheTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Docking.MoveTheTruck");
}

void OMAnimatedDockingProcessBlock::BeginMovement_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Docking.BeginMovement");
}

void OMAnimatedDockingProcessBlock::AutonomousState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AutonomousState");
}
//#]

IMPLEMENT_REACTIVE_META_P(DockingProcessBlock, ANGELSPkg_DockingPkg, ANGELSPkg::DockingPkg, false, OMAnimatedDockingProcessBlock)

IMPLEMENT_META_OP(OMAnimatedDockingProcessBlock, ANGELSPkg_DockingPkg_DockingProcessBlock_setDSInput_double, "setDSInput", FALSE, "setDSInput(double)", 1)

IMPLEMENT_OP_CALL(ANGELSPkg_DockingPkg_DockingProcessBlock_setDSInput_double, DockingProcessBlock, setDSInput(p_DSInput), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\DockingProcessBlock.cpp
*********************************************************************/

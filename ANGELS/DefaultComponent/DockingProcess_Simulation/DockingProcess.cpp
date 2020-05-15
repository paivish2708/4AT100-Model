/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcess_Simulation
	Model Element	: DockingProcess
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\DockingProcess_Simulation\DockingProcess.cpp
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
#include "DockingProcess.h"
//#[ ignore
#define ANGELSPkg_DockingProcessPkg_DockingProcess_MoveTruck_SERIALIZE \
    aomsmethod->addAttribute("SteeringAngle", x2String(SteeringAngle));\
    aomsmethod->addAttribute("speed", x2String(speed));\
    aomsmethod->addAttribute("DockingState", x2String(DockingState));
#define ANGELSPkg_DockingProcessPkg_DockingProcess_DockingProcess_SERIALIZE OM_NO_OP

#define ANGELSPkg_DockingProcessPkg_DockingProcess_CheckDockingStatus_SERIALIZE OM_NO_OP

#define ANGELSPkg_DockingProcessPkg_DockingProcess_DockInput_SERIALIZE aomsmethod->addAttribute("DS", x2String(DS));
//#]

//## package ANGELSPkg::DockingProcessPkg

//## class DockingProcess
void DockingProcess::MoveTruck(double SteeringAngle, double speed, double DockingState) {
    NOTIFY_OPERATION(MoveTruck, MoveTruck(double,double,double), 3, ANGELSPkg_DockingProcessPkg_DockingProcess_MoveTruck_SERIALIZE);
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

ANGELS* DockingProcess::getItsANGELS() const {
    return itsANGELS;
}

void DockingProcess::setItsANGELS(ANGELS* p_ANGELS) {
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

DCOperator* DockingProcess::getItsDCOperator() const {
    return itsDCOperator;
}

void DockingProcess::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsDockingProcess_1(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Truck* DockingProcess::getItsTruck() const {
    return (Truck*) &itsTruck;
}

bool DockingProcess::startBehavior() {
    bool done = true;
    done &= itsLoading_Process.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void DockingProcess::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Docking_subState = OMNonState;
    Docking_timeout = NULL;
}

void DockingProcess::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            DockingProcess* p_DockingProcess = itsDCOperator->getItsDockingProcess_1();
            if(p_DockingProcess != NULL)
                {
                    itsDCOperator->__setItsDockingProcess_1(NULL);
                }
            itsDCOperator = NULL;
        }
}

void DockingProcess::cancelTimeouts() {
    cancel(Docking_timeout);
}

bool DockingProcess::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Docking_timeout == arg)
        {
            Docking_timeout = NULL;
            res = true;
        }
    return res;
}

void DockingProcess::__setItsDCOperator(DCOperator* p_DCOperator) {
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

void DockingProcess::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsDockingProcess_1(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void DockingProcess::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

DockingProcess::DockingProcess(IOxfActive* theActiveContext) : DSInput(1), DockingStatus(1), DockingTime(10), Doorstatus(1), Speed(15), SteerAngle(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(DockingProcess, DockingProcess(), 0, ANGELSPkg_DockingProcessPkg_DockingProcess_DockingProcess_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsLoading_Process.setShouldDelete(false);
        }
    }
    itsANGELS = NULL;
    itsDCOperator = NULL;
    initStatechart();
}

DockingProcess::~DockingProcess() {
    NOTIFY_DESTRUCTOR(~DockingProcess, true);
    cleanUpRelations();
    cancelTimeouts();
}

void DockingProcess::CheckDockingStatus() {
    NOTIFY_OPERATION(CheckDockingStatus, CheckDockingStatus(), 0, ANGELSPkg_DockingProcessPkg_DockingProcess_CheckDockingStatus_SERIALIZE);
    //#[ operation CheckDockingStatus()
    if (DockingStatus != 0)
    {   Speed = 0;
        SteerAngle = 0 ; }
     
    //#]
}

void DockingProcess::DockInput(double DS) {
    NOTIFY_OPERATION(DockInput, DockInput(double), 1, ANGELSPkg_DockingProcessPkg_DockingProcess_DockInput_SERIALIZE);
    //#[ operation DockInput(double)
    DSInput = DS;
    //#]
}

double DockingProcess::getDSInput() const {
    return DSInput;
}

void DockingProcess::setDSInput(double p_DSInput) {
    DSInput = p_DSInput;
}

double DockingProcess::getDockingStatus() const {
    return DockingStatus;
}

void DockingProcess::setDockingStatus(double p_DockingStatus) {
    DockingStatus = p_DockingStatus;
}

double DockingProcess::getDockingTime() const {
    return DockingTime;
}

void DockingProcess::setDockingTime(double p_DockingTime) {
    DockingTime = p_DockingTime;
}

RhpBoolean DockingProcess::getDoorstatus() const {
    return Doorstatus;
}

void DockingProcess::setDoorstatus(RhpBoolean p_Doorstatus) {
    Doorstatus = p_Doorstatus;
}

double DockingProcess::getSpeed() const {
    return Speed;
}

void DockingProcess::setSpeed(double p_Speed) {
    Speed = p_Speed;
}

double DockingProcess::getSteerAngle() const {
    return SteerAngle;
}

void DockingProcess::setSteerAngle(double p_SteerAngle) {
    SteerAngle = p_SteerAngle;
}

Loading_Process* DockingProcess::getItsLoading_Process() const {
    return (Loading_Process*) &itsLoading_Process;
}

void DockingProcess::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsLoading_Process.setActiveContext(theActiveContext, false);
    }
}

void DockingProcess::destroy() {
    itsLoading_Process.destroy();
    OMReactive::destroy();
}

void DockingProcess::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.ManualState");
        rootState_subState = ManualState;
        rootState_active = ManualState;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus DockingProcess::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State ManualState
        case ManualState:
        {
            if(IS_EVENT_TYPE_OF(Autonomousmode_DockingProcessPkg_ANGELSPkg_id))
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
            if(IS_EVENT_TYPE_OF(StartDockingProcedure_DockingProcessPkg_ANGELSPkg_id))
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
            if(IS_EVENT_TYPE_OF(EndDocking_DockingProcessPkg_ANGELSPkg_id))
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
            if(IS_EVENT_TYPE_OF(BeginTruckMovement_DockingProcessPkg_ANGELSPkg_id))
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

void DockingProcess::Docking_entDef() {
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
void OMAnimatedDockingProcess::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("DockingStatus", x2String(myReal->DockingStatus));
    aomsAttributes->addAttribute("DockingTime", x2String(myReal->DockingTime));
    aomsAttributes->addAttribute("Doorstatus", x2String(myReal->Doorstatus));
    aomsAttributes->addAttribute("DSInput", x2String(myReal->DSInput));
    aomsAttributes->addAttribute("Speed", x2String(myReal->Speed));
    aomsAttributes->addAttribute("SteerAngle", x2String(myReal->SteerAngle));
}

void OMAnimatedDockingProcess::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCOperator", false, true);
    if(myReal->itsDCOperator)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator);
        }
    aomsRelations->addRelation("itsTruck", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTruck);
    aomsRelations->addRelation("itsLoading_Process", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLoading_Process);
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}

void OMAnimatedDockingProcess::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case DockingProcess::ManualState:
        {
            ManualState_serializeStates(aomsState);
        }
        break;
        case DockingProcess::AutonomousState:
        {
            AutonomousState_serializeStates(aomsState);
        }
        break;
        case DockingProcess::Docking:
        {
            Docking_serializeStates(aomsState);
        }
        break;
        case DockingProcess::IdleTruck:
        {
            IdleTruck_serializeStates(aomsState);
        }
        break;
        case DockingProcess::terminationstate_7:
        {
            terminationstate_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDockingProcess::terminationstate_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_7");
}

void OMAnimatedDockingProcess::ManualState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ManualState");
}

void OMAnimatedDockingProcess::IdleTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.IdleTruck");
}

void OMAnimatedDockingProcess::Docking_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Docking");
    switch (myReal->Docking_subState) {
        case DockingProcess::MoveTheTruck:
        {
            MoveTheTruck_serializeStates(aomsState);
        }
        break;
        case DockingProcess::BeginMovement:
        {
            BeginMovement_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDockingProcess::MoveTheTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Docking.MoveTheTruck");
}

void OMAnimatedDockingProcess::BeginMovement_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Docking.BeginMovement");
}

void OMAnimatedDockingProcess::AutonomousState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AutonomousState");
}
//#]

IMPLEMENT_REACTIVE_META_P(DockingProcess, ANGELSPkg_DockingProcessPkg, ANGELSPkg::DockingProcessPkg, false, OMAnimatedDockingProcess)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DockingProcess_Simulation\DockingProcess.cpp
*********************************************************************/

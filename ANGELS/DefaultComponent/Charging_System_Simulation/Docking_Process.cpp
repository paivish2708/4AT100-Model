/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Docking_Process
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Docking_Process.cpp
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
#include "Docking_Process.h"
//#[ ignore
#define ANGELSPkg_DockingProcessPkg_Docking_Process_MoveTruck_SERIALIZE \
    aomsmethod->addAttribute("SteeringAngle", x2String(SteeringAngle));\
    aomsmethod->addAttribute("speed", x2String(speed));\
    aomsmethod->addAttribute("DockingState", x2String(DockingState));
#define ANGELSPkg_DockingProcessPkg_Docking_Process_Docking_Process_SERIALIZE OM_NO_OP

#define ANGELSPkg_DockingProcessPkg_Docking_Process_CheckDockingStatus_SERIALIZE OM_NO_OP

#define ANGELSPkg_DockingProcessPkg_Docking_Process_DockInput_SERIALIZE aomsmethod->addAttribute("DS", x2String(DS));
//#]

//## package ANGELSPkg::DockingProcessPkg

//## class Docking_Process
void Docking_Process::MoveTruck(double SteeringAngle, double speed, double DockingState) {
    NOTIFY_OPERATION(MoveTruck, MoveTruck(double,double,double), 3, ANGELSPkg_DockingProcessPkg_Docking_Process_MoveTruck_SERIALIZE);
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

ANGELS* Docking_Process::getItsANGELS() const {
    return itsANGELS;
}

void Docking_Process::setItsANGELS(ANGELS* p_ANGELS) {
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

DCOperator* Docking_Process::getItsDCOperator() const {
    return itsDCOperator;
}

void Docking_Process::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsDocking_Process(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Truck* Docking_Process::getItsTruck() const {
    return (Truck*) &itsTruck;
}

Truck* Docking_Process::getItsTruck_1() const {
    return itsTruck_1;
}

void Docking_Process::setItsTruck_1(Truck* p_Truck) {
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

bool Docking_Process::startBehavior() {
    bool done = true;
    done &= itsLoading_Process.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Docking_Process::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Docking_subState = OMNonState;
    Docking_timeout = NULL;
}

void Docking_Process::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            Docking_Process* p_Docking_Process = itsDCOperator->getItsDocking_Process();
            if(p_Docking_Process != NULL)
                {
                    itsDCOperator->__setItsDocking_Process(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsTruck_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_1");
            itsTruck_1 = NULL;
        }
}

void Docking_Process::cancelTimeouts() {
    cancel(Docking_timeout);
}

bool Docking_Process::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Docking_timeout == arg)
        {
            Docking_timeout = NULL;
            res = true;
        }
    return res;
}

void Docking_Process::__setItsDCOperator(DCOperator* p_DCOperator) {
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

void Docking_Process::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsDocking_Process(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void Docking_Process::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

Docking_Process::Docking_Process(IOxfActive* theActiveContext) : DSInput(1), DockingStatus(1), DockingTime(10), Doorstatus(1), Speed(15), SteerAngle(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Docking_Process, Docking_Process(), 0, ANGELSPkg_DockingProcessPkg_Docking_Process_Docking_Process_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsLoading_Process.setShouldDelete(false);
        }
    }
    itsANGELS = NULL;
    itsDCOperator = NULL;
    itsTruck_1 = NULL;
    initStatechart();
}

Docking_Process::~Docking_Process() {
    NOTIFY_DESTRUCTOR(~Docking_Process, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Docking_Process::CheckDockingStatus() {
    NOTIFY_OPERATION(CheckDockingStatus, CheckDockingStatus(), 0, ANGELSPkg_DockingProcessPkg_Docking_Process_CheckDockingStatus_SERIALIZE);
    //#[ operation CheckDockingStatus()
    if (DockingStatus != 0)
    {   Speed = 0;
        SteerAngle = 0 ; }
     
    //#]
}

void Docking_Process::DockInput(double DS) {
    NOTIFY_OPERATION(DockInput, DockInput(double), 1, ANGELSPkg_DockingProcessPkg_Docking_Process_DockInput_SERIALIZE);
    //#[ operation DockInput(double)
    DSInput = DS;
    //#]
}

double Docking_Process::getDSInput() const {
    return DSInput;
}

void Docking_Process::setDSInput(double p_DSInput) {
    DSInput = p_DSInput;
}

double Docking_Process::getDockingStatus() const {
    return DockingStatus;
}

void Docking_Process::setDockingStatus(double p_DockingStatus) {
    DockingStatus = p_DockingStatus;
}

double Docking_Process::getDockingTime() const {
    return DockingTime;
}

void Docking_Process::setDockingTime(double p_DockingTime) {
    DockingTime = p_DockingTime;
}

RhpBoolean Docking_Process::getDoorstatus() const {
    return Doorstatus;
}

void Docking_Process::setDoorstatus(RhpBoolean p_Doorstatus) {
    Doorstatus = p_Doorstatus;
}

double Docking_Process::getSpeed() const {
    return Speed;
}

void Docking_Process::setSpeed(double p_Speed) {
    Speed = p_Speed;
}

double Docking_Process::getSteerAngle() const {
    return SteerAngle;
}

void Docking_Process::setSteerAngle(double p_SteerAngle) {
    SteerAngle = p_SteerAngle;
}

Loading_Process* Docking_Process::getItsLoading_Process() const {
    return (Loading_Process*) &itsLoading_Process;
}

void Docking_Process::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsLoading_Process.setActiveContext(theActiveContext, false);
    }
}

void Docking_Process::destroy() {
    itsLoading_Process.destroy();
    OMReactive::destroy();
}

void Docking_Process::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.ManualState");
        rootState_subState = ManualState;
        rootState_active = ManualState;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Docking_Process::rootState_processEvent() {
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

void Docking_Process::Docking_entDef() {
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
void OMAnimatedDocking_Process::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("DockingStatus", x2String(myReal->DockingStatus));
    aomsAttributes->addAttribute("DockingTime", x2String(myReal->DockingTime));
    aomsAttributes->addAttribute("Doorstatus", x2String(myReal->Doorstatus));
    aomsAttributes->addAttribute("DSInput", x2String(myReal->DSInput));
    aomsAttributes->addAttribute("Speed", x2String(myReal->Speed));
    aomsAttributes->addAttribute("SteerAngle", x2String(myReal->SteerAngle));
}

void OMAnimatedDocking_Process::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsTruck_1", false, true);
    if(myReal->itsTruck_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck_1);
        }
}

void OMAnimatedDocking_Process::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Docking_Process::ManualState:
        {
            ManualState_serializeStates(aomsState);
        }
        break;
        case Docking_Process::AutonomousState:
        {
            AutonomousState_serializeStates(aomsState);
        }
        break;
        case Docking_Process::Docking:
        {
            Docking_serializeStates(aomsState);
        }
        break;
        case Docking_Process::IdleTruck:
        {
            IdleTruck_serializeStates(aomsState);
        }
        break;
        case Docking_Process::terminationstate_7:
        {
            terminationstate_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDocking_Process::terminationstate_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_7");
}

void OMAnimatedDocking_Process::ManualState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ManualState");
}

void OMAnimatedDocking_Process::IdleTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.IdleTruck");
}

void OMAnimatedDocking_Process::Docking_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Docking");
    switch (myReal->Docking_subState) {
        case Docking_Process::MoveTheTruck:
        {
            MoveTheTruck_serializeStates(aomsState);
        }
        break;
        case Docking_Process::BeginMovement:
        {
            BeginMovement_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDocking_Process::MoveTheTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Docking.MoveTheTruck");
}

void OMAnimatedDocking_Process::BeginMovement_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Docking.BeginMovement");
}

void OMAnimatedDocking_Process::AutonomousState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AutonomousState");
}
//#]

IMPLEMENT_REACTIVE_META_P(Docking_Process, ANGELSPkg_DockingProcessPkg, ANGELSPkg::DockingProcessPkg, false, OMAnimatedDocking_Process)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Docking_Process.cpp
*********************************************************************/

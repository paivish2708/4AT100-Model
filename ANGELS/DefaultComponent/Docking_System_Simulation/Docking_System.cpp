/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Docking_System
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Docking_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Docking_System.h"
//## link itsDC
#include "DC.h"
//## link itsDCOperator
#include "DCOperator.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define UseCaseAnalysisPkg_DockingSystemPkg_Docking_System_Docking_System_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DockingSystemPkg_Docking_System_LoadingProcess_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_DockingSystemPkg_Docking_System_StoptheTruck_SERIALIZE aomsmethod->addAttribute("speed", x2String(speed));
//#]

//## package UseCaseAnalysisPkg::DockingSystemPkg

//## class Docking_System
//#[ ignore
Docking_System::LoadGoodsOfDocking_System::ActionCalloperation_1InActivityLoadGoodsOfDocking_System::ActionCalloperation_1InActivityLoadGoodsOfDocking_System(const OMString& id, LoadGoodsOfDocking_System& activity, Docking_System& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Docking_System::LoadGoodsOfDocking_System::ActionCalloperation_1InActivityLoadGoodsOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_1InActivityLoadGoodsOfDocking_System();
}

void Docking_System::LoadGoodsOfDocking_System::ActionCalloperation_1InActivityLoadGoodsOfDocking_System::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_1InActivityLoadGoodsOfDocking_System();
}

Docking_System::LoadGoodsOfDocking_System::ActionAccepttimeevent_2InActivityLoadGoodsOfDocking_System::ActionAccepttimeevent_2InActivityLoadGoodsOfDocking_System(const OMString& id, LoadGoodsOfDocking_System& activity, int duration, Docking_System& context) : OMTimeEventAction(id, activity, duration), mContext(&context) {
}

OMList<OMString> Docking_System::LoadGoodsOfDocking_System::ActionAccepttimeevent_2InActivityLoadGoodsOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepttimeevent_2InActivityLoadGoodsOfDocking_System();
}

Docking_System::LoadGoodsOfDocking_System::ActionFlowfinal_3InActivityLoadGoodsOfDocking_System::ActionFlowfinal_3InActivityLoadGoodsOfDocking_System(const OMString& id, LoadGoodsOfDocking_System& activity, Docking_System& context) : OMFlowFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> Docking_System::LoadGoodsOfDocking_System::ActionFlowfinal_3InActivityLoadGoodsOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionFlowfinal_3InActivityLoadGoodsOfDocking_System();
}

Docking_System::LoadGoodsOfDocking_System::LoadGoodsOfDocking_System(Docking_System& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionCalloperation_1InActivityLoadGoodsOfDocking_System* varCalloperation_1 = new ActionCalloperation_1InActivityLoadGoodsOfDocking_System("LoadGoods:ROOT.calloperation_1", *this, *mContext);
    ActionAccepttimeevent_2InActivityLoadGoodsOfDocking_System* varAccepttimeevent_2 = new ActionAccepttimeevent_2InActivityLoadGoodsOfDocking_System("LoadGoods:ROOT.accepttimeevent_2", *this, 10, *mContext);
    ActionFlowfinal_3InActivityLoadGoodsOfDocking_System* varFlowfinal_3 = new ActionFlowfinal_3InActivityLoadGoodsOfDocking_System("LoadGoods:ROOT.flowfinal_3", *this, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("LoadGoods:0", *this);
    
    // Setup flows
    new OMControlFlow("LoadGoods:0", *this, *varInitialNode0, *varCalloperation_1);
    new OMControlFlow("LoadGoods:1", *this, *varCalloperation_1, *varAccepttimeevent_2);
    new OMControlFlow("LoadGoods:2", *this, *varAccepttimeevent_2, *varFlowfinal_3);
}

Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_0InActivityMainFlowOfDocking_System::ActionAccepteventaction_0InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, IOxfEvent::ID eventId, Docking_System& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_0InActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityMainFlowOfDocking_System();
}

void Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_0InActivityMainFlowOfDocking_System::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_0InActivityMainFlowOfDocking_System();
}

Docking_System::MainFlowOfDocking_System::ActionAction_15InActivityMainFlowOfDocking_System::ActionAction_15InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, Docking_System& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionAction_15InActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_15InActivityMainFlowOfDocking_System(speed);
}

double Docking_System::MainFlowOfDocking_System::ActionAction_15InActivityMainFlowOfDocking_System::getSpeed() {
    return speed;
}

void Docking_System::MainFlowOfDocking_System::ActionAction_15InActivityMainFlowOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("speed", x2String(speed));
}

void Docking_System::MainFlowOfDocking_System::ActionAction_15InActivityMainFlowOfDocking_System::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_15InActivityMainFlowOfDocking_System(speed);
}

Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_16InActivityMainFlowOfDocking_System::ActionAccepteventaction_16InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, IOxfEvent::ID eventId, Docking_System& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_16InActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_16InActivityMainFlowOfDocking_System();
}

void Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_16InActivityMainFlowOfDocking_System::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_16InActivityMainFlowOfDocking_System();
}

Docking_System::MainFlowOfDocking_System::ActionActivityfinal_19InActivityMainFlowOfDocking_System::ActionActivityfinal_19InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, Docking_System& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionActivityfinal_19InActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_19InActivityMainFlowOfDocking_System();
}

Docking_System::MainFlowOfDocking_System::ActionStopTruckInActivityMainFlowOfDocking_System::ActionStopTruckInActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& parentActivity, StopTruckOfDocking_System& calledActivity, Docking_System& context) : OMCallBehaviorAction(id, parentActivity, calledActivity), mContext(&context), mCalledActivity(&calledActivity) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionStopTruckInActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionStopTruckInActivityMainFlowOfDocking_System(speed);
}

void Docking_System::MainFlowOfDocking_System::ActionStopTruckInActivityMainFlowOfDocking_System::setPinsFromParameters() {
}

void Docking_System::MainFlowOfDocking_System::ActionStopTruckInActivityMainFlowOfDocking_System::setParametersFromPins() {
    mCalledActivity->setSpeed(speed);
}

void Docking_System::MainFlowOfDocking_System::ActionStopTruckInActivityMainFlowOfDocking_System::setSpeed(double value) {
    this->speed = value;
}

Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_21InActivityMainFlowOfDocking_System::ActionAccepteventaction_21InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, IOxfEvent::ID eventId, Docking_System& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_21InActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_21InActivityMainFlowOfDocking_System();
}

void Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_21InActivityMainFlowOfDocking_System::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_21InActivityMainFlowOfDocking_System();
}

Docking_System::MainFlowOfDocking_System::ActionLoadGoodsInActivityMainFlowOfDocking_System::ActionLoadGoodsInActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& parentActivity, LoadGoodsOfDocking_System& calledActivity, Docking_System& context) : OMCallBehaviorAction(id, parentActivity, calledActivity), mContext(&context), mCalledActivity(&calledActivity) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionLoadGoodsInActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionLoadGoodsInActivityMainFlowOfDocking_System();
}

void Docking_System::MainFlowOfDocking_System::ActionLoadGoodsInActivityMainFlowOfDocking_System::setPinsFromParameters() {
}

void Docking_System::MainFlowOfDocking_System::ActionLoadGoodsInActivityMainFlowOfDocking_System::setParametersFromPins() {
}

Docking_System::MainFlowOfDocking_System::DataFlow2InActivityMainFlowOfDocking_System::DataFlow2InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& context, ActionAction_15InActivityMainFlowOfDocking_System& sourceAction, ActionStopTruckInActivityMainFlowOfDocking_System& targetAction) : OMDataFlow<double>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void Docking_System::MainFlowOfDocking_System::DataFlow2InActivityMainFlowOfDocking_System::giveToken() {
    dataTarget->setSpeed(dequeueToken());
}

void Docking_System::MainFlowOfDocking_System::DataFlow2InActivityMainFlowOfDocking_System::takeToken() {
    enqueueToken(dataSource->getSpeed());
}

void Docking_System::MainFlowOfDocking_System::DataFlow2InActivityMainFlowOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
    if(getTokenCount() > 0)
    {
    	tokens.setCount(getTokenCount());
    	for(int i = 0 ; i < getTokenCount() ; i++)
    	{
    		char idx[10];
    		OMitoa(i, idx, 10);
    		tokens.addAttribute(idx, x2String(mTokens.getAt(i)));
    	}
    }
}

Docking_System::MainFlowOfDocking_System::MainFlowOfDocking_System(Docking_System& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionAccepteventaction_0InActivityMainFlowOfDocking_System* varAccepteventaction_0 = new ActionAccepteventaction_0InActivityMainFlowOfDocking_System("MainFlow:ROOT.accepteventaction_0", *this, StartDockingProcedure_DockingSystemPkg_UseCaseAnalysisPkg_id, *mContext);
    ActionAction_15InActivityMainFlowOfDocking_System* varAction_15 = new ActionAction_15InActivityMainFlowOfDocking_System("MainFlow:ROOT.action_15", *this, *mContext);
    ActionAccepteventaction_16InActivityMainFlowOfDocking_System* varAccepteventaction_16 = new ActionAccepteventaction_16InActivityMainFlowOfDocking_System("MainFlow:ROOT.accepteventaction_16", *this, CloseDoors_DockingSystemPkg_UseCaseAnalysisPkg_id, *mContext);
    ActionActivityfinal_19InActivityMainFlowOfDocking_System* varActivityfinal_19 = new ActionActivityfinal_19InActivityMainFlowOfDocking_System("MainFlow:ROOT.activityfinal_19", *this, *mContext);
    ActionStopTruckInActivityMainFlowOfDocking_System* varStopTruck = new ActionStopTruckInActivityMainFlowOfDocking_System("MainFlow:ROOT.StopTruck", *this, *(new StopTruckOfDocking_System(context)), *mContext);
    ActionAccepteventaction_21InActivityMainFlowOfDocking_System* varAccepteventaction_21 = new ActionAccepteventaction_21InActivityMainFlowOfDocking_System("MainFlow:ROOT.accepteventaction_21", *this, OpenDoors_DockingSystemPkg_UseCaseAnalysisPkg_id, *mContext);
    ActionLoadGoodsInActivityMainFlowOfDocking_System* varLoadGoods = new ActionLoadGoodsInActivityMainFlowOfDocking_System("MainFlow:ROOT.LoadGoods", *this, *(new LoadGoodsOfDocking_System(context)), *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("MainFlow:0", *this);
    
    // Setup flows
    new OMControlFlow("MainFlow:0", *this, *varInitialNode0, *varAccepteventaction_0);
    new OMControlFlow("MainFlow:1", *this, *varAccepteventaction_0, *varAction_15);
    new DataFlow2InActivityMainFlowOfDocking_System("MainFlow:2", *this, *varAction_15, *varStopTruck);
    new OMControlFlow("MainFlow:3", *this, *varStopTruck, *varAccepteventaction_21);
    new OMControlFlow("MainFlow:4", *this, *varAccepteventaction_16, *varActivityfinal_19);
    new OMControlFlow("MainFlow:5", *this, *varLoadGoods, *varAccepteventaction_16);
    new OMControlFlow("MainFlow:6", *this, *varAccepteventaction_21, *varLoadGoods);
}

Docking_System::StopTruckOfDocking_System::ActionCalloperation_0InActivityStopTruckOfDocking_System::ActionCalloperation_0InActivityStopTruckOfDocking_System(const OMString& id, StopTruckOfDocking_System& activity, Docking_System& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Docking_System::StopTruckOfDocking_System::ActionCalloperation_0InActivityStopTruckOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_0InActivityStopTruckOfDocking_System(speed);
}

void Docking_System::StopTruckOfDocking_System::ActionCalloperation_0InActivityStopTruckOfDocking_System::setSpeed(double value) {
    this->speed = value;
}

void Docking_System::StopTruckOfDocking_System::ActionCalloperation_0InActivityStopTruckOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("speed", x2String(speed));
}

void Docking_System::StopTruckOfDocking_System::ActionCalloperation_0InActivityStopTruckOfDocking_System::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_0InActivityStopTruckOfDocking_System(speed);
}

Docking_System::StopTruckOfDocking_System::ActionFlowfinal_1InActivityStopTruckOfDocking_System::ActionFlowfinal_1InActivityStopTruckOfDocking_System(const OMString& id, StopTruckOfDocking_System& activity, Docking_System& context) : OMFlowFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> Docking_System::StopTruckOfDocking_System::ActionFlowfinal_1InActivityStopTruckOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionFlowfinal_1InActivityStopTruckOfDocking_System();
}

Docking_System::StopTruckOfDocking_System::DataFlow0InActivityStopTruckOfDocking_System::DataFlow0InActivityStopTruckOfDocking_System(const OMString& id, StopTruckOfDocking_System& context, ActionCalloperation_0InActivityStopTruckOfDocking_System& targetAction) : OMDataFlow<double>(id, context, *(new OMInitialAction("speed", context)), targetAction), dataSource(&context), dataTarget(&targetAction) {
}

void Docking_System::StopTruckOfDocking_System::DataFlow0InActivityStopTruckOfDocking_System::giveToken() {
    dataTarget->setSpeed(dequeueToken());
}

void Docking_System::StopTruckOfDocking_System::DataFlow0InActivityStopTruckOfDocking_System::takeToken() {
    enqueueToken(dataSource->getSpeed());
}

void Docking_System::StopTruckOfDocking_System::DataFlow0InActivityStopTruckOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
    if(getTokenCount() > 0)
    {
    	tokens.setCount(getTokenCount());
    	for(int i = 0 ; i < getTokenCount() ; i++)
    	{
    		char idx[10];
    		OMitoa(i, idx, 10);
    		tokens.addAttribute(idx, x2String(mTokens.getAt(i)));
    	}
    }
}

Docking_System::StopTruckOfDocking_System::StopTruckOfDocking_System(Docking_System& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionCalloperation_0InActivityStopTruckOfDocking_System* varCalloperation_0 = new ActionCalloperation_0InActivityStopTruckOfDocking_System("StopTruck:ROOT.calloperation_0", *this, *mContext);
    ActionFlowfinal_1InActivityStopTruckOfDocking_System* varFlowfinal_1 = new ActionFlowfinal_1InActivityStopTruckOfDocking_System("StopTruck:ROOT.flowfinal_1", *this, *mContext);
    
    // Setup flows
    new DataFlow0InActivityStopTruckOfDocking_System("StopTruck:0", *this, *varCalloperation_0);
    new OMControlFlow("StopTruck:1", *this, *varCalloperation_0, *varFlowfinal_1);
}

double Docking_System::StopTruckOfDocking_System::getSpeed() {
    return speed;
}

void Docking_System::StopTruckOfDocking_System::setSpeed(double value) {
    this->speed = value;
}
//#]

Docking_System::Docking_System() : CheckDoorStatus(true) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(Docking_System, Docking_System(), 0, UseCaseAnalysisPkg_DockingSystemPkg_Docking_System_Docking_System_SERIALIZE);
    itsDC = NULL;
    itsDCOperator = NULL;
    itsTruck = NULL;
}

Docking_System::~Docking_System() {
    NOTIFY_DESTRUCTOR(~Docking_System, true);
    cleanUpRelations();
}

void Docking_System::LoadingProcess() {
    NOTIFY_OPERATION(LoadingProcess, LoadingProcess(), 0, UseCaseAnalysisPkg_DockingSystemPkg_Docking_System_LoadingProcess_SERIALIZE);
    //#[ operation LoadingProcess()
    //#]
}

void Docking_System::StoptheTruck(double speed) {
    NOTIFY_OPERATION(StoptheTruck, StoptheTruck(double), 1, UseCaseAnalysisPkg_DockingSystemPkg_Docking_System_StoptheTruck_SERIALIZE);
    //#[ operation StoptheTruck(double)
    speed=0;    
    
    //#]
}

//#[ ignore
void* Docking_System::getMe() {
    return this;
}
//#]

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionCalloperation_1InActivityLoadGoodsOfDocking_System() {
    //#[ activity_action LoadGoods:ROOT.calloperation_1
    OMList<OMString> ans;
    ans.add("LoadGoods:1");
    return ans;
    //#]
}

void Docking_System::delegatedInvokeContextMethodFromActionCalloperation_1InActivityLoadGoodsOfDocking_System() {
    //#[ activity_action LoadGoods:ROOT.calloperation_1
    LoadingProcess();
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionAccepttimeevent_2InActivityLoadGoodsOfDocking_System() {
    //#[ activity_action LoadGoods:ROOT.accepttimeevent_2
    OMList<OMString> ans;
    ans.add("LoadGoods:2");
    return ans;
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionFlowfinal_3InActivityLoadGoodsOfDocking_System() {
    //#[ activity_action LoadGoods:ROOT.flowfinal_3
    OMList<OMString> ans;
    return ans;
    //#]
}

//#[ ignore
OMActivity* Docking_System::createMainActivity() {
    return new MainFlowOfDocking_System(*this);
}
//#]

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityMainFlowOfDocking_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_0
    OMList<OMString> ans;
    ans.add("MainFlow:1");
    return ans;
    //#]
}

void Docking_System::delegatedAcceptEventDataFromActionAccepteventaction_0InActivityMainFlowOfDocking_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_0
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionAction_15InActivityMainFlowOfDocking_System(double& speed) {
    //#[ activity_action MainFlow:ROOT.action_15
    OMList<OMString> ans;
    ans.add("MainFlow:2");
    return ans;
    //#]
}

void Docking_System::delegatedInvokeContextMethodFromActionAction_15InActivityMainFlowOfDocking_System(double& speed) {
    //#[ activity_action MainFlow:ROOT.action_15
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionAccepteventaction_16InActivityMainFlowOfDocking_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_16
    OMList<OMString> ans;
    ans.add("MainFlow:4");
    return ans;
    //#]
}

void Docking_System::delegatedAcceptEventDataFromActionAccepteventaction_16InActivityMainFlowOfDocking_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_16
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionActivityfinal_19InActivityMainFlowOfDocking_System() {
    //#[ activity_action MainFlow:ROOT.activityfinal_19
    OMList<OMString> ans;
    return ans;
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionStopTruckInActivityMainFlowOfDocking_System(double speed) {
    //#[ activity_action MainFlow:ROOT.StopTruck
    OMList<OMString> ans;
    if (CheckDoorStatus) { ans.add("MainFlow:3"); }
    return ans;
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionAccepteventaction_21InActivityMainFlowOfDocking_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_21
    OMList<OMString> ans;
    ans.add("MainFlow:6");
    return ans;
    //#]
}

void Docking_System::delegatedAcceptEventDataFromActionAccepteventaction_21InActivityMainFlowOfDocking_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_21
    CheckDoorStatus = ((OpenDoors*)getCurrentEvent())->CheckDoorStatus;
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionLoadGoodsInActivityMainFlowOfDocking_System() {
    //#[ activity_action MainFlow:ROOT.LoadGoods
    OMList<OMString> ans;
    ans.add("MainFlow:5");
    return ans;
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionCalloperation_0InActivityStopTruckOfDocking_System(double speed) {
    //#[ activity_action StopTruck:ROOT.calloperation_0
    OMList<OMString> ans;
    ans.add("StopTruck:1");
    return ans;
    //#]
}

void Docking_System::delegatedInvokeContextMethodFromActionCalloperation_0InActivityStopTruckOfDocking_System(double speed) {
    //#[ activity_action StopTruck:ROOT.calloperation_0
    StoptheTruck(speed);
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionFlowfinal_1InActivityStopTruckOfDocking_System() {
    //#[ activity_action StopTruck:ROOT.flowfinal_1
    OMList<OMString> ans;
    return ans;
    //#]
}

RhpBoolean Docking_System::getCheckDoorStatus() const {
    return CheckDoorStatus;
}

void Docking_System::setCheckDoorStatus(RhpBoolean p_CheckDoorStatus) {
    CheckDoorStatus = p_CheckDoorStatus;
}

double Docking_System::getDockingTime() const {
    return DockingTime;
}

void Docking_System::setDockingTime(double p_DockingTime) {
    DockingTime = p_DockingTime;
}

int Docking_System::getSpeed() const {
    return speed;
}

void Docking_System::setSpeed(int p_speed) {
    speed = p_speed;
}

DC* Docking_System::getItsDC() const {
    return itsDC;
}

void Docking_System::setItsDC(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsDocking_System_5(this);
        }
    _setItsDC(p_DC);
}

DCOperator* Docking_System::getItsDCOperator() const {
    return itsDCOperator;
}

void Docking_System::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsDocking_System(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Truck* Docking_System::getItsTruck() const {
    return itsTruck;
}

void Docking_System::setItsTruck(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDocking_System(this);
        }
    _setItsTruck(p_Truck);
}

bool Docking_System::startBehavior() {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

void Docking_System::cleanUpRelations() {
    if(itsDC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC");
            Docking_System* p_Docking_System = itsDC->getItsDocking_System_5();
            if(p_Docking_System != NULL)
                {
                    itsDC->__setItsDocking_System_5(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            Docking_System* p_Docking_System = itsDCOperator->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsDCOperator->__setItsDocking_System(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            Docking_System* p_Docking_System = itsTruck->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsTruck->__setItsDocking_System(NULL);
                }
            itsTruck = NULL;
        }
}

void Docking_System::__setItsDC(DC* p_DC) {
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

void Docking_System::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsDocking_System_5(NULL);
        }
    __setItsDC(p_DC);
}

void Docking_System::_clearItsDC() {
    NOTIFY_RELATION_CLEARED("itsDC");
    itsDC = NULL;
}

void Docking_System::__setItsDCOperator(DCOperator* p_DCOperator) {
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

void Docking_System::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsDocking_System(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void Docking_System::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void Docking_System::__setItsTruck(Truck* p_Truck) {
    itsTruck = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
        }
}

void Docking_System::_setItsTruck(Truck* p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsDocking_System(NULL);
        }
    __setItsTruck(p_Truck);
}

void Docking_System::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDocking_System::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("CheckDoorStatus", x2String(myReal->CheckDoorStatus));
    aomsAttributes->addAttribute("DockingTime", x2String(myReal->DockingTime));
    aomsAttributes->addAttribute("speed", x2String(myReal->speed));
}

void OMAnimatedDocking_System::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
}
//#]

IMPLEMENT_ACTIVITY_META_P(Docking_System, UseCaseAnalysisPkg_DockingSystemPkg, UseCaseAnalysisPkg::DockingSystemPkg, false, OMAnimatedDocking_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Docking_System.cpp
*********************************************************************/

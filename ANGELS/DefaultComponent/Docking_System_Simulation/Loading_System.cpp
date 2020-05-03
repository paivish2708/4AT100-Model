/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Loading_System
//!	Generated Date	: Sun, 3, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Loading_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Loading_System.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDC
#include "DC.h"
//## link itsDCOperator
#include "DCOperator.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg_Loading_System_Loading_System_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg_Loading_System_LoadingProcess_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg_Loading_System_StoptheTruck_SERIALIZE aomsmethod->addAttribute("speed", x2String(speed));
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg

//## class Loading_System
//#[ ignore
Loading_System::LoadGoodsOfLoading_System::ActionCalloperation_1InActivityLoadGoodsOfLoading_System::ActionCalloperation_1InActivityLoadGoodsOfLoading_System(const OMString& id, LoadGoodsOfLoading_System& activity, Loading_System& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Loading_System::LoadGoodsOfLoading_System::ActionCalloperation_1InActivityLoadGoodsOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_1InActivityLoadGoodsOfLoading_System();
}

void Loading_System::LoadGoodsOfLoading_System::ActionCalloperation_1InActivityLoadGoodsOfLoading_System::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_1InActivityLoadGoodsOfLoading_System();
}

Loading_System::LoadGoodsOfLoading_System::ActionAccepttimeevent_2InActivityLoadGoodsOfLoading_System::ActionAccepttimeevent_2InActivityLoadGoodsOfLoading_System(const OMString& id, LoadGoodsOfLoading_System& activity, int duration, Loading_System& context) : OMTimeEventAction(id, activity, duration), mContext(&context) {
}

OMList<OMString> Loading_System::LoadGoodsOfLoading_System::ActionAccepttimeevent_2InActivityLoadGoodsOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepttimeevent_2InActivityLoadGoodsOfLoading_System();
}

Loading_System::LoadGoodsOfLoading_System::ActionFlowfinal_3InActivityLoadGoodsOfLoading_System::ActionFlowfinal_3InActivityLoadGoodsOfLoading_System(const OMString& id, LoadGoodsOfLoading_System& activity, Loading_System& context) : OMFlowFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> Loading_System::LoadGoodsOfLoading_System::ActionFlowfinal_3InActivityLoadGoodsOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionFlowfinal_3InActivityLoadGoodsOfLoading_System();
}

Loading_System::LoadGoodsOfLoading_System::LoadGoodsOfLoading_System(Loading_System& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionCalloperation_1InActivityLoadGoodsOfLoading_System* varCalloperation_1 = new ActionCalloperation_1InActivityLoadGoodsOfLoading_System("LoadGoods:ROOT.calloperation_1", *this, *mContext);
    ActionAccepttimeevent_2InActivityLoadGoodsOfLoading_System* varAccepttimeevent_2 = new ActionAccepttimeevent_2InActivityLoadGoodsOfLoading_System("LoadGoods:ROOT.accepttimeevent_2", *this, 10, *mContext);
    ActionFlowfinal_3InActivityLoadGoodsOfLoading_System* varFlowfinal_3 = new ActionFlowfinal_3InActivityLoadGoodsOfLoading_System("LoadGoods:ROOT.flowfinal_3", *this, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("LoadGoods:0", *this);
    
    // Setup flows
    new OMControlFlow("LoadGoods:0", *this, *varInitialNode0, *varCalloperation_1);
    new OMControlFlow("LoadGoods:1", *this, *varCalloperation_1, *varAccepttimeevent_2);
    new OMControlFlow("LoadGoods:2", *this, *varAccepttimeevent_2, *varFlowfinal_3);
}

Loading_System::MainFlowOfLoading_System::ActionAccepteventaction_0InActivityMainFlowOfLoading_System::ActionAccepteventaction_0InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& activity, IOxfEvent::ID eventId, Loading_System& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> Loading_System::MainFlowOfLoading_System::ActionAccepteventaction_0InActivityMainFlowOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityMainFlowOfLoading_System();
}

void Loading_System::MainFlowOfLoading_System::ActionAccepteventaction_0InActivityMainFlowOfLoading_System::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_0InActivityMainFlowOfLoading_System();
}

Loading_System::MainFlowOfLoading_System::ActionAction_15InActivityMainFlowOfLoading_System::ActionAction_15InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& activity, Loading_System& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Loading_System::MainFlowOfLoading_System::ActionAction_15InActivityMainFlowOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_15InActivityMainFlowOfLoading_System(speed);
}

double Loading_System::MainFlowOfLoading_System::ActionAction_15InActivityMainFlowOfLoading_System::getSpeed() {
    return speed;
}

void Loading_System::MainFlowOfLoading_System::ActionAction_15InActivityMainFlowOfLoading_System::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("speed", x2String(speed));
}

void Loading_System::MainFlowOfLoading_System::ActionAction_15InActivityMainFlowOfLoading_System::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_15InActivityMainFlowOfLoading_System(speed);
}

Loading_System::MainFlowOfLoading_System::ActionAccepteventaction_16InActivityMainFlowOfLoading_System::ActionAccepteventaction_16InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& activity, IOxfEvent::ID eventId, Loading_System& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> Loading_System::MainFlowOfLoading_System::ActionAccepteventaction_16InActivityMainFlowOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_16InActivityMainFlowOfLoading_System();
}

void Loading_System::MainFlowOfLoading_System::ActionAccepteventaction_16InActivityMainFlowOfLoading_System::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_16InActivityMainFlowOfLoading_System();
}

Loading_System::MainFlowOfLoading_System::ActionActivityfinal_19InActivityMainFlowOfLoading_System::ActionActivityfinal_19InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& activity, Loading_System& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> Loading_System::MainFlowOfLoading_System::ActionActivityfinal_19InActivityMainFlowOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_19InActivityMainFlowOfLoading_System();
}

Loading_System::MainFlowOfLoading_System::ActionStopTruckInActivityMainFlowOfLoading_System::ActionStopTruckInActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& parentActivity, StopTruckOfLoading_System& calledActivity, Loading_System& context) : OMCallBehaviorAction(id, parentActivity, calledActivity), mContext(&context), mCalledActivity(&calledActivity) {
}

OMList<OMString> Loading_System::MainFlowOfLoading_System::ActionStopTruckInActivityMainFlowOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionStopTruckInActivityMainFlowOfLoading_System(speed);
}

void Loading_System::MainFlowOfLoading_System::ActionStopTruckInActivityMainFlowOfLoading_System::setPinsFromParameters() {
}

void Loading_System::MainFlowOfLoading_System::ActionStopTruckInActivityMainFlowOfLoading_System::setParametersFromPins() {
    mCalledActivity->setSpeed(speed);
}

void Loading_System::MainFlowOfLoading_System::ActionStopTruckInActivityMainFlowOfLoading_System::setSpeed(double value) {
    this->speed = value;
}

Loading_System::MainFlowOfLoading_System::ActionAccepteventaction_21InActivityMainFlowOfLoading_System::ActionAccepteventaction_21InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& activity, IOxfEvent::ID eventId, Loading_System& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> Loading_System::MainFlowOfLoading_System::ActionAccepteventaction_21InActivityMainFlowOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_21InActivityMainFlowOfLoading_System();
}

void Loading_System::MainFlowOfLoading_System::ActionAccepteventaction_21InActivityMainFlowOfLoading_System::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_21InActivityMainFlowOfLoading_System();
}

Loading_System::MainFlowOfLoading_System::ActionLoadGoodsInActivityMainFlowOfLoading_System::ActionLoadGoodsInActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& parentActivity, LoadGoodsOfLoading_System& calledActivity, Loading_System& context) : OMCallBehaviorAction(id, parentActivity, calledActivity), mContext(&context), mCalledActivity(&calledActivity) {
}

OMList<OMString> Loading_System::MainFlowOfLoading_System::ActionLoadGoodsInActivityMainFlowOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionLoadGoodsInActivityMainFlowOfLoading_System();
}

void Loading_System::MainFlowOfLoading_System::ActionLoadGoodsInActivityMainFlowOfLoading_System::setPinsFromParameters() {
}

void Loading_System::MainFlowOfLoading_System::ActionLoadGoodsInActivityMainFlowOfLoading_System::setParametersFromPins() {
}

Loading_System::MainFlowOfLoading_System::DataFlow2InActivityMainFlowOfLoading_System::DataFlow2InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& context, ActionAction_15InActivityMainFlowOfLoading_System& sourceAction, ActionStopTruckInActivityMainFlowOfLoading_System& targetAction) : OMDataFlow<double>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void Loading_System::MainFlowOfLoading_System::DataFlow2InActivityMainFlowOfLoading_System::giveToken() {
    dataTarget->setSpeed(dequeueToken());
}

void Loading_System::MainFlowOfLoading_System::DataFlow2InActivityMainFlowOfLoading_System::takeToken() {
    enqueueToken(dataSource->getSpeed());
}

void Loading_System::MainFlowOfLoading_System::DataFlow2InActivityMainFlowOfLoading_System::serializeTokens(AOMSAttributes& tokens) {
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

Loading_System::MainFlowOfLoading_System::MainFlowOfLoading_System(Loading_System& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionAccepteventaction_0InActivityMainFlowOfLoading_System* varAccepteventaction_0 = new ActionAccepteventaction_0InActivityMainFlowOfLoading_System("MainFlow:ROOT.accepteventaction_0", *this, StartLoadingProcedure_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id, *mContext);
    ActionAction_15InActivityMainFlowOfLoading_System* varAction_15 = new ActionAction_15InActivityMainFlowOfLoading_System("MainFlow:ROOT.action_15", *this, *mContext);
    ActionAccepteventaction_16InActivityMainFlowOfLoading_System* varAccepteventaction_16 = new ActionAccepteventaction_16InActivityMainFlowOfLoading_System("MainFlow:ROOT.accepteventaction_16", *this, CloseDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id, *mContext);
    ActionActivityfinal_19InActivityMainFlowOfLoading_System* varActivityfinal_19 = new ActionActivityfinal_19InActivityMainFlowOfLoading_System("MainFlow:ROOT.activityfinal_19", *this, *mContext);
    ActionStopTruckInActivityMainFlowOfLoading_System* varStopTruck = new ActionStopTruckInActivityMainFlowOfLoading_System("MainFlow:ROOT.StopTruck", *this, *(new StopTruckOfLoading_System(context)), *mContext);
    ActionAccepteventaction_21InActivityMainFlowOfLoading_System* varAccepteventaction_21 = new ActionAccepteventaction_21InActivityMainFlowOfLoading_System("MainFlow:ROOT.accepteventaction_21", *this, OpenDoors_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id, *mContext);
    ActionLoadGoodsInActivityMainFlowOfLoading_System* varLoadGoods = new ActionLoadGoodsInActivityMainFlowOfLoading_System("MainFlow:ROOT.LoadGoods", *this, *(new LoadGoodsOfLoading_System(context)), *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("MainFlow:0", *this);
    
    // Setup flows
    new OMControlFlow("MainFlow:0", *this, *varInitialNode0, *varAccepteventaction_0);
    new OMControlFlow("MainFlow:1", *this, *varAccepteventaction_0, *varAction_15);
    new DataFlow2InActivityMainFlowOfLoading_System("MainFlow:2", *this, *varAction_15, *varStopTruck);
    new OMControlFlow("MainFlow:3", *this, *varStopTruck, *varAccepteventaction_21);
    new OMControlFlow("MainFlow:4", *this, *varAccepteventaction_16, *varActivityfinal_19);
    new OMControlFlow("MainFlow:5", *this, *varLoadGoods, *varAccepteventaction_16);
    new OMControlFlow("MainFlow:6", *this, *varAccepteventaction_21, *varLoadGoods);
}

Loading_System::StopTruckOfLoading_System::ActionCalloperation_0InActivityStopTruckOfLoading_System::ActionCalloperation_0InActivityStopTruckOfLoading_System(const OMString& id, StopTruckOfLoading_System& activity, Loading_System& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Loading_System::StopTruckOfLoading_System::ActionCalloperation_0InActivityStopTruckOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_0InActivityStopTruckOfLoading_System(speed);
}

void Loading_System::StopTruckOfLoading_System::ActionCalloperation_0InActivityStopTruckOfLoading_System::setSpeed(double value) {
    this->speed = value;
}

void Loading_System::StopTruckOfLoading_System::ActionCalloperation_0InActivityStopTruckOfLoading_System::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("speed", x2String(speed));
}

void Loading_System::StopTruckOfLoading_System::ActionCalloperation_0InActivityStopTruckOfLoading_System::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_0InActivityStopTruckOfLoading_System(speed);
}

Loading_System::StopTruckOfLoading_System::ActionFlowfinal_1InActivityStopTruckOfLoading_System::ActionFlowfinal_1InActivityStopTruckOfLoading_System(const OMString& id, StopTruckOfLoading_System& activity, Loading_System& context) : OMFlowFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> Loading_System::StopTruckOfLoading_System::ActionFlowfinal_1InActivityStopTruckOfLoading_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionFlowfinal_1InActivityStopTruckOfLoading_System();
}

Loading_System::StopTruckOfLoading_System::DataFlow0InActivityStopTruckOfLoading_System::DataFlow0InActivityStopTruckOfLoading_System(const OMString& id, StopTruckOfLoading_System& context, ActionCalloperation_0InActivityStopTruckOfLoading_System& targetAction) : OMDataFlow<double>(id, context, *(new OMInitialAction("speed", context)), targetAction), dataSource(&context), dataTarget(&targetAction) {
}

void Loading_System::StopTruckOfLoading_System::DataFlow0InActivityStopTruckOfLoading_System::giveToken() {
    dataTarget->setSpeed(dequeueToken());
}

void Loading_System::StopTruckOfLoading_System::DataFlow0InActivityStopTruckOfLoading_System::takeToken() {
    enqueueToken(dataSource->getSpeed());
}

void Loading_System::StopTruckOfLoading_System::DataFlow0InActivityStopTruckOfLoading_System::serializeTokens(AOMSAttributes& tokens) {
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

Loading_System::StopTruckOfLoading_System::StopTruckOfLoading_System(Loading_System& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionCalloperation_0InActivityStopTruckOfLoading_System* varCalloperation_0 = new ActionCalloperation_0InActivityStopTruckOfLoading_System("StopTruck:ROOT.calloperation_0", *this, *mContext);
    ActionFlowfinal_1InActivityStopTruckOfLoading_System* varFlowfinal_1 = new ActionFlowfinal_1InActivityStopTruckOfLoading_System("StopTruck:ROOT.flowfinal_1", *this, *mContext);
    
    // Setup flows
    new DataFlow0InActivityStopTruckOfLoading_System("StopTruck:0", *this, *varCalloperation_0);
    new OMControlFlow("StopTruck:1", *this, *varCalloperation_0, *varFlowfinal_1);
}

double Loading_System::StopTruckOfLoading_System::getSpeed() {
    return speed;
}

void Loading_System::StopTruckOfLoading_System::setSpeed(double value) {
    this->speed = value;
}
//#]

Loading_System::Loading_System() : CheckDoorStatus(true) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(Loading_System, Loading_System(), 0, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg_Loading_System_Loading_System_SERIALIZE);
    itsANGELS = NULL;
    itsDC = NULL;
    itsDCOperator = NULL;
}

Loading_System::~Loading_System() {
    NOTIFY_DESTRUCTOR(~Loading_System, true);
    cleanUpRelations();
}

void Loading_System::LoadingProcess() {
    NOTIFY_OPERATION(LoadingProcess, LoadingProcess(), 0, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg_Loading_System_LoadingProcess_SERIALIZE);
    //#[ operation LoadingProcess()
    //#]
}

void Loading_System::StoptheTruck(double speed) {
    NOTIFY_OPERATION(StoptheTruck, StoptheTruck(double), 1, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg_Loading_System_StoptheTruck_SERIALIZE);
    //#[ operation StoptheTruck(double)
    speed=0;    
    
    //#]
}

//#[ ignore
void* Loading_System::getMe() {
    return this;
}
//#]

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionCalloperation_1InActivityLoadGoodsOfLoading_System() {
    //#[ activity_action LoadGoods:ROOT.calloperation_1
    OMList<OMString> ans;
    ans.add("LoadGoods:1");
    return ans;
    //#]
}

void Loading_System::delegatedInvokeContextMethodFromActionCalloperation_1InActivityLoadGoodsOfLoading_System() {
    //#[ activity_action LoadGoods:ROOT.calloperation_1
    LoadingProcess();
    //#]
}

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionAccepttimeevent_2InActivityLoadGoodsOfLoading_System() {
    //#[ activity_action LoadGoods:ROOT.accepttimeevent_2
    OMList<OMString> ans;
    ans.add("LoadGoods:2");
    return ans;
    //#]
}

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionFlowfinal_3InActivityLoadGoodsOfLoading_System() {
    //#[ activity_action LoadGoods:ROOT.flowfinal_3
    OMList<OMString> ans;
    return ans;
    //#]
}

//#[ ignore
OMActivity* Loading_System::createMainActivity() {
    return new MainFlowOfLoading_System(*this);
}
//#]

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityMainFlowOfLoading_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_0
    OMList<OMString> ans;
    ans.add("MainFlow:1");
    return ans;
    //#]
}

void Loading_System::delegatedAcceptEventDataFromActionAccepteventaction_0InActivityMainFlowOfLoading_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_0
    //#]
}

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionAction_15InActivityMainFlowOfLoading_System(double& speed) {
    //#[ activity_action MainFlow:ROOT.action_15
    OMList<OMString> ans;
    ans.add("MainFlow:2");
    return ans;
    //#]
}

void Loading_System::delegatedInvokeContextMethodFromActionAction_15InActivityMainFlowOfLoading_System(double& speed) {
    //#[ activity_action MainFlow:ROOT.action_15
    //#]
}

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionAccepteventaction_16InActivityMainFlowOfLoading_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_16
    OMList<OMString> ans;
    ans.add("MainFlow:4");
    return ans;
    //#]
}

void Loading_System::delegatedAcceptEventDataFromActionAccepteventaction_16InActivityMainFlowOfLoading_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_16
    //#]
}

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionActivityfinal_19InActivityMainFlowOfLoading_System() {
    //#[ activity_action MainFlow:ROOT.activityfinal_19
    OMList<OMString> ans;
    return ans;
    //#]
}

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionStopTruckInActivityMainFlowOfLoading_System(double speed) {
    //#[ activity_action MainFlow:ROOT.StopTruck
    OMList<OMString> ans;
    if (CheckDoorStatus) { ans.add("MainFlow:3"); }
    return ans;
    //#]
}

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionAccepteventaction_21InActivityMainFlowOfLoading_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_21
    OMList<OMString> ans;
    ans.add("MainFlow:6");
    return ans;
    //#]
}

void Loading_System::delegatedAcceptEventDataFromActionAccepteventaction_21InActivityMainFlowOfLoading_System() {
    //#[ activity_action MainFlow:ROOT.accepteventaction_21
    CheckDoorStatus = ((OpenDoors*)getCurrentEvent())->CheckDoorStatus;
    //#]
}

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionLoadGoodsInActivityMainFlowOfLoading_System() {
    //#[ activity_action MainFlow:ROOT.LoadGoods
    OMList<OMString> ans;
    ans.add("MainFlow:5");
    return ans;
    //#]
}

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionCalloperation_0InActivityStopTruckOfLoading_System(double speed) {
    //#[ activity_action StopTruck:ROOT.calloperation_0
    OMList<OMString> ans;
    ans.add("StopTruck:1");
    return ans;
    //#]
}

void Loading_System::delegatedInvokeContextMethodFromActionCalloperation_0InActivityStopTruckOfLoading_System(double speed) {
    //#[ activity_action StopTruck:ROOT.calloperation_0
    StoptheTruck(speed);
    //#]
}

OMList<OMString> Loading_System::delegatedFilterPassableFlowsFromActionFlowfinal_1InActivityStopTruckOfLoading_System() {
    //#[ activity_action StopTruck:ROOT.flowfinal_1
    OMList<OMString> ans;
    return ans;
    //#]
}

RhpBoolean Loading_System::getCheckDoorStatus() const {
    return CheckDoorStatus;
}

void Loading_System::setCheckDoorStatus(RhpBoolean p_CheckDoorStatus) {
    CheckDoorStatus = p_CheckDoorStatus;
}

double Loading_System::getDockingTime() const {
    return DockingTime;
}

void Loading_System::setDockingTime(double p_DockingTime) {
    DockingTime = p_DockingTime;
}

int Loading_System::getSpeed() const {
    return speed;
}

void Loading_System::setSpeed(int p_speed) {
    speed = p_speed;
}

ANGELS* Loading_System::getItsANGELS() const {
    return itsANGELS;
}

void Loading_System::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsLoading_System(this);
        }
    _setItsANGELS(p_ANGELS);
}

DC* Loading_System::getItsDC() const {
    return itsDC;
}

void Loading_System::setItsDC(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsLoading_System(this);
        }
    _setItsDC(p_DC);
}

DCOperator* Loading_System::getItsDCOperator() const {
    return itsDCOperator;
}

void Loading_System::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsLoading_System(this);
        }
    _setItsDCOperator(p_DCOperator);
}

bool Loading_System::startBehavior() {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

void Loading_System::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Loading_System* p_Loading_System = itsANGELS->getItsLoading_System();
            if(p_Loading_System != NULL)
                {
                    itsANGELS->__setItsLoading_System(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsDC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC");
            Loading_System* p_Loading_System = itsDC->getItsLoading_System();
            if(p_Loading_System != NULL)
                {
                    itsDC->__setItsLoading_System(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            Loading_System* p_Loading_System = itsDCOperator->getItsLoading_System();
            if(p_Loading_System != NULL)
                {
                    itsDCOperator->__setItsLoading_System(NULL);
                }
            itsDCOperator = NULL;
        }
}

void Loading_System::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Loading_System::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsLoading_System(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Loading_System::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void Loading_System::__setItsDC(DC* p_DC) {
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

void Loading_System::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsLoading_System(NULL);
        }
    __setItsDC(p_DC);
}

void Loading_System::_clearItsDC() {
    NOTIFY_RELATION_CLEARED("itsDC");
    itsDC = NULL;
}

void Loading_System::__setItsDCOperator(DCOperator* p_DCOperator) {
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

void Loading_System::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsLoading_System(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void Loading_System::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLoading_System::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("CheckDoorStatus", x2String(myReal->CheckDoorStatus));
    aomsAttributes->addAttribute("DockingTime", x2String(myReal->DockingTime));
    aomsAttributes->addAttribute("speed", x2String(myReal->speed));
}

void OMAnimatedLoading_System::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_ACTIVITY_META_P(Loading_System, UseCaseAnalysisPkg_ANGELSPkg_LoadingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg, false, OMAnimatedLoading_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Loading_System.cpp
*********************************************************************/

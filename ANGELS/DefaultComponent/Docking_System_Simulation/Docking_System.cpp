/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Docking_System
//!	Generated Date	: Sun, 3, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Docking_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Docking_System.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDCOperator
#include "DCOperator.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg_Docking_System_MoveTruck_SERIALIZE \
    aomsmethod->addAttribute("SteeringAngle", x2String(SteeringAngle));\
    aomsmethod->addAttribute("speed", x2String(speed));
#define UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg_Docking_System_Docking_System_SERIALIZE OM_NO_OP

#define UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg_Docking_System_PSInput_SERIALIZE aomsmethod->addAttribute("PS", x2String(PS));
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg

//## class Docking_System
//#[ ignore
Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_0InActivityMainFlowOfDocking_System::ActionAccepteventaction_0InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, IOxfEvent::ID eventId, Docking_System& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_0InActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityMainFlowOfDocking_System();
}

void Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_0InActivityMainFlowOfDocking_System::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_0InActivityMainFlowOfDocking_System();
}

Docking_System::MainFlowOfDocking_System::ActionParkingSpotInActivityMainFlowOfDocking_System::ActionParkingSpotInActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& parentActivity, ParkingSpotOfDocking_System& calledActivity, Docking_System& context) : OMCallBehaviorAction(id, parentActivity, calledActivity), mContext(&context), mCalledActivity(&calledActivity) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionParkingSpotInActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionParkingSpotInActivityMainFlowOfDocking_System(ParkingSpot);
}

void Docking_System::MainFlowOfDocking_System::ActionParkingSpotInActivityMainFlowOfDocking_System::setPinsFromParameters() {
}

void Docking_System::MainFlowOfDocking_System::ActionParkingSpotInActivityMainFlowOfDocking_System::setParametersFromPins() {
    mCalledActivity->setParkingSpot(ParkingSpot);
}

void Docking_System::MainFlowOfDocking_System::ActionParkingSpotInActivityMainFlowOfDocking_System::setParkingSpot(int value) {
    this->ParkingSpot = value;
}

Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_4InActivityMainFlowOfDocking_System::ActionAccepteventaction_4InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, IOxfEvent::ID eventId, Docking_System& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_4InActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_4InActivityMainFlowOfDocking_System(SteeringAngle, speed);
}

int Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_4InActivityMainFlowOfDocking_System::getSteeringAngle() {
    return SteeringAngle;
}

int Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_4InActivityMainFlowOfDocking_System::getSpeed() {
    return speed;
}

void Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_4InActivityMainFlowOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(2);
    tokens.addAttribute("SteeringAngle", x2String(SteeringAngle));
    tokens.addAttribute("speed", x2String(speed));
}

void Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_4InActivityMainFlowOfDocking_System::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_4InActivityMainFlowOfDocking_System(SteeringAngle, speed);
}

Docking_System::MainFlowOfDocking_System::ActionMoveTruckForwardInActivityMainFlowOfDocking_System::ActionMoveTruckForwardInActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& parentActivity, MoveTruckForwardOfDocking_System& calledActivity, Docking_System& context) : OMCallBehaviorAction(id, parentActivity, calledActivity), mContext(&context), mCalledActivity(&calledActivity) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionMoveTruckForwardInActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionMoveTruckForwardInActivityMainFlowOfDocking_System(speed, SteeringAngle);
}

void Docking_System::MainFlowOfDocking_System::ActionMoveTruckForwardInActivityMainFlowOfDocking_System::setPinsFromParameters() {
}

void Docking_System::MainFlowOfDocking_System::ActionMoveTruckForwardInActivityMainFlowOfDocking_System::setParametersFromPins() {
    mCalledActivity->setSpeed(speed);
    mCalledActivity->setSteeringAngle(SteeringAngle);
}

void Docking_System::MainFlowOfDocking_System::ActionMoveTruckForwardInActivityMainFlowOfDocking_System::setSpeed(int value) {
    this->speed = value;
}

void Docking_System::MainFlowOfDocking_System::ActionMoveTruckForwardInActivityMainFlowOfDocking_System::setSteeringAngle(int value) {
    this->SteeringAngle = value;
}

Docking_System::MainFlowOfDocking_System::ActionActivityfinal_8InActivityMainFlowOfDocking_System::ActionActivityfinal_8InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, Docking_System& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionActivityfinal_8InActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_8InActivityMainFlowOfDocking_System();
}

Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_9InActivityMainFlowOfDocking_System::ActionAccepteventaction_9InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, IOxfEvent::ID eventId, Docking_System& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_9InActivityMainFlowOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_9InActivityMainFlowOfDocking_System(ParkingSpot);
}

int Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_9InActivityMainFlowOfDocking_System::getParkingSpot() {
    return ParkingSpot;
}

void Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_9InActivityMainFlowOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("ParkingSpot", x2String(ParkingSpot));
}

void Docking_System::MainFlowOfDocking_System::ActionAccepteventaction_9InActivityMainFlowOfDocking_System::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_9InActivityMainFlowOfDocking_System(ParkingSpot);
}

Docking_System::MainFlowOfDocking_System::DataFlow2InActivityMainFlowOfDocking_System::DataFlow2InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& context, ActionAccepteventaction_9InActivityMainFlowOfDocking_System& sourceAction, ActionParkingSpotInActivityMainFlowOfDocking_System& targetAction) : OMDataFlow<int>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void Docking_System::MainFlowOfDocking_System::DataFlow2InActivityMainFlowOfDocking_System::giveToken() {
    dataTarget->setParkingSpot(dequeueToken());
}

void Docking_System::MainFlowOfDocking_System::DataFlow2InActivityMainFlowOfDocking_System::takeToken() {
    enqueueToken(dataSource->getParkingSpot());
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

Docking_System::MainFlowOfDocking_System::DataFlow4InActivityMainFlowOfDocking_System::DataFlow4InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& context, ActionAccepteventaction_4InActivityMainFlowOfDocking_System& sourceAction, ActionMoveTruckForwardInActivityMainFlowOfDocking_System& targetAction) : OMDataFlow<int>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void Docking_System::MainFlowOfDocking_System::DataFlow4InActivityMainFlowOfDocking_System::giveToken() {
    dataTarget->setSteeringAngle(dequeueToken());
}

void Docking_System::MainFlowOfDocking_System::DataFlow4InActivityMainFlowOfDocking_System::takeToken() {
    enqueueToken(dataSource->getSteeringAngle());
}

void Docking_System::MainFlowOfDocking_System::DataFlow4InActivityMainFlowOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
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

Docking_System::MainFlowOfDocking_System::DataFlow5InActivityMainFlowOfDocking_System::DataFlow5InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& context, ActionAccepteventaction_4InActivityMainFlowOfDocking_System& sourceAction, ActionMoveTruckForwardInActivityMainFlowOfDocking_System& targetAction) : OMDataFlow<int>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void Docking_System::MainFlowOfDocking_System::DataFlow5InActivityMainFlowOfDocking_System::giveToken() {
    dataTarget->setSpeed(dequeueToken());
}

void Docking_System::MainFlowOfDocking_System::DataFlow5InActivityMainFlowOfDocking_System::takeToken() {
    enqueueToken(dataSource->getSpeed());
}

void Docking_System::MainFlowOfDocking_System::DataFlow5InActivityMainFlowOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
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
    ActionAccepteventaction_0InActivityMainFlowOfDocking_System* varAccepteventaction_0 = new ActionAccepteventaction_0InActivityMainFlowOfDocking_System("MainFlow:ROOT.accepteventaction_0", *this, StartDockingProcedure_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id, *mContext);
    ActionParkingSpotInActivityMainFlowOfDocking_System* varParkingSpot = new ActionParkingSpotInActivityMainFlowOfDocking_System("MainFlow:ROOT.ParkingSpot", *this, *(new ParkingSpotOfDocking_System(context)), *mContext);
    ActionAccepteventaction_4InActivityMainFlowOfDocking_System* varAccepteventaction_4 = new ActionAccepteventaction_4InActivityMainFlowOfDocking_System("MainFlow:ROOT.accepteventaction_4", *this, BeginMovement_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id, *mContext);
    ActionMoveTruckForwardInActivityMainFlowOfDocking_System* varMoveTruckForward = new ActionMoveTruckForwardInActivityMainFlowOfDocking_System("MainFlow:ROOT.MoveTruckForward", *this, *(new MoveTruckForwardOfDocking_System(context)), *mContext);
    ActionActivityfinal_8InActivityMainFlowOfDocking_System* varActivityfinal_8 = new ActionActivityfinal_8InActivityMainFlowOfDocking_System("MainFlow:ROOT.activityfinal_8", *this, *mContext);
    ActionAccepteventaction_9InActivityMainFlowOfDocking_System* varAccepteventaction_9 = new ActionAccepteventaction_9InActivityMainFlowOfDocking_System("MainFlow:ROOT.accepteventaction_9", *this, DCManagerInput_DockingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("MainFlow:0", *this);
    
    // Setup flows
    new OMControlFlow("MainFlow:0", *this, *varInitialNode0, *varAccepteventaction_0);
    new OMControlFlow("MainFlow:1", *this, *varAccepteventaction_0, *varAccepteventaction_9);
    new DataFlow2InActivityMainFlowOfDocking_System("MainFlow:2", *this, *varAccepteventaction_9, *varParkingSpot);
    new OMControlFlow("MainFlow:3", *this, *varParkingSpot, *varAccepteventaction_4);
    new DataFlow4InActivityMainFlowOfDocking_System("MainFlow:4", *this, *varAccepteventaction_4, *varMoveTruckForward);
    new DataFlow5InActivityMainFlowOfDocking_System("MainFlow:5", *this, *varAccepteventaction_4, *varMoveTruckForward);
    new OMControlFlow("MainFlow:6", *this, *varMoveTruckForward, *varActivityfinal_8);
}

Docking_System::MoveTruckForwardOfDocking_System::ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System::ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System(const OMString& id, MoveTruckForwardOfDocking_System& activity, Docking_System& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Docking_System::MoveTruckForwardOfDocking_System::ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_2InActivityMoveTruckForwardOfDocking_System(SteeringAngle, speed);
}

void Docking_System::MoveTruckForwardOfDocking_System::ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System::setSteeringAngle(double value) {
    this->SteeringAngle = value;
}

void Docking_System::MoveTruckForwardOfDocking_System::ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System::setSpeed(double value) {
    this->speed = value;
}

void Docking_System::MoveTruckForwardOfDocking_System::ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(2);
    tokens.addAttribute("SteeringAngle", x2String(SteeringAngle));
    tokens.addAttribute("speed", x2String(speed));
}

void Docking_System::MoveTruckForwardOfDocking_System::ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_2InActivityMoveTruckForwardOfDocking_System(SteeringAngle, speed);
}

Docking_System::MoveTruckForwardOfDocking_System::ActionFlowfinal_4InActivityMoveTruckForwardOfDocking_System::ActionFlowfinal_4InActivityMoveTruckForwardOfDocking_System(const OMString& id, MoveTruckForwardOfDocking_System& activity, Docking_System& context) : OMFlowFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> Docking_System::MoveTruckForwardOfDocking_System::ActionFlowfinal_4InActivityMoveTruckForwardOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionFlowfinal_4InActivityMoveTruckForwardOfDocking_System();
}

Docking_System::MoveTruckForwardOfDocking_System::DataFlow0InActivityMoveTruckForwardOfDocking_System::DataFlow0InActivityMoveTruckForwardOfDocking_System(const OMString& id, MoveTruckForwardOfDocking_System& context, ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System& targetAction) : OMDataFlow<int>(id, context, *(new OMInitialAction("SteeringAngle", context)), targetAction), dataSource(&context), dataTarget(&targetAction) {
}

void Docking_System::MoveTruckForwardOfDocking_System::DataFlow0InActivityMoveTruckForwardOfDocking_System::giveToken() {
    dataTarget->setSteeringAngle(dequeueToken());
}

void Docking_System::MoveTruckForwardOfDocking_System::DataFlow0InActivityMoveTruckForwardOfDocking_System::takeToken() {
    enqueueToken(dataSource->getSteeringAngle());
}

void Docking_System::MoveTruckForwardOfDocking_System::DataFlow0InActivityMoveTruckForwardOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
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

Docking_System::MoveTruckForwardOfDocking_System::DataFlow1InActivityMoveTruckForwardOfDocking_System::DataFlow1InActivityMoveTruckForwardOfDocking_System(const OMString& id, MoveTruckForwardOfDocking_System& context, ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System& targetAction) : OMDataFlow<int>(id, context, *(new OMInitialAction("speed", context)), targetAction), dataSource(&context), dataTarget(&targetAction) {
}

void Docking_System::MoveTruckForwardOfDocking_System::DataFlow1InActivityMoveTruckForwardOfDocking_System::giveToken() {
    dataTarget->setSpeed(dequeueToken());
}

void Docking_System::MoveTruckForwardOfDocking_System::DataFlow1InActivityMoveTruckForwardOfDocking_System::takeToken() {
    enqueueToken(dataSource->getSpeed());
}

void Docking_System::MoveTruckForwardOfDocking_System::DataFlow1InActivityMoveTruckForwardOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
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

Docking_System::MoveTruckForwardOfDocking_System::MoveTruckForwardOfDocking_System(Docking_System& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System* varCalloperation_2 = new ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System("MoveTruckForward:ROOT.calloperation_2", *this, *mContext);
    ActionFlowfinal_4InActivityMoveTruckForwardOfDocking_System* varFlowfinal_4 = new ActionFlowfinal_4InActivityMoveTruckForwardOfDocking_System("MoveTruckForward:ROOT.flowfinal_4", *this, *mContext);
    
    // Setup flows
    new DataFlow0InActivityMoveTruckForwardOfDocking_System("MoveTruckForward:0", *this, *varCalloperation_2);
    new DataFlow1InActivityMoveTruckForwardOfDocking_System("MoveTruckForward:1", *this, *varCalloperation_2);
    new OMControlFlow("MoveTruckForward:2", *this, *varCalloperation_2, *varFlowfinal_4);
}

int Docking_System::MoveTruckForwardOfDocking_System::getSpeed() {
    return speed;
}

void Docking_System::MoveTruckForwardOfDocking_System::setSpeed(int value) {
    this->speed = value;
}

int Docking_System::MoveTruckForwardOfDocking_System::getSteeringAngle() {
    return SteeringAngle;
}

void Docking_System::MoveTruckForwardOfDocking_System::setSteeringAngle(int value) {
    this->SteeringAngle = value;
}

Docking_System::ParkingSpotOfDocking_System::ActionFlowfinal_1InActivityParkingSpotOfDocking_System::ActionFlowfinal_1InActivityParkingSpotOfDocking_System(const OMString& id, ParkingSpotOfDocking_System& activity, Docking_System& context) : OMFlowFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> Docking_System::ParkingSpotOfDocking_System::ActionFlowfinal_1InActivityParkingSpotOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionFlowfinal_1InActivityParkingSpotOfDocking_System();
}

Docking_System::ParkingSpotOfDocking_System::ActionCalloperation_3InActivityParkingSpotOfDocking_System::ActionCalloperation_3InActivityParkingSpotOfDocking_System(const OMString& id, ParkingSpotOfDocking_System& activity, Docking_System& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Docking_System::ParkingSpotOfDocking_System::ActionCalloperation_3InActivityParkingSpotOfDocking_System::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_3InActivityParkingSpotOfDocking_System(PS);
}

void Docking_System::ParkingSpotOfDocking_System::ActionCalloperation_3InActivityParkingSpotOfDocking_System::setPS(double value) {
    this->PS = value;
}

void Docking_System::ParkingSpotOfDocking_System::ActionCalloperation_3InActivityParkingSpotOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("PS", x2String(PS));
}

void Docking_System::ParkingSpotOfDocking_System::ActionCalloperation_3InActivityParkingSpotOfDocking_System::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_3InActivityParkingSpotOfDocking_System(PS);
}

Docking_System::ParkingSpotOfDocking_System::DataFlow0InActivityParkingSpotOfDocking_System::DataFlow0InActivityParkingSpotOfDocking_System(const OMString& id, ParkingSpotOfDocking_System& context, ActionCalloperation_3InActivityParkingSpotOfDocking_System& targetAction) : OMDataFlow<int>(id, context, *(new OMInitialAction("ParkingSpot", context)), targetAction), dataSource(&context), dataTarget(&targetAction) {
}

void Docking_System::ParkingSpotOfDocking_System::DataFlow0InActivityParkingSpotOfDocking_System::giveToken() {
    dataTarget->setPS(dequeueToken());
}

void Docking_System::ParkingSpotOfDocking_System::DataFlow0InActivityParkingSpotOfDocking_System::takeToken() {
    enqueueToken(dataSource->getParkingSpot());
}

void Docking_System::ParkingSpotOfDocking_System::DataFlow0InActivityParkingSpotOfDocking_System::serializeTokens(AOMSAttributes& tokens) {
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

Docking_System::ParkingSpotOfDocking_System::ParkingSpotOfDocking_System(Docking_System& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionFlowfinal_1InActivityParkingSpotOfDocking_System* varFlowfinal_1 = new ActionFlowfinal_1InActivityParkingSpotOfDocking_System("ParkingSpot:ROOT.flowfinal_1", *this, *mContext);
    ActionCalloperation_3InActivityParkingSpotOfDocking_System* varCalloperation_3 = new ActionCalloperation_3InActivityParkingSpotOfDocking_System("ParkingSpot:ROOT.calloperation_3", *this, *mContext);
    
    // Setup flows
    new DataFlow0InActivityParkingSpotOfDocking_System("ParkingSpot:0", *this, *varCalloperation_3);
    new OMControlFlow("ParkingSpot:1", *this, *varCalloperation_3, *varFlowfinal_1);
}

int Docking_System::ParkingSpotOfDocking_System::getParkingSpot() {
    return ParkingSpot;
}

void Docking_System::ParkingSpotOfDocking_System::setParkingSpot(int value) {
    this->ParkingSpot = value;
}
//#]

Docking_System::Docking_System() : ParkingSpotInput(1) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(Docking_System, Docking_System(), 0, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg_Docking_System_Docking_System_SERIALIZE);
    itsANGELS = NULL;
    itsCollision_Avoidance_1 = NULL;
    itsCollision_Detection_1 = NULL;
    itsDCOperator = NULL;
    itsTruck_1 = NULL;
}

Docking_System::~Docking_System() {
    NOTIFY_DESTRUCTOR(~Docking_System, true);
    cleanUpRelations();
}

void Docking_System::MoveTruck(double SteeringAngle, double speed) {
    NOTIFY_OPERATION(MoveTruck, MoveTruck(double,double), 2, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg_Docking_System_MoveTruck_SERIALIZE);
    //#[ operation MoveTruck(double,double)
    SteeringAngle = SteerAngle;
    speed = TruckSpeed;
    //#]
}

void Docking_System::PSInput(double PS) {
    NOTIFY_OPERATION(PSInput, PSInput(double), 1, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg_Docking_System_PSInput_SERIALIZE);
    //#[ operation PSInput(double)
    PS = ParkingSpotInput;
    //#]
}

//#[ ignore
OMActivity* Docking_System::createMainActivity() {
    return new MainFlowOfDocking_System(*this);
}

void* Docking_System::getMe() {
    return this;
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

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionParkingSpotInActivityMainFlowOfDocking_System(int ParkingSpot) {
    //#[ activity_action MainFlow:ROOT.ParkingSpot
    OMList<OMString> ans;
    ans.add("MainFlow:3");
    return ans;
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionAccepteventaction_4InActivityMainFlowOfDocking_System(int& SteeringAngle, int& speed) {
    //#[ activity_action MainFlow:ROOT.accepteventaction_4
    OMList<OMString> ans;
    ans.add("MainFlow:4");
    ans.add("MainFlow:5");
    return ans;
    //#]
}

void Docking_System::delegatedAcceptEventDataFromActionAccepteventaction_4InActivityMainFlowOfDocking_System(int& SteeringAngle, int& speed) {
    //#[ activity_action MainFlow:ROOT.accepteventaction_4
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionMoveTruckForwardInActivityMainFlowOfDocking_System(int speed, int SteeringAngle) {
    //#[ activity_action MainFlow:ROOT.MoveTruckForward
    OMList<OMString> ans;
    ans.add("MainFlow:6");
    return ans;
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionActivityfinal_8InActivityMainFlowOfDocking_System() {
    //#[ activity_action MainFlow:ROOT.activityfinal_8
    OMList<OMString> ans;
    return ans;
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionAccepteventaction_9InActivityMainFlowOfDocking_System(int& ParkingSpot) {
    //#[ activity_action MainFlow:ROOT.accepteventaction_9
    OMList<OMString> ans;
    ans.add("MainFlow:2");
    return ans;
    //#]
}

void Docking_System::delegatedAcceptEventDataFromActionAccepteventaction_9InActivityMainFlowOfDocking_System(int& ParkingSpot) {
    //#[ activity_action MainFlow:ROOT.accepteventaction_9
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionCalloperation_2InActivityMoveTruckForwardOfDocking_System(double SteeringAngle, double speed) {
    //#[ activity_action MoveTruckForward:ROOT.calloperation_2
    OMList<OMString> ans;
    ans.add("MoveTruckForward:2");
    return ans;
    //#]
}

void Docking_System::delegatedInvokeContextMethodFromActionCalloperation_2InActivityMoveTruckForwardOfDocking_System(double SteeringAngle, double speed) {
    //#[ activity_action MoveTruckForward:ROOT.calloperation_2
    MoveTruck(SteeringAngle, speed);
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionFlowfinal_4InActivityMoveTruckForwardOfDocking_System() {
    //#[ activity_action MoveTruckForward:ROOT.flowfinal_4
    OMList<OMString> ans;
    return ans;
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionFlowfinal_1InActivityParkingSpotOfDocking_System() {
    //#[ activity_action ParkingSpot:ROOT.flowfinal_1
    OMList<OMString> ans;
    return ans;
    //#]
}

OMList<OMString> Docking_System::delegatedFilterPassableFlowsFromActionCalloperation_3InActivityParkingSpotOfDocking_System(double PS) {
    //#[ activity_action ParkingSpot:ROOT.calloperation_3
    OMList<OMString> ans;
    ans.add("ParkingSpot:1");
    return ans;
    //#]
}

void Docking_System::delegatedInvokeContextMethodFromActionCalloperation_3InActivityParkingSpotOfDocking_System(double PS) {
    //#[ activity_action ParkingSpot:ROOT.calloperation_3
    PSInput(PS);
    //#]
}

double Docking_System::getParkingSpotInput() const {
    return ParkingSpotInput;
}

void Docking_System::setParkingSpotInput(double p_ParkingSpotInput) {
    ParkingSpotInput = p_ParkingSpotInput;
}

double Docking_System::getSteerAngle() const {
    return SteerAngle;
}

void Docking_System::setSteerAngle(double p_SteerAngle) {
    SteerAngle = p_SteerAngle;
}

double Docking_System::getTruckSpeed() const {
    return TruckSpeed;
}

void Docking_System::setTruckSpeed(double p_TruckSpeed) {
    TruckSpeed = p_TruckSpeed;
}

ANGELS* Docking_System::getItsANGELS() const {
    return itsANGELS;
}

void Docking_System::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsDocking_System(this);
        }
    _setItsANGELS(p_ANGELS);
}

Collision_Avoidance* Docking_System::getItsCollision_Avoidance() const {
    return (Collision_Avoidance*) &itsCollision_Avoidance;
}

Collision_Avoidance* Docking_System::getItsCollision_Avoidance_1() const {
    return itsCollision_Avoidance_1;
}

void Docking_System::setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance) {
    if(p_Collision_Avoidance != NULL)
        {
            p_Collision_Avoidance->_setItsDocking_System(this);
        }
    _setItsCollision_Avoidance_1(p_Collision_Avoidance);
}

Collision_Detection* Docking_System::getItsCollision_Detection() const {
    return (Collision_Detection*) &itsCollision_Detection;
}

Collision_Detection* Docking_System::getItsCollision_Detection_1() const {
    return itsCollision_Detection_1;
}

void Docking_System::setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsDocking_System(this);
        }
    _setItsCollision_Detection_1(p_Collision_Detection);
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
    return (Truck*) &itsTruck;
}

Truck* Docking_System::getItsTruck_1() const {
    return itsTruck_1;
}

void Docking_System::setItsTruck_1(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDocking_System(this);
        }
    _setItsTruck_1(p_Truck);
}

bool Docking_System::startBehavior() {
    bool done = true;
    done &= OMActivityContext::startBehavior();
    return done;
}

void Docking_System::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Docking_System* p_Docking_System = itsANGELS->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsANGELS->__setItsDocking_System(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsCollision_Avoidance_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance_1");
            Docking_System* p_Docking_System = itsCollision_Avoidance_1->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsCollision_Avoidance_1->__setItsDocking_System(NULL);
                }
            itsCollision_Avoidance_1 = NULL;
        }
    if(itsCollision_Detection_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection_1");
            Docking_System* p_Docking_System = itsCollision_Detection_1->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsCollision_Detection_1->__setItsDocking_System(NULL);
                }
            itsCollision_Detection_1 = NULL;
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
    if(itsTruck_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_1");
            Docking_System* p_Docking_System = itsTruck_1->getItsDocking_System();
            if(p_Docking_System != NULL)
                {
                    itsTruck_1->__setItsDocking_System(NULL);
                }
            itsTruck_1 = NULL;
        }
}

void Docking_System::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Docking_System::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsDocking_System(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Docking_System::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void Docking_System::__setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance) {
    itsCollision_Avoidance_1 = p_Collision_Avoidance;
    if(p_Collision_Avoidance != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Avoidance_1", p_Collision_Avoidance, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance_1");
        }
}

void Docking_System::_setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance) {
    if(itsCollision_Avoidance_1 != NULL)
        {
            itsCollision_Avoidance_1->__setItsDocking_System(NULL);
        }
    __setItsCollision_Avoidance_1(p_Collision_Avoidance);
}

void Docking_System::_clearItsCollision_Avoidance_1() {
    NOTIFY_RELATION_CLEARED("itsCollision_Avoidance_1");
    itsCollision_Avoidance_1 = NULL;
}

void Docking_System::__setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    itsCollision_Detection_1 = p_Collision_Detection;
    if(p_Collision_Detection != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Detection_1", p_Collision_Detection, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection_1");
        }
}

void Docking_System::_setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection_1 != NULL)
        {
            itsCollision_Detection_1->__setItsDocking_System(NULL);
        }
    __setItsCollision_Detection_1(p_Collision_Detection);
}

void Docking_System::_clearItsCollision_Detection_1() {
    NOTIFY_RELATION_CLEARED("itsCollision_Detection_1");
    itsCollision_Detection_1 = NULL;
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

void Docking_System::__setItsTruck_1(Truck* p_Truck) {
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

void Docking_System::_setItsTruck_1(Truck* p_Truck) {
    if(itsTruck_1 != NULL)
        {
            itsTruck_1->__setItsDocking_System(NULL);
        }
    __setItsTruck_1(p_Truck);
}

void Docking_System::_clearItsTruck_1() {
    NOTIFY_RELATION_CLEARED("itsTruck_1");
    itsTruck_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDocking_System::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("SteerAngle", x2String(myReal->SteerAngle));
    aomsAttributes->addAttribute("TruckSpeed", x2String(myReal->TruckSpeed));
    aomsAttributes->addAttribute("ParkingSpotInput", x2String(myReal->ParkingSpotInput));
}

void OMAnimatedDocking_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsDCOperator", false, true);
    if(myReal->itsDCOperator)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator);
        }
    aomsRelations->addRelation("itsCollision_Avoidance", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCollision_Avoidance);
    aomsRelations->addRelation("itsCollision_Detection", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCollision_Detection);
    aomsRelations->addRelation("itsTruck", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTruck);
    aomsRelations->addRelation("itsCollision_Avoidance_1", false, true);
    if(myReal->itsCollision_Avoidance_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Avoidance_1);
        }
    aomsRelations->addRelation("itsCollision_Detection_1", false, true);
    if(myReal->itsCollision_Detection_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Detection_1);
        }
    aomsRelations->addRelation("itsTruck_1", false, true);
    if(myReal->itsTruck_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck_1);
        }
}
//#]

IMPLEMENT_ACTIVITY_META_P(Docking_System, UseCaseAnalysisPkg_ANGELSPkg_DockingSystemPkg, UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg, false, OMAnimatedDocking_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Docking_System.cpp
*********************************************************************/

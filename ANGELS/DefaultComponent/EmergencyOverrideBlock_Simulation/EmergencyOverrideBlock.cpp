/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: EmergencyOverrideBlock
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\EmergencyOverrideBlock.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "EmergencyOverrideBlock.h"
//## event SwitchOnANGELS()
#include "ANGELSPkg.h"
//## link itsCollision_Avoidance
#include "Collision_Avoidance.h"
//## link itsCollision_Detection
#include "Collision_Detection.h"
//## link itsDC
#include "DC.h"
//## link itsDCOperator
#include "DCOperator.h"
//## link itsObstacle
#include "Obstacle.h"
//## link itsSafetyStandards
#include "SafetyStandards.h"
//#[ ignore
#define ANGELSPkg_EmergencyOverrideSystemPkg_EmergencyOverrideBlock_EmergencyOverrideBlock_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::EmergencyOverrideSystemPkg

//## class EmergencyOverrideBlock
EmergencyOverrideBlock::EmergencyOverrideBlock(IOxfActive* theActiveContext) : CollisionStatus(1), SteeringAngle(15), dt(250), speed(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(EmergencyOverrideBlock, EmergencyOverrideBlock(), 0, ANGELSPkg_EmergencyOverrideSystemPkg_EmergencyOverrideBlock_EmergencyOverrideBlock_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsCollision_Avoidance = NULL;
    itsCollision_Detection = NULL;
    itsDC = NULL;
    itsDCOperator = NULL;
    itsObstacle = NULL;
    itsSafetyStandards = NULL;
    initStatechart();
}

EmergencyOverrideBlock::~EmergencyOverrideBlock() {
    NOTIFY_DESTRUCTOR(~EmergencyOverrideBlock, true);
    cleanUpRelations();
    cancelTimeouts();
}

OMBoolean EmergencyOverrideBlock::getCollisionStatus() const {
    return CollisionStatus;
}

void EmergencyOverrideBlock::setCollisionStatus(OMBoolean p_CollisionStatus) {
    CollisionStatus = p_CollisionStatus;
}

double EmergencyOverrideBlock::getSteeringAngle() const {
    return SteeringAngle;
}

void EmergencyOverrideBlock::setSteeringAngle(double p_SteeringAngle) {
    SteeringAngle = p_SteeringAngle;
}

int EmergencyOverrideBlock::getDt() const {
    return dt;
}

void EmergencyOverrideBlock::setDt(int p_dt) {
    dt = p_dt;
}

double EmergencyOverrideBlock::getSpeed() const {
    return speed;
}

void EmergencyOverrideBlock::setSpeed(double p_speed) {
    speed = p_speed;
}

Collision_Avoidance* EmergencyOverrideBlock::getItsCollision_Avoidance() const {
    return itsCollision_Avoidance;
}

void EmergencyOverrideBlock::setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(p_Collision_Avoidance != NULL)
        {
            p_Collision_Avoidance->_setItsEmergencyOverrideBlock(this);
        }
    _setItsCollision_Avoidance(p_Collision_Avoidance);
}

Collision_Detection* EmergencyOverrideBlock::getItsCollision_Detection() const {
    return itsCollision_Detection;
}

void EmergencyOverrideBlock::setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsEmergencyOverrideBlock(this);
        }
    _setItsCollision_Detection(p_Collision_Detection);
}

DC* EmergencyOverrideBlock::getItsDC() const {
    return itsDC;
}

void EmergencyOverrideBlock::setItsDC(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsEmergencyOverrideBlock(this);
        }
    _setItsDC(p_DC);
}

DCOperator* EmergencyOverrideBlock::getItsDCOperator() const {
    return itsDCOperator;
}

void EmergencyOverrideBlock::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsEmergencyOverrideBlock(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Obstacle* EmergencyOverrideBlock::getItsObstacle() const {
    return itsObstacle;
}

void EmergencyOverrideBlock::setItsObstacle(Obstacle* p_Obstacle) {
    if(p_Obstacle != NULL)
        {
            p_Obstacle->_setItsEmergencyOverrideBlock(this);
        }
    _setItsObstacle(p_Obstacle);
}

SafetyStandards* EmergencyOverrideBlock::getItsSafetyStandards() const {
    return itsSafetyStandards;
}

void EmergencyOverrideBlock::setItsSafetyStandards(SafetyStandards* p_SafetyStandards) {
    if(p_SafetyStandards != NULL)
        {
            p_SafetyStandards->_setItsEmergencyOverrideBlock(this);
        }
    _setItsSafetyStandards(p_SafetyStandards);
}

bool EmergencyOverrideBlock::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void EmergencyOverrideBlock::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void EmergencyOverrideBlock::cleanUpRelations() {
    if(itsCollision_Avoidance != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
            EmergencyOverrideBlock* p_EmergencyOverrideBlock = itsCollision_Avoidance->getItsEmergencyOverrideBlock();
            if(p_EmergencyOverrideBlock != NULL)
                {
                    itsCollision_Avoidance->__setItsEmergencyOverrideBlock(NULL);
                }
            itsCollision_Avoidance = NULL;
        }
    if(itsCollision_Detection != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection");
            EmergencyOverrideBlock* p_EmergencyOverrideBlock = itsCollision_Detection->getItsEmergencyOverrideBlock();
            if(p_EmergencyOverrideBlock != NULL)
                {
                    itsCollision_Detection->__setItsEmergencyOverrideBlock(NULL);
                }
            itsCollision_Detection = NULL;
        }
    if(itsDC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC");
            EmergencyOverrideBlock* p_EmergencyOverrideBlock = itsDC->getItsEmergencyOverrideBlock();
            if(p_EmergencyOverrideBlock != NULL)
                {
                    itsDC->__setItsEmergencyOverrideBlock(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            EmergencyOverrideBlock* p_EmergencyOverrideBlock = itsDCOperator->getItsEmergencyOverrideBlock();
            if(p_EmergencyOverrideBlock != NULL)
                {
                    itsDCOperator->__setItsEmergencyOverrideBlock(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsObstacle != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsObstacle");
            EmergencyOverrideBlock* p_EmergencyOverrideBlock = itsObstacle->getItsEmergencyOverrideBlock();
            if(p_EmergencyOverrideBlock != NULL)
                {
                    itsObstacle->__setItsEmergencyOverrideBlock(NULL);
                }
            itsObstacle = NULL;
        }
    if(itsSafetyStandards != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSafetyStandards");
            EmergencyOverrideBlock* p_EmergencyOverrideBlock = itsSafetyStandards->getItsEmergencyOverrideBlock();
            if(p_EmergencyOverrideBlock != NULL)
                {
                    itsSafetyStandards->__setItsEmergencyOverrideBlock(NULL);
                }
            itsSafetyStandards = NULL;
        }
}

void EmergencyOverrideBlock::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool EmergencyOverrideBlock::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void EmergencyOverrideBlock::__setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    itsCollision_Avoidance = p_Collision_Avoidance;
    if(p_Collision_Avoidance != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Avoidance", p_Collision_Avoidance, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
        }
}

void EmergencyOverrideBlock::_setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(itsCollision_Avoidance != NULL)
        {
            itsCollision_Avoidance->__setItsEmergencyOverrideBlock(NULL);
        }
    __setItsCollision_Avoidance(p_Collision_Avoidance);
}

void EmergencyOverrideBlock::_clearItsCollision_Avoidance() {
    NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
    itsCollision_Avoidance = NULL;
}

void EmergencyOverrideBlock::__setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    itsCollision_Detection = p_Collision_Detection;
    if(p_Collision_Detection != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Detection", p_Collision_Detection, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection");
        }
}

void EmergencyOverrideBlock::_setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection != NULL)
        {
            itsCollision_Detection->__setItsEmergencyOverrideBlock(NULL);
        }
    __setItsCollision_Detection(p_Collision_Detection);
}

void EmergencyOverrideBlock::_clearItsCollision_Detection() {
    NOTIFY_RELATION_CLEARED("itsCollision_Detection");
    itsCollision_Detection = NULL;
}

void EmergencyOverrideBlock::__setItsDC(DC* p_DC) {
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

void EmergencyOverrideBlock::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsEmergencyOverrideBlock(NULL);
        }
    __setItsDC(p_DC);
}

void EmergencyOverrideBlock::_clearItsDC() {
    NOTIFY_RELATION_CLEARED("itsDC");
    itsDC = NULL;
}

void EmergencyOverrideBlock::__setItsDCOperator(DCOperator* p_DCOperator) {
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

void EmergencyOverrideBlock::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsEmergencyOverrideBlock(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void EmergencyOverrideBlock::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void EmergencyOverrideBlock::__setItsObstacle(Obstacle* p_Obstacle) {
    itsObstacle = p_Obstacle;
    if(p_Obstacle != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsObstacle", p_Obstacle, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsObstacle");
        }
}

void EmergencyOverrideBlock::_setItsObstacle(Obstacle* p_Obstacle) {
    if(itsObstacle != NULL)
        {
            itsObstacle->__setItsEmergencyOverrideBlock(NULL);
        }
    __setItsObstacle(p_Obstacle);
}

void EmergencyOverrideBlock::_clearItsObstacle() {
    NOTIFY_RELATION_CLEARED("itsObstacle");
    itsObstacle = NULL;
}

void EmergencyOverrideBlock::__setItsSafetyStandards(SafetyStandards* p_SafetyStandards) {
    itsSafetyStandards = p_SafetyStandards;
    if(p_SafetyStandards != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSafetyStandards", p_SafetyStandards, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSafetyStandards");
        }
}

void EmergencyOverrideBlock::_setItsSafetyStandards(SafetyStandards* p_SafetyStandards) {
    if(itsSafetyStandards != NULL)
        {
            itsSafetyStandards->__setItsEmergencyOverrideBlock(NULL);
        }
    __setItsSafetyStandards(p_SafetyStandards);
}

void EmergencyOverrideBlock::_clearItsSafetyStandards() {
    NOTIFY_RELATION_CLEARED("itsSafetyStandards");
    itsSafetyStandards = NULL;
}

void EmergencyOverrideBlock::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.TruckOn");
        rootState_subState = TruckOn;
        rootState_active = TruckOn;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus EmergencyOverrideBlock::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State TruckOn
        case TruckOn:
        {
            if(IS_EVENT_TYPE_OF(SwitchOnANGELS_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.TruckOn");
                    NOTIFY_STATE_ENTERED("ROOT.EBSActive");
                    pushNullTransition();
                    rootState_subState = EBSActive;
                    rootState_active = EBSActive;
                    rootState_timeout = scheduleTimeout(dt, "ROOT.EBSActive");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State EBSActive
        case EBSActive:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.EBSActive");
                            NOTIFY_STATE_ENTERED("ROOT.EBSActive");
                            pushNullTransition();
                            rootState_subState = EBSActive;
                            rootState_active = EBSActive;
                            rootState_timeout = scheduleTimeout(dt, "ROOT.EBSActive");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 3 
                    if(CollisionStatus==1 )
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.EBSActive");
                            NOTIFY_STATE_ENTERED("ROOT.OverrideActivated");
                            rootState_subState = OverrideActivated;
                            rootState_active = OverrideActivated;
                            //#[ state OverrideActivated.(Entry) 
                            SteeringAngle=0; speed = 0;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State OverrideActivated
        case OverrideActivated:
        {
            if(IS_EVENT_TYPE_OF(DefaultMode_EmergencyOverrideSystemPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.OverrideActivated");
                    //#[ transition 4 
                    CollisionStatus=0;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TruckOn");
                    rootState_subState = TruckOn;
                    rootState_active = TruckOn;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEmergencyOverrideBlock::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("speed", x2String(myReal->speed));
    aomsAttributes->addAttribute("CollisionStatus", x2String(myReal->CollisionStatus));
    aomsAttributes->addAttribute("SteeringAngle", x2String(myReal->SteeringAngle));
    aomsAttributes->addAttribute("dt", x2String(myReal->dt));
}

void OMAnimatedEmergencyOverrideBlock::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCOperator", false, true);
    if(myReal->itsDCOperator)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator);
        }
    aomsRelations->addRelation("itsDC", false, true);
    if(myReal->itsDC)
        {
            aomsRelations->ADD_ITEM(myReal->itsDC);
        }
    aomsRelations->addRelation("itsObstacle", false, true);
    if(myReal->itsObstacle)
        {
            aomsRelations->ADD_ITEM(myReal->itsObstacle);
        }
    aomsRelations->addRelation("itsSafetyStandards", false, true);
    if(myReal->itsSafetyStandards)
        {
            aomsRelations->ADD_ITEM(myReal->itsSafetyStandards);
        }
    aomsRelations->addRelation("itsCollision_Detection", false, true);
    if(myReal->itsCollision_Detection)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Detection);
        }
    aomsRelations->addRelation("itsCollision_Avoidance", false, true);
    if(myReal->itsCollision_Avoidance)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Avoidance);
        }
}

void OMAnimatedEmergencyOverrideBlock::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case EmergencyOverrideBlock::TruckOn:
        {
            TruckOn_serializeStates(aomsState);
        }
        break;
        case EmergencyOverrideBlock::EBSActive:
        {
            EBSActive_serializeStates(aomsState);
        }
        break;
        case EmergencyOverrideBlock::OverrideActivated:
        {
            OverrideActivated_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedEmergencyOverrideBlock::TruckOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TruckOn");
}

void OMAnimatedEmergencyOverrideBlock::OverrideActivated_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OverrideActivated");
}

void OMAnimatedEmergencyOverrideBlock::EBSActive_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.EBSActive");
}
//#]

IMPLEMENT_REACTIVE_META_P(EmergencyOverrideBlock, ANGELSPkg_EmergencyOverrideSystemPkg, ANGELSPkg::EmergencyOverrideSystemPkg, false, OMAnimatedEmergencyOverrideBlock)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\EmergencyOverrideBlock.cpp
*********************************************************************/

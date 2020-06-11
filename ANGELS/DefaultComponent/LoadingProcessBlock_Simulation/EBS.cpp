/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: EBS
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\EBS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "EBS.h"
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
//## link itsEnvironment
#include "Environment.h"
//## link itsPedestrianandObstacles
#include "PedestrianandObstacles.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define ANGELSPkg_EmergencyOverrideSystemPkg_EBS_EBS_SERIALIZE OM_NO_OP

#define ANGELSPkg_EmergencyOverrideSystemPkg_EBS_DetectWeather_SERIALIZE OM_NO_OP

#define OMAnim_ANGELSPkg_EmergencyOverrideSystemPkg_EBS_setAccn_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_accn)

#define OMAnim_ANGELSPkg_EmergencyOverrideSystemPkg_EBS_setAccn_double_SERIALIZE_RET_VAL
//#]

//## package ANGELSPkg::EmergencyOverrideSystemPkg

//## class EBS
EBS::EBS(IOxfActive* theActiveContext) : CollisionFence(0), CollisionObstacle(0), CollisionWall(0), WeatherStatus("rain"), accn(1), dt(1000) {
    NOTIFY_REACTIVE_CONSTRUCTOR(EBS, EBS(), 0, ANGELSPkg_EmergencyOverrideSystemPkg_EBS_EBS_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsCollision_Avoidance = NULL;
    itsCollision_Detection = NULL;
    itsDC = NULL;
    itsDCOperator = NULL;
    itsEnvironment = NULL;
    itsPedestrianandObstacles = NULL;
    itsTruck = NULL;
    initStatechart();
}

EBS::~EBS() {
    NOTIFY_DESTRUCTOR(~EBS, true);
    cleanUpRelations();
    cancelTimeouts();
}

void EBS::DetectWeather() {
    NOTIFY_OPERATION(DetectWeather, DetectWeather(), 0, ANGELSPkg_EmergencyOverrideSystemPkg_EBS_DetectWeather_SERIALIZE);
    //#[ operation DetectWeather()
    if (WeatherStatus=="sunny")
    {accn = 1;}
    else if (WeatherStatus=="rain")
    {accn = 0.75;}
    else if (WeatherStatus=="snow")
    {accn = 0.5;} 
    
    //#]
}

RhpBoolean EBS::getCollisionFence() const {
    return CollisionFence;
}

void EBS::setCollisionFence(RhpBoolean p_CollisionFence) {
    CollisionFence = p_CollisionFence;
    NOTIFY_SET_OPERATION;
}

RhpBoolean EBS::getCollisionObstacle() const {
    return CollisionObstacle;
}

void EBS::setCollisionObstacle(RhpBoolean p_CollisionObstacle) {
    CollisionObstacle = p_CollisionObstacle;
    NOTIFY_SET_OPERATION;
}

RhpBoolean EBS::getCollisionWall() const {
    return CollisionWall;
}

void EBS::setCollisionWall(RhpBoolean p_CollisionWall) {
    CollisionWall = p_CollisionWall;
    NOTIFY_SET_OPERATION;
}

OMString EBS::getWeatherStatus() const {
    return WeatherStatus;
}

void EBS::setWeatherStatus(OMString p_WeatherStatus) {
    WeatherStatus = p_WeatherStatus;
    NOTIFY_SET_OPERATION;
}

double EBS::getAccn() const {
    return accn;
}

void EBS::setAccn(double p_accn) {
    accn = p_accn;
    NOTIFY_SET_OPERATION;
}

int EBS::getDt() const {
    return dt;
}

void EBS::setDt(int p_dt) {
    dt = p_dt;
}

Collision_Avoidance* EBS::getItsCollision_Avoidance() const {
    return itsCollision_Avoidance;
}

void EBS::setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(p_Collision_Avoidance != NULL)
        {
            p_Collision_Avoidance->_setItsEBS(this);
        }
    _setItsCollision_Avoidance(p_Collision_Avoidance);
}

Collision_Detection* EBS::getItsCollision_Detection() const {
    return itsCollision_Detection;
}

void EBS::setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsEBS(this);
        }
    _setItsCollision_Detection(p_Collision_Detection);
}

DC* EBS::getItsDC() const {
    return itsDC;
}

void EBS::setItsDC(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsEBS(this);
        }
    _setItsDC(p_DC);
}

DCOperator* EBS::getItsDCOperator() const {
    return itsDCOperator;
}

void EBS::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsEBS(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Environment* EBS::getItsEnvironment() const {
    return itsEnvironment;
}

void EBS::setItsEnvironment(Environment* p_Environment) {
    if(p_Environment != NULL)
        {
            p_Environment->_setItsEBS(this);
        }
    _setItsEnvironment(p_Environment);
}

PedestrianandObstacles* EBS::getItsPedestrianandObstacles() const {
    return itsPedestrianandObstacles;
}

void EBS::setItsPedestrianandObstacles(PedestrianandObstacles* p_PedestrianandObstacles) {
    if(p_PedestrianandObstacles != NULL)
        {
            p_PedestrianandObstacles->_setItsEBS_1(this);
        }
    _setItsPedestrianandObstacles(p_PedestrianandObstacles);
}

Truck* EBS::getItsTruck() const {
    return itsTruck;
}

void EBS::setItsTruck(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsEBS(this);
        }
    _setItsTruck(p_Truck);
}

bool EBS::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void EBS::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void EBS::cleanUpRelations() {
    if(itsCollision_Avoidance != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
            EBS* p_EBS = itsCollision_Avoidance->getItsEBS();
            if(p_EBS != NULL)
                {
                    itsCollision_Avoidance->__setItsEBS(NULL);
                }
            itsCollision_Avoidance = NULL;
        }
    if(itsCollision_Detection != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection");
            EBS* p_EBS = itsCollision_Detection->getItsEBS();
            if(p_EBS != NULL)
                {
                    itsCollision_Detection->__setItsEBS(NULL);
                }
            itsCollision_Detection = NULL;
        }
    if(itsDC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC");
            EBS* p_EBS = itsDC->getItsEBS();
            if(p_EBS != NULL)
                {
                    itsDC->__setItsEBS(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator");
            EBS* p_EBS = itsDCOperator->getItsEBS();
            if(p_EBS != NULL)
                {
                    itsDCOperator->__setItsEBS(NULL);
                }
            itsDCOperator = NULL;
        }
    if(itsEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
            EBS* p_EBS = itsEnvironment->getItsEBS();
            if(p_EBS != NULL)
                {
                    itsEnvironment->__setItsEBS(NULL);
                }
            itsEnvironment = NULL;
        }
    if(itsPedestrianandObstacles != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPedestrianandObstacles");
            EBS* p_EBS = itsPedestrianandObstacles->getItsEBS_1();
            if(p_EBS != NULL)
                {
                    itsPedestrianandObstacles->__setItsEBS_1(NULL);
                }
            itsPedestrianandObstacles = NULL;
        }
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            EBS* p_EBS = itsTruck->getItsEBS();
            if(p_EBS != NULL)
                {
                    itsTruck->__setItsEBS(NULL);
                }
            itsTruck = NULL;
        }
}

void EBS::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool EBS::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void EBS::__setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
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

void EBS::_setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(itsCollision_Avoidance != NULL)
        {
            itsCollision_Avoidance->__setItsEBS(NULL);
        }
    __setItsCollision_Avoidance(p_Collision_Avoidance);
}

void EBS::_clearItsCollision_Avoidance() {
    NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
    itsCollision_Avoidance = NULL;
}

void EBS::__setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
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

void EBS::_setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection != NULL)
        {
            itsCollision_Detection->__setItsEBS(NULL);
        }
    __setItsCollision_Detection(p_Collision_Detection);
}

void EBS::_clearItsCollision_Detection() {
    NOTIFY_RELATION_CLEARED("itsCollision_Detection");
    itsCollision_Detection = NULL;
}

void EBS::__setItsDC(DC* p_DC) {
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

void EBS::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsEBS(NULL);
        }
    __setItsDC(p_DC);
}

void EBS::_clearItsDC() {
    NOTIFY_RELATION_CLEARED("itsDC");
    itsDC = NULL;
}

void EBS::__setItsDCOperator(DCOperator* p_DCOperator) {
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

void EBS::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsEBS(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void EBS::_clearItsDCOperator() {
    NOTIFY_RELATION_CLEARED("itsDCOperator");
    itsDCOperator = NULL;
}

void EBS::__setItsEnvironment(Environment* p_Environment) {
    itsEnvironment = p_Environment;
    if(p_Environment != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEnvironment", p_Environment, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
        }
}

void EBS::_setItsEnvironment(Environment* p_Environment) {
    if(itsEnvironment != NULL)
        {
            itsEnvironment->__setItsEBS(NULL);
        }
    __setItsEnvironment(p_Environment);
}

void EBS::_clearItsEnvironment() {
    NOTIFY_RELATION_CLEARED("itsEnvironment");
    itsEnvironment = NULL;
}

void EBS::__setItsPedestrianandObstacles(PedestrianandObstacles* p_PedestrianandObstacles) {
    itsPedestrianandObstacles = p_PedestrianandObstacles;
    if(p_PedestrianandObstacles != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPedestrianandObstacles", p_PedestrianandObstacles, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPedestrianandObstacles");
        }
}

void EBS::_setItsPedestrianandObstacles(PedestrianandObstacles* p_PedestrianandObstacles) {
    if(itsPedestrianandObstacles != NULL)
        {
            itsPedestrianandObstacles->__setItsEBS_1(NULL);
        }
    __setItsPedestrianandObstacles(p_PedestrianandObstacles);
}

void EBS::_clearItsPedestrianandObstacles() {
    NOTIFY_RELATION_CLEARED("itsPedestrianandObstacles");
    itsPedestrianandObstacles = NULL;
}

void EBS::__setItsTruck(Truck* p_Truck) {
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

void EBS::_setItsTruck(Truck* p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsEBS(NULL);
        }
    __setItsTruck(p_Truck);
}

void EBS::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck = NULL;
}

void EBS::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.EBSOn");
        rootState_subState = EBSOn;
        rootState_active = EBSOn;
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus EBS::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State EBSOn
        case EBSOn:
        {
            if(IS_EVENT_TYPE_OF(SwitchOnANGELS_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.EBSOn");
                    NOTIFY_STATE_ENTERED("ROOT.EBSActivated");
                    pushNullTransition();
                    rootState_subState = EBSActivated;
                    rootState_active = EBSActivated;
                    //#[ state EBSActivated.(Entry) 
                    DetectWeather();
                    //#]
                    rootState_timeout = scheduleTimeout(dt, "ROOT.EBSActivated");
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        // State EBSActivated
        case EBSActivated:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.EBSActivated");
                            NOTIFY_STATE_ENTERED("ROOT.EBSActivated");
                            pushNullTransition();
                            rootState_subState = EBSActivated;
                            rootState_active = EBSActivated;
                            //#[ state EBSActivated.(Entry) 
                            DetectWeather();
                            //#]
                            rootState_timeout = scheduleTimeout(dt, "ROOT.EBSActivated");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 2 
                    if((CollisionFence==1||CollisionObstacle==1||CollisionWall==1))
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.EBSActivated");
                            //#[ transition 2 
                            accn=0;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.EBSTriggered");
                            rootState_subState = EBSTriggered;
                            rootState_active = EBSTriggered;
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State EBSTriggered
        case EBSTriggered:
        {
            if(IS_EVENT_TYPE_OF(DefaultMode_EmergencyOverrideSystemPkg_ANGELSPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.EBSTriggered");
                    //#[ transition 4 
                    CollisionFence=0;
                    CollisionObstacle=0;
                    CollisionWall=0;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.EBSOn");
                    rootState_subState = EBSOn;
                    rootState_active = EBSOn;
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
void OMAnimatedEBS::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("dt", x2String(myReal->dt));
    aomsAttributes->addAttribute("accn", x2String(myReal->accn));
    aomsAttributes->addAttribute("CollisionObstacle", x2String(myReal->CollisionObstacle));
    aomsAttributes->addAttribute("CollisionWall", x2String(myReal->CollisionWall));
    aomsAttributes->addAttribute("CollisionFence", x2String(myReal->CollisionFence));
    aomsAttributes->addAttribute("WeatherStatus", x2String(myReal->WeatherStatus));
}

void OMAnimatedEBS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsCollision_Avoidance", false, true);
    if(myReal->itsCollision_Avoidance)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Avoidance);
        }
    aomsRelations->addRelation("itsCollision_Detection", false, true);
    if(myReal->itsCollision_Detection)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Detection);
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
    aomsRelations->addRelation("itsPedestrianandObstacles", false, true);
    if(myReal->itsPedestrianandObstacles)
        {
            aomsRelations->ADD_ITEM(myReal->itsPedestrianandObstacles);
        }
    aomsRelations->addRelation("itsEnvironment", false, true);
    if(myReal->itsEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironment);
        }
}

void OMAnimatedEBS::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case EBS::EBSOn:
        {
            EBSOn_serializeStates(aomsState);
        }
        break;
        case EBS::EBSActivated:
        {
            EBSActivated_serializeStates(aomsState);
        }
        break;
        case EBS::EBSTriggered:
        {
            EBSTriggered_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedEBS::EBSTriggered_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.EBSTriggered");
}

void OMAnimatedEBS::EBSOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.EBSOn");
}

void OMAnimatedEBS::EBSActivated_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.EBSActivated");
}
//#]

IMPLEMENT_REACTIVE_META_P(EBS, ANGELSPkg_EmergencyOverrideSystemPkg, ANGELSPkg::EmergencyOverrideSystemPkg, false, OMAnimatedEBS)

IMPLEMENT_META_OP(OMAnimatedEBS, ANGELSPkg_EmergencyOverrideSystemPkg_EBS_setAccn_double, "setAccn", FALSE, "setAccn(double)", 1)

IMPLEMENT_OP_CALL(ANGELSPkg_EmergencyOverrideSystemPkg_EBS_setAccn_double, EBS, setAccn(p_accn), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\EBS.cpp
*********************************************************************/

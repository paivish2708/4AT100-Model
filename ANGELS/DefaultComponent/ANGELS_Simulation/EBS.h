/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: EBS
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\EBS.h
*********************************************************************/

#ifndef EBS_H
#define EBS_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "EmergencyOverrideSystemPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsCollision_Avoidance
class Collision_Avoidance;

//## link itsCollision_Detection
class Collision_Detection;

//## link itsDC
class DC;

//## link itsDCOperator
class DCOperator;

//## link itsEnvironment
class Environment;

//## link itsPedestrianandObstacles
class PedestrianandObstacles;

//## link itsTruck
class Truck;

//#[ ignore
#define OMAnim_ANGELSPkg_EmergencyOverrideSystemPkg_EBS_setAccn_double_ARGS_DECLARATION double p_accn;
//#]

//## package ANGELSPkg::EmergencyOverrideSystemPkg

//## class EBS
class EBS : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEBS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EBS(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~EBS();
    
    ////    Operations    ////
    
    //## operation DetectWeather()
    virtual void DetectWeather();
    
    ////    Additional operations    ////
    
    //## auto_generated
    RhpBoolean getCollisionFence() const;
    
    //## auto_generated
    void setCollisionFence(RhpBoolean p_CollisionFence);
    
    //## auto_generated
    RhpBoolean getCollisionObstacle() const;
    
    //## auto_generated
    void setCollisionObstacle(RhpBoolean p_CollisionObstacle);
    
    //## auto_generated
    RhpBoolean getCollisionWall() const;
    
    //## auto_generated
    void setCollisionWall(RhpBoolean p_CollisionWall);
    
    //## auto_generated
    OMString getWeatherStatus() const;
    
    //## auto_generated
    void setWeatherStatus(OMString p_WeatherStatus);
    
    //## auto_generated
    double getAccn() const;
    
    //## auto_generated
    void setAccn(double p_accn);
    
    //## auto_generated
    int getDt() const;
    
    //## auto_generated
    void setDt(int p_dt);
    
    //## auto_generated
    Collision_Avoidance* getItsCollision_Avoidance() const;
    
    //## auto_generated
    void setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection() const;
    
    //## auto_generated
    void setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    DC* getItsDC() const;
    
    //## auto_generated
    void setItsDC(DC* p_DC);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    Environment* getItsEnvironment() const;
    
    //## auto_generated
    void setItsEnvironment(Environment* p_Environment);
    
    //## auto_generated
    PedestrianandObstacles* getItsPedestrianandObstacles() const;
    
    //## auto_generated
    void setItsPedestrianandObstacles(PedestrianandObstacles* p_PedestrianandObstacles);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    RhpBoolean CollisionFence;		//## attribute CollisionFence
    
    RhpBoolean CollisionObstacle;		//## attribute CollisionObstacle
    
    RhpBoolean CollisionWall;		//## attribute CollisionWall
    
    OMString WeatherStatus;		//## attribute WeatherStatus
    
    double accn;		//## attribute accn
    
    int dt;		//## attribute dt
    
    ////    Relations and components    ////
    
    Collision_Avoidance* itsCollision_Avoidance;		//## link itsCollision_Avoidance
    
    Collision_Detection* itsCollision_Detection;		//## link itsCollision_Detection
    
    DC* itsDC;		//## link itsDC
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Environment* itsEnvironment;		//## link itsEnvironment
    
    PedestrianandObstacles* itsPedestrianandObstacles;		//## link itsPedestrianandObstacles
    
    Truck* itsTruck;		//## link itsTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _clearItsCollision_Avoidance();
    
    //## auto_generated
    void __setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _setItsCollision_Detection(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _clearItsCollision_Detection();
    
    //## auto_generated
    void __setItsDC(DC* p_DC);
    
    //## auto_generated
    void _setItsDC(DC* p_DC);
    
    //## auto_generated
    void _clearItsDC();
    
    //## auto_generated
    void __setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator();
    
    //## auto_generated
    void __setItsEnvironment(Environment* p_Environment);
    
    //## auto_generated
    void _setItsEnvironment(Environment* p_Environment);
    
    //## auto_generated
    void _clearItsEnvironment();
    
    //## auto_generated
    void __setItsPedestrianandObstacles(PedestrianandObstacles* p_PedestrianandObstacles);
    
    //## auto_generated
    void _setItsPedestrianandObstacles(PedestrianandObstacles* p_PedestrianandObstacles);
    
    //## auto_generated
    void _clearItsPedestrianandObstacles();
    
    //## auto_generated
    void __setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // EBSTriggered:
    //## statechart_method
    inline bool EBSTriggered_IN() const;
    
    // EBSOn:
    //## statechart_method
    inline bool EBSOn_IN() const;
    
    // EBSActivated:
    //## statechart_method
    inline bool EBSActivated_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum EBS_Enum {
        OMNonState = 0,
        EBSTriggered = 1,
        EBSOn = 2,
        EBSActivated = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(ANGELSPkg_EmergencyOverrideSystemPkg_EBS_setAccn_double)

//#[ ignore
class OMAnimatedEBS : virtual public AOMInstance {
    DECLARE_REACTIVE_META(EBS, OMAnimatedEBS)
    
    DECLARE_META_OP(ANGELSPkg_EmergencyOverrideSystemPkg_EBS_setAccn_double)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void EBSTriggered_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void EBSOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void EBSActivated_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool EBS::rootState_IN() const {
    return true;
}

inline bool EBS::EBSTriggered_IN() const {
    return rootState_subState == EBSTriggered;
}

inline bool EBS::EBSOn_IN() const {
    return rootState_subState == EBSOn;
}

inline bool EBS::EBSActivated_IN() const {
    return rootState_subState == EBSActivated;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\EBS.h
*********************************************************************/

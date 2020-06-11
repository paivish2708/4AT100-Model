/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcessBlock_Simulation
	Model Element	: EmergencyOverrideBlock
//!	Generated Date	: Thu, 4, Jun 2020  
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\EmergencyOverrideBlock.h
*********************************************************************/

#ifndef EmergencyOverrideBlock_H
#define EmergencyOverrideBlock_H

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

//## link itsObstacle
class Obstacle;

//## link itsSafetyStandards
class SafetyStandards;

//## package ANGELSPkg::EmergencyOverrideSystemPkg

//## class EmergencyOverrideBlock
class EmergencyOverrideBlock : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEmergencyOverrideBlock;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EmergencyOverrideBlock(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~EmergencyOverrideBlock();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMBoolean getCollisionStatus() const;
    
    //## auto_generated
    void setCollisionStatus(OMBoolean p_CollisionStatus);
    
    //## auto_generated
    double getSteeringAngle() const;
    
    //## auto_generated
    void setSteeringAngle(double p_SteeringAngle);
    
    //## auto_generated
    int getDt() const;
    
    //## auto_generated
    void setDt(int p_dt);
    
    //## auto_generated
    double getSpeed() const;
    
    //## auto_generated
    void setSpeed(double p_speed);
    
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
    Obstacle* getItsObstacle() const;
    
    //## auto_generated
    void setItsObstacle(Obstacle* p_Obstacle);
    
    //## auto_generated
    SafetyStandards* getItsSafetyStandards() const;
    
    //## auto_generated
    void setItsSafetyStandards(SafetyStandards* p_SafetyStandards);
    
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
    
    OMBoolean CollisionStatus;		//## attribute CollisionStatus
    
    double SteeringAngle;		//## attribute SteeringAngle
    
    int dt;		//## attribute dt
    
    double speed;		//## attribute speed
    
    ////    Relations and components    ////
    
    Collision_Avoidance* itsCollision_Avoidance;		//## link itsCollision_Avoidance
    
    Collision_Detection* itsCollision_Detection;		//## link itsCollision_Detection
    
    DC* itsDC;		//## link itsDC
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Obstacle* itsObstacle;		//## link itsObstacle
    
    SafetyStandards* itsSafetyStandards;		//## link itsSafetyStandards
    
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
    void __setItsObstacle(Obstacle* p_Obstacle);
    
    //## auto_generated
    void _setItsObstacle(Obstacle* p_Obstacle);
    
    //## auto_generated
    void _clearItsObstacle();
    
    //## auto_generated
    void __setItsSafetyStandards(SafetyStandards* p_SafetyStandards);
    
    //## auto_generated
    void _setItsSafetyStandards(SafetyStandards* p_SafetyStandards);
    
    //## auto_generated
    void _clearItsSafetyStandards();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // TruckOn:
    //## statechart_method
    inline bool TruckOn_IN() const;
    
    // OverrideActivated:
    //## statechart_method
    inline bool OverrideActivated_IN() const;
    
    // EBSActive:
    //## statechart_method
    inline bool EBSActive_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum EmergencyOverrideBlock_Enum {
        OMNonState = 0,
        TruckOn = 1,
        OverrideActivated = 2,
        EBSActive = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEmergencyOverrideBlock : virtual public AOMInstance {
    DECLARE_REACTIVE_META(EmergencyOverrideBlock, OMAnimatedEmergencyOverrideBlock)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TruckOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void OverrideActivated_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void EBSActive_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool EmergencyOverrideBlock::rootState_IN() const {
    return true;
}

inline bool EmergencyOverrideBlock::TruckOn_IN() const {
    return rootState_subState == TruckOn;
}

inline bool EmergencyOverrideBlock::OverrideActivated_IN() const {
    return rootState_subState == OverrideActivated;
}

inline bool EmergencyOverrideBlock::EBSActive_IN() const {
    return rootState_subState == EBSActive;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\EmergencyOverrideBlock.h
*********************************************************************/

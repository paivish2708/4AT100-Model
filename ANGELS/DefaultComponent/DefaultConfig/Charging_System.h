/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Charging_System
//!	Generated Date	: Wed, 13, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Charging_System.h
*********************************************************************/

#ifndef Charging_System_H
#define Charging_System_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "ChargingSystemPkg.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsTruck
#include "Truck.h"
//## link itsDCOperator
class DCOperator;

//## package UseCaseAnalysisPkg::ANGELSPkg::ChargingSystemPkg

//## class Charging_System
class Charging_System : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Charging_System(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Charging_System();
    
    ////    Additional operations    ////
    
    //## auto_generated
    double getChargingState() const;
    
    //## auto_generated
    void setChargingState(double p_ChargingState);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
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
    
    double ChargingState;		//## attribute ChargingState
    
    ////    Relations and components    ////
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Truck itsTruck;		//## classInstance itsTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // terminationstate_6:
    //## statechart_method
    inline bool terminationstate_6_IN() const;
    
    // IdleState:
    //## statechart_method
    inline bool IdleState_IN() const;
    
    // Charging:
    //## statechart_method
    inline bool Charging_IN() const;
    
    //## statechart_method
    void Charging_entDef();
    
    // StartCharging:
    //## statechart_method
    inline bool StartCharging_IN() const;
    
    // ChargingMode:
    //## statechart_method
    inline bool ChargingMode_IN() const;
    
    // ChargedState:
    //## statechart_method
    inline bool ChargedState_IN() const;
    
    // BeginCharging:
    //## statechart_method
    inline bool BeginCharging_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Charging_System_Enum {
        OMNonState = 0,
        terminationstate_6 = 1,
        IdleState = 2,
        Charging = 3,
        StartCharging = 4,
        ChargingMode = 5,
        ChargedState = 6,
        BeginCharging = 7
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int Charging_subState;
    
    IOxfTimeout* Charging_timeout;
//#]
};

inline bool Charging_System::rootState_IN() const {
    return true;
}

inline bool Charging_System::rootState_isCompleted() {
    return ( IS_IN(terminationstate_6) );
}

inline bool Charging_System::terminationstate_6_IN() const {
    return rootState_subState == terminationstate_6;
}

inline bool Charging_System::IdleState_IN() const {
    return rootState_subState == IdleState;
}

inline bool Charging_System::Charging_IN() const {
    return rootState_subState == Charging;
}

inline bool Charging_System::StartCharging_IN() const {
    return Charging_subState == StartCharging;
}

inline bool Charging_System::ChargingMode_IN() const {
    return Charging_subState == ChargingMode;
}

inline bool Charging_System::ChargedState_IN() const {
    return rootState_subState == ChargedState;
}

inline bool Charging_System::BeginCharging_IN() const {
    return rootState_subState == BeginCharging;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Charging_System.h
*********************************************************************/

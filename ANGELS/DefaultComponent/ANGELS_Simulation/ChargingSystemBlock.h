/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: ChargingSystemBlock
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\ChargingSystemBlock.h
*********************************************************************/

#ifndef ChargingSystemBlock_H
#define ChargingSystemBlock_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ChargingSystemPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsANGELS
class ANGELS;

//## link itsChargingInfrastructure
class ChargingInfrastructure;

//## link itsCommunicationSystemBlock
class CommunicationSystemBlock;

//## link itsDCOperator
class DCOperator;

//## link itsDockingProcessBlock
class DockingProcessBlock;

//## link itsLoadingProcessBlock
class LoadingProcessBlock;

//## link itsTruck
class Truck;

//## package ANGELSPkg::ChargingSystemPkg

//## class ChargingSystemBlock
class ChargingSystemBlock : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedChargingSystemBlock;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ChargingSystemBlock(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~ChargingSystemBlock();
    
    ////    Operations    ////
    
    //## operation ChargingProcess()
    virtual void ChargingProcess();
    
    ////    Additional operations    ////
    
    //## auto_generated
    double getTruckChargeState() const;
    
    //## auto_generated
    void setTruckChargeState(double p_TruckChargeState);
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    ChargingInfrastructure* getItsChargingInfrastructure() const;
    
    //## auto_generated
    void setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure);
    
    //## auto_generated
    CommunicationSystemBlock* getItsCommunicationSystemBlock() const;
    
    //## auto_generated
    void setItsCommunicationSystemBlock(CommunicationSystemBlock* p_CommunicationSystemBlock);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    DockingProcessBlock* getItsDockingProcessBlock() const;
    
    //## auto_generated
    void setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    LoadingProcessBlock* getItsLoadingProcessBlock() const;
    
    //## auto_generated
    void setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock);
    
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
    
    double TruckChargeState;		//## attribute TruckChargeState
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ChargingInfrastructure* itsChargingInfrastructure;		//## link itsChargingInfrastructure
    
    CommunicationSystemBlock* itsCommunicationSystemBlock;		//## link itsCommunicationSystemBlock
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    DockingProcessBlock* itsDockingProcessBlock;		//## link itsDockingProcessBlock
    
    LoadingProcessBlock* itsLoadingProcessBlock;		//## link itsLoadingProcessBlock
    
    Truck* itsTruck;		//## link itsTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure);
    
    //## auto_generated
    void _setItsChargingInfrastructure(ChargingInfrastructure* p_ChargingInfrastructure);
    
    //## auto_generated
    void _clearItsChargingInfrastructure();
    
    //## auto_generated
    void __setItsCommunicationSystemBlock(CommunicationSystemBlock* p_CommunicationSystemBlock);
    
    //## auto_generated
    void _setItsCommunicationSystemBlock(CommunicationSystemBlock* p_CommunicationSystemBlock);
    
    //## auto_generated
    void _clearItsCommunicationSystemBlock();
    
    //## auto_generated
    void __setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator();
    
    //## auto_generated
    void __setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _clearItsDockingProcessBlock();
    
    //## auto_generated
    void __setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock);
    
    //## auto_generated
    void _setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock);
    
    //## auto_generated
    void _clearItsLoadingProcessBlock();
    
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
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ChargingMode_handleEvent();
    
    // ChargedState:
    //## statechart_method
    inline bool ChargedState_IN() const;
    
    // BeginCharging:
    //## statechart_method
    inline bool BeginCharging_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum ChargingSystemBlock_Enum {
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedChargingSystemBlock : virtual public AOMInstance {
    DECLARE_REACTIVE_META(ChargingSystemBlock, OMAnimatedChargingSystemBlock)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void IdleState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Charging_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StartCharging_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ChargingMode_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ChargedState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void BeginCharging_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool ChargingSystemBlock::rootState_IN() const {
    return true;
}

inline bool ChargingSystemBlock::rootState_isCompleted() {
    return ( IS_IN(terminationstate_6) );
}

inline bool ChargingSystemBlock::terminationstate_6_IN() const {
    return rootState_subState == terminationstate_6;
}

inline bool ChargingSystemBlock::IdleState_IN() const {
    return rootState_subState == IdleState;
}

inline bool ChargingSystemBlock::Charging_IN() const {
    return rootState_subState == Charging;
}

inline bool ChargingSystemBlock::StartCharging_IN() const {
    return Charging_subState == StartCharging;
}

inline bool ChargingSystemBlock::ChargingMode_IN() const {
    return Charging_subState == ChargingMode;
}

inline bool ChargingSystemBlock::ChargedState_IN() const {
    return rootState_subState == ChargedState;
}

inline bool ChargingSystemBlock::BeginCharging_IN() const {
    return rootState_subState == BeginCharging;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\ChargingSystemBlock.h
*********************************************************************/

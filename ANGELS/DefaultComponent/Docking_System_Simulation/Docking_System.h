/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Docking_System
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Docking_System.h
*********************************************************************/

#ifndef Docking_System_H
#define Docking_System_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//##   ignore
#include <simulation\OMActivityContext.h>
//## auto_generated
#include "DockingSystemPkg.h"
//## link itsDC
class DC;

//## link itsDCOperator
class DCOperator;

//## link itsTruck
class Truck;

//## package UseCaseAnalysisPkg::DockingSystemPkg

//## class Docking_System
class Docking_System : virtual public OMActivityContext {
public :

    //## auto_generated
    class LoadGoodsOfDocking_System;
    
    //## auto_generated
    class MainFlowOfDocking_System;
    
    //## auto_generated
    class StopTruckOfDocking_System;
    
//#[ ignore
    class LoadGoodsOfDocking_System : virtual public OMActivity {
    public :
    
        class ActionCalloperation_1InActivityLoadGoodsOfDocking_System : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_1InActivityLoadGoodsOfDocking_System(const OMString& id, LoadGoodsOfDocking_System& activity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
        };
        
        class ActionAccepttimeevent_2InActivityLoadGoodsOfDocking_System : virtual public OMTimeEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepttimeevent_2InActivityLoadGoodsOfDocking_System(const OMString& id, LoadGoodsOfDocking_System& activity, int duration, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
        };
        
        class ActionFlowfinal_3InActivityLoadGoodsOfDocking_System : virtual public OMFlowFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionFlowfinal_3InActivityLoadGoodsOfDocking_System(const OMString& id, LoadGoodsOfDocking_System& activity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
        };
        
        ////    Constructors and destructors    ////
        
        LoadGoodsOfDocking_System(Docking_System& context);
        
        ////    Framework    ////
        
        Docking_System* mContext;
    };
    
    class MainFlowOfDocking_System : virtual public OMActivity {
    public :
    
        class ActionAccepteventaction_0InActivityMainFlowOfDocking_System : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_0InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, IOxfEvent::ID eventId, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
        };
        
        class ActionAction_15InActivityMainFlowOfDocking_System : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_15InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual double getSpeed();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
            
            double speed;
        };
        
        class ActionAccepteventaction_16InActivityMainFlowOfDocking_System : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_16InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, IOxfEvent::ID eventId, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
        };
        
        class ActionActivityfinal_19InActivityMainFlowOfDocking_System : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_19InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
        };
        
        class ActionStopTruckInActivityMainFlowOfDocking_System : virtual public OMCallBehaviorAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionStopTruckInActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& parentActivity, StopTruckOfDocking_System& calledActivity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setPinsFromParameters();
            
            virtual void setParametersFromPins();
            
            virtual void setSpeed(double value);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
            
            StopTruckOfDocking_System* mCalledActivity;
            
            double speed;
        };
        
        class ActionAccepteventaction_21InActivityMainFlowOfDocking_System : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_21InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, IOxfEvent::ID eventId, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
        };
        
        class ActionLoadGoodsInActivityMainFlowOfDocking_System : virtual public OMCallBehaviorAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionLoadGoodsInActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& parentActivity, LoadGoodsOfDocking_System& calledActivity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setPinsFromParameters();
            
            virtual void setParametersFromPins();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
            
            LoadGoodsOfDocking_System* mCalledActivity;
        };
        
        class DataFlow2InActivityMainFlowOfDocking_System : virtual public OMDataFlow<double> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow2InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& context, ActionAction_15InActivityMainFlowOfDocking_System& sourceAction, ActionStopTruckInActivityMainFlowOfDocking_System& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAction_15InActivityMainFlowOfDocking_System* dataSource;
            
            ActionStopTruckInActivityMainFlowOfDocking_System* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        MainFlowOfDocking_System(Docking_System& context);
        
        ////    Framework    ////
        
        Docking_System* mContext;
    };
    
    class StopTruckOfDocking_System : virtual public OMActivity {
    public :
    
        class ActionCalloperation_0InActivityStopTruckOfDocking_System : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_0InActivityStopTruckOfDocking_System(const OMString& id, StopTruckOfDocking_System& activity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setSpeed(double value);
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
            
            double speed;
        };
        
        class ActionFlowfinal_1InActivityStopTruckOfDocking_System : virtual public OMFlowFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionFlowfinal_1InActivityStopTruckOfDocking_System(const OMString& id, StopTruckOfDocking_System& activity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
        };
        
        class DataFlow0InActivityStopTruckOfDocking_System : virtual public OMDataFlow<double> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow0InActivityStopTruckOfDocking_System(const OMString& id, StopTruckOfDocking_System& context, ActionCalloperation_0InActivityStopTruckOfDocking_System& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            StopTruckOfDocking_System* dataSource;
            
            ActionCalloperation_0InActivityStopTruckOfDocking_System* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        StopTruckOfDocking_System(Docking_System& context);
        
        virtual double getSpeed();
        
        virtual void setSpeed(double value);
        
        ////    Framework operations    ////
        
        ////    Framework    ////
        
        Docking_System* mContext;
        
        double speed;
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedDocking_System;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Docking_System();
    
    //## auto_generated
    virtual ~Docking_System();
    
    ////    Operations    ////
    
    //## operation LoadingProcess()
    virtual void LoadingProcess();
    
    //## operation StoptheTruck(double)
    virtual void StoptheTruck(double speed);
    
//#[ ignore
    virtual void* getMe();
//#]

    //## activity_action LoadGoods:ROOT.calloperation_1
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_1InActivityLoadGoodsOfDocking_System();
    
    //## activity_action LoadGoods:ROOT.calloperation_1
    void delegatedInvokeContextMethodFromActionCalloperation_1InActivityLoadGoodsOfDocking_System();
    
    //## activity_action LoadGoods:ROOT.accepttimeevent_2
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepttimeevent_2InActivityLoadGoodsOfDocking_System();
    
    //## activity_action LoadGoods:ROOT.flowfinal_3
    OMList<OMString> delegatedFilterPassableFlowsFromActionFlowfinal_3InActivityLoadGoodsOfDocking_System();
    
//#[ ignore
    virtual OMActivity* createMainActivity();
//#]

    //## activity_action MainFlow:ROOT.accepteventaction_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityMainFlowOfDocking_System();
    
    //## activity_action MainFlow:ROOT.accepteventaction_0
    void delegatedAcceptEventDataFromActionAccepteventaction_0InActivityMainFlowOfDocking_System();
    
    //## activity_action MainFlow:ROOT.action_15
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_15InActivityMainFlowOfDocking_System(double& speed);
    
    //## activity_action MainFlow:ROOT.action_15
    void delegatedInvokeContextMethodFromActionAction_15InActivityMainFlowOfDocking_System(double& speed);
    
    //## activity_action MainFlow:ROOT.accepteventaction_16
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_16InActivityMainFlowOfDocking_System();
    
    //## activity_action MainFlow:ROOT.accepteventaction_16
    void delegatedAcceptEventDataFromActionAccepteventaction_16InActivityMainFlowOfDocking_System();
    
    //## activity_action MainFlow:ROOT.activityfinal_19
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_19InActivityMainFlowOfDocking_System();
    
    //## activity_action MainFlow:ROOT.StopTruck
    OMList<OMString> delegatedFilterPassableFlowsFromActionStopTruckInActivityMainFlowOfDocking_System(double speed);
    
    //## activity_action MainFlow:ROOT.accepteventaction_21
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_21InActivityMainFlowOfDocking_System();
    
    //## activity_action MainFlow:ROOT.accepteventaction_21
    void delegatedAcceptEventDataFromActionAccepteventaction_21InActivityMainFlowOfDocking_System();
    
    //## activity_action MainFlow:ROOT.LoadGoods
    OMList<OMString> delegatedFilterPassableFlowsFromActionLoadGoodsInActivityMainFlowOfDocking_System();
    
    //## activity_action StopTruck:ROOT.calloperation_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_0InActivityStopTruckOfDocking_System(double speed);
    
    //## activity_action StopTruck:ROOT.calloperation_0
    void delegatedInvokeContextMethodFromActionCalloperation_0InActivityStopTruckOfDocking_System(double speed);
    
    //## activity_action StopTruck:ROOT.flowfinal_1
    OMList<OMString> delegatedFilterPassableFlowsFromActionFlowfinal_1InActivityStopTruckOfDocking_System();
    
    ////    Additional operations    ////
    
    //## auto_generated
    RhpBoolean getCheckDoorStatus() const;
    
    //## auto_generated
    void setCheckDoorStatus(RhpBoolean p_CheckDoorStatus);
    
    //## auto_generated
    double getDockingTime() const;
    
    //## auto_generated
    void setDockingTime(double p_DockingTime);
    
    //## auto_generated
    int getSpeed() const;
    
    //## auto_generated
    void setSpeed(int p_speed);
    
    //## auto_generated
    DC* getItsDC() const;
    
    //## auto_generated
    void setItsDC(DC* p_DC);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    RhpBoolean CheckDoorStatus;		//## attribute CheckDoorStatus
    
    double DockingTime;		//## attribute DockingTime
    
    int speed;		//## attribute speed
    
    ////    Relations and components    ////
    
    DC* itsDC;		//## link itsDC
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Truck* itsTruck;		//## link itsTruck
    
    ////    Framework operations    ////

public :

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
    void __setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDocking_System : virtual public AOMInstance {
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;

    DECLARE_ACTIVITY_META(Docking_System, OMAnimatedDocking_System)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Docking_System.h
*********************************************************************/

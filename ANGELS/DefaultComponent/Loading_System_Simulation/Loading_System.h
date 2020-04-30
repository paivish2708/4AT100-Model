/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Loading_System
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Loading_System.h
*********************************************************************/

#ifndef Loading_System_H
#define Loading_System_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "LoadingSystemPkg.h"
//##   ignore
#include <simulation\OMActivityContext.h>
//## link itsANGELS
class ANGELS;

//## link itsDC
class DC;

//## link itsDCOperator
class DCOperator;

//## package UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg

//## class Loading_System
class Loading_System : virtual public OMActivityContext {
public :

    //## auto_generated
    class LoadGoodsOfLoading_System;
    
    //## auto_generated
    class MainFlowOfLoading_System;
    
    //## auto_generated
    class StopTruckOfLoading_System;
    
    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedLoading_System;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Loading_System();
    
    //## auto_generated
    virtual ~Loading_System();
    
    ////    Operations    ////
    
    //## operation LoadingProcess()
    virtual void LoadingProcess();
    
    //## operation StoptheTruck(double)
    virtual void StoptheTruck(double speed);
    
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
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    DC* getItsDC() const;
    
    //## auto_generated
    void setItsDC(DC* p_DC);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
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
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
    
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
    
//#[ ignore
    class LoadGoodsOfLoading_System : virtual public OMActivity {
    public :
    
        class ActionCalloperation_1InActivityLoadGoodsOfLoading_System : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_1InActivityLoadGoodsOfLoading_System(const OMString& id, LoadGoodsOfLoading_System& activity, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
        };
        
        class ActionAccepttimeevent_2InActivityLoadGoodsOfLoading_System : virtual public OMTimeEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepttimeevent_2InActivityLoadGoodsOfLoading_System(const OMString& id, LoadGoodsOfLoading_System& activity, int duration, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
        };
        
        class ActionFlowfinal_3InActivityLoadGoodsOfLoading_System : virtual public OMFlowFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionFlowfinal_3InActivityLoadGoodsOfLoading_System(const OMString& id, LoadGoodsOfLoading_System& activity, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
        };
        
        ////    Constructors and destructors    ////
        
        LoadGoodsOfLoading_System(Loading_System& context);
        
        ////    Framework    ////
        
        Loading_System* mContext;
    };
    
    class MainFlowOfLoading_System : virtual public OMActivity {
    public :
    
        class ActionAccepteventaction_0InActivityMainFlowOfLoading_System : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_0InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& activity, IOxfEvent::ID eventId, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
        };
        
        class ActionAction_15InActivityMainFlowOfLoading_System : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_15InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& activity, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual double getSpeed();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
            
            double speed;
        };
        
        class ActionAccepteventaction_16InActivityMainFlowOfLoading_System : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_16InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& activity, IOxfEvent::ID eventId, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
        };
        
        class ActionActivityfinal_19InActivityMainFlowOfLoading_System : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_19InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& activity, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
        };
        
        class ActionStopTruckInActivityMainFlowOfLoading_System : virtual public OMCallBehaviorAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionStopTruckInActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& parentActivity, StopTruckOfLoading_System& calledActivity, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setPinsFromParameters();
            
            virtual void setParametersFromPins();
            
            virtual void setSpeed(double value);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
            
            StopTruckOfLoading_System* mCalledActivity;
            
            double speed;
        };
        
        class ActionAccepteventaction_21InActivityMainFlowOfLoading_System : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_21InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& activity, IOxfEvent::ID eventId, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
        };
        
        class ActionLoadGoodsInActivityMainFlowOfLoading_System : virtual public OMCallBehaviorAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionLoadGoodsInActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& parentActivity, LoadGoodsOfLoading_System& calledActivity, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setPinsFromParameters();
            
            virtual void setParametersFromPins();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
            
            LoadGoodsOfLoading_System* mCalledActivity;
        };
        
        class DataFlow2InActivityMainFlowOfLoading_System : virtual public OMDataFlow<double> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow2InActivityMainFlowOfLoading_System(const OMString& id, MainFlowOfLoading_System& context, ActionAction_15InActivityMainFlowOfLoading_System& sourceAction, ActionStopTruckInActivityMainFlowOfLoading_System& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAction_15InActivityMainFlowOfLoading_System* dataSource;
            
            ActionStopTruckInActivityMainFlowOfLoading_System* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        MainFlowOfLoading_System(Loading_System& context);
        
        ////    Framework    ////
        
        Loading_System* mContext;
    };
    
    class StopTruckOfLoading_System : virtual public OMActivity {
    public :
    
        class ActionCalloperation_0InActivityStopTruckOfLoading_System : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_0InActivityStopTruckOfLoading_System(const OMString& id, StopTruckOfLoading_System& activity, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setSpeed(double value);
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
            
            double speed;
        };
        
        class ActionFlowfinal_1InActivityStopTruckOfLoading_System : virtual public OMFlowFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionFlowfinal_1InActivityStopTruckOfLoading_System(const OMString& id, StopTruckOfLoading_System& activity, Loading_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Loading_System* mContext;
        };
        
        class DataFlow0InActivityStopTruckOfLoading_System : virtual public OMDataFlow<double> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow0InActivityStopTruckOfLoading_System(const OMString& id, StopTruckOfLoading_System& context, ActionCalloperation_0InActivityStopTruckOfLoading_System& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            StopTruckOfLoading_System* dataSource;
            
            ActionCalloperation_0InActivityStopTruckOfLoading_System* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        StopTruckOfLoading_System(Loading_System& context);
        
        virtual double getSpeed();
        
        virtual void setSpeed(double value);
        
        ////    Framework operations    ////
        
        ////    Framework    ////
        
        Loading_System* mContext;
        
        double speed;
    };
    
    virtual void* getMe();
//#]

    //## activity_action LoadGoods:ROOT.calloperation_1
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_1InActivityLoadGoodsOfLoading_System();
    
    //## activity_action LoadGoods:ROOT.calloperation_1
    void delegatedInvokeContextMethodFromActionCalloperation_1InActivityLoadGoodsOfLoading_System();
    
    //## activity_action LoadGoods:ROOT.accepttimeevent_2
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepttimeevent_2InActivityLoadGoodsOfLoading_System();
    
    //## activity_action LoadGoods:ROOT.flowfinal_3
    OMList<OMString> delegatedFilterPassableFlowsFromActionFlowfinal_3InActivityLoadGoodsOfLoading_System();
    
//#[ ignore
    virtual OMActivity* createMainActivity();
//#]

    //## activity_action MainFlow:ROOT.accepteventaction_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityMainFlowOfLoading_System();
    
    //## activity_action MainFlow:ROOT.accepteventaction_0
    void delegatedAcceptEventDataFromActionAccepteventaction_0InActivityMainFlowOfLoading_System();
    
    //## activity_action MainFlow:ROOT.action_15
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_15InActivityMainFlowOfLoading_System(double& speed);
    
    //## activity_action MainFlow:ROOT.action_15
    void delegatedInvokeContextMethodFromActionAction_15InActivityMainFlowOfLoading_System(double& speed);
    
    //## activity_action MainFlow:ROOT.accepteventaction_16
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_16InActivityMainFlowOfLoading_System();
    
    //## activity_action MainFlow:ROOT.accepteventaction_16
    void delegatedAcceptEventDataFromActionAccepteventaction_16InActivityMainFlowOfLoading_System();
    
    //## activity_action MainFlow:ROOT.activityfinal_19
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_19InActivityMainFlowOfLoading_System();
    
    //## activity_action MainFlow:ROOT.StopTruck
    OMList<OMString> delegatedFilterPassableFlowsFromActionStopTruckInActivityMainFlowOfLoading_System(double speed);
    
    //## activity_action MainFlow:ROOT.accepteventaction_21
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_21InActivityMainFlowOfLoading_System();
    
    //## activity_action MainFlow:ROOT.accepteventaction_21
    void delegatedAcceptEventDataFromActionAccepteventaction_21InActivityMainFlowOfLoading_System();
    
    //## activity_action MainFlow:ROOT.LoadGoods
    OMList<OMString> delegatedFilterPassableFlowsFromActionLoadGoodsInActivityMainFlowOfLoading_System();
    
    //## activity_action StopTruck:ROOT.calloperation_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_0InActivityStopTruckOfLoading_System(double speed);
    
    //## activity_action StopTruck:ROOT.calloperation_0
    void delegatedInvokeContextMethodFromActionCalloperation_0InActivityStopTruckOfLoading_System(double speed);
    
    //## activity_action StopTruck:ROOT.flowfinal_1
    OMList<OMString> delegatedFilterPassableFlowsFromActionFlowfinal_1InActivityStopTruckOfLoading_System();

protected :

    DC* itsDC;		//## link itsDC
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLoading_System : virtual public AOMInstance {
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;

    DECLARE_ACTIVITY_META(Loading_System, OMAnimatedLoading_System)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Loading_System.h
*********************************************************************/

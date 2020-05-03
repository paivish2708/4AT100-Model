/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Docking_System
//!	Generated Date	: Sun, 3, May 2020  
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
//## classInstance itsCollision_Avoidance
#include "Collision_Avoidance.h"
//## classInstance itsCollision_Detection
#include "Collision_Detection.h"
//## classInstance itsTruck
#include "Truck.h"
//## link itsANGELS
class ANGELS;

//## link itsDCOperator
class DCOperator;

//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystemPkg

//## class Docking_System
class Docking_System : virtual public OMActivityContext {
public :

    //## auto_generated
    class MainFlowOfDocking_System;
    
    //## auto_generated
    class MoveTruckForwardOfDocking_System;
    
    //## auto_generated
    class ParkingSpotOfDocking_System;
    
//#[ ignore
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
        
        class ActionParkingSpotInActivityMainFlowOfDocking_System : virtual public OMCallBehaviorAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionParkingSpotInActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& parentActivity, ParkingSpotOfDocking_System& calledActivity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setPinsFromParameters();
            
            virtual void setParametersFromPins();
            
            virtual void setParkingSpot(int value);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
            
            ParkingSpotOfDocking_System* mCalledActivity;
            
            int ParkingSpot;
        };
        
        class ActionAccepteventaction_4InActivityMainFlowOfDocking_System : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_4InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, IOxfEvent::ID eventId, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual int getSteeringAngle();
            
            virtual int getSpeed();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
            
            int SteeringAngle;
            
            int speed;
        };
        
        class ActionMoveTruckForwardInActivityMainFlowOfDocking_System : virtual public OMCallBehaviorAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionMoveTruckForwardInActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& parentActivity, MoveTruckForwardOfDocking_System& calledActivity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setPinsFromParameters();
            
            virtual void setParametersFromPins();
            
            virtual void setSpeed(int value);
            
            virtual void setSteeringAngle(int value);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
            
            MoveTruckForwardOfDocking_System* mCalledActivity;
            
            int speed;
            
            int SteeringAngle;
        };
        
        class ActionActivityfinal_8InActivityMainFlowOfDocking_System : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_8InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
        };
        
        class ActionAccepteventaction_9InActivityMainFlowOfDocking_System : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_9InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& activity, IOxfEvent::ID eventId, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual int getParkingSpot();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
            
            int ParkingSpot;
        };
        
        class DataFlow2InActivityMainFlowOfDocking_System : virtual public OMDataFlow<int> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow2InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& context, ActionAccepteventaction_9InActivityMainFlowOfDocking_System& sourceAction, ActionParkingSpotInActivityMainFlowOfDocking_System& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAccepteventaction_9InActivityMainFlowOfDocking_System* dataSource;
            
            ActionParkingSpotInActivityMainFlowOfDocking_System* dataTarget;
        };
        
        class DataFlow4InActivityMainFlowOfDocking_System : virtual public OMDataFlow<int> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow4InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& context, ActionAccepteventaction_4InActivityMainFlowOfDocking_System& sourceAction, ActionMoveTruckForwardInActivityMainFlowOfDocking_System& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAccepteventaction_4InActivityMainFlowOfDocking_System* dataSource;
            
            ActionMoveTruckForwardInActivityMainFlowOfDocking_System* dataTarget;
        };
        
        class DataFlow5InActivityMainFlowOfDocking_System : virtual public OMDataFlow<int> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow5InActivityMainFlowOfDocking_System(const OMString& id, MainFlowOfDocking_System& context, ActionAccepteventaction_4InActivityMainFlowOfDocking_System& sourceAction, ActionMoveTruckForwardInActivityMainFlowOfDocking_System& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAccepteventaction_4InActivityMainFlowOfDocking_System* dataSource;
            
            ActionMoveTruckForwardInActivityMainFlowOfDocking_System* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        MainFlowOfDocking_System(Docking_System& context);
        
        ////    Framework    ////
        
        Docking_System* mContext;
    };
    
    class MoveTruckForwardOfDocking_System : virtual public OMActivity {
    public :
    
        class ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System(const OMString& id, MoveTruckForwardOfDocking_System& activity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setSteeringAngle(double value);
            
            virtual void setSpeed(double value);
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
            
            double SteeringAngle;
            
            double speed;
        };
        
        class ActionFlowfinal_4InActivityMoveTruckForwardOfDocking_System : virtual public OMFlowFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionFlowfinal_4InActivityMoveTruckForwardOfDocking_System(const OMString& id, MoveTruckForwardOfDocking_System& activity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
        };
        
        class DataFlow0InActivityMoveTruckForwardOfDocking_System : virtual public OMDataFlow<int> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow0InActivityMoveTruckForwardOfDocking_System(const OMString& id, MoveTruckForwardOfDocking_System& context, ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            MoveTruckForwardOfDocking_System* dataSource;
            
            ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System* dataTarget;
        };
        
        class DataFlow1InActivityMoveTruckForwardOfDocking_System : virtual public OMDataFlow<int> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow1InActivityMoveTruckForwardOfDocking_System(const OMString& id, MoveTruckForwardOfDocking_System& context, ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            MoveTruckForwardOfDocking_System* dataSource;
            
            ActionCalloperation_2InActivityMoveTruckForwardOfDocking_System* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        MoveTruckForwardOfDocking_System(Docking_System& context);
        
        virtual int getSpeed();
        
        virtual void setSpeed(int value);
        
        virtual int getSteeringAngle();
        
        virtual void setSteeringAngle(int value);
        
        ////    Framework operations    ////
        
        ////    Framework    ////
        
        Docking_System* mContext;
        
        int speed;
        
        int SteeringAngle;
    };
    
    class ParkingSpotOfDocking_System : virtual public OMActivity {
    public :
    
        class ActionFlowfinal_1InActivityParkingSpotOfDocking_System : virtual public OMFlowFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionFlowfinal_1InActivityParkingSpotOfDocking_System(const OMString& id, ParkingSpotOfDocking_System& activity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
        };
        
        class ActionCalloperation_3InActivityParkingSpotOfDocking_System : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_3InActivityParkingSpotOfDocking_System(const OMString& id, ParkingSpotOfDocking_System& activity, Docking_System& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setPS(double value);
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Docking_System* mContext;
            
            double PS;
        };
        
        class DataFlow0InActivityParkingSpotOfDocking_System : virtual public OMDataFlow<int> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow0InActivityParkingSpotOfDocking_System(const OMString& id, ParkingSpotOfDocking_System& context, ActionCalloperation_3InActivityParkingSpotOfDocking_System& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ParkingSpotOfDocking_System* dataSource;
            
            ActionCalloperation_3InActivityParkingSpotOfDocking_System* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        ParkingSpotOfDocking_System(Docking_System& context);
        
        virtual int getParkingSpot();
        
        virtual void setParkingSpot(int value);
        
        ////    Framework operations    ////
        
        ////    Framework    ////
        
        Docking_System* mContext;
        
        int ParkingSpot;
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
    
    //## operation MoveTruck(double,double)
    virtual void MoveTruck(double SteeringAngle, double speed);
    
    //## operation PSInput(double)
    virtual void PSInput(double PS = 0);
    
//#[ ignore
    virtual OMActivity* createMainActivity();
    
    virtual void* getMe();
//#]

    //## activity_action MainFlow:ROOT.accepteventaction_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityMainFlowOfDocking_System();
    
    //## activity_action MainFlow:ROOT.accepteventaction_0
    void delegatedAcceptEventDataFromActionAccepteventaction_0InActivityMainFlowOfDocking_System();
    
    //## activity_action MainFlow:ROOT.ParkingSpot
    OMList<OMString> delegatedFilterPassableFlowsFromActionParkingSpotInActivityMainFlowOfDocking_System(int ParkingSpot);
    
    //## activity_action MainFlow:ROOT.accepteventaction_4
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_4InActivityMainFlowOfDocking_System(int& SteeringAngle, int& speed);
    
    //## activity_action MainFlow:ROOT.accepteventaction_4
    void delegatedAcceptEventDataFromActionAccepteventaction_4InActivityMainFlowOfDocking_System(int& SteeringAngle, int& speed);
    
    //## activity_action MainFlow:ROOT.MoveTruckForward
    OMList<OMString> delegatedFilterPassableFlowsFromActionMoveTruckForwardInActivityMainFlowOfDocking_System(int speed, int SteeringAngle);
    
    //## activity_action MainFlow:ROOT.activityfinal_8
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_8InActivityMainFlowOfDocking_System();
    
    //## activity_action MainFlow:ROOT.accepteventaction_9
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_9InActivityMainFlowOfDocking_System(int& ParkingSpot);
    
    //## activity_action MainFlow:ROOT.accepteventaction_9
    void delegatedAcceptEventDataFromActionAccepteventaction_9InActivityMainFlowOfDocking_System(int& ParkingSpot);
    
    //## activity_action MoveTruckForward:ROOT.calloperation_2
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_2InActivityMoveTruckForwardOfDocking_System(double SteeringAngle, double speed);
    
    //## activity_action MoveTruckForward:ROOT.calloperation_2
    void delegatedInvokeContextMethodFromActionCalloperation_2InActivityMoveTruckForwardOfDocking_System(double SteeringAngle, double speed);
    
    //## activity_action MoveTruckForward:ROOT.flowfinal_4
    OMList<OMString> delegatedFilterPassableFlowsFromActionFlowfinal_4InActivityMoveTruckForwardOfDocking_System();
    
    //## activity_action ParkingSpot:ROOT.flowfinal_1
    OMList<OMString> delegatedFilterPassableFlowsFromActionFlowfinal_1InActivityParkingSpotOfDocking_System();
    
    //## activity_action ParkingSpot:ROOT.calloperation_3
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_3InActivityParkingSpotOfDocking_System(double PS);
    
    //## activity_action ParkingSpot:ROOT.calloperation_3
    void delegatedInvokeContextMethodFromActionCalloperation_3InActivityParkingSpotOfDocking_System(double PS);
    
    ////    Additional operations    ////
    
    //## auto_generated
    double getParkingSpotInput() const;
    
    //## auto_generated
    void setParkingSpotInput(double p_ParkingSpotInput);
    
    //## auto_generated
    double getSteerAngle() const;
    
    //## auto_generated
    void setSteerAngle(double p_SteerAngle);
    
    //## auto_generated
    double getTruckSpeed() const;
    
    //## auto_generated
    void setTruckSpeed(double p_TruckSpeed);
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    Collision_Avoidance* getItsCollision_Avoidance() const;
    
    //## auto_generated
    Collision_Avoidance* getItsCollision_Avoidance_1() const;
    
    //## auto_generated
    void setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection() const;
    
    //## auto_generated
    Collision_Detection* getItsCollision_Detection_1() const;
    
    //## auto_generated
    void setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    Truck* getItsTruck() const;
    
    //## auto_generated
    Truck* getItsTruck_1() const;
    
    //## auto_generated
    void setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    double ParkingSpotInput;		//## attribute ParkingSpotInput
    
    double SteerAngle;		//## attribute SteerAngle
    
    double TruckSpeed;		//## attribute TruckSpeed
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    Collision_Avoidance itsCollision_Avoidance;		//## classInstance itsCollision_Avoidance
    
    Collision_Avoidance* itsCollision_Avoidance_1;		//## link itsCollision_Avoidance_1
    
    Collision_Detection itsCollision_Detection;		//## classInstance itsCollision_Detection
    
    Collision_Detection* itsCollision_Detection_1;		//## link itsCollision_Detection_1
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Truck itsTruck;		//## classInstance itsTruck
    
    Truck* itsTruck_1;		//## link itsTruck_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
    
    //## auto_generated
    void __setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance);
    
    //## auto_generated
    void _clearItsCollision_Avoidance_1();
    
    //## auto_generated
    void __setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection);
    
    //## auto_generated
    void _clearItsCollision_Detection_1();
    
    //## auto_generated
    void __setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator();
    
    //## auto_generated
    void __setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    void _setItsTruck_1(Truck* p_Truck);
    
    //## auto_generated
    void _clearItsTruck_1();
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

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\DCOperator.h
*********************************************************************/

#ifndef DCOperator_H
#define DCOperator_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## link itsANGELS
class ANGELS;

//## link itsCharging_System
class Charging_System;

//## link itsDocking_Process
class Docking_Process;

//## link itsLoading_Process
class Loading_Process;

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DCOperator
class DCOperator {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCOperator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCOperator();
    
    //## auto_generated
    ~DCOperator();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    Charging_System* getItsCharging_System() const;
    
    //## auto_generated
    void setItsCharging_System(Charging_System* p_Charging_System);
    
    //## auto_generated
    Docking_Process* getItsDocking_Process() const;
    
    //## auto_generated
    void setItsDocking_Process(Docking_Process* p_Docking_Process);
    
    //## auto_generated
    Docking_Process* getItsDocking_Process_1() const;
    
    //## auto_generated
    void setItsDocking_Process_1(Docking_Process* p_Docking_Process);
    
    //## auto_generated
    Loading_Process* getItsLoading_Process() const;
    
    //## auto_generated
    void setItsLoading_Process(Loading_Process* p_Loading_Process);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    Charging_System* itsCharging_System;		//## link itsCharging_System
    
    Docking_Process* itsDocking_Process;		//## link itsDocking_Process
    
    Docking_Process* itsDocking_Process_1;		//## link itsDocking_Process_1
    
    Loading_Process* itsLoading_Process;		//## link itsLoading_Process
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
    
    //## auto_generated
    void __setItsCharging_System(Charging_System* p_Charging_System);
    
    //## auto_generated
    void _setItsCharging_System(Charging_System* p_Charging_System);
    
    //## auto_generated
    void _clearItsCharging_System();
    
    //## auto_generated
    void __setItsDocking_Process(Docking_Process* p_Docking_Process);
    
    //## auto_generated
    void _setItsDocking_Process(Docking_Process* p_Docking_Process);
    
    //## auto_generated
    void _clearItsDocking_Process();
    
    //## auto_generated
    void __setItsLoading_Process(Loading_Process* p_Loading_Process);
    
    //## auto_generated
    void _setItsLoading_Process(Loading_Process* p_Loading_Process);
    
    //## auto_generated
    void _clearItsLoading_Process();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCOperator : virtual public AOMInstance {
    DECLARE_META(DCOperator, OMAnimatedDCOperator)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\DCOperator.h
*********************************************************************/

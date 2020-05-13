/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Wed, 13, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\DCOperator.h
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

//## link itsDocking_System
class Docking_System;

//## link itsLoading_System
class Loading_System;

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
    Docking_System* getItsDocking_System() const;
    
    //## auto_generated
    void setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    Docking_System* getItsDocking_System_1() const;
    
    //## auto_generated
    void setItsDocking_System_1(Docking_System* p_Docking_System);
    
    //## auto_generated
    Loading_System* getItsLoading_System() const;
    
    //## auto_generated
    void setItsLoading_System(Loading_System* p_Loading_System);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    Charging_System* itsCharging_System;		//## link itsCharging_System
    
    Docking_System* itsDocking_System;		//## link itsDocking_System
    
    Docking_System* itsDocking_System_1;		//## link itsDocking_System_1
    
    Loading_System* itsLoading_System;		//## link itsLoading_System
    
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
    void __setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System();
    
    //## auto_generated
    void __setItsDocking_System_1(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System_1(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System_1();
    
    //## auto_generated
    void __setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    void _setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    void _clearItsLoading_System();
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
	File Path	: DefaultComponent\Loading_System_Simulation\DCOperator.h
*********************************************************************/

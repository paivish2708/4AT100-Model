/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: ChargingInfrastructure
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\ChargingInfrastructure.h
*********************************************************************/

#ifndef ChargingInfrastructure_H
#define ChargingInfrastructure_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ANGELSPkg.h"
//## link itsANGELS
class ANGELS;

//## package UseCaseAnalysisPkg::ANGELSPkg

//## class ChargingInfrastructure
class ChargingInfrastructure {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedChargingInfrastructure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ChargingInfrastructure();
    
    //## auto_generated
    ~ChargingInfrastructure();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);

protected :

    //## auto_generated
    void cleanUpRelations();
    
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
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedChargingInfrastructure : virtual public AOMInstance {
    DECLARE_META(ChargingInfrastructure, OMAnimatedChargingInfrastructure)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\ChargingInfrastructure.h
*********************************************************************/

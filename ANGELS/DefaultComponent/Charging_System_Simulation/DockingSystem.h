/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: DockingSystem
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\DockingSystem.h
*********************************************************************/

#ifndef DockingSystem_H
#define DockingSystem_H

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

//## auto_generated
class DockingSystem;

//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystem



//## package UseCaseAnalysisPkg::ANGELSPkg::DockingSystem

//## class DockingSystem
class DockingSystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDockingSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DockingSystem();
    
    //## auto_generated
    ~DockingSystem();
    
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
class OMAnimatedDockingSystem : virtual public AOMInstance {
    DECLARE_META(DockingSystem, OMAnimatedDockingSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\DockingSystem.h
*********************************************************************/

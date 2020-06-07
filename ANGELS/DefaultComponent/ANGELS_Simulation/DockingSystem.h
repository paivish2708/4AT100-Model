/*********************************************************************
	Rhapsody	: 8.4 
	Login		: kevin
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: DockingSystem
//!	Generated Date	: Fri, 29, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\DockingSystem.h
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
#include "DockingSystemPkg.h"
//## link itsANGELS
class ANGELS;

//## package ANGELSPkg::DockingSystemPkg

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
    
    //## auto_generated
    ANGELS* getItsANGELS_1() const;
    
    //## auto_generated
    void setItsANGELS_1(ANGELS* p_ANGELS);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_1();
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
	File Path	: DefaultComponent\ANGELS_Simulation\DockingSystem.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Government
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Government.h
*********************************************************************/

#ifndef Government_H
#define Government_H

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

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Government
class Government {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGovernment;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    //## auto_generated
    Government();
    
    //## auto_generated
    ~Government();
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ANGELS* itsANGELS;		//## link itsANGELS

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
class OMAnimatedGovernment : virtual public AOMInstance {
    DECLARE_META(Government, OMAnimatedGovernment)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Government.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: DC
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\DC.h
*********************************************************************/

#ifndef DC_H
#define DC_H

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

//## link itsLoading_System
class Loading_System;

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DC
class DC {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    //## auto_generated
    DC();
    
    //## auto_generated
    ~DC();
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    Loading_System* getItsLoading_System() const;
    
    //## auto_generated
    void setItsLoading_System(Loading_System* p_Loading_System);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    Loading_System* itsLoading_System;		//## link itsLoading_System

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
    
    //## auto_generated
    void __setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    void _setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    void _clearItsLoading_System();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDC : virtual public AOMInstance {
    DECLARE_META(DC, OMAnimatedDC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\DC.h
*********************************************************************/

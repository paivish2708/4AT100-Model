/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DC
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DC.h
*********************************************************************/

#ifndef DC_H
#define DC_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsANGELS
class ANGELS;

//## link itsLoading_System
class Loading_System;

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DC
class DC {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DC();
    
    //## auto_generated
    ~DC();
    
    ////    Additional operations    ////
    
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
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
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
    void __setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    void _setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    void _clearItsLoading_System();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DC.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Localisation_System
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Localisation_System.h
*********************************************************************/

#ifndef Localisation_System_H
#define Localisation_System_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsANGELS
class ANGELS;

//## package UseCaseAnalysisPkg::ANGELSPkg::LocalisationPkg

//## class Localisation_System
class Localisation_System {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Localisation_System();
    
    //## auto_generated
    ~Localisation_System();
    
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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Localisation_System.h
*********************************************************************/

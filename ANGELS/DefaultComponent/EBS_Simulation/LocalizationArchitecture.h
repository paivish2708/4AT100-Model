/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EBS_Simulation
	Model Element	: LocalizationArchitecture
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\EBS_Simulation\LocalizationArchitecture.h
*********************************************************************/

#ifndef LocalizationArchitecture_H
#define LocalizationArchitecture_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "LocalisationPkg.h"
//## link itsANGELS_1
class ANGELS;

//## package ANGELSPkg::LocalisationPkg

//## class LocalizationArchitecture
class LocalizationArchitecture {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLocalizationArchitecture;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    LocalizationArchitecture();
    
    //## auto_generated
    ~LocalizationArchitecture();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS_1() const;
    
    //## auto_generated
    void setItsANGELS_1(ANGELS* p_ANGELS);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
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
class OMAnimatedLocalizationArchitecture : virtual public AOMInstance {
    DECLARE_META(LocalizationArchitecture, OMAnimatedLocalizationArchitecture)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\EBS_Simulation\LocalizationArchitecture.h
*********************************************************************/

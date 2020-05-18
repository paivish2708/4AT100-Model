/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ParkingSystemBlock_Simulation
	Model Element	: LocalizationArchitecture
//!	Generated Date	: Mon, 18, May 2020  
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\LocalizationArchitecture.h
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
#include "ANGELSPkg.h"
//## link itsANGELS_1
class ANGELS;

//## package ANGELSPkg

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
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\LocalizationArchitecture.h
*********************************************************************/

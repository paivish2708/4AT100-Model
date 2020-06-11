/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: EmergencyOverrideSystemPkg
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\EmergencyOverrideSystemPkg.h
*********************************************************************/

#ifndef EmergencyOverrideSystemPkg_H
#define EmergencyOverrideSystemPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include "ANGELSPkg.h"
//## auto_generated
class EBS;

//#[ ignore
#define DefaultMode_EmergencyOverrideSystemPkg_ANGELSPkg_id 22201
//#]

//## package ANGELSPkg::EmergencyOverrideSystemPkg



//## event DefaultMode()
class DefaultMode : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDefaultMode;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DefaultMode();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDefaultMode : virtual public AOMEvent {
    DECLARE_META_EVENT(DefaultMode)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\EmergencyOverrideSystemPkg.h
*********************************************************************/

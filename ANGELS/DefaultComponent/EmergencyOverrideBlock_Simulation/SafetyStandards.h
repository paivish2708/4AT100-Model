/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: SafetyStandards
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\SafetyStandards.h
*********************************************************************/

#ifndef SafetyStandards_H
#define SafetyStandards_H

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

//## link itsEmergencyOverrideBlock
class EmergencyOverrideBlock;

//## package ANGELSPkg::ActorPkg

//## actor SafetyStandards
class SafetyStandards {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSafetyStandards;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SafetyStandards();
    
    //## auto_generated
    ~SafetyStandards();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    ANGELS* getItsANGELS_1() const;
    
    //## auto_generated
    void setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    EmergencyOverrideBlock* getItsEmergencyOverrideBlock() const;
    
    //## auto_generated
    void setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    EmergencyOverrideBlock* itsEmergencyOverrideBlock;		//## link itsEmergencyOverrideBlock
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_1();
    
    //## auto_generated
    void __setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock);
    
    //## auto_generated
    void _setItsEmergencyOverrideBlock(EmergencyOverrideBlock* p_EmergencyOverrideBlock);
    
    //## auto_generated
    void _clearItsEmergencyOverrideBlock();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSafetyStandards : virtual public AOMInstance {
    DECLARE_META(SafetyStandards, OMAnimatedSafetyStandards)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\SafetyStandards.h
*********************************************************************/

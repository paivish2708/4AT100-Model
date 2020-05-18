/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: CommunicationSystemBlock
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\CommunicationSystemBlock.h
*********************************************************************/

#ifndef CommunicationSystemBlock_H
#define CommunicationSystemBlock_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CommunicationPkg.h"
//## link itsCharging_System
class Charging_System;

//## package ANGELSPkg::CommunicationPkg

//## class CommunicationSystemBlock
class CommunicationSystemBlock {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCommunicationSystemBlock;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CommunicationSystemBlock();
    
    //## auto_generated
    ~CommunicationSystemBlock();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Charging_System* getItsCharging_System() const;
    
    //## auto_generated
    void setItsCharging_System(Charging_System* p_Charging_System);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Charging_System* itsCharging_System;		//## link itsCharging_System
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCharging_System(Charging_System* p_Charging_System);
    
    //## auto_generated
    void _setItsCharging_System(Charging_System* p_Charging_System);
    
    //## auto_generated
    void _clearItsCharging_System();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCommunicationSystemBlock : virtual public AOMInstance {
    DECLARE_META(CommunicationSystemBlock, OMAnimatedCommunicationSystemBlock)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\CommunicationSystemBlock.h
*********************************************************************/

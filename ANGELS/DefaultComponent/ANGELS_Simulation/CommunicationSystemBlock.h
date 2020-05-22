/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: CommunicationSystemBlock
//!	Generated Date	: Fri, 22, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\CommunicationSystemBlock.h
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
//## link itsChargingSystemBlock
class ChargingSystemBlock;

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
    ChargingSystemBlock* getItsChargingSystemBlock() const;
    
    //## auto_generated
    void setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ChargingSystemBlock* itsChargingSystemBlock;		//## link itsChargingSystemBlock
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock);
    
    //## auto_generated
    void _setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock);
    
    //## auto_generated
    void _clearItsChargingSystemBlock();
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
	File Path	: DefaultComponent\ANGELS_Simulation\CommunicationSystemBlock.h
*********************************************************************/

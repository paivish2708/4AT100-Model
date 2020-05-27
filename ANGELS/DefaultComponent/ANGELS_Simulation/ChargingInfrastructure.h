/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: ChargingInfrastructure
//!	Generated Date	: Wed, 27, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\ChargingInfrastructure.h
*********************************************************************/

#ifndef ChargingInfrastructure_H
#define ChargingInfrastructure_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ChargingSystemPkg.h"
//## link itsANGELS
class ANGELS;

//## link itsChargingSystemBlock
class ChargingSystemBlock;

//## package ANGELSPkg::ChargingSystemPkg

//## class ChargingInfrastructure
class ChargingInfrastructure {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedChargingInfrastructure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ChargingInfrastructure();
    
    //## auto_generated
    ~ChargingInfrastructure();
    
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
    ChargingSystemBlock* getItsChargingSystemBlock() const;
    
    //## auto_generated
    void setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    ChargingSystemBlock* itsChargingSystemBlock;		//## link itsChargingSystemBlock
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_1();
    
    //## auto_generated
    void __setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock);
    
    //## auto_generated
    void _setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock);
    
    //## auto_generated
    void _clearItsChargingSystemBlock();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedChargingInfrastructure : virtual public AOMInstance {
    DECLARE_META(ChargingInfrastructure, OMAnimatedChargingInfrastructure)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\ChargingInfrastructure.h
*********************************************************************/

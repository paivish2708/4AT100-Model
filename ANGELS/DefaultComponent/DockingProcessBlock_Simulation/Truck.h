/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcessBlock_Simulation
	Model Element	: Truck
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\Truck.h
*********************************************************************/

#ifndef Truck_H
#define Truck_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "TruckPkg.h"
//## link itsANGELS
class ANGELS;

//## link itsChargingSystemBlock
class ChargingSystemBlock;

//## link itsDockingProcessBlock
class DockingProcessBlock;

//## package ANGELSPkg::TruckPkg

//## class Truck
class Truck {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTruck;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Truck();
    
    //## auto_generated
    ~Truck();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    ChargingSystemBlock* getItsChargingSystemBlock() const;
    
    //## auto_generated
    void setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock);
    
    //## auto_generated
    DockingProcessBlock* getItsDockingProcessBlock() const;
    
    //## auto_generated
    void setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ChargingSystemBlock* itsChargingSystemBlock;		//## link itsChargingSystemBlock
    
    DockingProcessBlock* itsDockingProcessBlock;		//## link itsDockingProcessBlock
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
    
    //## auto_generated
    void __setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock);
    
    //## auto_generated
    void _setItsChargingSystemBlock(ChargingSystemBlock* p_ChargingSystemBlock);
    
    //## auto_generated
    void _clearItsChargingSystemBlock();
    
    //## auto_generated
    void __setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _clearItsDockingProcessBlock();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTruck : virtual public AOMInstance {
    DECLARE_META(Truck, OMAnimatedTruck)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\Truck.h
*********************************************************************/

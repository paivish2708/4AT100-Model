/*********************************************************************
	Rhapsody	: 8.4 
	Login		: kevin
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: Driver
//!	Generated Date	: Fri, 29, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\Driver.h
*********************************************************************/

#ifndef Driver_H
#define Driver_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## actor Driver
#include "Truck.h"
//## auto_generated
class ANGELS;

//## auto_generated
class ChargingSystemBlock;

//## auto_generated
class DockingProcessBlock;

//## link itsParkingSystemBlock
class ParkingSystemBlock;

//## package ANGELSPkg::ActorPkg

//## actor Driver
class Driver : public Truck {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDriver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Driver();
    
    //## auto_generated
    ~Driver();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS_1() const;
    
    //## auto_generated
    void setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    ANGELS* getItsANGELS_3() const;
    
    //## auto_generated
    void setItsANGELS_3(ANGELS* p_ANGELS);
    
    //## auto_generated
    DockingProcessBlock* getItsDockingProcessBlock_1() const;
    
    //## auto_generated
    void setItsDockingProcessBlock_1(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    ParkingSystemBlock* getItsParkingSystemBlock() const;
    
    //## auto_generated
    void setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock);
    
    //## auto_generated
    Truck* getItsTruck_4() const;
    
    //## auto_generated
    void setItsTruck_4(Truck* p_Truck);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    ANGELS* itsANGELS_3;		//## link itsANGELS_3
    
    DockingProcessBlock* itsDockingProcessBlock_1;		//## link itsDockingProcessBlock_1
    
    ParkingSystemBlock* itsParkingSystemBlock;		//## link itsParkingSystemBlock
    
    Truck* itsTruck_4;		//## link itsTruck_4
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS_3(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_3(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_3();
    
    //## auto_generated
    void __setItsDockingProcessBlock_1(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _setItsDockingProcessBlock_1(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _clearItsDockingProcessBlock_1();
    
    //## auto_generated
    void __setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock);
    
    //## auto_generated
    void _setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock);
    
    //## auto_generated
    void _clearItsParkingSystemBlock();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDriver : public OMAnimatedTruck {
    DECLARE_META(Driver, OMAnimatedDriver)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\Driver.h
*********************************************************************/

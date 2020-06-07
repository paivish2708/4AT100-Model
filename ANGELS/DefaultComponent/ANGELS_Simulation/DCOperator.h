/*********************************************************************
	Rhapsody	: 8.4 
	Login		: kevin
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: DCOperator
//!	Generated Date	: Fri, 29, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\DCOperator.h
*********************************************************************/

#ifndef DCOperator_H
#define DCOperator_H

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

//## link itsChargingSystemBlock
class ChargingSystemBlock;

//## link itsDockingProcessBlock
class DockingProcessBlock;

//## link itsLoadingProcessBlock
class LoadingProcessBlock;

//## link itsParkingSystemBlock
class ParkingSystemBlock;

//## package ANGELSPkg::ActorPkg

//## actor DCOperator
class DCOperator {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCOperator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCOperator();
    
    //## auto_generated
    ~DCOperator();
    
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
    
    //## auto_generated
    DockingProcessBlock* getItsDockingProcessBlock() const;
    
    //## auto_generated
    void setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    DockingProcessBlock* getItsDockingProcessBlock_1() const;
    
    //## auto_generated
    void setItsDockingProcessBlock_1(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    DockingProcessBlock* getItsDockingProcessBlock_2() const;
    
    //## auto_generated
    void setItsDockingProcessBlock_2(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    DockingProcessBlock* getItsDockingProcessBlock_3() const;
    
    //## auto_generated
    void setItsDockingProcessBlock_3(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    LoadingProcessBlock* getItsLoadingProcessBlock() const;
    
    //## auto_generated
    void setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock);
    
    //## auto_generated
    ParkingSystemBlock* getItsParkingSystemBlock() const;
    
    //## auto_generated
    void setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    ChargingSystemBlock* itsChargingSystemBlock;		//## link itsChargingSystemBlock
    
    DockingProcessBlock* itsDockingProcessBlock;		//## link itsDockingProcessBlock
    
    DockingProcessBlock* itsDockingProcessBlock_1;		//## link itsDockingProcessBlock_1
    
    DockingProcessBlock* itsDockingProcessBlock_2;		//## link itsDockingProcessBlock_2
    
    DockingProcessBlock* itsDockingProcessBlock_3;		//## link itsDockingProcessBlock_3
    
    LoadingProcessBlock* itsLoadingProcessBlock;		//## link itsLoadingProcessBlock
    
    ParkingSystemBlock* itsParkingSystemBlock;		//## link itsParkingSystemBlock
    
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
    
    //## auto_generated
    void __setItsDockingProcessBlock_2(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _setItsDockingProcessBlock_2(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _clearItsDockingProcessBlock_2();
    
    //## auto_generated
    void __setItsDockingProcessBlock_3(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _setItsDockingProcessBlock_3(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _clearItsDockingProcessBlock_3();
    
    //## auto_generated
    void __setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock);
    
    //## auto_generated
    void _setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock);
    
    //## auto_generated
    void _clearItsLoadingProcessBlock();
    
    //## auto_generated
    void __setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock);
    
    //## auto_generated
    void _setItsParkingSystemBlock(ParkingSystemBlock* p_ParkingSystemBlock);
    
    //## auto_generated
    void _clearItsParkingSystemBlock();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCOperator : virtual public AOMInstance {
    DECLARE_META(DCOperator, OMAnimatedDCOperator)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\DCOperator.h
*********************************************************************/

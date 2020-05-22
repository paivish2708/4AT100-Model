/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: DC
//!	Generated Date	: Fri, 22, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\DC.h
*********************************************************************/

#ifndef DC_H
#define DC_H

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

//## link itsDockingProcessBlock
class DockingProcessBlock;

//## link itsLoadingProcessBlock
class LoadingProcessBlock;

//## link itsParkingSystemBlock
class ParkingSystemBlock;

//## package ANGELSPkg::ActorPkg

//## actor DC
class DC {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DC();
    
    //## auto_generated
    ~DC();
    
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
    ANGELS* getItsANGELS_2() const;
    
    //## auto_generated
    void setItsANGELS_2(ANGELS* p_ANGELS);
    
    //## auto_generated
    DockingProcessBlock* getItsDockingProcessBlock() const;
    
    //## auto_generated
    void setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock);
    
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
    
    ANGELS* itsANGELS_2;		//## link itsANGELS_2
    
    DockingProcessBlock* itsDockingProcessBlock;		//## link itsDockingProcessBlock
    
    LoadingProcessBlock* itsLoadingProcessBlock;		//## link itsLoadingProcessBlock
    
    ParkingSystemBlock* itsParkingSystemBlock;		//## link itsParkingSystemBlock
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS_2(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_2(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_2();
    
    //## auto_generated
    void __setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _setItsDockingProcessBlock(DockingProcessBlock* p_DockingProcessBlock);
    
    //## auto_generated
    void _clearItsDockingProcessBlock();
    
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
class OMAnimatedDC : virtual public AOMInstance {
    DECLARE_META(DC, OMAnimatedDC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\DC.h
*********************************************************************/

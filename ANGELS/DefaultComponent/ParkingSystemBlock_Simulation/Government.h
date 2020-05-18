/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ParkingSystemBlock_Simulation
	Model Element	: Government
//!	Generated Date	: Mon, 18, May 2020  
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\Government.h
*********************************************************************/

#ifndef Government_H
#define Government_H

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

//## package ANGELSPkg::ActorPkg

//## actor Government
class Government {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGovernment;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Government();
    
    //## auto_generated
    ~Government();
    
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

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    ANGELS* itsANGELS_2;		//## link itsANGELS_2
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS_2(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_2(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_2();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGovernment : virtual public AOMInstance {
    DECLARE_META(Government, OMAnimatedGovernment)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\Government.h
*********************************************************************/

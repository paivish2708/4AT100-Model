/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: DC
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\DC.h
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
//## link itsDocking_System_5
class Docking_System;

//## package ActorPkg

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
    Docking_System* getItsDocking_System_5() const;
    
    //## auto_generated
    void setItsDocking_System_5(Docking_System* p_Docking_System);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Docking_System* itsDocking_System_5;		//## link itsDocking_System_5
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDocking_System_5(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System_5(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System_5();
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
	File Path	: DefaultComponent\Docking_System_Simulation\DC.h
*********************************************************************/

/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcess_Simulation
	Model Element	: DC
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\DockingProcess_Simulation\DC.h
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

//## link itsLoading_Process
class Loading_Process;

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
    Loading_Process* getItsLoading_Process() const;
    
    //## auto_generated
    void setItsLoading_Process(Loading_Process* p_Loading_Process);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    ANGELS* itsANGELS_2;		//## link itsANGELS_2
    
    Loading_Process* itsLoading_Process;		//## link itsLoading_Process
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS_2(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_2(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_2();
    
    //## auto_generated
    void __setItsLoading_Process(Loading_Process* p_Loading_Process);
    
    //## auto_generated
    void _setItsLoading_Process(Loading_Process* p_Loading_Process);
    
    //## auto_generated
    void _clearItsLoading_Process();
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
	File Path	: DefaultComponent\DockingProcess_Simulation\DC.h
*********************************************************************/

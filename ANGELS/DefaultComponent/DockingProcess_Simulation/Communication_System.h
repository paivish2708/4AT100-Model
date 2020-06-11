/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcess_Simulation
	Model Element	: Communication_System
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\DockingProcess_Simulation\Communication_System.h
*********************************************************************/

#ifndef Communication_System_H
#define Communication_System_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CommunicationPkg.h"
//## link itsANGELS
class ANGELS;

//## package ANGELSPkg::CommunicationPkg

//## class Communication_System
class Communication_System {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCommunication_System;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Communication_System();
    
    //## auto_generated
    ~Communication_System();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCommunication_System : virtual public AOMInstance {
    DECLARE_META(Communication_System, OMAnimatedCommunication_System)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DockingProcess_Simulation\Communication_System.h
*********************************************************************/
/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Safety_Standards
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Safety_Standards.h
*********************************************************************/

#ifndef Safety_Standards_H
#define Safety_Standards_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Safety_Standards
class Safety_Standards {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSafety_Standards;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Safety_Standards();
    
    //## auto_generated
    ~Safety_Standards();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSafety_Standards : virtual public AOMInstance {
    DECLARE_META(Safety_Standards, OMAnimatedSafety_Standards)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Safety_Standards.h
*********************************************************************/

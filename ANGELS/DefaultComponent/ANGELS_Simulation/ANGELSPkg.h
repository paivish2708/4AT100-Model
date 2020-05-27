/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: ANGELSPkg
//!	Generated Date	: Wed, 27, May 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\ANGELSPkg.h
*********************************************************************/

#ifndef ANGELSPkg_H
#define ANGELSPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class ANGELS;

//#[ ignore
#define SwitchOnANGELS_ANGELSPkg_id 23201

#define SwitchOffANGELS_ANGELSPkg_id 23202

#define TurnOffANGELS_ANGELSPkg_id 23203

#define SwitchOffANGELSFunc_ANGELSPkg_id 23204
//#]

//## package ANGELSPkg



//## event SwitchOnANGELS()
class SwitchOnANGELS : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSwitchOnANGELS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SwitchOnANGELS();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSwitchOnANGELS : virtual public AOMEvent {
    DECLARE_META_EVENT(SwitchOnANGELS)
};
//#]
#endif // _OMINSTRUMENT

//## event SwitchOffANGELS()
class SwitchOffANGELS : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSwitchOffANGELS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SwitchOffANGELS();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSwitchOffANGELS : virtual public AOMEvent {
    DECLARE_META_EVENT(SwitchOffANGELS)
};
//#]
#endif // _OMINSTRUMENT

//## event TurnOffANGELS()
class TurnOffANGELS : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTurnOffANGELS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TurnOffANGELS();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTurnOffANGELS : virtual public AOMEvent {
    DECLARE_META_EVENT(TurnOffANGELS)
};
//#]
#endif // _OMINSTRUMENT

//## event SwitchOffANGELSFunc()
class SwitchOffANGELSFunc : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSwitchOffANGELSFunc;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SwitchOffANGELSFunc();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSwitchOffANGELSFunc : virtual public AOMEvent {
    DECLARE_META_EVENT(SwitchOffANGELSFunc)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\ANGELSPkg.h
*********************************************************************/

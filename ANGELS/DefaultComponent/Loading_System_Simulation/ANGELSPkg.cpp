/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: ANGELSPkg
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\ANGELSPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ANGELSPkg.h"
//## auto_generated
#include "ANGELS.h"
//#[ ignore
#define SwitchOnANGELS_SERIALIZE OM_NO_OP

#define SwitchOnANGELS_UNSERIALIZE OM_NO_OP

#define SwitchOnANGELS_CONSTRUCTOR SwitchOnANGELS()

#define SwitchOffANGELS_SERIALIZE OM_NO_OP

#define SwitchOffANGELS_UNSERIALIZE OM_NO_OP

#define SwitchOffANGELS_CONSTRUCTOR SwitchOffANGELS()

#define TurnOffANGELS_SERIALIZE OM_NO_OP

#define TurnOffANGELS_UNSERIALIZE OM_NO_OP

#define TurnOffANGELS_CONSTRUCTOR TurnOffANGELS()

#define SwitchOffANGELSFunc_SERIALIZE OM_NO_OP

#define SwitchOffANGELSFunc_UNSERIALIZE OM_NO_OP

#define SwitchOffANGELSFunc_CONSTRUCTOR SwitchOffANGELSFunc()
//#]

//## package ANGELSPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ANGELSPkg, ANGELSPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event SwitchOnANGELS()
SwitchOnANGELS::SwitchOnANGELS() {
    NOTIFY_EVENT_CONSTRUCTOR(SwitchOnANGELS)
    setId(SwitchOnANGELS_ANGELSPkg_id);
}

bool SwitchOnANGELS::isTypeOf(const short id) const {
    return (SwitchOnANGELS_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(SwitchOnANGELS, ANGELSPkg, ANGELSPkg, SwitchOnANGELS())

//## event SwitchOffANGELS()
SwitchOffANGELS::SwitchOffANGELS() {
    NOTIFY_EVENT_CONSTRUCTOR(SwitchOffANGELS)
    setId(SwitchOffANGELS_ANGELSPkg_id);
}

bool SwitchOffANGELS::isTypeOf(const short id) const {
    return (SwitchOffANGELS_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(SwitchOffANGELS, ANGELSPkg, ANGELSPkg, SwitchOffANGELS())

//## event TurnOffANGELS()
TurnOffANGELS::TurnOffANGELS() {
    NOTIFY_EVENT_CONSTRUCTOR(TurnOffANGELS)
    setId(TurnOffANGELS_ANGELSPkg_id);
}

bool TurnOffANGELS::isTypeOf(const short id) const {
    return (TurnOffANGELS_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(TurnOffANGELS, ANGELSPkg, ANGELSPkg, TurnOffANGELS())

//## event SwitchOffANGELSFunc()
SwitchOffANGELSFunc::SwitchOffANGELSFunc() {
    NOTIFY_EVENT_CONSTRUCTOR(SwitchOffANGELSFunc)
    setId(SwitchOffANGELSFunc_ANGELSPkg_id);
}

bool SwitchOffANGELSFunc::isTypeOf(const short id) const {
    return (SwitchOffANGELSFunc_ANGELSPkg_id==id);
}

IMPLEMENT_META_EVENT_P(SwitchOffANGELSFunc, ANGELSPkg, ANGELSPkg, SwitchOffANGELSFunc())

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\ANGELSPkg.cpp
*********************************************************************/

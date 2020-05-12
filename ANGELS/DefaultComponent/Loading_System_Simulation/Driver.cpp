/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Driver
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\Driver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Driver.h"
//## auto_generated
#include "ANGELS.h"
//## auto_generated
#include "Docking_System.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_Driver_Driver_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor Driver
Driver::Driver() {
    NOTIFY_CONSTRUCTOR(Driver, Driver(), 0, UseCaseAnalysisPkg_ANGELSPkg_ActorPkg_Driver_Driver_SERIALIZE);
    itsTruck_4 = NULL;
}

Driver::~Driver() {
    NOTIFY_DESTRUCTOR(~Driver, false);
    cleanUpRelations();
}

Truck* Driver::getItsTruck_4() const {
    return itsTruck_4;
}

void Driver::setItsTruck_4(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsDriver(this);
        }
    _setItsTruck_4(p_Truck);
}

void Driver::cleanUpRelations() {
    if(itsTruck_4 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_4");
            Driver* p_Driver = itsTruck_4->getItsDriver();
            if(p_Driver != NULL)
                {
                    itsTruck_4->__setItsDriver(NULL);
                }
            itsTruck_4 = NULL;
        }
}

void Driver::__setItsTruck_4(Truck* p_Truck) {
    itsTruck_4 = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck_4", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck_4");
        }
}

void Driver::_setItsTruck_4(Truck* p_Truck) {
    if(itsTruck_4 != NULL)
        {
            itsTruck_4->__setItsDriver(NULL);
        }
    __setItsTruck_4(p_Truck);
}

void Driver::_clearItsTruck_4() {
    NOTIFY_RELATION_CLEARED("itsTruck_4");
    itsTruck_4 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDriver::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedTruck::serializeAttributes(aomsAttributes);
}

void OMAnimatedDriver::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTruck_4", false, true);
    if(myReal->itsTruck_4)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck_4);
        }
    OMAnimatedTruck::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Driver, UseCaseAnalysisPkg::ANGELSPkg::ActorPkg, false, Truck, OMAnimatedTruck, OMAnimatedDriver)

OMINIT_SUPERCLASS(Truck, OMAnimatedTruck)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\Driver.cpp
*********************************************************************/

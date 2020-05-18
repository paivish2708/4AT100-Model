/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: Truck
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\Truck.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Truck.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define ANGELSPkg_TruckPkg_Truck_Truck_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::TruckPkg

//## class Truck
Truck::Truck() {
    NOTIFY_CONSTRUCTOR(Truck, Truck(), 0, ANGELSPkg_TruckPkg_Truck_Truck_SERIALIZE);
    itsANGELS = NULL;
}

Truck::~Truck() {
    NOTIFY_DESTRUCTOR(~Truck, true);
    cleanUpRelations();
}

ANGELS* Truck::getItsANGELS() const {
    return itsANGELS;
}

void Truck::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsTruck_2(this);
        }
    _setItsANGELS(p_ANGELS);
}

void Truck::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Truck* p_Truck = itsANGELS->getItsTruck_2();
            if(p_Truck != NULL)
                {
                    itsANGELS->__setItsTruck_2(NULL);
                }
            itsANGELS = NULL;
        }
}

void Truck::__setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
        }
}

void Truck::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsTruck_2(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Truck::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTruck::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(Truck, ANGELSPkg_TruckPkg, ANGELSPkg::TruckPkg, false, OMAnimatedTruck)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\Truck.cpp
*********************************************************************/

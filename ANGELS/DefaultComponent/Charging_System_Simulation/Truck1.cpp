/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Truck1
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\Truck1.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Truck1.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_Truck1_Truck1_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg

//## class Truck1
Truck1::Truck1() {
    NOTIFY_CONSTRUCTOR(Truck1, Truck1(), 0, UseCaseAnalysisPkg_ANGELSPkg_Truck1_Truck1_SERIALIZE);
    itsANGELS = NULL;
}

Truck1::~Truck1() {
    NOTIFY_DESTRUCTOR(~Truck1, true);
    cleanUpRelations();
}

ANGELS* Truck1::getItsANGELS() const {
    return itsANGELS;
}

void Truck1::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsTruck1(this);
        }
    _setItsANGELS(p_ANGELS);
}

void Truck1::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            Truck1* p_Truck1 = itsANGELS->getItsTruck1();
            if(p_Truck1 != NULL)
                {
                    itsANGELS->__setItsTruck1(NULL);
                }
            itsANGELS = NULL;
        }
}

void Truck1::__setItsANGELS(ANGELS* p_ANGELS) {
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

void Truck1::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsTruck1(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Truck1::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTruck1::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(Truck1, UseCaseAnalysisPkg_ANGELSPkg, UseCaseAnalysisPkg::ANGELSPkg, false, OMAnimatedTruck1)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\Truck1.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: ANGELS
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\ANGELS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ANGELS.h"
//## link itsCharging_System
#include "Charging_System.h"
//## link itsCollision_Avoidance
#include "Collision_Avoidance.h"
//## link itsCollision_Detection
#include "Collision_Detection.h"
//## link itsCommunication_System
#include "Communication_System.h"
//## link itsDC
#include "DC.h"
//## link itsDocking_System
#include "Docking_System.h"
//## link itsDriver
#include "Driver.h"
//## link itsGovernment
#include "Government.h"
//## link itsLocalisation_System
#include "Localisation_System.h"
//## link itsSafety_Standards
#include "Safety_Standards.h"
//## link itsTruck
#include "Truck.h"
//#[ ignore
#define UseCaseAnalysisPkg_AngelsPkg_ANGELS_ANGELS_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::AngelsPkg

//## class ANGELS
ANGELS::ANGELS() {
    NOTIFY_CONSTRUCTOR(ANGELS, ANGELS(), 0, UseCaseAnalysisPkg_AngelsPkg_ANGELS_ANGELS_SERIALIZE);
    itsCharging_System = NULL;
    itsCharging_System_1 = NULL;
    itsCollision_Avoidance = NULL;
    itsCollision_Avoidance_1 = NULL;
    itsCollision_Detection = NULL;
    itsCollision_Detection_1 = NULL;
    itsCommunication_System = NULL;
    itsCommunication_System_1 = NULL;
    itsCommunication_System_2 = NULL;
    itsDC = NULL;
    itsDCOperator_1 = NULL;
    itsDCOperator_2 = NULL;
    itsDCOperator_3 = NULL;
    itsDCOperator_4 = NULL;
    itsDC_1 = NULL;
    itsDocking_System = NULL;
    itsDocking_System_1 = NULL;
    itsDocking_System_2 = NULL;
    itsDocking_System_3 = NULL;
    itsDocking_System_4 = NULL;
    itsDocking_System_5 = NULL;
    itsDriver = NULL;
    itsGovernment = NULL;
    itsLocalisation_System = NULL;
    itsLocalisation_System_1 = NULL;
    itsLocalisation_System_2 = NULL;
    itsSafety_Standards = NULL;
    itsSafety_Standards_1 = NULL;
    itsSafety_Standards_2 = NULL;
    itsTruck = NULL;
    itsTruck_1 = NULL;
    itsTruck_2 = NULL;
}

ANGELS::~ANGELS() {
    NOTIFY_DESTRUCTOR(~ANGELS, true);
    cleanUpRelations();
}

Charging_System* ANGELS::getItsCharging_System() const {
    return itsCharging_System;
}

void ANGELS::setItsCharging_System(Charging_System* p_Charging_System) {
    if(p_Charging_System != NULL)
        {
            p_Charging_System->_setItsANGELS(this);
        }
    _setItsCharging_System(p_Charging_System);
}

Charging_System* ANGELS::getItsCharging_System_1() const {
    return itsCharging_System_1;
}

void ANGELS::setItsCharging_System_1(Charging_System* p_Charging_System) {
    if(p_Charging_System != NULL)
        {
            p_Charging_System->_setItsANGELS_1(this);
        }
    _setItsCharging_System_1(p_Charging_System);
}

Collision_Avoidance* ANGELS::getItsCollision_Avoidance() const {
    return itsCollision_Avoidance;
}

void ANGELS::setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(p_Collision_Avoidance != NULL)
        {
            p_Collision_Avoidance->_setItsANGELS(this);
        }
    _setItsCollision_Avoidance(p_Collision_Avoidance);
}

Collision_Avoidance* ANGELS::getItsCollision_Avoidance_1() const {
    return itsCollision_Avoidance_1;
}

void ANGELS::setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance) {
    if(p_Collision_Avoidance != NULL)
        {
            p_Collision_Avoidance->_setItsANGELS_1(this);
        }
    _setItsCollision_Avoidance_1(p_Collision_Avoidance);
}

Collision_Detection* ANGELS::getItsCollision_Detection() const {
    return itsCollision_Detection;
}

void ANGELS::setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsANGELS(this);
        }
    _setItsCollision_Detection(p_Collision_Detection);
}

Collision_Detection* ANGELS::getItsCollision_Detection_1() const {
    return itsCollision_Detection_1;
}

void ANGELS::setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsANGELS_1(this);
        }
    _setItsCollision_Detection_1(p_Collision_Detection);
}

Communication_System* ANGELS::getItsCommunication_System() const {
    return itsCommunication_System;
}

void ANGELS::setItsCommunication_System(Communication_System* p_Communication_System) {
    if(p_Communication_System != NULL)
        {
            p_Communication_System->_setItsANGELS(this);
        }
    _setItsCommunication_System(p_Communication_System);
}

Communication_System* ANGELS::getItsCommunication_System_1() const {
    return itsCommunication_System_1;
}

void ANGELS::setItsCommunication_System_1(Communication_System* p_Communication_System) {
    if(p_Communication_System != NULL)
        {
            p_Communication_System->_setItsANGELS_1(this);
        }
    _setItsCommunication_System_1(p_Communication_System);
}

Communication_System* ANGELS::getItsCommunication_System_2() const {
    return itsCommunication_System_2;
}

void ANGELS::setItsCommunication_System_2(Communication_System* p_Communication_System) {
    if(p_Communication_System != NULL)
        {
            p_Communication_System->_setItsANGELS_2(this);
        }
    _setItsCommunication_System_2(p_Communication_System);
}

DC* ANGELS::getItsDC() const {
    return itsDC;
}

void ANGELS::setItsDC(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsANGELS(this);
        }
    _setItsDC(p_DC);
}

DCOperator* ANGELS::getItsDCOperator() const {
    return (DCOperator*) &itsDCOperator;
}

DCOperator* ANGELS::getItsDCOperator_1() const {
    return itsDCOperator_1;
}

void ANGELS::setItsDCOperator_1(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsANGELS_1(this);
        }
    _setItsDCOperator_1(p_DCOperator);
}

DCOperator* ANGELS::getItsDCOperator_2() const {
    return itsDCOperator_2;
}

void ANGELS::setItsDCOperator_2(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsANGELS_3(this);
        }
    _setItsDCOperator_2(p_DCOperator);
}

DCOperator* ANGELS::getItsDCOperator_3() const {
    return itsDCOperator_3;
}

void ANGELS::setItsDCOperator_3(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsANGELS_2(this);
        }
    _setItsDCOperator_3(p_DCOperator);
}

DCOperator* ANGELS::getItsDCOperator_4() const {
    return itsDCOperator_4;
}

void ANGELS::setItsDCOperator_4(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsANGELS(this);
        }
    _setItsDCOperator_4(p_DCOperator);
}

DC* ANGELS::getItsDC_1() const {
    return itsDC_1;
}

void ANGELS::setItsDC_1(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsANGELS_1(this);
        }
    _setItsDC_1(p_DC);
}

Docking_System* ANGELS::getItsDocking_System() const {
    return itsDocking_System;
}

void ANGELS::setItsDocking_System(Docking_System* p_Docking_System) {
    itsDocking_System = p_Docking_System;
    if(p_Docking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_System", p_Docking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System");
        }
}

Docking_System* ANGELS::getItsDocking_System_1() const {
    return itsDocking_System_1;
}

void ANGELS::setItsDocking_System_1(Docking_System* p_Docking_System) {
    itsDocking_System_1 = p_Docking_System;
    if(p_Docking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_System_1", p_Docking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_1");
        }
}

Docking_System* ANGELS::getItsDocking_System_2() const {
    return itsDocking_System_2;
}

void ANGELS::setItsDocking_System_2(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsANGELS(this);
        }
    _setItsDocking_System_2(p_Docking_System);
}

Docking_System* ANGELS::getItsDocking_System_3() const {
    return itsDocking_System_3;
}

void ANGELS::setItsDocking_System_3(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsANGELS_1(this);
        }
    _setItsDocking_System_3(p_Docking_System);
}

Docking_System* ANGELS::getItsDocking_System_4() const {
    return itsDocking_System_4;
}

void ANGELS::setItsDocking_System_4(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsANGELS_2(this);
        }
    _setItsDocking_System_4(p_Docking_System);
}

Docking_System* ANGELS::getItsDocking_System_5() const {
    return itsDocking_System_5;
}

void ANGELS::setItsDocking_System_5(Docking_System* p_Docking_System) {
    if(p_Docking_System != NULL)
        {
            p_Docking_System->_setItsANGELS(this);
        }
    _setItsDocking_System_5(p_Docking_System);
}

Driver* ANGELS::getItsDriver() const {
    return itsDriver;
}

void ANGELS::setItsDriver(Driver* p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsANGELS(this);
        }
    _setItsDriver(p_Driver);
}

Government* ANGELS::getItsGovernment() const {
    return itsGovernment;
}

void ANGELS::setItsGovernment(Government* p_Government) {
    if(p_Government != NULL)
        {
            p_Government->_setItsANGELS(this);
        }
    _setItsGovernment(p_Government);
}

Localisation_System* ANGELS::getItsLocalisation_System() const {
    return itsLocalisation_System;
}

void ANGELS::setItsLocalisation_System(Localisation_System* p_Localisation_System) {
    if(p_Localisation_System != NULL)
        {
            p_Localisation_System->_setItsANGELS(this);
        }
    _setItsLocalisation_System(p_Localisation_System);
}

Localisation_System* ANGELS::getItsLocalisation_System_1() const {
    return itsLocalisation_System_1;
}

void ANGELS::setItsLocalisation_System_1(Localisation_System* p_Localisation_System) {
    if(p_Localisation_System != NULL)
        {
            p_Localisation_System->_setItsANGELS_1(this);
        }
    _setItsLocalisation_System_1(p_Localisation_System);
}

Localisation_System* ANGELS::getItsLocalisation_System_2() const {
    return itsLocalisation_System_2;
}

void ANGELS::setItsLocalisation_System_2(Localisation_System* p_Localisation_System) {
    if(p_Localisation_System != NULL)
        {
            p_Localisation_System->_setItsANGELS_2(this);
        }
    _setItsLocalisation_System_2(p_Localisation_System);
}

Safety_Standards* ANGELS::getItsSafety_Standards() const {
    return itsSafety_Standards;
}

void ANGELS::setItsSafety_Standards(Safety_Standards* p_Safety_Standards) {
    if(p_Safety_Standards != NULL)
        {
            p_Safety_Standards->_setItsANGELS(this);
        }
    _setItsSafety_Standards(p_Safety_Standards);
}

Safety_Standards* ANGELS::getItsSafety_Standards_1() const {
    return itsSafety_Standards_1;
}

void ANGELS::setItsSafety_Standards_1(Safety_Standards* p_Safety_Standards) {
    if(p_Safety_Standards != NULL)
        {
            p_Safety_Standards->_setItsANGELS_1(this);
        }
    _setItsSafety_Standards_1(p_Safety_Standards);
}

Safety_Standards* ANGELS::getItsSafety_Standards_2() const {
    return itsSafety_Standards_2;
}

void ANGELS::setItsSafety_Standards_2(Safety_Standards* p_Safety_Standards) {
    if(p_Safety_Standards != NULL)
        {
            p_Safety_Standards->_setItsANGELS_2(this);
        }
    _setItsSafety_Standards_2(p_Safety_Standards);
}

Truck* ANGELS::getItsTruck() const {
    return itsTruck;
}

void ANGELS::setItsTruck(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsANGELS(this);
        }
    _setItsTruck(p_Truck);
}

Truck* ANGELS::getItsTruck_1() const {
    return itsTruck_1;
}

void ANGELS::setItsTruck_1(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsANGELS_1(this);
        }
    _setItsTruck_1(p_Truck);
}

Truck* ANGELS::getItsTruck_2() const {
    return itsTruck_2;
}

void ANGELS::setItsTruck_2(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsANGELS_2(this);
        }
    _setItsTruck_2(p_Truck);
}

void ANGELS::cleanUpRelations() {
    if(itsCharging_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCharging_System");
            ANGELS* p_ANGELS = itsCharging_System->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsCharging_System->__setItsANGELS(NULL);
                }
            itsCharging_System = NULL;
        }
    if(itsCharging_System_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCharging_System_1");
            ANGELS* p_ANGELS = itsCharging_System_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsCharging_System_1->__setItsANGELS_1(NULL);
                }
            itsCharging_System_1 = NULL;
        }
    if(itsCollision_Avoidance != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
            ANGELS* p_ANGELS = itsCollision_Avoidance->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsCollision_Avoidance->__setItsANGELS(NULL);
                }
            itsCollision_Avoidance = NULL;
        }
    if(itsCollision_Avoidance_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance_1");
            ANGELS* p_ANGELS = itsCollision_Avoidance_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsCollision_Avoidance_1->__setItsANGELS_1(NULL);
                }
            itsCollision_Avoidance_1 = NULL;
        }
    if(itsCollision_Detection != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection");
            ANGELS* p_ANGELS = itsCollision_Detection->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsCollision_Detection->__setItsANGELS(NULL);
                }
            itsCollision_Detection = NULL;
        }
    if(itsCollision_Detection_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection_1");
            ANGELS* p_ANGELS = itsCollision_Detection_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsCollision_Detection_1->__setItsANGELS_1(NULL);
                }
            itsCollision_Detection_1 = NULL;
        }
    if(itsCommunication_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System");
            ANGELS* p_ANGELS = itsCommunication_System->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsCommunication_System->__setItsANGELS(NULL);
                }
            itsCommunication_System = NULL;
        }
    if(itsCommunication_System_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System_1");
            ANGELS* p_ANGELS = itsCommunication_System_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsCommunication_System_1->__setItsANGELS_1(NULL);
                }
            itsCommunication_System_1 = NULL;
        }
    if(itsCommunication_System_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System_2");
            ANGELS* p_ANGELS = itsCommunication_System_2->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsCommunication_System_2->__setItsANGELS_2(NULL);
                }
            itsCommunication_System_2 = NULL;
        }
    if(itsDC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC");
            ANGELS* p_ANGELS = itsDC->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDC->__setItsANGELS(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator_1");
            ANGELS* p_ANGELS = itsDCOperator_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsDCOperator_1->__setItsANGELS_1(NULL);
                }
            itsDCOperator_1 = NULL;
        }
    if(itsDCOperator_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator_2");
            ANGELS* p_ANGELS = itsDCOperator_2->getItsANGELS_3();
            if(p_ANGELS != NULL)
                {
                    itsDCOperator_2->__setItsANGELS_3(NULL);
                }
            itsDCOperator_2 = NULL;
        }
    if(itsDCOperator_3 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator_3");
            ANGELS* p_ANGELS = itsDCOperator_3->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsDCOperator_3->__setItsANGELS_2(NULL);
                }
            itsDCOperator_3 = NULL;
        }
    if(itsDCOperator_4 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator_4");
            ANGELS* p_ANGELS = itsDCOperator_4->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDCOperator_4->__setItsANGELS(NULL);
                }
            itsDCOperator_4 = NULL;
        }
    if(itsDC_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDC_1");
            ANGELS* p_ANGELS = itsDC_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsDC_1->__setItsANGELS_1(NULL);
                }
            itsDC_1 = NULL;
        }
    if(itsDocking_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System");
            itsDocking_System = NULL;
        }
    if(itsDocking_System_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_1");
            itsDocking_System_1 = NULL;
        }
    if(itsDocking_System_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_2");
            ANGELS* p_ANGELS = itsDocking_System_2->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDocking_System_2->__setItsANGELS(NULL);
                }
            itsDocking_System_2 = NULL;
        }
    if(itsDocking_System_3 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_3");
            ANGELS* p_ANGELS = itsDocking_System_3->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsDocking_System_3->__setItsANGELS_1(NULL);
                }
            itsDocking_System_3 = NULL;
        }
    if(itsDocking_System_4 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_4");
            ANGELS* p_ANGELS = itsDocking_System_4->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsDocking_System_4->__setItsANGELS_2(NULL);
                }
            itsDocking_System_4 = NULL;
        }
    if(itsDocking_System_5 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_5");
            ANGELS* p_ANGELS = itsDocking_System_5->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDocking_System_5->__setItsANGELS(NULL);
                }
            itsDocking_System_5 = NULL;
        }
    if(itsDriver != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
            ANGELS* p_ANGELS = itsDriver->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsDriver->__setItsANGELS(NULL);
                }
            itsDriver = NULL;
        }
    if(itsGovernment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGovernment");
            ANGELS* p_ANGELS = itsGovernment->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsGovernment->__setItsANGELS(NULL);
                }
            itsGovernment = NULL;
        }
    if(itsLocalisation_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLocalisation_System");
            ANGELS* p_ANGELS = itsLocalisation_System->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsLocalisation_System->__setItsANGELS(NULL);
                }
            itsLocalisation_System = NULL;
        }
    if(itsLocalisation_System_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLocalisation_System_1");
            ANGELS* p_ANGELS = itsLocalisation_System_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsLocalisation_System_1->__setItsANGELS_1(NULL);
                }
            itsLocalisation_System_1 = NULL;
        }
    if(itsLocalisation_System_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLocalisation_System_2");
            ANGELS* p_ANGELS = itsLocalisation_System_2->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsLocalisation_System_2->__setItsANGELS_2(NULL);
                }
            itsLocalisation_System_2 = NULL;
        }
    if(itsSafety_Standards != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSafety_Standards");
            ANGELS* p_ANGELS = itsSafety_Standards->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsSafety_Standards->__setItsANGELS(NULL);
                }
            itsSafety_Standards = NULL;
        }
    if(itsSafety_Standards_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSafety_Standards_1");
            ANGELS* p_ANGELS = itsSafety_Standards_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsSafety_Standards_1->__setItsANGELS_1(NULL);
                }
            itsSafety_Standards_1 = NULL;
        }
    if(itsSafety_Standards_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSafety_Standards_2");
            ANGELS* p_ANGELS = itsSafety_Standards_2->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsSafety_Standards_2->__setItsANGELS_2(NULL);
                }
            itsSafety_Standards_2 = NULL;
        }
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            ANGELS* p_ANGELS = itsTruck->getItsANGELS();
            if(p_ANGELS != NULL)
                {
                    itsTruck->__setItsANGELS(NULL);
                }
            itsTruck = NULL;
        }
    if(itsTruck_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_1");
            ANGELS* p_ANGELS = itsTruck_1->getItsANGELS_1();
            if(p_ANGELS != NULL)
                {
                    itsTruck_1->__setItsANGELS_1(NULL);
                }
            itsTruck_1 = NULL;
        }
    if(itsTruck_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck_2");
            ANGELS* p_ANGELS = itsTruck_2->getItsANGELS_2();
            if(p_ANGELS != NULL)
                {
                    itsTruck_2->__setItsANGELS_2(NULL);
                }
            itsTruck_2 = NULL;
        }
}

void ANGELS::__setItsCharging_System(Charging_System* p_Charging_System) {
    itsCharging_System = p_Charging_System;
    if(p_Charging_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCharging_System", p_Charging_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCharging_System");
        }
}

void ANGELS::_setItsCharging_System(Charging_System* p_Charging_System) {
    if(itsCharging_System != NULL)
        {
            itsCharging_System->__setItsANGELS(NULL);
        }
    __setItsCharging_System(p_Charging_System);
}

void ANGELS::_clearItsCharging_System() {
    NOTIFY_RELATION_CLEARED("itsCharging_System");
    itsCharging_System = NULL;
}

void ANGELS::__setItsCharging_System_1(Charging_System* p_Charging_System) {
    itsCharging_System_1 = p_Charging_System;
    if(p_Charging_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCharging_System_1", p_Charging_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCharging_System_1");
        }
}

void ANGELS::_setItsCharging_System_1(Charging_System* p_Charging_System) {
    if(itsCharging_System_1 != NULL)
        {
            itsCharging_System_1->__setItsANGELS_1(NULL);
        }
    __setItsCharging_System_1(p_Charging_System);
}

void ANGELS::_clearItsCharging_System_1() {
    NOTIFY_RELATION_CLEARED("itsCharging_System_1");
    itsCharging_System_1 = NULL;
}

void ANGELS::__setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    itsCollision_Avoidance = p_Collision_Avoidance;
    if(p_Collision_Avoidance != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Avoidance", p_Collision_Avoidance, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
        }
}

void ANGELS::_setItsCollision_Avoidance(Collision_Avoidance* p_Collision_Avoidance) {
    if(itsCollision_Avoidance != NULL)
        {
            itsCollision_Avoidance->__setItsANGELS(NULL);
        }
    __setItsCollision_Avoidance(p_Collision_Avoidance);
}

void ANGELS::_clearItsCollision_Avoidance() {
    NOTIFY_RELATION_CLEARED("itsCollision_Avoidance");
    itsCollision_Avoidance = NULL;
}

void ANGELS::__setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance) {
    itsCollision_Avoidance_1 = p_Collision_Avoidance;
    if(p_Collision_Avoidance != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Avoidance_1", p_Collision_Avoidance, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Avoidance_1");
        }
}

void ANGELS::_setItsCollision_Avoidance_1(Collision_Avoidance* p_Collision_Avoidance) {
    if(itsCollision_Avoidance_1 != NULL)
        {
            itsCollision_Avoidance_1->__setItsANGELS_1(NULL);
        }
    __setItsCollision_Avoidance_1(p_Collision_Avoidance);
}

void ANGELS::_clearItsCollision_Avoidance_1() {
    NOTIFY_RELATION_CLEARED("itsCollision_Avoidance_1");
    itsCollision_Avoidance_1 = NULL;
}

void ANGELS::__setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    itsCollision_Detection = p_Collision_Detection;
    if(p_Collision_Detection != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Detection", p_Collision_Detection, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection");
        }
}

void ANGELS::_setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection != NULL)
        {
            itsCollision_Detection->__setItsANGELS(NULL);
        }
    __setItsCollision_Detection(p_Collision_Detection);
}

void ANGELS::_clearItsCollision_Detection() {
    NOTIFY_RELATION_CLEARED("itsCollision_Detection");
    itsCollision_Detection = NULL;
}

void ANGELS::__setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    itsCollision_Detection_1 = p_Collision_Detection;
    if(p_Collision_Detection != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCollision_Detection_1", p_Collision_Detection, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection_1");
        }
}

void ANGELS::_setItsCollision_Detection_1(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection_1 != NULL)
        {
            itsCollision_Detection_1->__setItsANGELS_1(NULL);
        }
    __setItsCollision_Detection_1(p_Collision_Detection);
}

void ANGELS::_clearItsCollision_Detection_1() {
    NOTIFY_RELATION_CLEARED("itsCollision_Detection_1");
    itsCollision_Detection_1 = NULL;
}

void ANGELS::__setItsCommunication_System(Communication_System* p_Communication_System) {
    itsCommunication_System = p_Communication_System;
    if(p_Communication_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_System", p_Communication_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System");
        }
}

void ANGELS::_setItsCommunication_System(Communication_System* p_Communication_System) {
    if(itsCommunication_System != NULL)
        {
            itsCommunication_System->__setItsANGELS(NULL);
        }
    __setItsCommunication_System(p_Communication_System);
}

void ANGELS::_clearItsCommunication_System() {
    NOTIFY_RELATION_CLEARED("itsCommunication_System");
    itsCommunication_System = NULL;
}

void ANGELS::__setItsCommunication_System_1(Communication_System* p_Communication_System) {
    itsCommunication_System_1 = p_Communication_System;
    if(p_Communication_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_System_1", p_Communication_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System_1");
        }
}

void ANGELS::_setItsCommunication_System_1(Communication_System* p_Communication_System) {
    if(itsCommunication_System_1 != NULL)
        {
            itsCommunication_System_1->__setItsANGELS_1(NULL);
        }
    __setItsCommunication_System_1(p_Communication_System);
}

void ANGELS::_clearItsCommunication_System_1() {
    NOTIFY_RELATION_CLEARED("itsCommunication_System_1");
    itsCommunication_System_1 = NULL;
}

void ANGELS::__setItsCommunication_System_2(Communication_System* p_Communication_System) {
    itsCommunication_System_2 = p_Communication_System;
    if(p_Communication_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_System_2", p_Communication_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_System_2");
        }
}

void ANGELS::_setItsCommunication_System_2(Communication_System* p_Communication_System) {
    if(itsCommunication_System_2 != NULL)
        {
            itsCommunication_System_2->__setItsANGELS_2(NULL);
        }
    __setItsCommunication_System_2(p_Communication_System);
}

void ANGELS::_clearItsCommunication_System_2() {
    NOTIFY_RELATION_CLEARED("itsCommunication_System_2");
    itsCommunication_System_2 = NULL;
}

void ANGELS::__setItsDC(DC* p_DC) {
    itsDC = p_DC;
    if(p_DC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDC", p_DC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDC");
        }
}

void ANGELS::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsANGELS(NULL);
        }
    __setItsDC(p_DC);
}

void ANGELS::_clearItsDC() {
    NOTIFY_RELATION_CLEARED("itsDC");
    itsDC = NULL;
}

void ANGELS::__setItsDCOperator_1(DCOperator* p_DCOperator) {
    itsDCOperator_1 = p_DCOperator;
    if(p_DCOperator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCOperator_1", p_DCOperator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator_1");
        }
}

void ANGELS::_setItsDCOperator_1(DCOperator* p_DCOperator) {
    if(itsDCOperator_1 != NULL)
        {
            itsDCOperator_1->__setItsANGELS_1(NULL);
        }
    __setItsDCOperator_1(p_DCOperator);
}

void ANGELS::_clearItsDCOperator_1() {
    NOTIFY_RELATION_CLEARED("itsDCOperator_1");
    itsDCOperator_1 = NULL;
}

void ANGELS::__setItsDCOperator_2(DCOperator* p_DCOperator) {
    itsDCOperator_2 = p_DCOperator;
    if(p_DCOperator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCOperator_2", p_DCOperator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator_2");
        }
}

void ANGELS::_setItsDCOperator_2(DCOperator* p_DCOperator) {
    if(itsDCOperator_2 != NULL)
        {
            itsDCOperator_2->__setItsANGELS_3(NULL);
        }
    __setItsDCOperator_2(p_DCOperator);
}

void ANGELS::_clearItsDCOperator_2() {
    NOTIFY_RELATION_CLEARED("itsDCOperator_2");
    itsDCOperator_2 = NULL;
}

void ANGELS::__setItsDCOperator_3(DCOperator* p_DCOperator) {
    itsDCOperator_3 = p_DCOperator;
    if(p_DCOperator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCOperator_3", p_DCOperator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator_3");
        }
}

void ANGELS::_setItsDCOperator_3(DCOperator* p_DCOperator) {
    if(itsDCOperator_3 != NULL)
        {
            itsDCOperator_3->__setItsANGELS_2(NULL);
        }
    __setItsDCOperator_3(p_DCOperator);
}

void ANGELS::_clearItsDCOperator_3() {
    NOTIFY_RELATION_CLEARED("itsDCOperator_3");
    itsDCOperator_3 = NULL;
}

void ANGELS::__setItsDCOperator_4(DCOperator* p_DCOperator) {
    itsDCOperator_4 = p_DCOperator;
    if(p_DCOperator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCOperator_4", p_DCOperator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCOperator_4");
        }
}

void ANGELS::_setItsDCOperator_4(DCOperator* p_DCOperator) {
    if(itsDCOperator_4 != NULL)
        {
            itsDCOperator_4->__setItsANGELS(NULL);
        }
    __setItsDCOperator_4(p_DCOperator);
}

void ANGELS::_clearItsDCOperator_4() {
    NOTIFY_RELATION_CLEARED("itsDCOperator_4");
    itsDCOperator_4 = NULL;
}

void ANGELS::__setItsDC_1(DC* p_DC) {
    itsDC_1 = p_DC;
    if(p_DC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDC_1", p_DC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDC_1");
        }
}

void ANGELS::_setItsDC_1(DC* p_DC) {
    if(itsDC_1 != NULL)
        {
            itsDC_1->__setItsANGELS_1(NULL);
        }
    __setItsDC_1(p_DC);
}

void ANGELS::_clearItsDC_1() {
    NOTIFY_RELATION_CLEARED("itsDC_1");
    itsDC_1 = NULL;
}

void ANGELS::__setItsDocking_System_2(Docking_System* p_Docking_System) {
    itsDocking_System_2 = p_Docking_System;
    if(p_Docking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_System_2", p_Docking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_2");
        }
}

void ANGELS::_setItsDocking_System_2(Docking_System* p_Docking_System) {
    if(itsDocking_System_2 != NULL)
        {
            itsDocking_System_2->__setItsANGELS(NULL);
        }
    __setItsDocking_System_2(p_Docking_System);
}

void ANGELS::_clearItsDocking_System_2() {
    NOTIFY_RELATION_CLEARED("itsDocking_System_2");
    itsDocking_System_2 = NULL;
}

void ANGELS::__setItsDocking_System_3(Docking_System* p_Docking_System) {
    itsDocking_System_3 = p_Docking_System;
    if(p_Docking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_System_3", p_Docking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_3");
        }
}

void ANGELS::_setItsDocking_System_3(Docking_System* p_Docking_System) {
    if(itsDocking_System_3 != NULL)
        {
            itsDocking_System_3->__setItsANGELS_1(NULL);
        }
    __setItsDocking_System_3(p_Docking_System);
}

void ANGELS::_clearItsDocking_System_3() {
    NOTIFY_RELATION_CLEARED("itsDocking_System_3");
    itsDocking_System_3 = NULL;
}

void ANGELS::__setItsDocking_System_4(Docking_System* p_Docking_System) {
    itsDocking_System_4 = p_Docking_System;
    if(p_Docking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_System_4", p_Docking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_4");
        }
}

void ANGELS::_setItsDocking_System_4(Docking_System* p_Docking_System) {
    if(itsDocking_System_4 != NULL)
        {
            itsDocking_System_4->__setItsANGELS_2(NULL);
        }
    __setItsDocking_System_4(p_Docking_System);
}

void ANGELS::_clearItsDocking_System_4() {
    NOTIFY_RELATION_CLEARED("itsDocking_System_4");
    itsDocking_System_4 = NULL;
}

void ANGELS::__setItsDocking_System_5(Docking_System* p_Docking_System) {
    itsDocking_System_5 = p_Docking_System;
    if(p_Docking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDocking_System_5", p_Docking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDocking_System_5");
        }
}

void ANGELS::_setItsDocking_System_5(Docking_System* p_Docking_System) {
    if(itsDocking_System_5 != NULL)
        {
            itsDocking_System_5->__setItsANGELS(NULL);
        }
    __setItsDocking_System_5(p_Docking_System);
}

void ANGELS::_clearItsDocking_System_5() {
    NOTIFY_RELATION_CLEARED("itsDocking_System_5");
    itsDocking_System_5 = NULL;
}

void ANGELS::__setItsDriver(Driver* p_Driver) {
    itsDriver = p_Driver;
    if(p_Driver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDriver", p_Driver, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDriver");
        }
}

void ANGELS::_setItsDriver(Driver* p_Driver) {
    if(itsDriver != NULL)
        {
            itsDriver->__setItsANGELS(NULL);
        }
    __setItsDriver(p_Driver);
}

void ANGELS::_clearItsDriver() {
    NOTIFY_RELATION_CLEARED("itsDriver");
    itsDriver = NULL;
}

void ANGELS::__setItsGovernment(Government* p_Government) {
    itsGovernment = p_Government;
    if(p_Government != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGovernment", p_Government, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGovernment");
        }
}

void ANGELS::_setItsGovernment(Government* p_Government) {
    if(itsGovernment != NULL)
        {
            itsGovernment->__setItsANGELS(NULL);
        }
    __setItsGovernment(p_Government);
}

void ANGELS::_clearItsGovernment() {
    NOTIFY_RELATION_CLEARED("itsGovernment");
    itsGovernment = NULL;
}

void ANGELS::__setItsLocalisation_System(Localisation_System* p_Localisation_System) {
    itsLocalisation_System = p_Localisation_System;
    if(p_Localisation_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLocalisation_System", p_Localisation_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLocalisation_System");
        }
}

void ANGELS::_setItsLocalisation_System(Localisation_System* p_Localisation_System) {
    if(itsLocalisation_System != NULL)
        {
            itsLocalisation_System->__setItsANGELS(NULL);
        }
    __setItsLocalisation_System(p_Localisation_System);
}

void ANGELS::_clearItsLocalisation_System() {
    NOTIFY_RELATION_CLEARED("itsLocalisation_System");
    itsLocalisation_System = NULL;
}

void ANGELS::__setItsLocalisation_System_1(Localisation_System* p_Localisation_System) {
    itsLocalisation_System_1 = p_Localisation_System;
    if(p_Localisation_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLocalisation_System_1", p_Localisation_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLocalisation_System_1");
        }
}

void ANGELS::_setItsLocalisation_System_1(Localisation_System* p_Localisation_System) {
    if(itsLocalisation_System_1 != NULL)
        {
            itsLocalisation_System_1->__setItsANGELS_1(NULL);
        }
    __setItsLocalisation_System_1(p_Localisation_System);
}

void ANGELS::_clearItsLocalisation_System_1() {
    NOTIFY_RELATION_CLEARED("itsLocalisation_System_1");
    itsLocalisation_System_1 = NULL;
}

void ANGELS::__setItsLocalisation_System_2(Localisation_System* p_Localisation_System) {
    itsLocalisation_System_2 = p_Localisation_System;
    if(p_Localisation_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLocalisation_System_2", p_Localisation_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLocalisation_System_2");
        }
}

void ANGELS::_setItsLocalisation_System_2(Localisation_System* p_Localisation_System) {
    if(itsLocalisation_System_2 != NULL)
        {
            itsLocalisation_System_2->__setItsANGELS_2(NULL);
        }
    __setItsLocalisation_System_2(p_Localisation_System);
}

void ANGELS::_clearItsLocalisation_System_2() {
    NOTIFY_RELATION_CLEARED("itsLocalisation_System_2");
    itsLocalisation_System_2 = NULL;
}

void ANGELS::__setItsSafety_Standards(Safety_Standards* p_Safety_Standards) {
    itsSafety_Standards = p_Safety_Standards;
    if(p_Safety_Standards != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSafety_Standards", p_Safety_Standards, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSafety_Standards");
        }
}

void ANGELS::_setItsSafety_Standards(Safety_Standards* p_Safety_Standards) {
    if(itsSafety_Standards != NULL)
        {
            itsSafety_Standards->__setItsANGELS(NULL);
        }
    __setItsSafety_Standards(p_Safety_Standards);
}

void ANGELS::_clearItsSafety_Standards() {
    NOTIFY_RELATION_CLEARED("itsSafety_Standards");
    itsSafety_Standards = NULL;
}

void ANGELS::__setItsSafety_Standards_1(Safety_Standards* p_Safety_Standards) {
    itsSafety_Standards_1 = p_Safety_Standards;
    if(p_Safety_Standards != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSafety_Standards_1", p_Safety_Standards, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSafety_Standards_1");
        }
}

void ANGELS::_setItsSafety_Standards_1(Safety_Standards* p_Safety_Standards) {
    if(itsSafety_Standards_1 != NULL)
        {
            itsSafety_Standards_1->__setItsANGELS_1(NULL);
        }
    __setItsSafety_Standards_1(p_Safety_Standards);
}

void ANGELS::_clearItsSafety_Standards_1() {
    NOTIFY_RELATION_CLEARED("itsSafety_Standards_1");
    itsSafety_Standards_1 = NULL;
}

void ANGELS::__setItsSafety_Standards_2(Safety_Standards* p_Safety_Standards) {
    itsSafety_Standards_2 = p_Safety_Standards;
    if(p_Safety_Standards != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSafety_Standards_2", p_Safety_Standards, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSafety_Standards_2");
        }
}

void ANGELS::_setItsSafety_Standards_2(Safety_Standards* p_Safety_Standards) {
    if(itsSafety_Standards_2 != NULL)
        {
            itsSafety_Standards_2->__setItsANGELS_2(NULL);
        }
    __setItsSafety_Standards_2(p_Safety_Standards);
}

void ANGELS::_clearItsSafety_Standards_2() {
    NOTIFY_RELATION_CLEARED("itsSafety_Standards_2");
    itsSafety_Standards_2 = NULL;
}

void ANGELS::__setItsTruck(Truck* p_Truck) {
    itsTruck = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
        }
}

void ANGELS::_setItsTruck(Truck* p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsANGELS(NULL);
        }
    __setItsTruck(p_Truck);
}

void ANGELS::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck = NULL;
}

void ANGELS::__setItsTruck_1(Truck* p_Truck) {
    itsTruck_1 = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck_1", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck_1");
        }
}

void ANGELS::_setItsTruck_1(Truck* p_Truck) {
    if(itsTruck_1 != NULL)
        {
            itsTruck_1->__setItsANGELS_1(NULL);
        }
    __setItsTruck_1(p_Truck);
}

void ANGELS::_clearItsTruck_1() {
    NOTIFY_RELATION_CLEARED("itsTruck_1");
    itsTruck_1 = NULL;
}

void ANGELS::__setItsTruck_2(Truck* p_Truck) {
    itsTruck_2 = p_Truck;
    if(p_Truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck_2", p_Truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck_2");
        }
}

void ANGELS::_setItsTruck_2(Truck* p_Truck) {
    if(itsTruck_2 != NULL)
        {
            itsTruck_2->__setItsANGELS_2(NULL);
        }
    __setItsTruck_2(p_Truck);
}

void ANGELS::_clearItsTruck_2() {
    NOTIFY_RELATION_CLEARED("itsTruck_2");
    itsTruck_2 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedANGELS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCOperator", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDCOperator);
    aomsRelations->addRelation("itsDCOperator_1", false, true);
    if(myReal->itsDCOperator_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator_1);
        }
    aomsRelations->addRelation("itsLocalisation_System", false, true);
    if(myReal->itsLocalisation_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsLocalisation_System);
        }
    aomsRelations->addRelation("itsCommunication_System", false, true);
    if(myReal->itsCommunication_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_System);
        }
    aomsRelations->addRelation("itsDocking_System", false, true);
    if(myReal->itsDocking_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System);
        }
    aomsRelations->addRelation("itsDCOperator_3", false, true);
    if(myReal->itsDCOperator_3)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator_3);
        }
    aomsRelations->addRelation("itsDCOperator_2", false, true);
    if(myReal->itsDCOperator_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator_2);
        }
    aomsRelations->addRelation("itsSafety_Standards", false, true);
    if(myReal->itsSafety_Standards)
        {
            aomsRelations->ADD_ITEM(myReal->itsSafety_Standards);
        }
    aomsRelations->addRelation("itsLocalisation_System_1", false, true);
    if(myReal->itsLocalisation_System_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsLocalisation_System_1);
        }
    aomsRelations->addRelation("itsCollision_Avoidance", false, true);
    if(myReal->itsCollision_Avoidance)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Avoidance);
        }
    aomsRelations->addRelation("itsCharging_System", false, true);
    if(myReal->itsCharging_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsCharging_System);
        }
    aomsRelations->addRelation("itsCollision_Detection", false, true);
    if(myReal->itsCollision_Detection)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Detection);
        }
    aomsRelations->addRelation("itsDC", false, true);
    if(myReal->itsDC)
        {
            aomsRelations->ADD_ITEM(myReal->itsDC);
        }
    aomsRelations->addRelation("itsDriver", false, true);
    if(myReal->itsDriver)
        {
            aomsRelations->ADD_ITEM(myReal->itsDriver);
        }
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsTruck_1", false, true);
    if(myReal->itsTruck_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck_1);
        }
    aomsRelations->addRelation("itsDocking_System_1", false, true);
    if(myReal->itsDocking_System_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System_1);
        }
    aomsRelations->addRelation("itsCommunication_System_1", false, true);
    if(myReal->itsCommunication_System_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_System_1);
        }
    aomsRelations->addRelation("itsDocking_System_2", false, true);
    if(myReal->itsDocking_System_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System_2);
        }
    aomsRelations->addRelation("itsTruck_2", false, true);
    if(myReal->itsTruck_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck_2);
        }
    aomsRelations->addRelation("itsSafety_Standards_1", false, true);
    if(myReal->itsSafety_Standards_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsSafety_Standards_1);
        }
    aomsRelations->addRelation("itsDocking_System_3", false, true);
    if(myReal->itsDocking_System_3)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System_3);
        }
    aomsRelations->addRelation("itsCommunication_System_2", false, true);
    if(myReal->itsCommunication_System_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_System_2);
        }
    aomsRelations->addRelation("itsLocalisation_System_2", false, true);
    if(myReal->itsLocalisation_System_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsLocalisation_System_2);
        }
    aomsRelations->addRelation("itsCharging_System_1", false, true);
    if(myReal->itsCharging_System_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsCharging_System_1);
        }
    aomsRelations->addRelation("itsDocking_System_4", false, true);
    if(myReal->itsDocking_System_4)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System_4);
        }
    aomsRelations->addRelation("itsSafety_Standards_2", false, true);
    if(myReal->itsSafety_Standards_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsSafety_Standards_2);
        }
    aomsRelations->addRelation("itsCollision_Avoidance_1", false, true);
    if(myReal->itsCollision_Avoidance_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Avoidance_1);
        }
    aomsRelations->addRelation("itsCollision_Detection_1", false, true);
    if(myReal->itsCollision_Detection_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Detection_1);
        }
    aomsRelations->addRelation("itsGovernment", false, true);
    if(myReal->itsGovernment)
        {
            aomsRelations->ADD_ITEM(myReal->itsGovernment);
        }
    aomsRelations->addRelation("itsDocking_System_5", false, true);
    if(myReal->itsDocking_System_5)
        {
            aomsRelations->ADD_ITEM(myReal->itsDocking_System_5);
        }
    aomsRelations->addRelation("itsDC_1", false, true);
    if(myReal->itsDC_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDC_1);
        }
    aomsRelations->addRelation("itsDCOperator_4", false, true);
    if(myReal->itsDCOperator_4)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCOperator_4);
        }
}
//#]

IMPLEMENT_META_P(ANGELS, UseCaseAnalysisPkg_AngelsPkg, UseCaseAnalysisPkg::AngelsPkg, false, OMAnimatedANGELS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\ANGELS.cpp
*********************************************************************/

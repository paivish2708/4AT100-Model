/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Collision_Avoidance
//!	Generated Date	: Wed, 29, Apr 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\Collision_Avoidance.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Collision_Avoidance.h"
//## link itsCollision_Detection
#include "Collision_Detection.h"
//#[ ignore
#define Default_Collision_Avoidance_Collision_Avoidance_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Collision_Avoidance
Collision_Avoidance::Collision_Avoidance() {
    NOTIFY_CONSTRUCTOR(Collision_Avoidance, Collision_Avoidance(), 0, Default_Collision_Avoidance_Collision_Avoidance_SERIALIZE);
    itsCollision_Detection = NULL;
}

Collision_Avoidance::~Collision_Avoidance() {
    NOTIFY_DESTRUCTOR(~Collision_Avoidance, true);
    cleanUpRelations();
}

Collision_Detection* Collision_Avoidance::getItsCollision_Detection() const {
    return itsCollision_Detection;
}

void Collision_Avoidance::setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(p_Collision_Detection != NULL)
        {
            p_Collision_Detection->_setItsCollision_Avoidance(this);
        }
    _setItsCollision_Detection(p_Collision_Detection);
}

void Collision_Avoidance::cleanUpRelations() {
    if(itsCollision_Detection != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCollision_Detection");
            Collision_Avoidance* p_Collision_Avoidance = itsCollision_Detection->getItsCollision_Avoidance();
            if(p_Collision_Avoidance != NULL)
                {
                    itsCollision_Detection->__setItsCollision_Avoidance(NULL);
                }
            itsCollision_Detection = NULL;
        }
}

void Collision_Avoidance::__setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
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

void Collision_Avoidance::_setItsCollision_Detection(Collision_Detection* p_Collision_Detection) {
    if(itsCollision_Detection != NULL)
        {
            itsCollision_Detection->__setItsCollision_Avoidance(NULL);
        }
    __setItsCollision_Detection(p_Collision_Detection);
}

void Collision_Avoidance::_clearItsCollision_Detection() {
    NOTIFY_RELATION_CLEARED("itsCollision_Detection");
    itsCollision_Detection = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCollision_Avoidance::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCollision_Detection", false, true);
    if(myReal->itsCollision_Detection)
        {
            aomsRelations->ADD_ITEM(myReal->itsCollision_Detection);
        }
}
//#]

IMPLEMENT_META_P(Collision_Avoidance, Default, Default, false, OMAnimatedCollision_Avoidance)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\Collision_Avoidance.cpp
*********************************************************************/

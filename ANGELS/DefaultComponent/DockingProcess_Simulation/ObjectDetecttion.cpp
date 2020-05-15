/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcess_Simulation
	Model Element	: ObjectDetecttion
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\DockingProcess_Simulation\ObjectDetecttion.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ObjectDetecttion.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define ANGELSPkg_ObjectDetecttion_ObjectDetecttion_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg

//## class ObjectDetecttion
ObjectDetecttion::ObjectDetecttion() {
    NOTIFY_CONSTRUCTOR(ObjectDetecttion, ObjectDetecttion(), 0, ANGELSPkg_ObjectDetecttion_ObjectDetecttion_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsANGELS_2 = NULL;
}

ObjectDetecttion::~ObjectDetecttion() {
    NOTIFY_DESTRUCTOR(~ObjectDetecttion, true);
    cleanUpRelations();
}

ANGELS* ObjectDetecttion::getItsANGELS() const {
    return itsANGELS;
}

void ObjectDetecttion::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* ObjectDetecttion::getItsANGELS_1() const {
    return itsANGELS_1;
}

void ObjectDetecttion::setItsANGELS_1(ANGELS* p_ANGELS) {
    itsANGELS_1 = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS_1", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
        }
}

ANGELS* ObjectDetecttion::getItsANGELS_2() const {
    return itsANGELS_2;
}

void ObjectDetecttion::setItsANGELS_2(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsObjectDetecttion(this);
        }
    _setItsANGELS_2(p_ANGELS);
}

void ObjectDetecttion::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            itsANGELS_1 = NULL;
        }
    if(itsANGELS_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_2");
            ObjectDetecttion* p_ObjectDetecttion = itsANGELS_2->getItsObjectDetecttion();
            if(p_ObjectDetecttion != NULL)
                {
                    itsANGELS_2->__setItsObjectDetecttion(NULL);
                }
            itsANGELS_2 = NULL;
        }
}

void ObjectDetecttion::__setItsANGELS_2(ANGELS* p_ANGELS) {
    itsANGELS_2 = p_ANGELS;
    if(p_ANGELS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsANGELS_2", p_ANGELS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_2");
        }
}

void ObjectDetecttion::_setItsANGELS_2(ANGELS* p_ANGELS) {
    if(itsANGELS_2 != NULL)
        {
            itsANGELS_2->__setItsObjectDetecttion(NULL);
        }
    __setItsANGELS_2(p_ANGELS);
}

void ObjectDetecttion::_clearItsANGELS_2() {
    NOTIFY_RELATION_CLEARED("itsANGELS_2");
    itsANGELS_2 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedObjectDetecttion::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
    aomsRelations->addRelation("itsANGELS_1", false, true);
    if(myReal->itsANGELS_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_1);
        }
    aomsRelations->addRelation("itsANGELS_2", false, true);
    if(myReal->itsANGELS_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS_2);
        }
}
//#]

IMPLEMENT_META_P(ObjectDetecttion, ANGELSPkg, ANGELSPkg, false, OMAnimatedObjectDetecttion)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DockingProcess_Simulation\ObjectDetecttion.cpp
*********************************************************************/

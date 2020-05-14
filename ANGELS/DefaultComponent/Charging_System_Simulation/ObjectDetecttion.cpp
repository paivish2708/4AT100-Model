/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: ObjectDetecttion
//!	Generated Date	: Thu, 14, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\ObjectDetecttion.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ObjectDetecttion.h"
//## link itsANGELS
#include "ANGELS.h"
//#[ ignore
#define UseCaseAnalysisPkg_ANGELSPkg_ObjectDetecttion_ObjectDetecttion_SERIALIZE OM_NO_OP
//#]

//## package UseCaseAnalysisPkg::ANGELSPkg

//## class ObjectDetecttion
ObjectDetecttion::ObjectDetecttion() {
    NOTIFY_CONSTRUCTOR(ObjectDetecttion, ObjectDetecttion(), 0, UseCaseAnalysisPkg_ANGELSPkg_ObjectDetecttion_ObjectDetecttion_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
}

ObjectDetecttion::~ObjectDetecttion() {
    NOTIFY_DESTRUCTOR(~ObjectDetecttion, true);
    cleanUpRelations();
}

ANGELS* ObjectDetecttion::getItsANGELS() const {
    return itsANGELS;
}

void ObjectDetecttion::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsObjectDetecttion(this);
        }
    _setItsANGELS(p_ANGELS);
}

ANGELS* ObjectDetecttion::getItsANGELS_1() const {
    return itsANGELS_1;
}

void ObjectDetecttion::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsObjectDetecttion_1(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

void ObjectDetecttion::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            ObjectDetecttion* p_ObjectDetecttion = itsANGELS->getItsObjectDetecttion();
            if(p_ObjectDetecttion != NULL)
                {
                    itsANGELS->__setItsObjectDetecttion(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            ObjectDetecttion* p_ObjectDetecttion = itsANGELS_1->getItsObjectDetecttion_1();
            if(p_ObjectDetecttion != NULL)
                {
                    itsANGELS_1->__setItsObjectDetecttion_1(NULL);
                }
            itsANGELS_1 = NULL;
        }
}

void ObjectDetecttion::__setItsANGELS(ANGELS* p_ANGELS) {
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

void ObjectDetecttion::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsObjectDetecttion(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void ObjectDetecttion::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

void ObjectDetecttion::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void ObjectDetecttion::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsObjectDetecttion_1(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void ObjectDetecttion::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
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
}
//#]

IMPLEMENT_META_P(ObjectDetecttion, UseCaseAnalysisPkg_ANGELSPkg, UseCaseAnalysisPkg::ANGELSPkg, false, OMAnimatedObjectDetecttion)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\ObjectDetecttion.cpp
*********************************************************************/

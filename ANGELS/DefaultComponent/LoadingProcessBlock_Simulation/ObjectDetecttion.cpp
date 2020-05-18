/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: ObjectDetecttion
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\ObjectDetecttion.cpp
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
            p_ANGELS->_setItsObjectDetecttion_1(this);
        }
    _setItsANGELS(p_ANGELS);
}

void ObjectDetecttion::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            ObjectDetecttion* p_ObjectDetecttion = itsANGELS->getItsObjectDetecttion_1();
            if(p_ObjectDetecttion != NULL)
                {
                    itsANGELS->__setItsObjectDetecttion_1(NULL);
                }
            itsANGELS = NULL;
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
            itsANGELS->__setItsObjectDetecttion_1(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void ObjectDetecttion::_clearItsANGELS() {
    NOTIFY_RELATION_CLEARED("itsANGELS");
    itsANGELS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedObjectDetecttion::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsANGELS", false, true);
    if(myReal->itsANGELS)
        {
            aomsRelations->ADD_ITEM(myReal->itsANGELS);
        }
}
//#]

IMPLEMENT_META_P(ObjectDetecttion, ANGELSPkg, ANGELSPkg, false, OMAnimatedObjectDetecttion)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\ObjectDetecttion.cpp
*********************************************************************/

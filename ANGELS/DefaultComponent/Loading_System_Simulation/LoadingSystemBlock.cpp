/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: LoadingSystemBlock
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\LoadingSystemBlock.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LoadingSystemBlock.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsLoadingProcessBlock
#include "LoadingProcessBlock.h"
//#[ ignore
#define ANGELSPkg_LoadingSystemPkg_LoadingSystemBlock_LoadingSystemBlock_SERIALIZE OM_NO_OP
//#]

//## package ANGELSPkg::LoadingSystemPkg

//## class LoadingSystemBlock
LoadingSystemBlock::LoadingSystemBlock() {
    NOTIFY_CONSTRUCTOR(LoadingSystemBlock, LoadingSystemBlock(), 0, ANGELSPkg_LoadingSystemPkg_LoadingSystemBlock_LoadingSystemBlock_SERIALIZE);
    itsANGELS = NULL;
    itsANGELS_1 = NULL;
    itsLoadingProcessBlock = NULL;
}

LoadingSystemBlock::~LoadingSystemBlock() {
    NOTIFY_DESTRUCTOR(~LoadingSystemBlock, true);
    cleanUpRelations();
}

ANGELS* LoadingSystemBlock::getItsANGELS() const {
    return itsANGELS;
}

void LoadingSystemBlock::setItsANGELS(ANGELS* p_ANGELS) {
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

ANGELS* LoadingSystemBlock::getItsANGELS_1() const {
    return itsANGELS_1;
}

void LoadingSystemBlock::setItsANGELS_1(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsLoadingSystemBlock(this);
        }
    _setItsANGELS_1(p_ANGELS);
}

LoadingProcessBlock* LoadingSystemBlock::getItsLoadingProcessBlock() const {
    return itsLoadingProcessBlock;
}

void LoadingSystemBlock::setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    if(p_LoadingProcessBlock != NULL)
        {
            p_LoadingProcessBlock->_setItsLoadingSystemBlock(this);
        }
    _setItsLoadingProcessBlock(p_LoadingProcessBlock);
}

void LoadingSystemBlock::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS");
            itsANGELS = NULL;
        }
    if(itsANGELS_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsANGELS_1");
            LoadingSystemBlock* p_LoadingSystemBlock = itsANGELS_1->getItsLoadingSystemBlock();
            if(p_LoadingSystemBlock != NULL)
                {
                    itsANGELS_1->__setItsLoadingSystemBlock(NULL);
                }
            itsANGELS_1 = NULL;
        }
    if(itsLoadingProcessBlock != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
            LoadingSystemBlock* p_LoadingSystemBlock = itsLoadingProcessBlock->getItsLoadingSystemBlock();
            if(p_LoadingSystemBlock != NULL)
                {
                    itsLoadingProcessBlock->__setItsLoadingSystemBlock(NULL);
                }
            itsLoadingProcessBlock = NULL;
        }
}

void LoadingSystemBlock::__setItsANGELS_1(ANGELS* p_ANGELS) {
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

void LoadingSystemBlock::_setItsANGELS_1(ANGELS* p_ANGELS) {
    if(itsANGELS_1 != NULL)
        {
            itsANGELS_1->__setItsLoadingSystemBlock(NULL);
        }
    __setItsANGELS_1(p_ANGELS);
}

void LoadingSystemBlock::_clearItsANGELS_1() {
    NOTIFY_RELATION_CLEARED("itsANGELS_1");
    itsANGELS_1 = NULL;
}

void LoadingSystemBlock::__setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    itsLoadingProcessBlock = p_LoadingProcessBlock;
    if(p_LoadingProcessBlock != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoadingProcessBlock", p_LoadingProcessBlock, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
        }
}

void LoadingSystemBlock::_setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock) {
    if(itsLoadingProcessBlock != NULL)
        {
            itsLoadingProcessBlock->__setItsLoadingSystemBlock(NULL);
        }
    __setItsLoadingProcessBlock(p_LoadingProcessBlock);
}

void LoadingSystemBlock::_clearItsLoadingProcessBlock() {
    NOTIFY_RELATION_CLEARED("itsLoadingProcessBlock");
    itsLoadingProcessBlock = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLoadingSystemBlock::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsLoadingProcessBlock", false, true);
    if(myReal->itsLoadingProcessBlock)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoadingProcessBlock);
        }
}
//#]

IMPLEMENT_META_P(LoadingSystemBlock, ANGELSPkg_LoadingSystemPkg, ANGELSPkg::LoadingSystemPkg, false, OMAnimatedLoadingSystemBlock)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\LoadingSystemBlock.cpp
*********************************************************************/

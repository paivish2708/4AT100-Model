/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: LoadingSystemBlock
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\LoadingSystemBlock.h
*********************************************************************/

#ifndef LoadingSystemBlock_H
#define LoadingSystemBlock_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "LoadingSystemPkg.h"
//## link itsANGELS
class ANGELS;

//## link itsLoadingProcessBlock
class LoadingProcessBlock;

//## package ANGELSPkg::LoadingSystemPkg

//## class LoadingSystemBlock
class LoadingSystemBlock {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLoadingSystemBlock;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    LoadingSystemBlock();
    
    //## auto_generated
    ~LoadingSystemBlock();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    ANGELS* getItsANGELS_1() const;
    
    //## auto_generated
    void setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    LoadingProcessBlock* getItsLoadingProcessBlock() const;
    
    //## auto_generated
    void setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    ANGELS* itsANGELS_1;		//## link itsANGELS_1
    
    LoadingProcessBlock* itsLoadingProcessBlock;		//## link itsLoadingProcessBlock
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS_1(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS_1();
    
    //## auto_generated
    void __setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock);
    
    //## auto_generated
    void _setItsLoadingProcessBlock(LoadingProcessBlock* p_LoadingProcessBlock);
    
    //## auto_generated
    void _clearItsLoadingProcessBlock();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLoadingSystemBlock : virtual public AOMInstance {
    DECLARE_META(LoadingSystemBlock, OMAnimatedLoadingSystemBlock)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\LoadingSystemBlock.h
*********************************************************************/

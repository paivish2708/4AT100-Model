/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCOperator
//!	Generated Date	: Sun, 10, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DCOperator.h
*********************************************************************/

#ifndef DCOperator_H
#define DCOperator_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsANGELS
class ANGELS;

//## link itsDocking_System
class Docking_System;

//## link itsLoading_System
class Loading_System;

//## package UseCaseAnalysisPkg::ANGELSPkg::ActorPkg

//## actor DCOperator
class DCOperator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DCOperator();
    
    //## auto_generated
    ~DCOperator();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ANGELS* getItsANGELS() const;
    
    //## auto_generated
    void setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    Docking_System* getItsDocking_System() const;
    
    //## auto_generated
    void setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    Docking_System* getItsDocking_System_1() const;
    
    //## auto_generated
    void setItsDocking_System_1(Docking_System* p_Docking_System);
    
    //## auto_generated
    Loading_System* getItsLoading_System() const;
    
    //## auto_generated
    void setItsLoading_System(Loading_System* p_Loading_System);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ANGELS* itsANGELS;		//## link itsANGELS
    
    Docking_System* itsDocking_System;		//## link itsDocking_System
    
    Docking_System* itsDocking_System_1;		//## link itsDocking_System_1
    
    Loading_System* itsLoading_System;		//## link itsLoading_System
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _setItsANGELS(ANGELS* p_ANGELS);
    
    //## auto_generated
    void _clearItsANGELS();
    
    //## auto_generated
    void __setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System();
    
    //## auto_generated
    void __setItsDocking_System_1(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _setItsDocking_System_1(Docking_System* p_Docking_System);
    
    //## auto_generated
    void _clearItsDocking_System_1();
    
    //## auto_generated
    void __setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    void _setItsLoading_System(Loading_System* p_Loading_System);
    
    //## auto_generated
    void _clearItsLoading_System();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCOperator.h
*********************************************************************/

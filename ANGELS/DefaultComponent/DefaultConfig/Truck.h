/*********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Truck
//!	Generated Date	: Thu, 30, Apr 2020  
	File Path	: DefaultComponent\DefaultConfig\Truck.h
*********************************************************************/

#ifndef Truck_H
#define Truck_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsDCOperator
class DCOperator;

//## link itsDriver
class Driver;

//## package UseCaseAnalysisPkg::ANGELSPkg::TruckPkg

//## class Truck
class Truck {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Truck();
    
    //## auto_generated
    ~Truck();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCOperator* getItsDCOperator() const;
    
    //## auto_generated
    void setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    Driver* getItsDriver() const;
    
    //## auto_generated
    void setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    Driver* getItsDriver_1() const;
    
    //## auto_generated
    void setItsDriver_1(Driver* p_Driver);
    
    //## auto_generated
    Driver* getItsDriver_2() const;
    
    //## auto_generated
    void setItsDriver_2(Driver* p_Driver);
    
    //## auto_generated
    Driver* getItsDriver_3() const;
    
    //## auto_generated
    void setItsDriver_3(Driver* p_Driver);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCOperator* itsDCOperator;		//## link itsDCOperator
    
    Driver* itsDriver;		//## link itsDriver
    
    Driver* itsDriver_1;		//## link itsDriver_1
    
    Driver* itsDriver_2;		//## link itsDriver_2
    
    Driver* itsDriver_3;		//## link itsDriver_3
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _setItsDCOperator(DCOperator* p_DCOperator);
    
    //## auto_generated
    void _clearItsDCOperator();
    
    //## auto_generated
    void __setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver();
    
    //## auto_generated
    void __setItsDriver_1(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver_1(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver_1();
    
    //## auto_generated
    void __setItsDriver_2(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver_2(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver_2();
    
    //## auto_generated
    void __setItsDriver_3(Driver* p_Driver);
    
    //## auto_generated
    void _setItsDriver_3(Driver* p_Driver);
    
    //## auto_generated
    void _clearItsDriver_3();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Truck.h
*********************************************************************/

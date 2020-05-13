/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Charging_System_Simulation
	Model Element	: Charging_System_Simulation
//!	Generated Date	: Wed, 13, May 2020  
	File Path	: DefaultComponent\Charging_System_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Charging_System.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Charging_System * p_Charging_System;
            p_Charging_System = new Charging_System;
            p_Charging_System->startBehavior();
            //#[ configuration DefaultComponent::Charging_System_Simulation 
            //#]
            OXF::start();
            delete p_Charging_System;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\Charging_System_Simulation\MainDefaultComponent.cpp
*********************************************************************/

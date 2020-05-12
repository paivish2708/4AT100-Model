/********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Docking_System_Simulation
	Model Element	: Docking_System_Simulation
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Docking_System_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Docking_System.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Docking_System * p_Docking_System;
            p_Docking_System = new Docking_System;
            p_Docking_System->startBehavior();
            //#[ configuration DefaultComponent::Docking_System_Simulation 
            //#]
            OXF::start();
            delete p_Docking_System;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\Docking_System_Simulation\MainDefaultComponent.cpp
*********************************************************************/

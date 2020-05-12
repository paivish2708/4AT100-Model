/********************************************************************
	Rhapsody	: 8.4 
	Login		: Pranav
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Loading_System_Simulation
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Loading_System.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Loading_System * p_Loading_System;
            p_Loading_System = new Loading_System;
            p_Loading_System->startBehavior();
            //#[ configuration DefaultComponent::Loading_System_Simulation 
            //#]
            OXF::start();
            delete p_Loading_System;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\Loading_System_Simulation\MainDefaultComponent.cpp
*********************************************************************/

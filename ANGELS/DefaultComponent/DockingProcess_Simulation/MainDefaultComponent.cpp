/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcess_Simulation
	Model Element	: DockingProcess_Simulation
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\DockingProcess_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "DockingProcess.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            DockingProcess * p_DockingProcess;
            p_DockingProcess = new DockingProcess;
            p_DockingProcess->startBehavior();
            //#[ configuration DefaultComponent::DockingProcess_Simulation 
            //#]
            OXF::start();
            delete p_DockingProcess;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DockingProcess_Simulation\MainDefaultComponent.cpp
*********************************************************************/

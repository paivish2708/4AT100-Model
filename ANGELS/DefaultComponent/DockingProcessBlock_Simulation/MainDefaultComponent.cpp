/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DockingProcessBlock_Simulation
	Model Element	: DockingProcessBlock_Simulation
//!	Generated Date	: Thu, 21, May 2020  
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "DockingProcessBlock.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            DockingProcessBlock * p_DockingProcessBlock;
            p_DockingProcessBlock = new DockingProcessBlock;
            p_DockingProcessBlock->startBehavior();
            //#[ configuration DefaultComponent::DockingProcessBlock_Simulation 
            //#]
            OXF::start();
            delete p_DockingProcessBlock;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DockingProcessBlock_Simulation\MainDefaultComponent.cpp
*********************************************************************/

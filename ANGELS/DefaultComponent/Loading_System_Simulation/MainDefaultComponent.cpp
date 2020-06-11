/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: Loading_System_Simulation
	Model Element	: Loading_System_Simulation
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\Loading_System_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "LoadingProcessBlock.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            LoadingProcessBlock * p_LoadingProcessBlock;
            p_LoadingProcessBlock = new LoadingProcessBlock;
            p_LoadingProcessBlock->startBehavior();
            //#[ configuration DefaultComponent::Loading_System_Simulation 
            //#]
            OXF::start();
            delete p_LoadingProcessBlock;
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

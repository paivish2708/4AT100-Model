/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: LoadingProcessBlock_Simulation
	Model Element	: LoadingProcessBlock_Simulation
//!	Generated Date	: Fri, 15, May 2020  
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\MainDefaultComponent.cpp
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
            //#[ configuration DefaultComponent::LoadingProcessBlock_Simulation 
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
	File Path	: DefaultComponent\LoadingProcessBlock_Simulation\MainDefaultComponent.cpp
*********************************************************************/

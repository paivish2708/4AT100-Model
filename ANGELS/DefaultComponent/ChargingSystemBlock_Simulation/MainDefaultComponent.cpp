/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ChargingSystemBlock_Simulation
	Model Element	: ChargingSystemBlock_Simulation
//!	Generated Date	: Thu, 21, May 2020  
	File Path	: DefaultComponent\ChargingSystemBlock_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ChargingSystemBlock.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            ChargingSystemBlock * p_ChargingSystemBlock;
            p_ChargingSystemBlock = new ChargingSystemBlock;
            p_ChargingSystemBlock->startBehavior();
            //#[ configuration DefaultComponent::ChargingSystemBlock_Simulation 
            //#]
            OXF::start();
            delete p_ChargingSystemBlock;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\ChargingSystemBlock_Simulation\MainDefaultComponent.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EmergencyOverrideBlock_Simulation
	Model Element	: EmergencyOverrideBlock_Simulation
//!	Generated Date	: Sat, 30, May 2020  
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "EmergencyOverrideBlock.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            EmergencyOverrideBlock * p_EmergencyOverrideBlock;
            p_EmergencyOverrideBlock = new EmergencyOverrideBlock;
            p_EmergencyOverrideBlock->startBehavior();
            //#[ configuration DefaultComponent::EmergencyOverrideBlock_Simulation 
            //#]
            OXF::start();
            delete p_EmergencyOverrideBlock;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\EmergencyOverrideBlock_Simulation\MainDefaultComponent.cpp
*********************************************************************/

/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ParkingSystemBlock_Simulation
	Model Element	: ParkingSystemBlock_Simulation
//!	Generated Date	: Mon, 18, May 2020  
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ParkingSystemBlock.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            ParkingSystemBlock * p_ParkingSystemBlock;
            p_ParkingSystemBlock = new ParkingSystemBlock;
            p_ParkingSystemBlock->startBehavior();
            //#[ configuration DefaultComponent::ParkingSystemBlock_Simulation 
            //#]
            OXF::start();
            delete p_ParkingSystemBlock;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\ParkingSystemBlock_Simulation\MainDefaultComponent.cpp
*********************************************************************/

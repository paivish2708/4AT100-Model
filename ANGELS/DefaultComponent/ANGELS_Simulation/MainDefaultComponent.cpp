/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: ANGELS_Simulation
	Model Element	: ANGELS_Simulation
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\ANGELS_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ANGELS.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            ANGELS * p_ANGELS;
            p_ANGELS = new ANGELS;
            p_ANGELS->startBehavior();
            //#[ configuration DefaultComponent::ANGELS_Simulation 
            //#]
            OXF::start();
            delete p_ANGELS;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\ANGELS_Simulation\MainDefaultComponent.cpp
*********************************************************************/

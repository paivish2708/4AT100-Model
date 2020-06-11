/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: EBS_Simulation
	Model Element	: EBS_Simulation
//!	Generated Date	: Thu, 11, Jun 2020  
	File Path	: DefaultComponent\EBS_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "EBS.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            EBS * p_EBS;
            p_EBS = new EBS;
            p_EBS->startBehavior();
            //#[ configuration DefaultComponent::EBS_Simulation 
            //#]
            OXF::start();
            delete p_EBS;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\EBS_Simulation\MainDefaultComponent.cpp
*********************************************************************/

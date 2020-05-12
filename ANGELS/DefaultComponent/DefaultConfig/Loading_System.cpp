/********************************************************************
	Rhapsody	: 8.4 
	Login		: LAPTOP
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Loading_System
//!	Generated Date	: Tue, 12, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Loading_System.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Loading_System.h"
//## link itsANGELS
#include "ANGELS.h"
//## link itsDC
#include "DC.h"
//## link itsDCOperator
#include "DCOperator.h"
//## package UseCaseAnalysisPkg::ANGELSPkg::LoadingSystemPkg

//## class Loading_System
Loading_System::Loading_System(IOxfActive* theActiveContext) : Doorstatus(0), LoadingTime(0) {
    setActiveContext(theActiveContext, false);
    itsANGELS = NULL;
    itsDC = NULL;
    itsDCOperator = NULL;
    initStatechart();
}

Loading_System::~Loading_System() {
    cleanUpRelations();
    cancelTimeouts();
}

void Loading_System::LoadingProcess() {
    //#[ operation LoadingProcess()
    //#]
}

void Loading_System::OpenDoors(RhpBoolean Doorstate) {
    //#[ operation OpenDoors(RhpBoolean)
    if (Doorstatus != Doorstate)
    {Doorstatus=1;}
    //#]
}

void Loading_System::StoptheTruck(double speed) {
    //#[ operation StoptheTruck(double)
    speed = 0;
    double Speed = speed;
    
    //#]
}

RhpBoolean Loading_System::getDoorstatus() const {
    return Doorstatus;
}

void Loading_System::setDoorstatus(RhpBoolean p_Doorstatus) {
    Doorstatus = p_Doorstatus;
}

int Loading_System::getLoadingTime() const {
    return LoadingTime;
}

void Loading_System::setLoadingTime(int p_LoadingTime) {
    LoadingTime = p_LoadingTime;
}

ANGELS* Loading_System::getItsANGELS() const {
    return itsANGELS;
}

void Loading_System::setItsANGELS(ANGELS* p_ANGELS) {
    if(p_ANGELS != NULL)
        {
            p_ANGELS->_setItsLoading_System(this);
        }
    _setItsANGELS(p_ANGELS);
}

DC* Loading_System::getItsDC() const {
    return itsDC;
}

void Loading_System::setItsDC(DC* p_DC) {
    if(p_DC != NULL)
        {
            p_DC->_setItsLoading_System(this);
        }
    _setItsDC(p_DC);
}

DCOperator* Loading_System::getItsDCOperator() const {
    return itsDCOperator;
}

void Loading_System::setItsDCOperator(DCOperator* p_DCOperator) {
    if(p_DCOperator != NULL)
        {
            p_DCOperator->_setItsLoading_System(this);
        }
    _setItsDCOperator(p_DCOperator);
}

Truck* Loading_System::getItsTruck() const {
    return (Truck*) &itsTruck;
}

bool Loading_System::startBehavior() {
    bool done = true;
    done &= OMReactive::startBehavior();
    return done;
}

void Loading_System::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    LoadingState_subState = OMNonState;
    LoadingState_timeout = NULL;
}

void Loading_System::cleanUpRelations() {
    if(itsANGELS != NULL)
        {
            Loading_System* p_Loading_System = itsANGELS->getItsLoading_System();
            if(p_Loading_System != NULL)
                {
                    itsANGELS->__setItsLoading_System(NULL);
                }
            itsANGELS = NULL;
        }
    if(itsDC != NULL)
        {
            Loading_System* p_Loading_System = itsDC->getItsLoading_System();
            if(p_Loading_System != NULL)
                {
                    itsDC->__setItsLoading_System(NULL);
                }
            itsDC = NULL;
        }
    if(itsDCOperator != NULL)
        {
            Loading_System* p_Loading_System = itsDCOperator->getItsLoading_System();
            if(p_Loading_System != NULL)
                {
                    itsDCOperator->__setItsLoading_System(NULL);
                }
            itsDCOperator = NULL;
        }
}

void Loading_System::cancelTimeouts() {
    cancel(LoadingState_timeout);
}

bool Loading_System::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(LoadingState_timeout == arg)
        {
            LoadingState_timeout = NULL;
            res = true;
        }
    return res;
}

void Loading_System::__setItsANGELS(ANGELS* p_ANGELS) {
    itsANGELS = p_ANGELS;
}

void Loading_System::_setItsANGELS(ANGELS* p_ANGELS) {
    if(itsANGELS != NULL)
        {
            itsANGELS->__setItsLoading_System(NULL);
        }
    __setItsANGELS(p_ANGELS);
}

void Loading_System::_clearItsANGELS() {
    itsANGELS = NULL;
}

void Loading_System::__setItsDC(DC* p_DC) {
    itsDC = p_DC;
}

void Loading_System::_setItsDC(DC* p_DC) {
    if(itsDC != NULL)
        {
            itsDC->__setItsLoading_System(NULL);
        }
    __setItsDC(p_DC);
}

void Loading_System::_clearItsDC() {
    itsDC = NULL;
}

void Loading_System::__setItsDCOperator(DCOperator* p_DCOperator) {
    itsDCOperator = p_DCOperator;
}

void Loading_System::_setItsDCOperator(DCOperator* p_DCOperator) {
    if(itsDCOperator != NULL)
        {
            itsDCOperator->__setItsLoading_System(NULL);
        }
    __setItsDCOperator(p_DCOperator);
}

void Loading_System::_clearItsDCOperator() {
    itsDCOperator = NULL;
}

void Loading_System::rootState_entDef() {
    {
        rootState_subState = DockedState;
        rootState_active = DockedState;
    }
}

IOxfReactive::TakeEventStatus Loading_System::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State IdleState
        case IdleState:
        {
            if(IS_EVENT_TYPE_OF(StartLoadingProcedure_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    //#[ transition 0 
                    OpenDoors(1);
                    //#]
                    rootState_subState = DoorsClosed;
                    rootState_active = DoorsClosed;
                    res = eventConsumed;
                }
            
        }
        break;
        // State LoadedState
        case LoadedState:
        {
            if(IS_EVENT_TYPE_OF(ReturnToDockedState_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    switch (LoadingState_subState) {
                        // State StartLoading
                        case StartLoading:
                        {
                            cancel(LoadingState_timeout);
                        }
                        break;
                        default:
                            break;
                    }
                    LoadingState_subState = OMNonState;
                    pushNullTransition();
                    rootState_subState = ReadyForParking;
                    rootState_active = ReadyForParking;
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State StartLoading
        case StartLoading:
        {
            if(IS_EVENT_TYPE_OF(StopLoadingProc_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    cancel(LoadingState_timeout);
                    LoadingState_subState = LoadedState;
                    rootState_active = LoadedState;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == LoadingState_timeout)
                        {
                            cancel(LoadingState_timeout);
                            //#[ transition 7 
                            LoadingTime++;
                            //#]
                            LoadingState_subState = StartLoading;
                            rootState_active = StartLoading;
                            LoadingState_timeout = scheduleTimeout(100, NULL);
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State DoorsClosed
        case DoorsClosed:
        {
            if(IS_EVENT_TYPE_OF(LoadingProcess_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    LoadingState_entDef();
                    res = eventConsumed;
                }
            
        }
        break;
        // State ReadyForParking
        case ReadyForParking:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = terminationstate_9;
                    rootState_active = terminationstate_9;
                    res = eventConsumed;
                }
            
        }
        break;
        // State DockedState
        case DockedState:
        {
            if(IS_EVENT_TYPE_OF(AlertDCManager_LoadingSystemPkg_ANGELSPkg_UseCaseAnalysisPkg_id))
                {
                    rootState_subState = IdleState;
                    rootState_active = IdleState;
                    res = eventConsumed;
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

void Loading_System::LoadingState_entDef() {
    rootState_subState = LoadingState;
    LoadingState_subState = StartLoading;
    rootState_active = StartLoading;
    LoadingState_timeout = scheduleTimeout(100, NULL);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Loading_System.cpp
*********************************************************************/

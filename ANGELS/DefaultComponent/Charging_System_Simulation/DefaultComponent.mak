
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\ProgramData\IBM\Rational\Rhapsody\8.4\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rational\Rhapsody\8.4"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  Charging_System.obj \
  Truck.obj \
  ANGELS.obj \
  Collision_Avoidance.obj \
  Docking_System.obj \
  DCOperator.obj \
  Driver.obj \
  PedestrianandObstacles.obj \
  Communication_System.obj \
  Obstacle.obj \
  Collision_Detection.obj \
  Loading_System.obj \
  DC.obj \
  Safety_Standards.obj \
  ParkingSystem.obj \
  Localisation_System.obj \
  Government.obj \
  ChargingSystemPkg.obj \
  TruckPkg.obj \
  ANGELSPkg.obj \
  ObstacleAvoidancePkg.obj \
  UseCaseAnalysisPkg.obj \
  DockingSystemPkg.obj \
  ActorPkg.obj \
  CommunicationPkg.obj \
  ObstacleDetectionPkg.obj \
  LoadingSystemPkg.obj \
  SafetyStandards.obj \
  ParkingSystemPkg.obj \
  LocalisationPkg.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






Charging_System.obj : Charging_System.cpp Charging_System.h    ChargingSystemPkg.h Truck.h DCOperator.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Charging_System.obj" "Charging_System.cpp" 



Truck.obj : Truck.cpp Truck.h    TruckPkg.h ANGELS.h Driver.h Docking_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Truck.obj" "Truck.cpp" 



ANGELS.obj : ANGELS.cpp ANGELS.h    ANGELSPkg.h Collision_Avoidance.h Communication_System.h Collision_Detection.h Loading_System.h Safety_Standards.h ParkingSystem.h Truck.h Localisation_System.h Docking_System.h Government.h DC.h DCOperator.h Charging_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ANGELS.obj" "ANGELS.cpp" 



Collision_Avoidance.obj : Collision_Avoidance.cpp Collision_Avoidance.h    ObstacleAvoidancePkg.h ANGELS.h Docking_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Collision_Avoidance.obj" "Collision_Avoidance.cpp" 



Docking_System.obj : Docking_System.cpp Docking_System.h    DockingSystemPkg.h DCOperator.h Truck.h Loading_System.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Docking_System.obj" "Docking_System.cpp" 



DCOperator.obj : DCOperator.cpp DCOperator.h    ActorPkg.h Loading_System.h ANGELS.h Docking_System.h Charging_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DCOperator.obj" "DCOperator.cpp" 



Driver.obj : Driver.cpp Driver.h    ActorPkg.h Truck.h ANGELS.h Docking_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Driver.obj" "Driver.cpp" 



PedestrianandObstacles.obj : PedestrianandObstacles.cpp PedestrianandObstacles.h    ActorPkg.h Obstacle.h Collision_Detection.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PedestrianandObstacles.obj" "PedestrianandObstacles.cpp" 



Communication_System.obj : Communication_System.cpp Communication_System.h    CommunicationPkg.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Communication_System.obj" "Communication_System.cpp" 



Obstacle.obj : Obstacle.cpp Obstacle.h    ActorPkg.h Collision_Detection.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Obstacle.obj" "Obstacle.cpp" 



Collision_Detection.obj : Collision_Detection.cpp Collision_Detection.h    ObstacleDetectionPkg.h ANGELS.h Obstacle.h Docking_System.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Collision_Detection.obj" "Collision_Detection.cpp" 



Loading_System.obj : Loading_System.cpp Loading_System.h    LoadingSystemPkg.h DC.h DCOperator.h ANGELS.h Truck.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Loading_System.obj" "Loading_System.cpp" 



DC.obj : DC.cpp DC.h    ActorPkg.h Loading_System.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DC.obj" "DC.cpp" 



Safety_Standards.obj : Safety_Standards.cpp Safety_Standards.h    SafetyStandards.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Safety_Standards.obj" "Safety_Standards.cpp" 



ParkingSystem.obj : ParkingSystem.cpp ParkingSystem.h    ParkingSystemPkg.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ParkingSystem.obj" "ParkingSystem.cpp" 



Localisation_System.obj : Localisation_System.cpp Localisation_System.h    LocalisationPkg.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Localisation_System.obj" "Localisation_System.cpp" 



Government.obj : Government.cpp Government.h    ActorPkg.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Government.obj" "Government.cpp" 



ChargingSystemPkg.obj : ChargingSystemPkg.cpp ChargingSystemPkg.h    Charging_System.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ChargingSystemPkg.obj" "ChargingSystemPkg.cpp" 



TruckPkg.obj : TruckPkg.cpp TruckPkg.h    Truck.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TruckPkg.obj" "TruckPkg.cpp" 



ANGELSPkg.obj : ANGELSPkg.cpp ANGELSPkg.h    ANGELS.h UseCaseAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ANGELSPkg.obj" "ANGELSPkg.cpp" 



ObstacleAvoidancePkg.obj : ObstacleAvoidancePkg.cpp ObstacleAvoidancePkg.h    Collision_Avoidance.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ObstacleAvoidancePkg.obj" "ObstacleAvoidancePkg.cpp" 



UseCaseAnalysisPkg.obj : UseCaseAnalysisPkg.cpp UseCaseAnalysisPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UseCaseAnalysisPkg.obj" "UseCaseAnalysisPkg.cpp" 



DockingSystemPkg.obj : DockingSystemPkg.cpp DockingSystemPkg.h    Docking_System.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DockingSystemPkg.obj" "DockingSystemPkg.cpp" 



ActorPkg.obj : ActorPkg.cpp ActorPkg.h    ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ActorPkg.obj" "ActorPkg.cpp" 



CommunicationPkg.obj : CommunicationPkg.cpp CommunicationPkg.h    Communication_System.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CommunicationPkg.obj" "CommunicationPkg.cpp" 



ObstacleDetectionPkg.obj : ObstacleDetectionPkg.cpp ObstacleDetectionPkg.h    Collision_Detection.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ObstacleDetectionPkg.obj" "ObstacleDetectionPkg.cpp" 



LoadingSystemPkg.obj : LoadingSystemPkg.cpp LoadingSystemPkg.h    Loading_System.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LoadingSystemPkg.obj" "LoadingSystemPkg.cpp" 



SafetyStandards.obj : SafetyStandards.cpp SafetyStandards.h    Safety_Standards.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SafetyStandards.obj" "SafetyStandards.cpp" 



ParkingSystemPkg.obj : ParkingSystemPkg.cpp ParkingSystemPkg.h    ParkingSystem.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ParkingSystemPkg.obj" "ParkingSystemPkg.cpp" 



LocalisationPkg.obj : LocalisationPkg.cpp LocalisationPkg.h    Localisation_System.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LocalisationPkg.obj" "LocalisationPkg.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist Charging_System.obj erase Charging_System.obj
	if exist Truck.obj erase Truck.obj
	if exist ANGELS.obj erase ANGELS.obj
	if exist Collision_Avoidance.obj erase Collision_Avoidance.obj
	if exist Docking_System.obj erase Docking_System.obj
	if exist DCOperator.obj erase DCOperator.obj
	if exist Driver.obj erase Driver.obj
	if exist PedestrianandObstacles.obj erase PedestrianandObstacles.obj
	if exist Communication_System.obj erase Communication_System.obj
	if exist Obstacle.obj erase Obstacle.obj
	if exist Collision_Detection.obj erase Collision_Detection.obj
	if exist Loading_System.obj erase Loading_System.obj
	if exist DC.obj erase DC.obj
	if exist Safety_Standards.obj erase Safety_Standards.obj
	if exist ParkingSystem.obj erase ParkingSystem.obj
	if exist Localisation_System.obj erase Localisation_System.obj
	if exist Government.obj erase Government.obj
	if exist ChargingSystemPkg.obj erase ChargingSystemPkg.obj
	if exist TruckPkg.obj erase TruckPkg.obj
	if exist ANGELSPkg.obj erase ANGELSPkg.obj
	if exist ObstacleAvoidancePkg.obj erase ObstacleAvoidancePkg.obj
	if exist UseCaseAnalysisPkg.obj erase UseCaseAnalysisPkg.obj
	if exist DockingSystemPkg.obj erase DockingSystemPkg.obj
	if exist ActorPkg.obj erase ActorPkg.obj
	if exist CommunicationPkg.obj erase CommunicationPkg.obj
	if exist ObstacleDetectionPkg.obj erase ObstacleDetectionPkg.obj
	if exist LoadingSystemPkg.obj erase LoadingSystemPkg.obj
	if exist SafetyStandards.obj erase SafetyStandards.obj
	if exist ParkingSystemPkg.obj erase ParkingSystemPkg.obj
	if exist LocalisationPkg.obj erase LocalisationPkg.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	


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
  ANGELS.obj \
  Environment.obj \
  EBS.obj \
  Truck.obj \
  DockingProcessBlock.obj \
  DCOperator.obj \
  Driver.obj \
  ParkingSystemBlock.obj \
  DC.obj \
  LoadingProcessBlock.obj \
  ChargingSystemBlock.obj \
  ChargingInfrastructure.obj \
  CommunicationSystemBlock.obj \
  LoadingSystemBlock.obj \
  PedestrianandObstacles.obj \
  Obstacle.obj \
  Collision_Detection.obj \
  Collision_Avoidance.obj \
  LocalizationArchitecture.obj \
  DockingSystem.obj \
  Government.obj \
  SafetyStandards.obj \
  ANGELSPkg.obj \
  ActorPkg.obj \
  EmergencyOverrideSystemPkg.obj \
  TruckPkg.obj \
  DockingPkg.obj \
  UseCaseAnalysisPkg.obj \
  ParkingProcessPkg.obj \
  LoadingProcessPkg.obj \
  ChargingSystemPkg.obj \
  CommunicationPkg.obj \
  LoadingSystemPkg.obj \
  ObstacleDetectionPkg.obj \
  ObstacleAvoidancePkg.obj \
  LocalisationPkg.obj \
  DockingSystemPkg.obj




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






ANGELS.obj : ANGELS.cpp ANGELS.h    ANGELSPkg.h Environment.h LocalizationArchitecture.h DockingSystem.h LoadingSystemBlock.h ChargingInfrastructure.h Obstacle.h Government.h SafetyStandards.h DCOperator.h DC.h Driver.h Truck.h Collision_Detection.h ChargingSystemBlock.h LoadingProcessBlock.h ParkingSystemBlock.h DockingProcessBlock.h EBS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ANGELS.obj" "ANGELS.cpp" 



Environment.obj : Environment.cpp Environment.h    ActorPkg.h ANGELS.h EBS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Environment.obj" "Environment.cpp" 



EBS.obj : EBS.cpp EBS.h    EmergencyOverrideSystemPkg.h Truck.h Collision_Avoidance.h Collision_Detection.h DC.h DCOperator.h PedestrianandObstacles.h Environment.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EBS.obj" "EBS.cpp" 



Truck.obj : Truck.cpp Truck.h    TruckPkg.h ANGELS.h DockingProcessBlock.h ChargingSystemBlock.h EBS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Truck.obj" "Truck.cpp" 



DockingProcessBlock.obj : DockingProcessBlock.cpp DockingProcessBlock.h    DockingPkg.h DCOperator.h ANGELS.h ChargingSystemBlock.h Truck.h DC.h Driver.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DockingProcessBlock.obj" "DockingProcessBlock.cpp" 



DCOperator.obj : DCOperator.cpp DCOperator.h    ActorPkg.h LoadingProcessBlock.h ANGELS.h DockingProcessBlock.h ChargingSystemBlock.h ParkingSystemBlock.h EBS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DCOperator.obj" "DCOperator.cpp" 



Driver.obj : Driver.cpp Driver.h    ActorPkg.h Truck.h ANGELS.h ParkingSystemBlock.h DockingProcessBlock.h ChargingSystemBlock.h EBS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Driver.obj" "Driver.cpp" 



ParkingSystemBlock.obj : ParkingSystemBlock.cpp ParkingSystemBlock.h    ParkingProcessPkg.h Driver.h DC.h DCOperator.h LoadingProcessPkg.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ParkingSystemBlock.obj" "ParkingSystemBlock.cpp" 



DC.obj : DC.cpp DC.h    ActorPkg.h LoadingProcessBlock.h ANGELS.h ParkingSystemBlock.h DockingProcessBlock.h EBS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DC.obj" "DC.cpp" 



LoadingProcessBlock.obj : LoadingProcessBlock.cpp LoadingProcessBlock.h    LoadingProcessPkg.h DC.h DCOperator.h ChargingSystemBlock.h LoadingSystemBlock.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LoadingProcessBlock.obj" "LoadingProcessBlock.cpp" 



ChargingSystemBlock.obj : ChargingSystemBlock.cpp ChargingSystemBlock.h    ChargingSystemPkg.h DCOperator.h ANGELS.h ChargingInfrastructure.h CommunicationSystemBlock.h LoadingProcessBlock.h DockingProcessBlock.h Truck.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ChargingSystemBlock.obj" "ChargingSystemBlock.cpp" 



ChargingInfrastructure.obj : ChargingInfrastructure.cpp ChargingInfrastructure.h    ChargingSystemPkg.h ANGELS.h ChargingSystemBlock.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ChargingInfrastructure.obj" "ChargingInfrastructure.cpp" 



CommunicationSystemBlock.obj : CommunicationSystemBlock.cpp CommunicationSystemBlock.h    CommunicationPkg.h ChargingSystemBlock.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CommunicationSystemBlock.obj" "CommunicationSystemBlock.cpp" 



LoadingSystemBlock.obj : LoadingSystemBlock.cpp LoadingSystemBlock.h    LoadingSystemPkg.h ANGELS.h LoadingProcessBlock.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LoadingSystemBlock.obj" "LoadingSystemBlock.cpp" 



PedestrianandObstacles.obj : PedestrianandObstacles.cpp PedestrianandObstacles.h    ActorPkg.h EBS.h Obstacle.h Collision_Detection.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PedestrianandObstacles.obj" "PedestrianandObstacles.cpp" 



Obstacle.obj : Obstacle.cpp Obstacle.h    ActorPkg.h Collision_Detection.h ANGELS.h EBS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Obstacle.obj" "Obstacle.cpp" 



Collision_Detection.obj : Collision_Detection.cpp Collision_Detection.h    ObstacleDetectionPkg.h ANGELS.h EBS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Collision_Detection.obj" "Collision_Detection.cpp" 



Collision_Avoidance.obj : Collision_Avoidance.cpp Collision_Avoidance.h    ObstacleAvoidancePkg.h ANGELS.h DockingProcessBlock.h EBS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Collision_Avoidance.obj" "Collision_Avoidance.cpp" 



LocalizationArchitecture.obj : LocalizationArchitecture.cpp LocalizationArchitecture.h    LocalisationPkg.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LocalizationArchitecture.obj" "LocalizationArchitecture.cpp" 



DockingSystem.obj : DockingSystem.cpp DockingSystem.h    DockingSystemPkg.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DockingSystem.obj" "DockingSystem.cpp" 



Government.obj : Government.cpp Government.h    ActorPkg.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Government.obj" "Government.cpp" 



SafetyStandards.obj : SafetyStandards.cpp SafetyStandards.h    ActorPkg.h ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SafetyStandards.obj" "SafetyStandards.cpp" 



ANGELSPkg.obj : ANGELSPkg.cpp ANGELSPkg.h    ANGELS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ANGELSPkg.obj" "ANGELSPkg.cpp" 



ActorPkg.obj : ActorPkg.cpp ActorPkg.h    ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ActorPkg.obj" "ActorPkg.cpp" 



EmergencyOverrideSystemPkg.obj : EmergencyOverrideSystemPkg.cpp EmergencyOverrideSystemPkg.h    EBS.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EmergencyOverrideSystemPkg.obj" "EmergencyOverrideSystemPkg.cpp" 



TruckPkg.obj : TruckPkg.cpp TruckPkg.h    Truck.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TruckPkg.obj" "TruckPkg.cpp" 



DockingPkg.obj : DockingPkg.cpp DockingPkg.h    DockingProcessBlock.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DockingPkg.obj" "DockingPkg.cpp" 



UseCaseAnalysisPkg.obj : UseCaseAnalysisPkg.cpp UseCaseAnalysisPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UseCaseAnalysisPkg.obj" "UseCaseAnalysisPkg.cpp" 



ParkingProcessPkg.obj : ParkingProcessPkg.cpp ParkingProcessPkg.h    ParkingSystemBlock.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ParkingProcessPkg.obj" "ParkingProcessPkg.cpp" 



LoadingProcessPkg.obj : LoadingProcessPkg.cpp LoadingProcessPkg.h    LoadingProcessBlock.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LoadingProcessPkg.obj" "LoadingProcessPkg.cpp" 



ChargingSystemPkg.obj : ChargingSystemPkg.cpp ChargingSystemPkg.h    ChargingSystemBlock.h ChargingInfrastructure.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ChargingSystemPkg.obj" "ChargingSystemPkg.cpp" 



CommunicationPkg.obj : CommunicationPkg.cpp CommunicationPkg.h    CommunicationSystemBlock.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CommunicationPkg.obj" "CommunicationPkg.cpp" 



LoadingSystemPkg.obj : LoadingSystemPkg.cpp LoadingSystemPkg.h    LoadingSystemBlock.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LoadingSystemPkg.obj" "LoadingSystemPkg.cpp" 



ObstacleDetectionPkg.obj : ObstacleDetectionPkg.cpp ObstacleDetectionPkg.h    Collision_Detection.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ObstacleDetectionPkg.obj" "ObstacleDetectionPkg.cpp" 



ObstacleAvoidancePkg.obj : ObstacleAvoidancePkg.cpp ObstacleAvoidancePkg.h    Collision_Avoidance.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ObstacleAvoidancePkg.obj" "ObstacleAvoidancePkg.cpp" 



LocalisationPkg.obj : LocalisationPkg.cpp LocalisationPkg.h    LocalizationArchitecture.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"LocalisationPkg.obj" "LocalisationPkg.cpp" 



DockingSystemPkg.obj : DockingSystemPkg.cpp DockingSystemPkg.h    DockingSystem.h ANGELSPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DockingSystemPkg.obj" "DockingSystemPkg.cpp" 






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
	if exist ANGELS.obj erase ANGELS.obj
	if exist Environment.obj erase Environment.obj
	if exist EBS.obj erase EBS.obj
	if exist Truck.obj erase Truck.obj
	if exist DockingProcessBlock.obj erase DockingProcessBlock.obj
	if exist DCOperator.obj erase DCOperator.obj
	if exist Driver.obj erase Driver.obj
	if exist ParkingSystemBlock.obj erase ParkingSystemBlock.obj
	if exist DC.obj erase DC.obj
	if exist LoadingProcessBlock.obj erase LoadingProcessBlock.obj
	if exist ChargingSystemBlock.obj erase ChargingSystemBlock.obj
	if exist ChargingInfrastructure.obj erase ChargingInfrastructure.obj
	if exist CommunicationSystemBlock.obj erase CommunicationSystemBlock.obj
	if exist LoadingSystemBlock.obj erase LoadingSystemBlock.obj
	if exist PedestrianandObstacles.obj erase PedestrianandObstacles.obj
	if exist Obstacle.obj erase Obstacle.obj
	if exist Collision_Detection.obj erase Collision_Detection.obj
	if exist Collision_Avoidance.obj erase Collision_Avoidance.obj
	if exist LocalizationArchitecture.obj erase LocalizationArchitecture.obj
	if exist DockingSystem.obj erase DockingSystem.obj
	if exist Government.obj erase Government.obj
	if exist SafetyStandards.obj erase SafetyStandards.obj
	if exist ANGELSPkg.obj erase ANGELSPkg.obj
	if exist ActorPkg.obj erase ActorPkg.obj
	if exist EmergencyOverrideSystemPkg.obj erase EmergencyOverrideSystemPkg.obj
	if exist TruckPkg.obj erase TruckPkg.obj
	if exist DockingPkg.obj erase DockingPkg.obj
	if exist UseCaseAnalysisPkg.obj erase UseCaseAnalysisPkg.obj
	if exist ParkingProcessPkg.obj erase ParkingProcessPkg.obj
	if exist LoadingProcessPkg.obj erase LoadingProcessPkg.obj
	if exist ChargingSystemPkg.obj erase ChargingSystemPkg.obj
	if exist CommunicationPkg.obj erase CommunicationPkg.obj
	if exist LoadingSystemPkg.obj erase LoadingSystemPkg.obj
	if exist ObstacleDetectionPkg.obj erase ObstacleDetectionPkg.obj
	if exist ObstacleAvoidancePkg.obj erase ObstacleAvoidancePkg.obj
	if exist LocalisationPkg.obj erase LocalisationPkg.obj
	if exist DockingSystemPkg.obj erase DockingSystemPkg.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	

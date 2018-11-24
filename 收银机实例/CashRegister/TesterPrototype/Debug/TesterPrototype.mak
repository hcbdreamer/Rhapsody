
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

LIB_PREFIX=MSVC10x86$(MT_PREFIX)

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
OMROOT="C:\Rhapsody\Share"
RHPROOT="C:\Rhapsody"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=TesterPrototype

all : $(TARGET_NAME)$(EXE_EXT) TesterPrototype.mak

TARGET_MAIN=MainTesterPrototype

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  CashRegister.obj \
  ProductDatabase.obj \
  Product.obj \
  CountedProduct.obj \
  ISpecialOffer.obj \
  BuyOneGetOneFree.obj \
  ThreeForOneEuro.obj \
  TenPercentOff.obj \
  IBarcodeReaderEnabled.obj \
  IDisplay.obj \
  IKeyboardEnabled.obj \
  Iprinter.obj \
  Tester.obj \
  TesterBuilder.obj \
  KeyReader.obj \
  CashRegisterPkg.obj \
  InterfacePkg.obj \
  TesterPkg.obj




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






CashRegister.obj : CashRegister.cpp CashRegister.h    CashRegisterPkg.h ProductDatabase.h Product.h CountedProduct.h Iprinter.h IDisplay.h IBarcodeReaderEnabled.h IKeyboardEnabled.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CashRegister.obj" "CashRegister.cpp" 



ProductDatabase.obj : ProductDatabase.cpp ProductDatabase.h    CashRegisterPkg.h Product.h BuyOneGetOneFree.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ProductDatabase.obj" "ProductDatabase.cpp" 



Product.obj : Product.cpp Product.h    CashRegisterPkg.h ISpecialOffer.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Product.obj" "Product.cpp" 



CountedProduct.obj : CountedProduct.cpp CountedProduct.h    CashRegisterPkg.h Product.h ISpecialOffer.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CountedProduct.obj" "CountedProduct.cpp" 



ISpecialOffer.obj : ISpecialOffer.cpp ISpecialOffer.h    CashRegisterPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ISpecialOffer.obj" "ISpecialOffer.cpp" 



BuyOneGetOneFree.obj : BuyOneGetOneFree.cpp BuyOneGetOneFree.h    CashRegisterPkg.h ISpecialOffer.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"BuyOneGetOneFree.obj" "BuyOneGetOneFree.cpp" 



ThreeForOneEuro.obj : ThreeForOneEuro.cpp ThreeForOneEuro.h    CashRegisterPkg.h ISpecialOffer.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ThreeForOneEuro.obj" "ThreeForOneEuro.cpp" 



TenPercentOff.obj : TenPercentOff.cpp TenPercentOff.h    CashRegisterPkg.h ISpecialOffer.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TenPercentOff.obj" "TenPercentOff.cpp" 



IBarcodeReaderEnabled.obj : IBarcodeReaderEnabled.cpp IBarcodeReaderEnabled.h    InterfacePkg.h CashRegisterPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IBarcodeReaderEnabled.obj" "IBarcodeReaderEnabled.cpp" 



IDisplay.obj : IDisplay.cpp IDisplay.h    InterfacePkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IDisplay.obj" "IDisplay.cpp" 



IKeyboardEnabled.obj : IKeyboardEnabled.cpp IKeyboardEnabled.h    InterfacePkg.h CashRegisterPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IKeyboardEnabled.obj" "IKeyboardEnabled.cpp" 



Iprinter.obj : Iprinter.cpp Iprinter.h    InterfacePkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Iprinter.obj" "Iprinter.cpp" 



Tester.obj : Tester.cpp Tester.h    TesterPkg.h KeyReader.h IBarcodeReaderEnabled.h IKeyboardEnabled.h IDisplay.h Iprinter.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Tester.obj" "Tester.cpp" 



TesterBuilder.obj : TesterBuilder.cpp TesterBuilder.h    TesterPkg.h CashRegister.h Tester.h IBarcodeReaderEnabled.h IKeyboardEnabled.h IDisplay.h Iprinter.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TesterBuilder.obj" "TesterBuilder.cpp" 



KeyReader.obj : KeyReader.cpp KeyReader.h    TesterPkg.h IKeyboardEnabled.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"KeyReader.obj" "KeyReader.cpp" 



CashRegisterPkg.obj : CashRegisterPkg.cpp CashRegisterPkg.h    CashRegister.h ProductDatabase.h Product.h CountedProduct.h ISpecialOffer.h BuyOneGetOneFree.h ThreeForOneEuro.h TenPercentOff.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CashRegisterPkg.obj" "CashRegisterPkg.cpp" 



InterfacePkg.obj : InterfacePkg.cpp InterfacePkg.h    IBarcodeReaderEnabled.h IDisplay.h IKeyboardEnabled.h Iprinter.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"InterfacePkg.obj" "InterfacePkg.cpp" 



TesterPkg.obj : TesterPkg.cpp TesterPkg.h    Tester.h TesterBuilder.h KeyReader.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TesterPkg.obj" "TesterPkg.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) TesterPrototype.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) TesterPrototype.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist CashRegister.obj erase CashRegister.obj
	if exist ProductDatabase.obj erase ProductDatabase.obj
	if exist Product.obj erase Product.obj
	if exist CountedProduct.obj erase CountedProduct.obj
	if exist ISpecialOffer.obj erase ISpecialOffer.obj
	if exist BuyOneGetOneFree.obj erase BuyOneGetOneFree.obj
	if exist ThreeForOneEuro.obj erase ThreeForOneEuro.obj
	if exist TenPercentOff.obj erase TenPercentOff.obj
	if exist IBarcodeReaderEnabled.obj erase IBarcodeReaderEnabled.obj
	if exist IDisplay.obj erase IDisplay.obj
	if exist IKeyboardEnabled.obj erase IKeyboardEnabled.obj
	if exist Iprinter.obj erase Iprinter.obj
	if exist Tester.obj erase Tester.obj
	if exist TesterBuilder.obj erase TesterBuilder.obj
	if exist KeyReader.obj erase KeyReader.obj
	if exist CashRegisterPkg.obj erase CashRegisterPkg.obj
	if exist InterfacePkg.obj erase InterfacePkg.obj
	if exist TesterPkg.obj erase TesterPkg.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	

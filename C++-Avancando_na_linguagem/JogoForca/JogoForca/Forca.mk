##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Forca
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/mnt/Dados/Documentos/code/cursos/2002-c++/Forca
ProjectPath            :=/mnt/Dados/Documentos/code/cursos/2002-c++/Forca/Forca
IntermediateDirectory  :=../build-$(ConfigurationName)/Forca
OutDir                 :=../build-$(ConfigurationName)/Forca
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Vinicius Dias
Date                   :=14/11/20
CodeLitePath           :=/home/vinicius/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc-9
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/Forca/sorteia_palavra.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Forca/salva_arquivo.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Forca/nao_acertou.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Forca/letra_existe.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Forca/adiciona_palavra.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Forca/chuta.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Forca/imprime_palavra.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Forca/forca.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Forca/imprime_erros.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Forca/le_arquivo.cpp$(ObjectSuffix) \
	



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Forca/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/Forca"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/Forca"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/Forca/.d:
	@mkdir -p "../build-$(ConfigurationName)/Forca"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Forca/sorteia_palavra.cpp$(ObjectSuffix): sorteia_palavra.cpp ../build-$(ConfigurationName)/Forca/sorteia_palavra.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2002-c++/Forca/Forca/sorteia_palavra.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sorteia_palavra.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Forca/sorteia_palavra.cpp$(DependSuffix): sorteia_palavra.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Forca/sorteia_palavra.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Forca/sorteia_palavra.cpp$(DependSuffix) -MM sorteia_palavra.cpp

../build-$(ConfigurationName)/Forca/sorteia_palavra.cpp$(PreprocessSuffix): sorteia_palavra.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Forca/sorteia_palavra.cpp$(PreprocessSuffix) sorteia_palavra.cpp

../build-$(ConfigurationName)/Forca/salva_arquivo.cpp$(ObjectSuffix): salva_arquivo.cpp ../build-$(ConfigurationName)/Forca/salva_arquivo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2002-c++/Forca/Forca/salva_arquivo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/salva_arquivo.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Forca/salva_arquivo.cpp$(DependSuffix): salva_arquivo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Forca/salva_arquivo.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Forca/salva_arquivo.cpp$(DependSuffix) -MM salva_arquivo.cpp

../build-$(ConfigurationName)/Forca/salva_arquivo.cpp$(PreprocessSuffix): salva_arquivo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Forca/salva_arquivo.cpp$(PreprocessSuffix) salva_arquivo.cpp

../build-$(ConfigurationName)/Forca/nao_acertou.cpp$(ObjectSuffix): nao_acertou.cpp ../build-$(ConfigurationName)/Forca/nao_acertou.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2002-c++/Forca/Forca/nao_acertou.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/nao_acertou.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Forca/nao_acertou.cpp$(DependSuffix): nao_acertou.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Forca/nao_acertou.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Forca/nao_acertou.cpp$(DependSuffix) -MM nao_acertou.cpp

../build-$(ConfigurationName)/Forca/nao_acertou.cpp$(PreprocessSuffix): nao_acertou.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Forca/nao_acertou.cpp$(PreprocessSuffix) nao_acertou.cpp

../build-$(ConfigurationName)/Forca/letra_existe.cpp$(ObjectSuffix): letra_existe.cpp ../build-$(ConfigurationName)/Forca/letra_existe.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2002-c++/Forca/Forca/letra_existe.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/letra_existe.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Forca/letra_existe.cpp$(DependSuffix): letra_existe.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Forca/letra_existe.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Forca/letra_existe.cpp$(DependSuffix) -MM letra_existe.cpp

../build-$(ConfigurationName)/Forca/letra_existe.cpp$(PreprocessSuffix): letra_existe.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Forca/letra_existe.cpp$(PreprocessSuffix) letra_existe.cpp

../build-$(ConfigurationName)/Forca/adiciona_palavra.cpp$(ObjectSuffix): adiciona_palavra.cpp ../build-$(ConfigurationName)/Forca/adiciona_palavra.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2002-c++/Forca/Forca/adiciona_palavra.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/adiciona_palavra.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Forca/adiciona_palavra.cpp$(DependSuffix): adiciona_palavra.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Forca/adiciona_palavra.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Forca/adiciona_palavra.cpp$(DependSuffix) -MM adiciona_palavra.cpp

../build-$(ConfigurationName)/Forca/adiciona_palavra.cpp$(PreprocessSuffix): adiciona_palavra.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Forca/adiciona_palavra.cpp$(PreprocessSuffix) adiciona_palavra.cpp

../build-$(ConfigurationName)/Forca/chuta.cpp$(ObjectSuffix): chuta.cpp ../build-$(ConfigurationName)/Forca/chuta.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2002-c++/Forca/Forca/chuta.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/chuta.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Forca/chuta.cpp$(DependSuffix): chuta.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Forca/chuta.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Forca/chuta.cpp$(DependSuffix) -MM chuta.cpp

../build-$(ConfigurationName)/Forca/chuta.cpp$(PreprocessSuffix): chuta.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Forca/chuta.cpp$(PreprocessSuffix) chuta.cpp

../build-$(ConfigurationName)/Forca/imprime_palavra.cpp$(ObjectSuffix): imprime_palavra.cpp ../build-$(ConfigurationName)/Forca/imprime_palavra.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2002-c++/Forca/Forca/imprime_palavra.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/imprime_palavra.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Forca/imprime_palavra.cpp$(DependSuffix): imprime_palavra.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Forca/imprime_palavra.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Forca/imprime_palavra.cpp$(DependSuffix) -MM imprime_palavra.cpp

../build-$(ConfigurationName)/Forca/imprime_palavra.cpp$(PreprocessSuffix): imprime_palavra.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Forca/imprime_palavra.cpp$(PreprocessSuffix) imprime_palavra.cpp

../build-$(ConfigurationName)/Forca/forca.cpp$(ObjectSuffix): forca.cpp ../build-$(ConfigurationName)/Forca/forca.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2002-c++/Forca/Forca/forca.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/forca.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Forca/forca.cpp$(DependSuffix): forca.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Forca/forca.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Forca/forca.cpp$(DependSuffix) -MM forca.cpp

../build-$(ConfigurationName)/Forca/forca.cpp$(PreprocessSuffix): forca.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Forca/forca.cpp$(PreprocessSuffix) forca.cpp

../build-$(ConfigurationName)/Forca/imprime_erros.cpp$(ObjectSuffix): imprime_erros.cpp ../build-$(ConfigurationName)/Forca/imprime_erros.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2002-c++/Forca/Forca/imprime_erros.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/imprime_erros.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Forca/imprime_erros.cpp$(DependSuffix): imprime_erros.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Forca/imprime_erros.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Forca/imprime_erros.cpp$(DependSuffix) -MM imprime_erros.cpp

../build-$(ConfigurationName)/Forca/imprime_erros.cpp$(PreprocessSuffix): imprime_erros.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Forca/imprime_erros.cpp$(PreprocessSuffix) imprime_erros.cpp

../build-$(ConfigurationName)/Forca/le_arquivo.cpp$(ObjectSuffix): le_arquivo.cpp ../build-$(ConfigurationName)/Forca/le_arquivo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2002-c++/Forca/Forca/le_arquivo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/le_arquivo.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Forca/le_arquivo.cpp$(DependSuffix): le_arquivo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Forca/le_arquivo.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Forca/le_arquivo.cpp$(DependSuffix) -MM le_arquivo.cpp

../build-$(ConfigurationName)/Forca/le_arquivo.cpp$(PreprocessSuffix): le_arquivo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Forca/le_arquivo.cpp$(PreprocessSuffix) le_arquivo.cpp


-include ../build-$(ConfigurationName)/Forca//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



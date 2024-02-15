#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/chapters/Fundamentals/Fundamentals.o \
	${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/ArithmeticType/C03Complex.o \
	${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/Containers/C03Vector.o \
	${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/Containers/ContainersExamples.o \
	${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/Part2ExampleTest.o \
	${OBJECTDIR}/chapters/Part1/C02TheBasics/C02Examples.o \
	${OBJECTDIR}/chapters/Part1/C02TheBasics/C02SomeTest.o \
	${OBJECTDIR}/chapters/Part1/Part1ExamplesTest.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bjarne

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bjarne: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bjarne ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/chapters/Fundamentals/Fundamentals.o: chapters/Fundamentals/Fundamentals.cpp
	${MKDIR} -p ${OBJECTDIR}/chapters/Fundamentals
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapters/Fundamentals/Fundamentals.o chapters/Fundamentals/Fundamentals.cpp

${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/ArithmeticType/C03Complex.o: chapters/Part1/C02AbstractMechanism/ArithmeticType/C03Complex.cpp
	${MKDIR} -p ${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/ArithmeticType
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/ArithmeticType/C03Complex.o chapters/Part1/C02AbstractMechanism/ArithmeticType/C03Complex.cpp

${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/Containers/C03Vector.o: chapters/Part1/C02AbstractMechanism/Containers/C03Vector.cpp
	${MKDIR} -p ${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/Containers
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/Containers/C03Vector.o chapters/Part1/C02AbstractMechanism/Containers/C03Vector.cpp

${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/Containers/ContainersExamples.o: chapters/Part1/C02AbstractMechanism/Containers/ContainersExamples.cpp
	${MKDIR} -p ${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/Containers
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/Containers/ContainersExamples.o chapters/Part1/C02AbstractMechanism/Containers/ContainersExamples.cpp

${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/Part2ExampleTest.o: chapters/Part1/C02AbstractMechanism/Part2ExampleTest.cpp
	${MKDIR} -p ${OBJECTDIR}/chapters/Part1/C02AbstractMechanism
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapters/Part1/C02AbstractMechanism/Part2ExampleTest.o chapters/Part1/C02AbstractMechanism/Part2ExampleTest.cpp

${OBJECTDIR}/chapters/Part1/C02TheBasics/C02Examples.o: chapters/Part1/C02TheBasics/C02Examples.cpp
	${MKDIR} -p ${OBJECTDIR}/chapters/Part1/C02TheBasics
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapters/Part1/C02TheBasics/C02Examples.o chapters/Part1/C02TheBasics/C02Examples.cpp

${OBJECTDIR}/chapters/Part1/C02TheBasics/C02SomeTest.o: chapters/Part1/C02TheBasics/C02SomeTest.cpp
	${MKDIR} -p ${OBJECTDIR}/chapters/Part1/C02TheBasics
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapters/Part1/C02TheBasics/C02SomeTest.o chapters/Part1/C02TheBasics/C02SomeTest.cpp

${OBJECTDIR}/chapters/Part1/Part1ExamplesTest.o: chapters/Part1/Part1ExamplesTest.cpp
	${MKDIR} -p ${OBJECTDIR}/chapters/Part1
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapters/Part1/Part1ExamplesTest.o chapters/Part1/Part1ExamplesTest.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc

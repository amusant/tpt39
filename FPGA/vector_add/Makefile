KERNEL = vector_add
SRCS = main.cpp
SRCS_FILES = $(foreach F, $(SRCS), host/src/$(F))
COMMON_FILES = ./common/src/AOCL_Utils.cpp
LIB_PATH=/comelec/softs/opt/altera/altera17.1/hld/board/s5_ref/linux64/lib:/comelec/softs/opt/altera/altera17.1/hld/host/linux64/lib:./${KERNEL}
# arm cross compiler
CROSS-COMPILE = 
CL=aoc
# OpenCL compile and link flags.
AOCL_COMPILE_CONFIG=$(shell aocl compile-config) -I./common/inc 
AOCL_LINK_CONFIG=$(shell aocl link-config)  -lacl_emulator_kernel_rt

cl_compile:
	${CL} -march=emulator -cl-opt-disable   device/${KERNEL}.cl
all : 
	$(CROSS-COMPILE)g++ $(SRCS_FILES) $(COMMON_FILES) -o $(KERNEL).exe  $(AOCL_COMPILE_CONFIG) $(AOCL_LINK_CONFIG)

sim:
	LD_LIBRARY_PATH=${LIB_PATH} CL_CONTEXT_EMULATOR_DEVICE_ALTERA=1 ./${KERNEL}.exe

build:
	${CL}  -cl-opt-disable  --profile device/${KERNEL}.cl


# Standard make targets
clean :
	@rm -rf *.o $(KERNEL)

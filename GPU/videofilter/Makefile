EXE=videofilter
CVINCFLAGS=`pkg-config --libs --cflags opencv`
CVLIBFLAGS=`pkg-config --libs opencv`
DBGFLAGS=
GCC=g++
SRCS=./videofilter.cpp
all:${EXE}
${EXE}: ${SRCS}
	${GCC} ${DBGFLAGS}  ${CVINCFLAGS} ${SRCS} ${CVLIBFLAGS} -o ${EXE}

clean:
	rm -rf ${EXE} *.o

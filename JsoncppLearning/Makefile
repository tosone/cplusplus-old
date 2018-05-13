CXX     = g++
FLAGS   = -O2 -std=c++11
INCLUDE = -I../3rdParty/jsoncpp/include
LIBS    = -L../3rdParty/jsoncpp/build/src/lib_json -ljsoncpp

all:
	@for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} -o `echo $$file | cut -d. -f1`.test $$file ${LIBS}; done

CXX     = g++
FLAGS   = -O2 -std=c++11
INCLUDE = -I../3rdParty/boost
LIBS    = -L../3rdParty/boost/stage/lib -lboost_system -lpthread

all:
	@for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} -o `echo $$file | cut -d. -f1`.test $$file ${LIBS}; done

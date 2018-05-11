CXX = g++
FLAGS = -O2 -std=c++11
INCLUDE = -I./boost
LIBS = -L../3rdParty/boost/stage/lib/ -lboost_system

all: clean
	for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} -o `echo $$file | cut -d. -f1`.test $$file ${LIBS}; done

clean:
	for file in *.cpp; do if [ -f `echo $$file | cut -d. -f1`.test ]; then rm `echo $$file | cut -d. -f1`.test; fi done

depend:
	cd ../3rdParty/boost/ && git submodule update --init && ./bootstrap.sh && ./b2

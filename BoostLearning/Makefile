CXX = g++
FLAGS = -O3 -std=c++11
INCLUDE = -I./boost
LIBS = -L./boost/stage/lib/ -lboost_system

all: clean
	for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} ${LIBS} -o `echo $$file | cut -d. -f1`.test $$file; done

clean:
	for file in *.cpp; do if [[ -f `echo $$file | cut -d. -f1`.test ]]; then rm `echo $$file | cut -d. -f1`.test; fi done

depend:
	cd boost/ && git submodule update --init && ./bootstrap.sh && ./b2

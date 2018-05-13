CXX   = g++
FLAGS = -O2 -std=c++11

all:
	@for file in *.cpp; do ${CXX} ${FLAGS} -o `echo $$file | cut -d. -f1`.test $$file; done

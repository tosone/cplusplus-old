CXX = g++
FLAGS = -O3 -std=c++17 -O2 -Wall -pedantic -pthread

all: clean
	for file in *.cpp; do ${CXX} ${FLAGS} -o `echo $$file | cut -d. -f1`.test $$file; done

clean:
	for file in *.cpp; do if [ -f `echo $$file | cut -d. -f1`.test ]; then rm `echo $$file | cut -d. -f1`.test; fi done

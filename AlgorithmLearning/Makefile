CXX = g++
FLAGS = -O2 -std=c++17

all: clean
	@for file in *.cpp; do ${CXX} ${FLAGS} -o `echo $$file | cut -d. -f1`.test $$file; done

clean:
	@for file in *.cpp; do if [ -f `echo $$file | cut -d. -f1`.test ]; then rm `echo $$file | cut -d. -f1`.test; fi done

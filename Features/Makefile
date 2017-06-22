CXXFLAGS=-O2 -std=c++11
CXX=g++

all:
	for file in *.cpp; do ${CXX} ${CXXFLAGS} -o `echo $$file | cut -d. -f1`.test $$file; done

clean:
	for file in *.cpp; do rm `echo $$file | cut -d. -f1`.test; done

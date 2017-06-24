FLAGS = -O2 -std=c++11 -I./jsoncpp/include
CXX = g++
LIBS = ./jsoncpp/src/lib_json/libjsoncpp.a

all: clean
	make -C jsoncpp
	for file in *.cpp; do ${CXX} ${FLAGS} ${LIBS} -o `echo $$file | cut -d. -f1`.test $$file; done

clean:
	for file in *.cpp; do if [[ -f `echo $$file | cut -d. -f1`.test ]]; then rm `echo $$file | cut -d. -f1`.test; fi done

CXX = g++
FLAGS = -O3 -std=c++11
INCLUDE = -I../3rdParty/jsoncpp/include
LIBS = ../3rdParty/jsoncpp/build/src/lib_json/libjsoncpp.a

all: clean
	for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} -o `echo $$file | cut -d. -f1`.test $$file ${LIBS}; done

clean:
	for file in *.cpp; do if [ -f `echo $$file | cut -d. -f1`.test ]; then rm `echo $$file | cut -d. -f1`.test; fi done

depend: clean/depend
	mkdir ../3rdParty/jsoncpp/build && cd ../3rdParty/jsoncpp/build && cmake -DCMAKE_BUILD_TYPE=release -DBUILD_STATIC_LIBS=ON -DBUILD_SHARED_LIBS=OFF -DARCHIVE_INSTALL_DIR=. -G "Unix Makefiles" .. && make

clean/depend:
	${RM} -rf i../3rdParty/jsoncpp/build

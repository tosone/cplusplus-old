CXX = g++
FLAGS = -O3 -std=c++11
INCLUDE = -I./jsoncpp/include
LIBS = ./jsoncpp/build/src/lib_json/libjsoncpp.a

all: clean
	for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} ${LIBS} -o `echo $$file | cut -d. -f1`.test $$file; done

clean:
	for file in *.cpp; do if [[ -f `echo $$file | cut -d. -f1`.test ]]; then rm `echo $$file | cut -d. -f1`.test; fi done

depend: clean/depend
	mkdir jsoncpp/build && cd jsoncpp/build && cmake -DCMAKE_BUILD_TYPE=release -DBUILD_STATIC_LIBS=ON -DBUILD_SHARED_LIBS=OFF -DARCHIVE_INSTALL_DIR=. -G "Unix Makefiles" .. && make

clean/depend:
	-rm -rf jsoncpp/build

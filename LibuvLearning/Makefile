FLAGS = -O3
INCLUDE = -I../3rdParty/libuv/include -I../3rdParty/curl/include -I../3rdParty/zlib
LIBS = ../3rdParty/libuv/.libs/libuv.a ../3rdParty/curl/lib/.libs/libcurl.a ../3rdParty/zlib/libz.a -lldap

CXX = g++

all: clean
	for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} -o `echo $$file | cut -d. -f1`.test $$file ${LIBS}; done

clean:
	for file in *.cpp; do if [ -f `echo $$file | cut -d. -f1`.test ]; then rm `echo $$file | cut -d. -f1`.test; fi done

depend:
	cd ../3rdParty/libuv && ./autogen.sh && ./configure && make && cd .. && \
	cd ../3rdParty/curl && ./buildconf && ./configure && make && cd .. && \
	cd ../3rdParty/zlib && ./configure && make

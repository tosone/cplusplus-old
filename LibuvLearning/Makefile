FLAGS = -O3
INCLUDE = -I./libuv/include -I./curl/include -I./zlib
LIBS = ./libuv/.libs/libuv.a ./curl/lib/.libs/libcurl.a ./zlib/libz.a -lldap

CXX = g++

all: clean
	for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} ${LIBS} -o `echo $$file | cut -d. -f1`.test $$file; done

clean:
	for file in *.cpp; do if [[ -f `echo $$file | cut -d. -f1`.test ]]; then rm `echo $$file | cut -d. -f1`.test; fi done

depend:
	cd libuv && ./autogen.sh && ./configure && make && cd .. && \
	cd curl && ./buildconf && ./configure && make && cd .. && \
	cd zlib && ./configure && make

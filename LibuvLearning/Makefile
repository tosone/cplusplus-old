FLAGS = -O3
INCLUDE = -I../3rdParty/libuv/include -I../3rdParty/curl/include -I../3rdParty/zlib
LIBS = -L../3rdParty/openssl/ -lcrypto -lssl -L../3rdParty/libuv/.libs/ -luv -L../3rdParty/curl/lib/.libs/ -lcurl -L../3rdParty/zlib/ -lz -L../3rdParty/openldap/libraries/libldap/.libs/ -lldap

CXX = g++

all: clean
	for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} -o `echo $$file | cut -d. -f1`.test $$file ${LIBS}; done

clean:
	for file in *.cpp; do if [ -f `echo $$file | cut -d. -f1`.test ]; then rm `echo $$file | cut -d. -f1`.test; fi done

depend:
	cd ../3rdParty/openldap && ./configure && make depend && make
	cd ../3rdParty/libuv && ./autogen.sh && ./configure && make
	cd ../3rdParty/curl && ./buildconf && ./configure && make
	cd ../3rdParty/zlib && ./configure && make

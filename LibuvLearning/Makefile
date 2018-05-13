CXX     = g++
FLAGS   = -O2
INCLUDE = -I../3rdParty/libuv/include -I../3rdParty/curl/include -I../3rdParty/zlib
LIBS    = -L../3rdParty/openssl/ -lcrypto -lssl -L../3rdParty/libuv/.libs/ -luv -L../3rdParty/curl/lib/.libs/ -lcurl -L../3rdParty/zlib/ -lz -L../3rdParty/openldap/libraries/libldap/.libs/ -lldap

all:
	@for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} -o `echo $$file | cut -d. -f1`.test $$file ${LIBS}; done

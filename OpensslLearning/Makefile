CXX     = g++
FLAGS   = -O3 -std=c++11
INCLUDE = -I../3rdParty/openssl/include
LIBS    = -L../3rdParty/openssl/ -lcrypto -lssl -lpthread -ldl

all:
	@for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} -o `echo $$file | cut -d. -f1`.test $$file ${LIBS}; done

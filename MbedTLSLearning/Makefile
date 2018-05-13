CXX     = g++
FLAGS   = -O2 -std=c++11
INCLUDE = -I../3rdParty/mbedTLS/include
LIBS    = -L../3rdParty/mbedTLS/library/ -lmbedcrypto -lmbedtls -lmbedx509

all:
	@for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} -o `echo $$file | cut -d. -f1`.test $$file ${LIBS}; done

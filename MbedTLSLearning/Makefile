CXX = g++
FLAGS = -O3 -std=c++11
INCLUDE = -I../3rdParty/mbedTLS/include
LIBS = -L../3rdParty/mbedTLS/library/ -lmbedcrypto -lmbedtls -lmbedx509

all: clean
	@for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} -o `echo $$file | cut -d. -f1`.test $$file ${LIBS}; done

clean:
	@for file in *.cpp; do if [ -f `echo $$file | cut -d. -f1`.test ]; then rm `echo $$file | cut -d. -f1`.test; fi done

depend:
	cd ../3rdParty/mbedTLS/ && make

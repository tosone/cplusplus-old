CXX = g++
FLAGS = -O3 -std=c++11
INCLUDE = -I./openssl/include
LIBS = ../3rdParty/openssl/libcrypto.a ../3rdParty/openssl/libssl.a

all: clean
	for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} -o `echo $$file | cut -d. -f1`.test $$file ${LIBS}; done

clean:
	for file in *.cpp; do if [ -f `echo $$file | cut -d. -f1`.test ]; then rm `echo $$file | cut -d. -f1`.test; fi done

depend:
	cd ../3rdParty/openssl && ./config && make depend && make

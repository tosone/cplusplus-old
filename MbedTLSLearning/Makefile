CXX = g++
FLAGS = -O3 -std=c++11
INCLUDE = -I./mbedTLS/include
LIBS = ./mbedTLS/library/libmbedcrypto.a ./mbedTLS/library/libmbedtls.a ./mbedTLS/library/libmbedx509.a

all: clean
	@for file in *.cpp; do ${CXX} ${FLAGS} ${INCLUDE} ${LIBS} -o `echo $$file | cut -d. -f1`.test $$file; done

clean:
	@for file in *.cpp; do if [[ -f `echo $$file | cut -d. -f1`.test ]]; then rm `echo $$file | cut -d. -f1`.test; fi done

depend:
	cd mbedTLS/ && make

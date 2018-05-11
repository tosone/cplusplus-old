CXX = g++
FLAGS = -O3 -std=c++11
INCLUDE = 
LIBS = 

TINYAES = ../3rdParty/tiny-AES128-C

all: clean
	gcc -O2 -I./${TINYAES} -o example.test ${TINYAES}/aes.c example.c

clean:
	for file in *.cpp; do if [ -f `echo $$file | cut -d. -f1`.test ]; then rm `echo $$file | cut -d. -f1`.test; fi done

depend:

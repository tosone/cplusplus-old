CXX     = g++
FLAGS   = -O2 -std=c++11
TINYAES = ../3rdParty/tiny-AES128-C

all:
	@${CXX} ${FLAGS} -I./${TINYAES} -o example.test ${TINYAES}/aes.c example.c

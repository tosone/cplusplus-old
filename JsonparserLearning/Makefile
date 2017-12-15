CC = gcc
FLAGS = -O2 -std=c99
INCLUDE = -I./json-parser
LIBS = ./json-parser/libjsonparser.a

UNAME_S = $(shell uname -s)

ifeq ($(UNAME_S),Darwin)
	CC = gcc-7
endif

all: clean
	${CC} ${FLAGS} ${INCLUDE} ${LIBS} -o example.test example.c

clean:
	-rm *.test

depend:
	cd json-parser && ./configure && make

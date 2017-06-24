CC = gcc
FLAGS = -O3
INCLUDE = -I./json-parser
LIBS = ./json-parser/libjsonparser.a

all: clean
	${CC} ${FLAGS} ${INCLUDE} ${LIBS} -o example.test example.c

clean:
	-rm *.test

depend:
	cd json-parser && ./configure && make

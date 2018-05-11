CC = gcc
FLAGS = -O2 -std=c99
INCLUDE = -I../3rdParty/json-parser
LIBS = -L../3rdParty/json-parser -ljsonparser -lm -static

all: clean
	${CC} ${FLAGS} ${INCLUDE} -o example.test example.c ${LIBS}

clean:
	$(RM) *.test

depend:
	cd ../3rdParty/json-parser && ./configure && make

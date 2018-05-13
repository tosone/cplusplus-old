CC      = gcc
FLAGS   = -O2 -std=c99
INCLUDE = -I../3rdParty/json-parser
LIBS    = -L../3rdParty/json-parser -ljsonparser -lm -static

all:
	@${CC} ${FLAGS} ${INCLUDE} -o example.test example.c ${LIBS}

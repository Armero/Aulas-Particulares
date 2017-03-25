CC = gcc
LD = gcc
CFLAGS = -Wall 
LFLAGS = -Wall 

ALL = $(EXECS)

EXECS = $(PRIMEIROPROGRAMAEXECS)\
				$(PONTEIROSEXECS)

PRIMEIROPROGRAMAEXECS = primeiroPrograma
PONTEIROSEXECS = 				ponteiros
SENOEXECS =							seno

OBJS=	$(PRIMEIROPROGRAMAOBJS)\
			$(PONTEIROSOBJS)

PRIMEIROPROGRAMAOBJS = 	primeiroPrograma.o
PONTEIROSOBJS = 				ponteiros.o
SENOOBJS = 							seno.o

LIBMATH = 

.c.o:
	$(CC)	$(CFLAGS)	-c	$<

all:	$(ALL)

primeiroPrograma: $(PRIMEIROPROGRAMAOBJS)
	$(LD)	$(LFLAGS)	-o	$@	$(PRIMEIROPROGRAMAOBJS)

ponteiros: $(PONTEIROSOBJS)
	$(LD)	$(LFLAGS)	-o 	$@	$(PONTEIROSOBJS)

seno:	$(SENOOBJS)
	$(LD)	$(LFLAGS)	-o 	$@	$(SENOOBJS)	-lm

clean:
	rm	-rf 	$(OBJS)	$(EXECS)
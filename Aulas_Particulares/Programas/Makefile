CC = gcc
LD = gcc
CFLAGS = -Wall 
LFLAGS = -Wall 

ALL = $(EXECS)

EXECS = $(PRIMEIROPROGRAMAEXECS)\
				$(PONTEIROSEXECS)\
				$(SENOEXECS)\
				$(TRATAMENTOSNUMEROSEXECS)

PRIMEIROPROGRAMAEXECS = primeiroPrograma
PONTEIROSEXECS = 				ponteiros
SENOEXECS =							seno
TRATAMENTOSNUMEROSEXECS = tratamentosNumeros

OBJS=	$(PRIMEIROPROGRAMAOBJS)\
			$(PONTEIROSOBJS)\
			$(SENOOBJS)\
			$(TRATAMENTOSNUMEROSOBJS)

PRIMEIROPROGRAMAOBJS = 	primeiroPrograma.o
PONTEIROSOBJS = 				ponteiros.o
SENOOBJS = 							seno.o
TRATAMENTOSNUMEROSOBJS = tratamentosNumeros.o


.c.o:
	$(CC)	$(CFLAGS)	-c	$<

all:	$(ALL)

primeiroPrograma: $(PRIMEIROPROGRAMAOBJS)
	$(LD)	$(LFLAGS)	-o	$@	$(PRIMEIROPROGRAMAOBJS)

ponteiros: $(PONTEIROSOBJS)
	$(LD)	$(LFLAGS)	-o 	$@	$(PONTEIROSOBJS)

seno:	$(SENOOBJS)
	$(LD)	$(LFLAGS)	-o 	$@	$(SENOOBJS)	-lm

tratamentosNumeros: $(TRATAMENTOSNUMEROSOBJS)
	$(LD)	$(LFLAGS)	-o 	$@ 	$(TRATAMENTOSNUMEROSOBJS)

clean:
	rm	-rf 	$(OBJS)	$(EXECS)
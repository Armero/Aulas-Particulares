#include <stdlib.h>
#include <stdio.h>

#define OK	0

#define PRIMEIRO_NUMERO_INVALIDO 	1
#define SEGUNDO_NUMERO_INVALIDO 	2

#define EOS												'\0'

int
main (int argc, char *argv[])
{
	char *verificacao;
	unsigned long numero1;
	double numero2;

	numero1 = strtoul (argv[1], &verificacao, 10);
	if (*verificacao != EOS)
	{
		printf("Primeiro numero invalido!\n");
		exit (PRIMEIRO_NUMERO_INVALIDO);
	}

	numero2 = strtod (argv[2], &verificacao);
	if (*verificacao != EOS)
	{
		printf("Segundo numero invalido!\n");
		exit (SEGUNDO_NUMERO_INVALIDO);	
	}

	printf("numero1: %lu\nnumero2: %f\n", numero1, numero2);
	return (OK);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EOS													'\0'

#define NUMERO_ARGUMENTOS 					2
#define NUMERO_TERMOS 							20 /*Numero de termos da serie*/

#define OK													0
#define NUMERO_ARGUMENTOS_INVALIDOS	1
#define ARGUMENTO_NAO_NUMERICO			2

/*Chamando unsigned long long de ull*/
typedef unsigned long long	ull;

/*Funcao que calcula o fatorial recursivamente*/
ull
CalcularFatorial (ull numero)
{
	if (numero <= 1)
		return (1);

	return (numero * CalcularFatorial (numero - 1));
}

/*Serie = x - x^3/3! + x^5/5! - x^7/7! */
long double
CalcularSeno (double arco)
{
	arco *= (2 *acos(-1.0)/ 360.0); /*Conversao para radianos - acos(-1.0) = pi com a maior precisao possivel no C*/
	unsigned contador, expoente;
	long double resultado = arco;

	expoente = 3;
	for (contador = 0; contador < NUMERO_TERMOS; contador++)
	{
		/*subtrai nos termos impares*/
		if ( !(contador % 2) )
			resultado -=	( pow (arco, (double)expoente) / CalcularFatorial ((ull) expoente) );
		/*Soma nos termos pares*/
		else
			resultado +=	( pow (arco, (double)expoente) / CalcularFatorial ((ull) expoente) ); 

		expoente += 2;
	}
	return ((long double)resultado);
}


int
main (int argc, char *argv[])
{
	unsigned indice = 0;
	long double arco = 0;

	/*Verifica se o numero de argumentos eh o esperado*/
	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("\n\n %s <Numero-Argumentos-Invalidos>\n", argv[0]);
		printf ("Insira somente um argumento\n");
		exit (NUMERO_ARGUMENTOS_INVALIDOS);
	}

	/*Verifica se o dado de entrada eh um valor numerico*/
	while (argv[1][indice] != EOS)
	{
		if ( (argv[1][indice] < '0') || (argv[1][indice] > '9') )
		{
			printf ("\n\n %s <Argumento-Invalido>\n", argv[0]);
			printf ("Insira somente um argumento numerico\n");
			exit (ARGUMENTO_NAO_NUMERICO);
		}
		indice++;	
	}

	arco = atof (argv[1]);
	/*Le = long exponential 0 serve para printar long douvle*/
	printf("O seno de %Le eh: %Le\n", arco, CalcularSeno(arco));

	return (OK);
}
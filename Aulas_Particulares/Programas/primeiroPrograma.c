#include <stdlib.h> /*Biblioteca que possui as definicoes dos tipos e funcoes basicas do C*/
#include <stdio.h>	/*Biblioteca que possui as funcoes de entrada e saida de dados do programa*/

/*Definir macros para constantes no programa eh uma boa pratica de programacao*/
#define OK								0	/*Codigo padrao caso nao ocorram erros*/
#define NUMERO_ITERACOES	20	/*Numero de elementos da serie de Fibonnaci que serao mostrados*/

/*Funcao principal - Necessaria para qualquer programa em C*/
int /*A funcao espera um inteiro como retorno. Eh possivel ver esse retorno pelo terminal*/
main (int argc, char *argv[]) /*argc eh o numero de argumentos passados pela linha de comando na chamada do programa - pelo menos igual a 1*/
{															/*argv sao os argumentos de texto do programa*/

	unsigned contador; /*Variavel de controle do loop*/
	unsigned long long primeiro, segundo, resultado; /*Variaveis utilizadas nas operacoes - sao do tipo inteiro que suporta o maior escopo de numeros*/

	primeiro = 0; /*Inicializacao das variaveis*/
	segundo = 1;

	for (contador = 0; contador < argc; contador++)
		printf("%s\n", argv[contador]);

	/*inicializa o contador com 0, realiza o loop enquanto o contador tiver valor menor que a macro e incrementa o contador a cada loop*/

	return (OK); /*SEMPRE deve haver um retorno no final da funcao main*/
}
 
/*Refazer com do...while e while*/
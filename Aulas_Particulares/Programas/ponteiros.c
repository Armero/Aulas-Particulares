#include <stdio.h>
#include <stdlib.h>

#define OK														0

void
TrocaComPassagemPorValor (int a, int b)
{
	int auxiliar;
	auxiliar = a;
	a = b;
	b = auxiliar;
}

void TrocaComPassagemPorReferencia (int *a, int *b)
{
	int auxiliar;
	auxiliar = *a;
	*a = *b;
	*b = auxiliar;
}

int
main (int argc, char *argv[])
{
	int valorA = 5;
	int valorB = 3;

	/*Ponteiro para um dado do tipo inteiro sendo inicializado com vazio (NULL)
	 - boa pratica de programacao*/
	int *ponteiroA = NULL;
	int *ponteiroB = NULL;

	/*Atribuindo aos ponteiros os enderecos onde estao armazenados o valorA e o valorB
	Ate entao nao havia nenhum valor no local onde o ponteiro apontava*/
	ponteiroA = &valorA;
	ponteiroB = &valorB;

	/*Mostra que o conteudo do ponteiroA e do PonteiroB sao os mesmos de valorA e valorB, respectivamente*/
	printf("\nMostra que o conteudo do ponteiroA e do PonteiroB sao os mesmos de valorA e valorB, respectivamente\n");
	printf("valorA: %d ponteiroA: %d\n", valorA, *ponteiroA);
	printf("valorB: %d ponteiroB: %d\n", valorB, *ponteiroB);

	/*Ao mudar o conteudo do ponteiroA o valorA tambem muda
	Quando se refere ao conteudo do ponteiro, se usa o caractere '*' antes do nome do ponteiro*/
	*ponteiroA = 7;
	printf("\nAo mudar o conteudo do ponteiroA o valorA tambem muda quando se refere ao conteudo do ponteiro, se usa o caractere * antes do nome do ponteiro\n");
	printf("valorA: %d ponteiroA: %d\n", valorA, *ponteiroA);

	/*Faz com que o ponteiro A aponte para o Endereco que PonteiroB aponta*/
	printf("\nFaz com que o ponteiro A aponte para o Endereco que PonteiroB aponta\n");
	ponteiroA = ponteiroB;
	printf("valorA: %d ponteiroA: %d\n", valorA, *ponteiroA);

	/*Modifica os dados no valorB, sendo assim *ponteiroA e *ponteiroB terao seu valores modificados*/
	printf("\nModifica os dados no valorB, sendo assim *ponteiroA e *ponteiroB terao seu valores modificados\n");
	*ponteiroB = 1;
	printf("valorA: %d ponteiroA: %d\n", valorA, *ponteiroA);
	printf("valorB: %d ponteiroB: %d\n", valorB, *ponteiroB);

	/*Mostra o endereco na memorica de cada ponteiro e nao do que ele aponta. Os enderecos sao diferentes
	porque os ponteiros estao em posicoes diferentes da memoria*/
	printf("\nMostra o endereco na memorica de cada ponteiro e nao do que ele aponta. Os enderecos sao diferentes porque os ponteiros estao em posicoes diferentes da memoria\n" );
	printf("endereco do ponteiroA: %d endereco do ponteiroB: %d\n", &ponteiroA, &ponteiroB);

	/*Mostra o endereco na memoria do conteudo que cada ponteiro aponta. Os enderecos sao iguais*/
	printf("\nMostra o endereco na memoria do conteudo que cada ponteiro aponta. Os enderecos sao iguais\n");
	printf("endereco do ponteiroA: %d endereco do ponteiroB: %d\n", &(*ponteiroA), &(*ponteiroB));

	/*Passagem por valor*/
	printf("\nPassagem por valor\n");
	printf("valorA e valorB: %d %d\n", valorA, valorB);
	TrocaComPassagemPorValor (valorA, valorB);
	printf("valorA e valorB: %d %d\n", valorA, valorB);

	ponteiroA = &valorA;
	ponteiroB = &valorB;

	/*Passagem por referencia*/
	printf("\nPassagem por referencia\n");
	printf("valorA e valorB: %d %d\n", valorA, valorB);
	TrocaComPassagemPorReferencia(ponteiroA, ponteiroB);
	printf("valorA e valorB: %d %d\n", valorA, valorB);

	/*Passagem por referencia - outra possibilidadae, passando o endereco da variavel*/
	printf("\nPassagem por referencia usando endereco da variavel diretamente\n");
	printf("valorA e valorB: %d %d\n", valorA, valorB);
	TrocaComPassagemPorReferencia(&valorA, &valorB);
	printf("valorA e valorB: %d %d\n", valorA, valorB);

	return (OK);
}
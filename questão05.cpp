#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/*Pal�ndromos s�o palavras que escritas da direita para a esquerda t�m a mesma grafia que
escritas da esquerda para a direita. Exemplo: arara; esse; radar; osso; rir; etc. Escreva um
programa que verifique se uma string � um pal�ndromo, ou seja, se o primeiro caractere �
igual ao �ltimo, se o segundo caractere � igual ao pen�ltimo e assim por diante.*/

int main(int argc, char** argv)
{
	char palavra[50];
	char inverso[50];
	int i, f;
	printf("Digite a palavra: \n");
	gets(palavra);
	
	printf("\nO tamanho eh: %d \n", strlen(palavra)); //Esse comentario retorna o tamanho da palavra digitada
	f = 0;
	
	for(i = strlen(palavra) - 1; i >= 0; i--)
	{
		inverso[f] = palavra[i];
		f++;
	}
	inverso[f] = '\0';
	printf("\nO inverso eh: %s \n", inverso);
	
	if(strcmp(palavra,inverso) == 0){
		printf("Eh um palindromo");
			
	}
	else
	{
		printf("Nao eh palindromo");
	}
	
	printf("\n\n");
	system("pause");



	return 0;
}

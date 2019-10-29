#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
	int tam;
	printf("digite o tamanho do vetor:\n");
	scanf("%d", &tam);

	int *elementos = (int*)malloc(sizeof(int) * tam);

	int soma = 0;
	for(int i = 0; i < tam; i++)
	{
		printf("digite o valor da %d-posicao:\n", i + 1);
		scanf("%d", &elementos[i]);
		if(elementos[i] % 2 != 0 )
		{
			soma += elementos[i];
		}
	}
	printf("\nA soma dos impares eh:\n%d\n", soma);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define max 5

int main(int argc, char** argv)
{
	int elementos[max];

	int soma = 0;
	for(int i = 0; i < max; i++)
	{
		printf("digite o valor da %d-posicao:\n", i + 1);
		scanf("%d", &elementos[i]);
		if(elementos[i] % 2 != 0 )
		{
			soma += elementos[i];
		}
	}
	printf("\nA soma dos impares eh:\n%d",soma);

	return 0;
}

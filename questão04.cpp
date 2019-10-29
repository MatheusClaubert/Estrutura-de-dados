#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
	int tam;
	int quantidade = 0;

	printf("digite a quantidade de alunos:\n\n");
	scanf("%d", &tam);

	float *notas = (float*)malloc(sizeof(float) * tam);

	float soma = 0;
	for(int i = 0; i < tam; i++)
	{
		printf("digite o valor da nota do %d-aluno\n", i + 1);
		scanf("%f", &notas[i]);
		soma+=notas[i];
	

	}
	float media = soma / tam;


	float menorNota = notas[0];

	for(int i = 0; i < tam; i++)
	{
		if(notas[i] < menorNota)
			menorNota = notas[i];
	}

	for(int i = 0; i < tam; i++)
	{
		if((notas[i] < 7))
		{
			quantidade += 1;

		}

	}

	printf("\nMenor nota: %.2f\n", menorNota);
	printf("\nQuatidade de nota abaixo de 7,00: %d\n", quantidade);
	printf("\nmedia da turma: %.2f\n", media);




	return 0;
}

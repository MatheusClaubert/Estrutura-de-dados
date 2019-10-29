#include <stdio.h>
//vetores part 1

//array uni-dimensional
// char nome[50];

int main(int argc, char** argv)
{
	char nome[50];
	printf("Digite seu nome:\n");
	gets(nome);
	
	printf("Ola %s",nome);
	
	return 0;
}
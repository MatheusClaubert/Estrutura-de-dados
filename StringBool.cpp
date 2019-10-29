#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

bool Encontra(char vet[],char letra){
	
	for(int i = 0; i < strlen(vet); i++){
		if(tolower(vet[i]) == tolower(letra)){
			return true;
		}
	}
	return false;
}

int main(int argc, char** argv)
{
	char palavra[]="Helicoptero";
	
	if (Encontra(palavra,'D')){
		printf("\nLetra encontrada\n\n");
	}
	else
	{
		printf("Letra nao encontrada\n\n");
	}
	
	
	return 0;
}
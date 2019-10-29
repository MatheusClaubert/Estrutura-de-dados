#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *remove_palavra(char *palavra)
{
	char* nova_palavra = (char*)malloc(strlen(palavra)) * sizeof(char));
	
	int y = 0;
	for(int i = 0; i < strlen(str); i++){
		if(palavra[i] != ' '){
			nova_palavra[y] = palavra[i];
			y++;
		}

	}
nova_palavra[y] = '\0';

}

int main(int argc, char** argv)
{
	char frase [30];
	char *imprime;
	printf("\ndigite uma frase para ter os espaços removidos:\n");
	scanf("%[^\n]",frase);
	
	imprime = remove_palavra(frase);
	printf("\n%s\n\n",imprime);


	return 0;
}

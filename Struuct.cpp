#include <stdio.h>
#include <stdlib.h>


typedef struct {
	char nome[30];
	int idade;
	
}aluno;

typedef struct node
{
	aluno item;
	struct node* prox;

}Node;



int main(int argc, char const *argv[])
{
		Node n1,n2,n3;
		n1.prox = &n2;
		n2.prox = &n3;
		n3.prox = NULL;
		
		printf("Digite o nome do aluno:\n");
		scanf("%s",n1.item.nome);
		printf("Digite a idade do aluno:\n");
		scanf("%d",&n1.item.idade);
		
		
	return 0;
}

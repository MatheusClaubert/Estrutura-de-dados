#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
	int info;
	struct lista* prox;
	
}Lista;

Lista* criar_lista(){ /*Função de criar a lista vazia */

	return NULL;
}

Lista* inserir_lista(Lista* l,int i){ // função que insere apenas no inicio da lista.
	
	   Lista*novo = (Lista*)malloc(sizeof(Lista));
	   novo->info = i;
	   novo->prox = l;
	   return novo;	
	
}

void imprimir_lista(Lista* l){ // Função pra percorrer e mostrar a lista.
	
	Lista* p;
	
	for(p = l; p!= NULL; p = p->prox){
		printf("%d\n",p->info);
	}
}

int vazia(Lista* l){           //Função que verifica se a lista esta vazia.
	if (l == NULL)
	return 1;
	
return 0;
}

Lista* buscar_elemento(Lista* l, int v){ //Função utilizada pra percorrer e verificar se existe um determniado elemento
	
	Lista *p;
	
	for(p = l; p != NULL; p = p->prox){
		if(p->info == v)
			return p;
	}
	return NULL;
}
Lista* remover_elemento(Lista* l, int v){
	
	Lista* ant = NULL; // Ponteiro pro elemento anterior
	Lista* p = l; // ponteiro pra percorrer a lista 
	
	while(p != NULL && p->info != v)
	{
		   ant = p;
		   p = p->prox;	
	}
	if(p==NULL)
		return l;
	
	if(ant == NULL){
		//remove do inicio da lista
		l = p->prox;
	}
	else
	{
		//remove do meio da lista
		ant->prox = p->prox;
	}
	free(p);
	return l;
}

int main(int argc, char** argv)
{
	Lista* lista;             //ponteiro pra lista
	lista = criar_lista();    // chamada da função criar_lista, dentro de uma variável lista// Obs: criar_lista aponta pra NULL.
	
	if(vazia(lista))            //Verificação da lista se está de fato vazia
		printf("Lista Vazia!!\n");
	else
		printf("Lista nao vazia");
	
	lista = inserir_lista(lista,14); //Passando valores pra serem inseridos na lista
	lista = inserir_lista(lista,13); //.............................................
	lista = inserir_lista(lista,12); //.............................................
	lista = inserir_lista(lista,11); //.............................................
	
	
	imprimir_lista(lista); //Chamada da função imprimir para mostrar os valores inseridos pela inserir_lista
	
		
	if(vazia(lista))            //Verificação da lista se está de fato vazia
		printf("Lista Vazia!!\n");
	else
		printf("Lista nao vazia");
	
	
	int elemento = 5; //Declaração de uma variavel elemento para buscar um valor na lista
	
	if(buscar_elemento(lista,elemento) == NULL) //Verificando se o elemento esta ou não na lista
		printf("\nElemento %d nao encontrado\n",elemento);
	else
	{
		printf("nElemento %d encontrado\n",elemento);
	}
	lista = remover_elemento(lista,13);
		
	imprimir_lista(lista); 
	
	
	return 0;
}
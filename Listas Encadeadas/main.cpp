#include <stdio.h>
#include "Lista1.h"
int main(int argc, char** argv)
{
	Lista* lista;
	lista = criar_lista();
	
	lista = inserir_lista(lista,10);
	lista = inserir_lista(lista,20);
	
	return 0;
}	
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int num = 50 ;
	int *a = &num;
	printf("O valor que esta em 'a' eh %d\n", *a);
	free(a);


	printf("\n\nO valor do endreco de a eh %d\n",a);
	printf("\n\nO valor do endreco de a eh %d\n",&num);
	
	return 0;
}

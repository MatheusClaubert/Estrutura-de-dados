#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca(int &x, int &y){
	x = 9;
	y = 12;
	
}
int main(int argc, char** argv)
{
	int a = 1;
	int b = 4;
	
	troca(a,b);
	
	printf("A = %d\nB = %d\n\n",a,b);
	
	system("pause");
	return 0;
}
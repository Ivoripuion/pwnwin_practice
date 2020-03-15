#include<stdio.h>
#include<stdlib.h>
int main()
{
	char * heap=(char *)malloc(100); 
	char stack[100];
	printf("Address of heap:%#0.4x\nAddress of stack:%#0.4x",heap, stack); 
	getchar();
	return 0;
}

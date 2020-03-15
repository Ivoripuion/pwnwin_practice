#include "stdio.h"

int main(int argc, char ** argv)

{

	int len_print=0;

	printf("before write: length=%d\n",len_print);

	printf("failwest:%d%n\n",len_print,&len_print);

	printf("after write: length=%d\n",len_print);
}
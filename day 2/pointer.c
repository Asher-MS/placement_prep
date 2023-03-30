#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int a=12;
	int *ptr;
	ptr=&a;
	printf("Address %p",ptr);
	printf("Value %d",*ptr);
	return 0;
}

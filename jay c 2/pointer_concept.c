#include<stdio.h>
#include<conio.h>

void main()
{
	int *p;
	int a=10;
	
	p = &a;
	
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",&a);
	
	
}

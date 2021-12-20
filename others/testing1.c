#include<stdio.h>
#include<conio.h>

void main()
{
	signed char chr=0;
	unsigned char chr1=0;
	int i;
	for(i=127; i<=400; i++)
	{
		chr = i;
		chr1 = i;
		printf("%d\t%d\n",chr,chr1);
	}
		
}

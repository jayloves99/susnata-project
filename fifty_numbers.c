#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,count=0;
	printf("Enter 50 numbers, i am using loop\n");
	
	for(i=1; i<=50; i++)
	{
		n=i;
		if(n%5==0)
		{			
			if(n%10==5)
			{
				printf("%d\n",n);
			}
			else if(n%10==0)
			{
				count++;
			}			
		}
	}
	printf("total number of zero is %d",count);
}

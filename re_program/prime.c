// prime number

#include<stdio.h>
#include<conio.h>

void main()
{
	int j, num1, num2;
	printf("Enter a starting range");
	scanf("%d",&num1);
	printf("Enter an ending range");
	scanf("%d",&num2);
	
	
	for(j=num1; j<=num2; j++)
	{
		int i, c=0, sum=0, temp=0;
		temp = j;
		
		for(i=1; i<=j/2; i++)
		{
			if(j%i == 0)
			{
				sum = sum + i;
			}
		}
		if(temp==sum)
		{
			printf("%d\n",j);
		}
	}
	
	
	
		
	
	
}

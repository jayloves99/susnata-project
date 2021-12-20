#include<stdio.h>
#include<conio.h>

void main()
{
	int n, num, i, count=0, count1 = 0, sum=0;
	printf("Enter how many numbers you want to calculate");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		printf("Enter number\n");
		scanf("%d", &num);
		
		if(num%5==0)
		{
			if(num%10==5)
			{
				printf("%d\n",num);
			}
			else if(num%10==0)
			{
				count++;
			}
		}
		
	}
	printf("total Ending number with 0 is %d\n", count);
}

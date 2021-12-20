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
		
		if(num>0)
		{
			count++;
			sum = sum + num;
		}
		else if(num<0)
		{
			count1++;
		}
	}
	printf("Total Positive numbers %d\n", count);
	printf("Total Negative numbers %d\n", count1);
	printf("Total sum of Positive numbers %d", sum);
}

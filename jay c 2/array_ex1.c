#include<stdio.h>
#include<conio.h>

void main()
{
	int i,num, n, sum=0;
	
	printf("Enter Array size");
	scanf("%d", &n);
	
	int a[n];	
	
	
	//insert
	for(i=0; i<=n-1; i++)
	{
		printf("Enter Number %d\t",i+1);
		scanf("%d", &num);
		a[i]=num;
	}
	
	printf("\n");
	
	//sum
	for(i=0; i<=n-1; i++)
	{
		printf("%d\n", a[i]);
		sum = sum + a[i];
		
	}
	printf("\n sum - %d\t", sum);
//	printf("%d", a[5]);
}

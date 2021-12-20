#include<stdio.h>
#include<conio.h>

int main()
{
	int n,num ,i, count=0;
	printf(" Enter Array size ");
	scanf("%d", &n);
	
	int a[n];
	//insert
	for(i=0; i<=n-1; i++)
	{
		printf(" Enter number %d\t",i+1);
		scanf("%d", &a[i]);
//		a[i]=num;
	}	
	
	printf("Enter a value to search\n");
	scanf("%d",&num);
	
	for(i=0; i<=n-1; i++)
	{
		if(a[i]==num)
		{
			count++;
			printf("value %d is found in position %d\n",a[i],i+1);
		}
//		else
//		{
//			printf("Value Not Found");
//		}
	}
	
	if(count==0)
	{
		printf("Value Not Found");
	}
	
	
	
//	
//	for(i=n-1; i>=0; i--)
//	{
//		printf("%d\t",a[i]);
//	}
	
}

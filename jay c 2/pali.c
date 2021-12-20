#include<stdio.h>
int main()
{
	int sum=0,n,i=0,a=0;
//	a=n;
	printf("enter a number:");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		i=n%10;
		sum=(sum*10)+i;
		n=n/10;
	}
//	printf("%d\t %d",sum,a);
	
	if(sum==a)
	{
		printf(" this is a palindrome number");
	}
	else
	{
		printf(" this is not a palindrome number");
	}
}

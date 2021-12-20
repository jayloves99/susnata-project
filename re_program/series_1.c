// prime number

#include<stdio.h>
#include<conio.h>

//1^1 / 2^2

void main()
{
	const int debu = 12; 
	double sum = 0.0;
	int i;
	debu = 19;
	for(i=1; i<=3; i++)
	{
		int j = fact(i);
		sum = sum + ((double)i/j);
	}	
	
	printf("%lf",sum);	
}

int fact(int n)
{
	int fact = 1, i;
	for(i=1;i<=n;i++)
	{
		fact = fact * i;
	}
	
	return fact;	
		
}

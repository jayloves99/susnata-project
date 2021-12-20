#include<stdio.h>
#include<conio.h>

void main()
{
	int a[7] = {7,8,2,6,1,4,10};
	int min = 0, i, j;
	//sorting
	for(i=0; i<7-1; i++)
	{
		min=i;
		for(j=i+1; j<7; j++)
		{
			if(a[j]<a[min])
			{
				min = j;
			}
			
		}		
			swap(&a[min], &a[i]);
	}
	
	for(i=0; i<7; i++)
	{
		printf("%d\t",a[i]);
	}
	
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


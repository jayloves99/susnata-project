#include<stdio.h>
#include<conio.h>

void main()
{
	int n, count=0, count1 = 0, count2 = 0,count3 = 0;
	int eng, math, sci, i;
	printf("Enter how many numbers you want to calculate");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		printf("Enter marks in English\n");
		scanf("%d", &eng);
		
		printf("Enter marks in math\n");
		scanf("%d", &math);
		
		printf("Enter marks in Science\n");
		scanf("%d", &sci);
		
		
		if(eng>=95 && math>=95 && sci>=95 )
		{
			count++;
		}
		else if(eng>=90)
		{
			count1++;
		}
		else if(math>=90)
		{
			count2++;
		}
		else if(sci>=90)
		{
			count3++;
		}
		printf("\n");		
	}
	
	printf("All students 95%% or more %d\n",count);
	printf("All students 90%% or more in eng %d\n",count1);
	printf("All students 90%% or more in math %d\n",count2);
	printf("All students 90%% or more in sci %d\n",count3);
	
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int *ptr, i, num, num1;
//    ptr = (int *)malloc(3 * sizeof(int));

	printf("enter size");
	scanf("%d",&num);

    ptr = (int *)calloc(num, sizeof(int));
    for(i=0; i<num; i++)
    {
        printf("Enter number %d\t",i+1);
        scanf("%d",&ptr[i]);
    }

    for(i=0; i<num; i++)
    {
        printf("%d\t",ptr[i]);
    }
    
    printf("enter new size");
	scanf("%d",&num);
    
    ptr = (int *)realloc(ptr, num*sizeof(int));
    for(i=0; i<num; i++)
    {
        printf("Enter number %d\t",i+1);
        scanf("%d",&ptr[i]);
    }

    for(i=0; i<num; i++)
    {
        printf("%d\t",ptr[i]);
    }
    

//    return 0;
}

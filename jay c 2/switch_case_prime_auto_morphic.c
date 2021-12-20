#include<stdio.h>
#include<conio.h>
#include<math.h>

void main() 
{

    int choice, num;
    printf("1. Prime number\n");
    printf("2. Automorphic number\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter number: ");
    scanf("%d",&num);
    switch (choice) {
        case 1:
        	primenumber(num);     
//			printf("called");       
        	break;

        case 2:
        	automorphic(num);
			break;
        default:
            printf("Incorrect Choice");
            break;
    }
}

void primenumber(int num)
{
	int i, c = 0;
    for (i = 1; i <= num; i++) {
        if (num % i == 0) 
		{
            c++;
        }
    }
    if (c == 2) 
    {
    	printf("%d is Prime number",num);
	}
    else
    {
    	printf("%d is not Prime number",num);
	}
        
}
void automorphic(int num)
{
	int numCopy = num;
    int squre = num * num;
    int d = 0;

    while(num > 0) {
        d++;
        num /= 10;
    }
    
    int ld = squre % (int)pow(10, d);
    
// double ld = pow(10, d);
    if (ld == numCopy)
    {
        printf("%d is automorphic",numCopy);    	
	}
    else
    {
    	printf("%d is not automorphic",numCopy);	
	}    
}
	

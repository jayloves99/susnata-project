#include<stdio.h>
#include<conio.h>


//Sum of its digits = 1 + 2 + 6 = 9 
//126 is divisible by 9.

void main() {
    int original, num;
    int count = 0, digitSum = 0;
    printf("Enter number: ");
    scanf("%d",&num);
    original = num;
    
    while (num != 0) {
        int rem = num % 10;
        num /= 10;
        digitSum = digitSum + rem;
    }
    
   
    if (digitSum != 0 && original % digitSum == 0)
   	{
   		printf("%d is a Niven number", original);
	} 
    else
    {
        printf("%d is not a Niven number", original);    	
	}
        
}

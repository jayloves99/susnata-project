#include<stdio.h>
#include<conio.h>

//Sum of digits = 5 + 9 = 14
//Product of digits = 5 * 9 = 45
//special number = 14 + 45 = 59


void main() {
    int original;
    int count = 0, digitSum = 0, digitProduct = 1;
    printf("Enter a 2 digit number: ");
    scanf("%d",&original);
    int num = original;    
    
    while (num != 0) {
        int rem = num % 10;
        num /= 10;
        digitSum += rem;
        digitProduct *= rem;
        count++;
    }
    
    if (count != 2)
    {
    	printf("Please enter a 2-digit number\n");
	}        
    else if ((digitSum + digitProduct) == original)
    {
    	printf("Special 2-digit number\n");
	}
    else
    {
    	printf("Not a special 2-digit number\n");        
	}
}

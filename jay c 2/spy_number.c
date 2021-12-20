#include<stdio.h>
#include<conio.h>


void main() {

        int num, rem, sum = 0;
        int product = 1;

        printf("Enter Number: ");
        scanf("%d",&num);
        int original = num;        
        
        while (num > 0) {
            rem = num % 10;
            
            sum += rem;
            product *= rem;
            num /= 10;
        }
        
        if (sum == product)
            printf("%d is Spy Number", original);
        else
            printf("%d is not Spy Number",original);
        
}

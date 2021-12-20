#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, i, gcd=0;
    printf("Enter first number: ");
    scanf("%d", &a); //45

    printf("Enter second number: ");
    scanf("%d", &b); //15
    
    for(i=1; i<=a && i<=b; i++)
	{
      if(a%i==0 && b%i==0)
      {
            gcd = i;
//            printf("%d",gcd);
      }
	}	
    
//    while (b != 0) //15 //5
//    {
//        int temp = b; //temp = 15  
//        b = a % b; // 45%15 = 0 
//        a = temp;// 15 
//    }
    printf("\nGCD= %d", gcd);
}

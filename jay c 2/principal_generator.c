#include <stdio.h>
#include <conio.h>

void main()
{
	double princ, rate, total, amount;
	printf("Enter Principal: ");
	scanf("%lf",&princ);
    printf("Enter Rate: ");
    scanf("%lf",&rate);
    printf("Enter Time: ");
    scanf("%lf",&total);
    
    amount = princ;
    int i;
    for (i = 1; i <= total; i++) {
        double interest;
		interest = (amount * rate * 1) / 100.0;
        amount += interest;
        printf("Amount after %d year = %0.2f\n", i,amount);
    }
}
        

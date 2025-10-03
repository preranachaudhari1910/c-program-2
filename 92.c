#include <stdio.h>
int main() 
{
    float amount, discount;
    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount >= 1000)
        discount = amount * 0.20;
    else if (amount >= 500)
        discount = amount * 0.10;
    else
        discount = amount * 0.05;

    printf("Discount = %.2f\nNet Payable = %.2f\n", discount, amount - discount);
    return 0;
}

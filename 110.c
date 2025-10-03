#include <stdio.h>
int main() 
{
    int age, weight;
    printf("Enter age and weight: ");
    scanf("%d %d", &age, &weight);

    if (age >= 18 && weight >= 50)
        printf("Eligible for Blood Donation\n");
    else
        printf("Not Eligible\n");

    return 0;
}

#include <stdio.h>
int main() 
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 == 0)
        printf("Century Year\n");
    else
        printf("Not a Century Year\n");

    return 0;
}

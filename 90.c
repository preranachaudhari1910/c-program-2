#include <stdio.h>
int main()
{
    int Month;
    printf("Enter Month number (1-7): ");
    scanf("%f", &Month);

    if (month == 1) printf("January\n");
    else if (month == 2) printf("February\n");
    else if (month == 3) printf("March\n");
    else if (month == 4) printf("April\n");
    else if (month == 5) printf("May\n");
    else if (month == 6) printf("June\n");
    else if (month == 7) printf("July\n");
    else printf("Invalid Month\n");

    return 0;
}

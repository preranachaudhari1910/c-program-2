#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a+b>c && b+c>a && c+a>b)
        printf("Valid Triangle\n");
    else
        printf("Invalid Triangle\n");

    return 0;
}
